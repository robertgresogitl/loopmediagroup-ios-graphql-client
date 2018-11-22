//  This file was automatically generated and should not be edited.

import Apollo

public final class CreateSessionMutation: GraphQLMutation {
  public let operationDefinition =
    "mutation CreateSession {\n  createSession {\n    __typename\n    ...SessionFragment\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(SessionFragment.fragmentDefinition) }

  public init() {
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Mutation"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("createSession", type: .nonNull(.object(CreateSession.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(createSession: CreateSession) {
      self.init(unsafeResultMap: ["__typename": "Mutation", "createSession": createSession.resultMap])
    }

    public var createSession: CreateSession {
      get {
        return CreateSession(unsafeResultMap: resultMap["createSession"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "createSession")
      }
    }

    public struct CreateSession: GraphQLSelectionSet {
      public static let possibleTypes = ["Session"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLFragmentSpread(SessionFragment.self),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      public var fragments: Fragments {
        get {
          return Fragments(unsafeResultMap: resultMap)
        }
        set {
          resultMap += newValue.resultMap
        }
      }

      public struct Fragments {
        public private(set) var resultMap: ResultMap

        public init(unsafeResultMap: ResultMap) {
          self.resultMap = unsafeResultMap
        }

        public var sessionFragment: SessionFragment {
          get {
            return SessionFragment(unsafeResultMap: resultMap)
          }
          set {
            resultMap += newValue.resultMap
          }
        }
      }
    }
  }
}

public final class ExtendSessionMutation: GraphQLMutation {
  public let operationDefinition =
    "mutation ExtendSession {\n  extendSession {\n    __typename\n    ...SessionFragment\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(SessionFragment.fragmentDefinition) }

  public init() {
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Mutation"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("extendSession", type: .nonNull(.object(ExtendSession.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(extendSession: ExtendSession) {
      self.init(unsafeResultMap: ["__typename": "Mutation", "extendSession": extendSession.resultMap])
    }

    public var extendSession: ExtendSession {
      get {
        return ExtendSession(unsafeResultMap: resultMap["extendSession"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "extendSession")
      }
    }

    public struct ExtendSession: GraphQLSelectionSet {
      public static let possibleTypes = ["Session"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLFragmentSpread(SessionFragment.self),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      public var fragments: Fragments {
        get {
          return Fragments(unsafeResultMap: resultMap)
        }
        set {
          resultMap += newValue.resultMap
        }
      }

      public struct Fragments {
        public private(set) var resultMap: ResultMap

        public init(unsafeResultMap: ResultMap) {
          self.resultMap = unsafeResultMap
        }

        public var sessionFragment: SessionFragment {
          get {
            return SessionFragment(unsafeResultMap: resultMap)
          }
          set {
            resultMap += newValue.resultMap
          }
        }
      }
    }
  }
}

public final class IdentifySessionMutation: GraphQLMutation {
  public let operationDefinition =
    "mutation IdentifySession($userId: String!, $hmac: String) {\n  identifySession(externalId: $userId, externalIdSignature: $hmac) {\n    __typename\n    ...SessionFragment\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(SessionFragment.fragmentDefinition) }

  public var userId: String
  public var hmac: String?

  public init(userId: String, hmac: String? = nil) {
    self.userId = userId
    self.hmac = hmac
  }

  public var variables: GraphQLMap? {
    return ["userId": userId, "hmac": hmac]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Mutation"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("identifySession", arguments: ["externalId": GraphQLVariable("userId"), "externalIdSignature": GraphQLVariable("hmac")], type: .nonNull(.object(IdentifySession.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(identifySession: IdentifySession) {
      self.init(unsafeResultMap: ["__typename": "Mutation", "identifySession": identifySession.resultMap])
    }

    public var identifySession: IdentifySession {
      get {
        return IdentifySession(unsafeResultMap: resultMap["identifySession"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "identifySession")
      }
    }

    public struct IdentifySession: GraphQLSelectionSet {
      public static let possibleTypes = ["Session"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLFragmentSpread(SessionFragment.self),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      public var fragments: Fragments {
        get {
          return Fragments(unsafeResultMap: resultMap)
        }
        set {
          resultMap += newValue.resultMap
        }
      }

      public struct Fragments {
        public private(set) var resultMap: ResultMap

        public init(unsafeResultMap: ResultMap) {
          self.resultMap = unsafeResultMap
        }

        public var sessionFragment: SessionFragment {
          get {
            return SessionFragment(unsafeResultMap: resultMap)
          }
          set {
            resultMap += newValue.resultMap
          }
        }
      }
    }
  }
}

public final class UpdateUserTraitsMutation: GraphQLMutation {
  public let operationDefinition =
    "mutation UpdateUserTraits($traits: String!) {\n  updateSessionTraits(traits: $traits) {\n    __typename\n    traits\n    warnings\n  }\n}"

  public var traits: String

  public init(traits: String) {
    self.traits = traits
  }

  public var variables: GraphQLMap? {
    return ["traits": traits]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Mutation"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("updateSessionTraits", arguments: ["traits": GraphQLVariable("traits")], type: .nonNull(.object(UpdateSessionTrait.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(updateSessionTraits: UpdateSessionTrait) {
      self.init(unsafeResultMap: ["__typename": "Mutation", "updateSessionTraits": updateSessionTraits.resultMap])
    }

