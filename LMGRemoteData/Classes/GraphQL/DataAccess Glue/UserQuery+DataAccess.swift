//
//  UserQuery+DataAccess.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-12.
//

import Foundation
import LMGDataAccess
import Apollo

enum UserGender: String {
    case male = "male"
    case female = "female"
    case preferNotToSay = "pnts"
    case other = "other"
    
    init?(daGender: LMGDAUserGender) {
        switch daGender {
            case .female: self = .female
            case .male: self = .male
            case .nonBinary: self = .other
            case .preferNotSaid: self = .preferNotToSay
            case .unknown: return nil
        }
    }
    
    func daGender() -> LMGDAUserGender {
        switch self {
            case .male: return LMGDAUserGender.male
            case .female: return LMGDAUserGender.female
            case .other: return LMGDAUserGender.nonBinary
            case .preferNotToSay: return LMGDAUserGender.preferNotSaid
        }
    }
}

private let nameKey = "name"
private let emailKey = "email"
private let birthdayKey = "birthday"
private let genderKey = "gender"
private let dateFormat = "yyyy-MM-dd"

extension GetUserTraitsQuery.Data {

    func toDataAccess() throws -> LMGDAUser {
        let data = getSessionTraits.traits.data(using: .utf8)
        let formatter = DateFormatter()
        formatter.dateFormat = dateFormat
        formatter.locale = Locale(identifier:"en_US_POSIX")
        guard let json = try JSONSerialization.jsonObject(with: data!, options: .allowFragments) as? Dictionary<String, Any> else {
            return LMGDAUser.init(nil)
        }
        let propertiesWithField = [nameKey, emailKey, genderKey, birthdayKey]
        return LMGDAUser {
            $0.name = json[nameKey] as? String
            $0.email = json[emailKey] as? String
            if let rawBday = json[birthdayKey] as? String {
                $0.birthday = formatter.date(from: rawBday)
            }
            if let rawGender = json[genderKey] as? String, let gender = UserGender(rawValue: rawGender) {
                $0.gender = gender.daGender()
            }
            $0.customTraits = json.filter { !propertiesWithField.contains($0.key) }
        }
    }
}

extension LMGDAUser {

    func toJsonString() throws -> String {
        let data = try JSONSerialization.data(withJSONObject: toDictionary(), options: .prettyPrinted)
        return String(data: data, encoding: .utf8)!
    }
    
    func toDictionary() -> [String: JSONEncodable] {
        var dict = [String: JSONEncodable]()
        if let name = name {
            dict[nameKey] = name
        }
        if let email = email {
            dict[emailKey] = email
        }
        if let birthday = birthday {
            let formatter = DateFormatter()
            formatter.dateFormat = dateFormat
            formatter.locale = Locale(identifier:"en_US_POSIX")
            dict[birthdayKey] = formatter.string(from: birthday)
        }
        if let gender = UserGender(daGender: gender) {
            dict[genderKey] = gender.rawValue
        }
        if let traits = customTraits as? [String : JSONEncodable] {
            dict = dict.merging(traits) { first,second in first }
        }
        
        return dict;
    }
}
