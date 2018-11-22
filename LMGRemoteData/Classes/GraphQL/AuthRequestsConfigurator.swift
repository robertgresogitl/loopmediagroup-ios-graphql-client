//
//  AuthRequestsConfigurator.swift
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-07.
//

import Foundation
import LMGDataAccess

private struct HeaderName {
    static let name = "X-Sdk-Name"
    static let version = "X-Sdk-Version"
    static let apiVersion = "X-Api-Version"
    static let key = "X-Integration-Write-Key"
    static let token = "X-Session-Token"
    static let language = "X-Client-Locale"
    static let timezone = "X-Client-Timezone"
    static let geoPoint = "X-Device-GeoPoint"
    static let geoPointAccuracy = "X-Device-GeoPoint-Accuracy"
    static let geoPointAge = "X-Device-GeoPoint-Age"
}

private let sdkName = "objc-ios"
private let sdkVersion = "1.0.0"
private let apiVersion = "1.0.0"

public class AuthRequestsConfigurator: HTTPRequestConfigurator {

    var session: LMGDASession?
    var deviceCoordinate: LMGDACoordinate?
    
    public func configure(request: inout URLRequest) throws {
        guard let session = self.session else {
            throw NSError.sessionNotInitialized()
        }
        
        guard let key = session.integrationKey else {
            throw NSError.invalidSessionKey()
        }
        
        if let token = session.accessToken {
            request.addValue(token, forHTTPHeaderField: HeaderName.token)
        }
        
        if let geoPoint = deviceCoordinate {
            let coordinateData = try JSONSerialization.data(withJSONObject: geoPoint.toRemoteData(), options: .prettyPrinted)
            guard let coordinateStr = String(data: coordinateData, encoding: String.Encoding.utf8) else {
                throw NSError.argsSerializationFailure()
            }
            request.addValue(coordinateStr, forHTTPHeaderField: HeaderName.geoPoint)
            request.addValue(String(geoPoint.accuracy), forHTTPHeaderField: HeaderName.geoPointAccuracy)
            let age: Int = Int(Date().timeIntervalSince(geoPoint.createdAt))
            request.addValue(String(abs(age)), forHTTPHeaderField: HeaderName.geoPointAge)
        }
        
        request.addValue(sdkName, forHTTPHeaderField: HeaderName.name)
        request.addValue(sdkVersion, forHTTPHeaderField: HeaderName.version)
        request.addValue(apiVersion, forHTTPHeaderField: HeaderName.apiVersion)
        request.addValue(Locale.current.languageCode!, forHTTPHeaderField: HeaderName.language)
        request.addValue(key, forHTTPHeaderField: HeaderName.key)
        request.addValue(TimeZone.current.identifier, forHTTPHeaderField: HeaderName.timezone)
    }
}