    public var updateSessionTraits: UpdateSessionTrait {
      get {
        return UpdateSessionTrait(unsafeResultMap: resultMap["updateSessionTraits"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "updateSessionTraits")
      }
    }

    public struct UpdateSessionTrait: GraphQLSelectionSet {
      public static let possibleTypes = ["SessionTraits"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("traits", type: .nonNull(.scalar(String.self))),
        GraphQLField("warnings", type: .nonNull(.list(.nonNull(.scalar(String.self))))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(traits: String, warnings: [String]) {
        self.init(unsafeResultMap: ["__typename": "SessionTraits", "traits": traits, "warnings": warnings])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      public var traits: String {
        get {
          return resultMap["traits"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "traits")
        }
      }

      public var warnings: [String] {
        get {
          return resultMap["warnings"]! as! [String]
        }
        set {
          resultMap.updateValue(newValue, forKey: "warnings")
        }
      }
    }
  }
}

public final class GetUserTraitsQuery: GraphQLQuery {
  public let operationDefinition =
    "query GetUserTraits {\n  getSessionTraits {\n    __typename\n    traits\n  }\n}"

  public init() {
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Query"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("getSessionTraits", type: .nonNull(.object(GetSessionTrait.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(getSessionTraits: GetSessionTrait) {
      self.init(unsafeResultMap: ["__typename": "Query", "getSessionTraits": getSessionTraits.resultMap])
    }

    public var getSessionTraits: GetSessionTrait {
      get {
        return GetSessionTrait(unsafeResultMap: resultMap["getSessionTraits"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "getSessionTraits")
      }
    }

    public struct GetSessionTrait: GraphQLSelectionSet {
      public static let possibleTypes = ["SessionTraits"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("traits", type: .nonNull(.scalar(String.self))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(traits: String) {
        self.init(unsafeResultMap: ["__typename": "SessionTraits", "traits": traits])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      public var traits: String {
        get {
          return resultMap["traits"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "traits")
        }
      }
    }
  }
}

public struct SessionFragment: GraphQLFragment {
  public static let fragmentDefinition =
    "fragment SessionFragment on Session {\n  __typename\n  token\n  content {\n    __typename\n    sessionId\n    integrationId\n    propertyId\n    updated\n    created\n  }\n  meta {\n    __typename\n    stats {\n      __typename\n      ingestionUrl\n    }\n  }\n}"

  public static let possibleTypes = ["Session"]

  public static let selections: [GraphQLSelection] = [
    GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
    GraphQLField("token", type: .nonNull(.scalar(String.self))),
    GraphQLField("content", type: .nonNull(.object(Content.selections))),
    GraphQLField("meta", type: .nonNull(.object(Metum.selections))),
  ]

  public private(set) var resultMap: ResultMap

  public init(unsafeResultMap: ResultMap) {
    self.resultMap = unsafeResultMap
  }

  public init(token: String, content: Content, meta: Metum) {
    self.init(unsafeResultMap: ["__typename": "Session", "token": token, "content": content.resultMap, "meta": meta.resultMap])
  }

  public var __typename: String {
    get {
      return resultMap["__typename"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "__typename")
    }
  }

  public var token: String {
    get {
      return resultMap["token"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "token")
    }
  }

  public var content: Content {
    get {
      return Content(unsafeResultMap: resultMap["content"]! as! ResultMap)
    }
    set {
      resultMap.updateValue(newValue.resultMap, forKey: "content")
    }
  }

  public var meta: Metum {
    get {
      return Metum(unsafeResultMap: resultMap["meta"]! as! ResultMap)
    }
    set {
      resultMap.updateValue(newValue.resultMap, forKey: "meta")
    }
  }

  public struct Content: GraphQLSelectionSet {
    public static let possibleTypes = ["SessionContent"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("sessionId", type: .nonNull(.scalar(String.self))),
      GraphQLField("integrationId", type: .nonNull(.scalar(String.self))),
      GraphQLField("propertyId", type: .nonNull(.scalar(String.self))),
      GraphQLField("updated", type: .nonNull(.scalar(String.self))),
      GraphQLField("created", type: .nonNull(.scalar(String.self))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(sessionId: String, integrationId: String, propertyId: String, updated: String, created: String) {
      self.init(unsafeResultMap: ["__typename": "SessionContent", "sessionId": sessionId, "integrationId": integrationId, "propertyId": propertyId, "updated": updated, "created": created])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var sessionId: String {
      get {
        return resultMap["sessionId"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "sessionId")
      }
    }

    public var integrationId: String {
      get {
        return resultMap["integrationId"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "integrationId")
      }
    }

    public var propertyId: String {
      get {
        return resultMap["propertyId"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "propertyId")
      }
    }

    public var updated: String {
      get {
        return resultMap["updated"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "updated")
      }
    }

    public var created: String {
      get {
        return resultMap["created"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "created")
      }
    }
  }

  public struct Metum: GraphQLSelectionSet {
    public static let possibleTypes = ["Meta"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("stats", type: .nonNull(.object(Stat.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(stats: Stat) {
      self.init(unsafeResultMap: ["__typename": "Meta", "stats": stats.resultMap])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var stats: Stat {
      get {
        return Stat(unsafeResultMap: resultMap["stats"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "stats")
      }
    }

    public struct Stat: GraphQLSelectionSet {
      public static let possibleTypes = ["Stats"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("ingestionUrl", type: .nonNull(.scalar(String.self))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(ingestionUrl: String) {
        self.init(unsafeResultMap: ["__typename": "Stats", "ingestionUrl": ingestionUrl])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      public var ingestionUrl: String {
        get {
          return resultMap["ingestionUrl"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "ingestionUrl")
        }
      }
    }
  }
}