//  This file was automatically generated and should not be edited.

import Apollo

public final class OfferDetailsQuery: GraphQLQuery {
  public let operationDefinition =
    "query OfferDetails($id: ID!, $orderPoint: [Float!], $originPoint: [Float!]) {\n  offer(offerId: $id) {\n    __typename\n    ...OfferDetails\n    locations(orderingGeoPoint: $orderPoint, originGeoPoint: $originPoint) {\n      __typename\n      ...OfferLocationItem\n    }\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(OfferDetails.fragmentDefinition).appending(BusinessListItem.fragmentDefinition).appending(CategoryItem.fragmentDefinition).appending(OfferLocationItem.fragmentDefinition) }

  public var id: GraphQLID
  public var orderPoint: [Double]?
  public var originPoint: [Double]?

  public init(id: GraphQLID, orderPoint: [Double]?, originPoint: [Double]?) {
    self.id = id
    self.orderPoint = orderPoint
    self.originPoint = originPoint
  }

  public var variables: GraphQLMap? {
    return ["id": id, "orderPoint": orderPoint, "originPoint": originPoint]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Query"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("offer", arguments: ["offerId": GraphQLVariable("id")], type: .nonNull(.object(Offer.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(offer: Offer) {
      self.init(unsafeResultMap: ["__typename": "Query", "offer": offer.resultMap])
    }

    public var offer: Offer {
      get {
        return Offer(unsafeResultMap: resultMap["offer"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "offer")
      }
    }

    public struct Offer: GraphQLSelectionSet {
      public static let possibleTypes = ["Offer"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLFragmentSpread(OfferDetails.self),
        GraphQLField("locations", arguments: ["orderingGeoPoint": GraphQLVariable("orderPoint"), "originGeoPoint": GraphQLVariable("originPoint")], type: .nonNull(.list(.nonNull(.object(Location.selections))))),
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

      public var locations: [Location] {
        get {
          return (resultMap["locations"] as! [ResultMap]).map { (value: ResultMap) -> Location in Location(unsafeResultMap: value) }
        }
        set {
          resultMap.updateValue(newValue.map { (value: Location) -> ResultMap in value.resultMap }, forKey: "locations")
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

        public var offerDetails: OfferDetails {
          get {
            return OfferDetails(unsafeResultMap: resultMap)
          }
          set {
            resultMap += newValue.resultMap
          }
        }
      }

      public struct Location: GraphQLSelectionSet {
        public static let possibleTypes = ["Location"]

        public static let selections: [GraphQLSelection] = [
          GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
          GraphQLFragmentSpread(OfferLocationItem.self),
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

          public var offerLocationItem: OfferLocationItem {
            get {
              return OfferLocationItem(unsafeResultMap: resultMap)
            }
            set {
              resultMap += newValue.resultMap
            }
          }
        }
      }
    }
  }
}

public final class BusinessDetailsQuery: GraphQLQuery {
  public let operationDefinition =
    "query BusinessDetails($id: ID!, $orderPoint: [Float!], $originPoint: [Float!]) {\n  business(businessId: $id) {\n    __typename\n    ...BusinessDetails\n    locations(orderingGeoPoint: $orderPoint, originGeoPoint: $originPoint) {\n      __typename\n      ...LocationItem\n    }\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(BusinessDetails.fragmentDefinition).appending(OfferListItem.fragmentDefinition).appending(CategoryItem.fragmentDefinition).appending(LocationItem.fragmentDefinition) }

  public var id: GraphQLID
  public var orderPoint: [Double]?
  public var originPoint: [Double]?

  public init(id: GraphQLID, orderPoint: [Double]?, originPoint: [Double]?) {
    self.id = id
    self.orderPoint = orderPoint
    self.originPoint = originPoint
  }

  public var variables: GraphQLMap? {
    return ["id": id, "orderPoint": orderPoint, "originPoint": originPoint]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Query"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("business", arguments: ["businessId": GraphQLVariable("id")], type: .nonNull(.object(Business.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(business: Business) {
      self.init(unsafeResultMap: ["__typename": "Query", "business": business.resultMap])
    }

    public var business: Business {
      get {
        return Business(unsafeResultMap: resultMap["business"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "business")
      }
    }

    public struct Business: GraphQLSelectionSet {
      public static let possibleTypes = ["Business"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLFragmentSpread(BusinessDetails.self),
        GraphQLField("locations", arguments: ["orderingGeoPoint": GraphQLVariable("orderPoint"), "originGeoPoint": GraphQLVariable("originPoint")], type: .nonNull(.list(.nonNull(.object(Location.selections))))),
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

      public var locations: [Location] {
        get {
          return (resultMap["locations"] as! [ResultMap]).map { (value: ResultMap) -> Location in Location(unsafeResultMap: value) }
        }
        set {
          resultMap.updateValue(newValue.map { (value: Location) -> ResultMap in value.resultMap }, forKey: "locations")
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

        public var businessDetails: BusinessDetails {
          get {
            return BusinessDetails(unsafeResultMap: resultMap)
          }
          set {
            resultMap += newValue.resultMap
          }
        }
      }

      public struct Location: GraphQLSelectionSet {
        public static let possibleTypes = ["Location"]

        public static let selections: [GraphQLSelection] = [
          GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
          GraphQLFragmentSpread(LocationItem.self),
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

          public var locationItem: LocationItem {
            get {
              return LocationItem(unsafeResultMap: resultMap)
            }
            set {
              resultMap += newValue.resultMap
            }
          }
        }
      }
    }
  }
}

public final class BusinessesListQuery: GraphQLQuery {
  public let operationDefinition =
    "query BusinessesList($cursor: String, $q: String, $bookmarked: Boolean, $geoArea: [[Float!]!], $orderPoint: [Float!], $originPoint: [Float!]) {\n  businessFeed(cursor: $cursor, q: $q, bookmarkedOffersOnly: $bookmarked, contextGeoArea: $geoArea, orderingGeoPoint: $orderPoint, originGeoPoint: $originPoint) {\n    __typename\n    cursor {\n      __typename\n      next\n    }\n    businesses {\n      __typename\n      ...BusinessListItem\n      locations {\n        __typename\n        ...LocationItem\n      }\n      offers {\n        __typename\n        ...OfferListItem\n      }\n    }\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(BusinessListItem.fragmentDefinition).appending(CategoryItem.fragmentDefinition).appending(LocationItem.fragmentDefinition).appending(OfferListItem.fragmentDefinition) }

  public var cursor: String?
  public var q: String?
  public var bookmarked: Bool?
  public var geoArea: [[Double]]?
  public var orderPoint: [Double]?
  public var originPoint: [Double]?

  public init(cursor: String? = nil, q: String? = nil, bookmarked: Bool? = nil, geoArea: [[Double]]?, orderPoint: [Double]?, originPoint: [Double]?) {
    self.cursor = cursor
    self.q = q
    self.bookmarked = bookmarked
    self.geoArea = geoArea
    self.orderPoint = orderPoint
    self.originPoint = originPoint
  }

  public var variables: GraphQLMap? {
    return ["cursor": cursor, "q": q, "bookmarked": bookmarked, "geoArea": geoArea, "orderPoint": orderPoint, "originPoint": originPoint]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Query"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("businessFeed", arguments: ["cursor": GraphQLVariable("cursor"), "q": GraphQLVariable("q"), "bookmarkedOffersOnly": GraphQLVariable("bookmarked"), "contextGeoArea": GraphQLVariable("geoArea"), "orderingGeoPoint": GraphQLVariable("orderPoint"), "originGeoPoint": GraphQLVariable("originPoint")], type: .nonNull(.object(BusinessFeed.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(businessFeed: BusinessFeed) {
      self.init(unsafeResultMap: ["__typename": "Query", "businessFeed": businessFeed.resultMap])
    }

    public var businessFeed: BusinessFeed {
      get {
        return BusinessFeed(unsafeResultMap: resultMap["businessFeed"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "businessFeed")
      }
    }

    public struct BusinessFeed: GraphQLSelectionSet {
      public static let possibleTypes = ["BusinessFeed"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("cursor", type: .nonNull(.object(Cursor.selections))),
        GraphQLField("businesses", type: .nonNull(.list(.nonNull(.object(Business.selections))))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(cursor: Cursor, businesses: [Business]) {
        self.init(unsafeResultMap: ["__typename": "BusinessFeed", "cursor": cursor.resultMap, "businesses": businesses.map { (value: Business) -> ResultMap in value.resultMap }])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      public var cursor: Cursor {
        get {
          return Cursor(unsafeResultMap: resultMap["cursor"]! as! ResultMap)
        }
        set {
          resultMap.updateValue(newValue.resultMap, forKey: "cursor")
        }
      }

      public var businesses: [Business] {
        get {
          return (resultMap["businesses"] as! [ResultMap]).map { (value: ResultMap) -> Business in Business(unsafeResultMap: value) }
        }
        set {
          resultMap.updateValue(newValue.map { (value: Business) -> ResultMap in value.resultMap }, forKey: "businesses")
        }
      }

      public struct Cursor: GraphQLSelectionSet {
        public static let possibleTypes = ["Cursor"]

        public static let selections: [GraphQLSelection] = [
          GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
          GraphQLField("next", type: .scalar(String.self)),
        ]

        public private(set) var resultMap: ResultMap

        public init(unsafeResultMap: ResultMap) {
          self.resultMap = unsafeResultMap
        }

        public init(next: String? = nil) {
          self.init(unsafeResultMap: ["__typename": "Cursor", "next": next])
        }

        public var __typename: String {
          get {
            return resultMap["__typename"]! as! String
          }
          set {
            resultMap.updateValue(newValue, forKey: "__typename")
          }
        }

        /// Cursor representing next page
        public var next: String? {
          get {
            return resultMap["next"] as? String
          }
          set {
            resultMap.updateValue(newValue, forKey: "next")
          }
        }
      }

      public struct Business: GraphQLSelectionSet {
        public static let possibleTypes = ["Business"]

        public static let selections: [GraphQLSelection] = [
          GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
          GraphQLFragmentSpread(BusinessListItem.self),
          GraphQLField("locations", type: .nonNull(.list(.nonNull(.object(Location.selections))))),
          GraphQLField("offers", type: .nonNull(.list(.nonNull(.object(Offer.selections))))),
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

        public var locations: [Location] {
          get {
            return (resultMap["locations"] as! [ResultMap]).map { (value: ResultMap) -> Location in Location(unsafeResultMap: value) }
          }
          set {
            resultMap.updateValue(newValue.map { (value: Location) -> ResultMap in value.resultMap }, forKey: "locations")
          }
        }

        public var offers: [Offer] {
          get {
            return (resultMap["offers"] as! [ResultMap]).map { (value: ResultMap) -> Offer in Offer(unsafeResultMap: value) }
          }
          set {
            resultMap.updateValue(newValue.map { (value: Offer) -> ResultMap in value.resultMap }, forKey: "offers")
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

          public var businessListItem: BusinessListItem {
            get {
              return BusinessListItem(unsafeResultMap: resultMap)
            }
            set {
              resultMap += newValue.resultMap
            }
          }
        }

        public struct Location: GraphQLSelectionSet {
          public static let possibleTypes = ["Location"]

          public static let selections: [GraphQLSelection] = [
            GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
            GraphQLFragmentSpread(LocationItem.self),
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

            public var locationItem: LocationItem {
              get {
                return LocationItem(unsafeResultMap: resultMap)
              }
              set {
                resultMap += newValue.resultMap
              }
            }
          }
        }

        public struct Offer: GraphQLSelectionSet {
          public static let possibleTypes = ["Offer"]

          public static let selections: [GraphQLSelection] = [
            GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
            GraphQLFragmentSpread(OfferListItem.self),
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

            public var offerListItem: OfferListItem {
              get {
                return OfferListItem(unsafeResultMap: resultMap)
              }
              set {
                resultMap += newValue.resultMap
              }
            }
          }
        }
      }
    }
  }
}

public final class CollectionBusinessesListQuery: GraphQLQuery {
  public let operationDefinition =
    "query CollectionBusinessesList($id: ID!, $cursor: String, $geoArea: [[Float!]!], $orderPoint: [Float!], $originPoint: [Float!], $limit: Int) {\n  collection(collectionId: $id) {\n    __typename\n    businessFeed(cursor: $cursor, contextGeoArea: $geoArea, orderingGeoPoint: $orderPoint, originGeoPoint: $originPoint, limit: $limit) {\n      __typename\n      cursor {\n        __typename\n        next\n      }\n      businesses {\n        __typename\n        ...BusinessListItem\n        locations {\n          __typename\n          ...LocationItem\n        }\n        offers {\n          __typename\n          ...OfferListItem\n        }\n      }\n    }\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(BusinessListItem.fragmentDefinition).appending(CategoryItem.fragmentDefinition).appending(LocationItem.fragmentDefinition).appending(OfferListItem.fragmentDefinition) }

  public var id: GraphQLID
  public var cursor: String?
  public var geoArea: [[Double]]?
  public var orderPoint: [Double]?
  public var originPoint: [Double]?
  public var limit: Int?

  public init(id: GraphQLID, cursor: String? = nil, geoArea: [[Double]]?, orderPoint: [Double]?, originPoint: [Double]?, limit: Int? = nil) {
    self.id = id
    self.cursor = cursor
    self.geoArea = geoArea
    self.orderPoint = orderPoint
    self.originPoint = originPoint
    self.limit = limit
  }

  public var variables: GraphQLMap? {
    return ["id": id, "cursor": cursor, "geoArea": geoArea, "orderPoint": orderPoint, "originPoint": originPoint, "limit": limit]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Query"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("collection", arguments: ["collectionId": GraphQLVariable("id")], type: .nonNull(.object(Collection.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(collection: Collection) {
      self.init(unsafeResultMap: ["__typename": "Query", "collection": collection.resultMap])
    }

    public var collection: Collection {
      get {
        return Collection(unsafeResultMap: resultMap["collection"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "collection")
      }
    }

    public struct Collection: GraphQLSelectionSet {
      public static let possibleTypes = ["Collection"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("businessFeed", arguments: ["cursor": GraphQLVariable("cursor"), "contextGeoArea": GraphQLVariable("geoArea"), "orderingGeoPoint": GraphQLVariable("orderPoint"), "originGeoPoint": GraphQLVariable("originPoint"), "limit": GraphQLVariable("limit")], type: .nonNull(.object(BusinessFeed.selections))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(businessFeed: BusinessFeed) {
        self.init(unsafeResultMap: ["__typename": "Collection", "businessFeed": businessFeed.resultMap])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      public var businessFeed: BusinessFeed {
        get {
          return BusinessFeed(unsafeResultMap: resultMap["businessFeed"]! as! ResultMap)
        }
        set {
          resultMap.updateValue(newValue.resultMap, forKey: "businessFeed")
        }
      }

      public struct BusinessFeed: GraphQLSelectionSet {
        public static let possibleTypes = ["BusinessFeed"]

        public static let selections: [GraphQLSelection] = [
          GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
          GraphQLField("cursor", type: .nonNull(.object(Cursor.selections))),
          GraphQLField("businesses", type: .nonNull(.list(.nonNull(.object(Business.selections))))),
        ]

        public private(set) var resultMap: ResultMap

        public init(unsafeResultMap: ResultMap) {
          self.resultMap = unsafeResultMap
        }

        public init(cursor: Cursor, businesses: [Business]) {
          self.init(unsafeResultMap: ["__typename": "BusinessFeed", "cursor": cursor.resultMap, "businesses": businesses.map { (value: Business) -> ResultMap in value.resultMap }])
        }

        public var __typename: String {
          get {
            return resultMap["__typename"]! as! String
          }
          set {
            resultMap.updateValue(newValue, forKey: "__typename")
          }
        }

        public var cursor: Cursor {
          get {
            return Cursor(unsafeResultMap: resultMap["cursor"]! as! ResultMap)
          }
          set {
            resultMap.updateValue(newValue.resultMap, forKey: "cursor")
          }
        }

        public var businesses: [Business] {
          get {
            return (resultMap["businesses"] as! [ResultMap]).map { (value: ResultMap) -> Business in Business(unsafeResultMap: value) }
          }
          set {
            resultMap.updateValue(newValue.map { (value: Business) -> ResultMap in value.resultMap }, forKey: "businesses")
          }
        }

        public struct Cursor: GraphQLSelectionSet {
          public static let possibleTypes = ["Cursor"]

          public static let selections: [GraphQLSelection] = [
            GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
            GraphQLField("next", type: .scalar(String.self)),
          ]

          public private(set) var resultMap: ResultMap

          public init(unsafeResultMap: ResultMap) {
            self.resultMap = unsafeResultMap
          }

          public init(next: String? = nil) {
            self.init(unsafeResultMap: ["__typename": "Cursor", "next": next])
          }

          public var __typename: String {
            get {
              return resultMap["__typename"]! as! String
            }
            set {
              resultMap.updateValue(newValue, forKey: "__typename")
            }
          }

          /// Cursor representing next page
          public var next: String? {
            get {
              return resultMap["next"] as? String
            }
            set {
              resultMap.updateValue(newValue, forKey: "next")
            }
          }
        }

        public struct Business: GraphQLSelectionSet {
          public static let possibleTypes = ["Business"]

          public static let selections: [GraphQLSelection] = [
            GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
            GraphQLFragmentSpread(BusinessListItem.self),
            GraphQLField("locations", type: .nonNull(.list(.nonNull(.object(Location.selections))))),
            GraphQLField("offers", type: .nonNull(.list(.nonNull(.object(Offer.selections))))),
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

          public var locations: [Location] {
            get {
              return (resultMap["locations"] as! [ResultMap]).map { (value: ResultMap) -> Location in Location(unsafeResultMap: value) }
            }
            set {
              resultMap.updateValue(newValue.map { (value: Location) -> ResultMap in value.resultMap }, forKey: "locations")
            }
          }

          public var offers: [Offer] {
            get {
              return (resultMap["offers"] as! [ResultMap]).map { (value: ResultMap) -> Offer in Offer(unsafeResultMap: value) }
            }
            set {
              resultMap.updateValue(newValue.map { (value: Offer) -> ResultMap in value.resultMap }, forKey: "offers")
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

            public var businessListItem: BusinessListItem {
              get {
                return BusinessListItem(unsafeResultMap: resultMap)
              }
              set {
                resultMap += newValue.resultMap
              }
            }
          }

          public struct Location: GraphQLSelectionSet {
            public static let possibleTypes = ["Location"]

            public static let selections: [GraphQLSelection] = [
              GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
              GraphQLFragmentSpread(LocationItem.self),
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

              public var locationItem: LocationItem {
                get {
                  return LocationItem(unsafeResultMap: resultMap)
                }
                set {
                  resultMap += newValue.resultMap
                }
              }
            }
          }

          public struct Offer: GraphQLSelectionSet {
            public static let possibleTypes = ["Offer"]

            public static let selections: [GraphQLSelection] = [
              GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
              GraphQLFragmentSpread(OfferListItem.self),
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

              public var offerListItem: OfferListItem {
                get {
                  return OfferListItem(unsafeResultMap: resultMap)
                }
                set {
                  resultMap += newValue.resultMap
                }
              }
            }
          }
        }
      }
    }
  }
}

public final class BookmarkOfferMutation: GraphQLMutation {
  public let operationDefinition =
    "mutation BookmarkOffer($offerId: String!) {\n  createOfferBookmark(offerId: $offerId)\n}"

  public var offerId: String

  public init(offerId: String) {
    self.offerId = offerId
  }

  public var variables: GraphQLMap? {
    return ["offerId": offerId]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Mutation"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("createOfferBookmark", arguments: ["offerId": GraphQLVariable("offerId")], type: .nonNull(.scalar(Bool.self))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(createOfferBookmark: Bool) {
      self.init(unsafeResultMap: ["__typename": "Mutation", "createOfferBookmark": createOfferBookmark])
    }

    public var createOfferBookmark: Bool {
      get {
        return resultMap["createOfferBookmark"]! as! Bool
      }
      set {
        resultMap.updateValue(newValue, forKey: "createOfferBookmark")
      }
    }
  }
}

public final class UnbookmarkOfferMutation: GraphQLMutation {
  public let operationDefinition =
    "mutation UnbookmarkOffer($offerId: String!) {\n  deleteOfferBookmark(offerId: $offerId)\n}"

  public var offerId: String

  public init(offerId: String) {
    self.offerId = offerId
  }

  public var variables: GraphQLMap? {
    return ["offerId": offerId]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Mutation"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("deleteOfferBookmark", arguments: ["offerId": GraphQLVariable("offerId")], type: .nonNull(.scalar(Bool.self))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(deleteOfferBookmark: Bool) {
      self.init(unsafeResultMap: ["__typename": "Mutation", "deleteOfferBookmark": deleteOfferBookmark])
    }

    public var deleteOfferBookmark: Bool {
      get {
        return resultMap["deleteOfferBookmark"]! as! Bool
      }
      set {
        resultMap.updateValue(newValue, forKey: "deleteOfferBookmark")
      }
    }
  }
}

public final class OfferRedeemActionQuery: GraphQLQuery {
  public let operationDefinition =
    "query OfferRedeemAction($id: ID!, $locationId: ID!) {\n  offer(offerId: $id) {\n    __typename\n    promoCode\n    schedules\n  }\n  offerState(offerId: $id, locationId: $locationId) {\n    __typename\n    ...RedeemAction\n  }\n  offerStatus(offerId: $id, locationId: $locationId) {\n    __typename\n    ...OfferDetailStatus\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(RedeemAction.fragmentDefinition).appending(OfferDetailStatus.fragmentDefinition) }

  public var id: GraphQLID
  public var locationId: GraphQLID

  public init(id: GraphQLID, locationId: GraphQLID) {
    self.id = id
    self.locationId = locationId
  }

  public var variables: GraphQLMap? {
    return ["id": id, "locationId": locationId]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Query"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("offer", arguments: ["offerId": GraphQLVariable("id")], type: .nonNull(.object(Offer.selections))),
      GraphQLField("offerState", arguments: ["offerId": GraphQLVariable("id"), "locationId": GraphQLVariable("locationId")], type: .nonNull(.object(OfferState.selections))),
      GraphQLField("offerStatus", arguments: ["offerId": GraphQLVariable("id"), "locationId": GraphQLVariable("locationId")], type: .nonNull(.object(OfferStatus.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(offer: Offer, offerState: OfferState, offerStatus: OfferStatus) {
      self.init(unsafeResultMap: ["__typename": "Query", "offer": offer.resultMap, "offerState": offerState.resultMap, "offerStatus": offerStatus.resultMap])
    }

    public var offer: Offer {
      get {
        return Offer(unsafeResultMap: resultMap["offer"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "offer")
      }
    }

    public var offerState: OfferState {
      get {
        return OfferState(unsafeResultMap: resultMap["offerState"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "offerState")
      }
    }

    public var offerStatus: OfferStatus {
      get {
        return OfferStatus(unsafeResultMap: resultMap["offerStatus"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "offerStatus")
      }
    }

    public struct Offer: GraphQLSelectionSet {
      public static let possibleTypes = ["Offer"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("promoCode", type: .scalar(String.self)),
        GraphQLField("schedules", type: .nonNull(.list(.nonNull(.scalar(String.self))))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(promoCode: String? = nil, schedules: [String]) {
        self.init(unsafeResultMap: ["__typename": "Offer", "promoCode": promoCode, "schedules": schedules])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      public var promoCode: String? {
        get {
          return resultMap["promoCode"] as? String
        }
        set {
          resultMap.updateValue(newValue, forKey: "promoCode")
        }
      }

      public var schedules: [String] {
        get {
          return resultMap["schedules"]! as! [String]
        }
        set {
          resultMap.updateValue(newValue, forKey: "schedules")
        }
      }
    }

    public struct OfferState: GraphQLSelectionSet {
      public static let possibleTypes = ["OfferState"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLFragmentSpread(RedeemAction.self),
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

        public var redeemAction: RedeemAction {
          get {
            return RedeemAction(unsafeResultMap: resultMap)
          }
          set {
            resultMap += newValue.resultMap
          }
        }
      }
    }

    public struct OfferStatus: GraphQLSelectionSet {
      public static let possibleTypes = ["OfferStatus"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLFragmentSpread(OfferDetailStatus.self),
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

        public var offerDetailStatus: OfferDetailStatus {
          get {
            return OfferDetailStatus(unsafeResultMap: resultMap)
          }
          set {
            resultMap += newValue.resultMap
          }
        }
      }
    }
  }
}

public final class RedeemOfferMutation: GraphQLMutation {
  public let operationDefinition =
    "mutation RedeemOffer($offerId: ID!, $locationId: ID!, $currentState: String!, $transitionIndex: Int!, $clientArgs: String!) {\n  transitionOfferState(offerId: $offerId, locationId: $locationId, currentState: $currentState, transitionIndex: $transitionIndex, clientArgs: $clientArgs) {\n    __typename\n    ...RedeemAction\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(RedeemAction.fragmentDefinition) }

  public var offerId: GraphQLID
  public var locationId: GraphQLID
  public var currentState: String
  public var transitionIndex: Int
  public var clientArgs: String

  public init(offerId: GraphQLID, locationId: GraphQLID, currentState: String, transitionIndex: Int, clientArgs: String) {
    self.offerId = offerId
    self.locationId = locationId
    self.currentState = currentState
    self.transitionIndex = transitionIndex
    self.clientArgs = clientArgs
  }

  public var variables: GraphQLMap? {
    return ["offerId": offerId, "locationId": locationId, "currentState": currentState, "transitionIndex": transitionIndex, "clientArgs": clientArgs]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Mutation"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("transitionOfferState", arguments: ["offerId": GraphQLVariable("offerId"), "locationId": GraphQLVariable("locationId"), "currentState": GraphQLVariable("currentState"), "transitionIndex": GraphQLVariable("transitionIndex"), "clientArgs": GraphQLVariable("clientArgs")], type: .nonNull(.object(TransitionOfferState.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(transitionOfferState: TransitionOfferState) {
      self.init(unsafeResultMap: ["__typename": "Mutation", "transitionOfferState": transitionOfferState.resultMap])
    }

    public var transitionOfferState: TransitionOfferState {
      get {
        return TransitionOfferState(unsafeResultMap: resultMap["transitionOfferState"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "transitionOfferState")
      }
    }

    public struct TransitionOfferState: GraphQLSelectionSet {
      public static let possibleTypes = ["OfferState"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLFragmentSpread(RedeemAction.self),
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

        public var redeemAction: RedeemAction {
          get {
            return RedeemAction(unsafeResultMap: resultMap)
          }
          set {
            resultMap += newValue.resultMap
          }
        }
      }
    }
  }
}

public final class LocationsListQuery: GraphQLQuery {
  public let operationDefinition =
    "query LocationsList($geoArea: [[Float!]!], $orderPoint: [Float!], $originPoint: [Float!], $cursor: String) {\n  locationFeed(contextGeoArea: $geoArea, orderingGeoPoint: $orderPoint, originGeoPoint: $originPoint, cursor: $cursor) {\n    __typename\n    cursor {\n      __typename\n      next\n    }\n    locations {\n      __typename\n      ...LocationItem\n      business {\n        __typename\n        ...BusinessListItem\n      }\n    }\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(LocationItem.fragmentDefinition).appending(BusinessListItem.fragmentDefinition).appending(CategoryItem.fragmentDefinition) }

  public var geoArea: [[Double]]?
  public var orderPoint: [Double]?
  public var originPoint: [Double]?
  public var cursor: String?

  public init(geoArea: [[Double]]?, orderPoint: [Double]?, originPoint: [Double]?, cursor: String? = nil) {
    self.geoArea = geoArea
    self.orderPoint = orderPoint
    self.originPoint = originPoint
    self.cursor = cursor
  }

  public var variables: GraphQLMap? {
    return ["geoArea": geoArea, "orderPoint": orderPoint, "originPoint": originPoint, "cursor": cursor]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Query"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("locationFeed", arguments: ["contextGeoArea": GraphQLVariable("geoArea"), "orderingGeoPoint": GraphQLVariable("orderPoint"), "originGeoPoint": GraphQLVariable("originPoint"), "cursor": GraphQLVariable("cursor")], type: .nonNull(.object(LocationFeed.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(locationFeed: LocationFeed) {
      self.init(unsafeResultMap: ["__typename": "Query", "locationFeed": locationFeed.resultMap])
    }

    public var locationFeed: LocationFeed {
      get {
        return LocationFeed(unsafeResultMap: resultMap["locationFeed"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "locationFeed")
      }
    }

    public struct LocationFeed: GraphQLSelectionSet {
      public static let possibleTypes = ["LocationFeed"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("cursor", type: .nonNull(.object(Cursor.selections))),
        GraphQLField("locations", type: .nonNull(.list(.nonNull(.object(Location.selections))))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(cursor: Cursor, locations: [Location]) {
        self.init(unsafeResultMap: ["__typename": "LocationFeed", "cursor": cursor.resultMap, "locations": locations.map { (value: Location) -> ResultMap in value.resultMap }])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      public var cursor: Cursor {
        get {
          return Cursor(unsafeResultMap: resultMap["cursor"]! as! ResultMap)
        }
        set {
          resultMap.updateValue(newValue.resultMap, forKey: "cursor")
        }
      }

      public var locations: [Location] {
        get {
          return (resultMap["locations"] as! [ResultMap]).map { (value: ResultMap) -> Location in Location(unsafeResultMap: value) }
        }
        set {
          resultMap.updateValue(newValue.map { (value: Location) -> ResultMap in value.resultMap }, forKey: "locations")
        }
      }

      public struct Cursor: GraphQLSelectionSet {
        public static let possibleTypes = ["Cursor"]

        public static let selections: [GraphQLSelection] = [
          GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
          GraphQLField("next", type: .scalar(String.self)),
        ]

        public private(set) var resultMap: ResultMap

        public init(unsafeResultMap: ResultMap) {
          self.resultMap = unsafeResultMap
        }

        public init(next: String? = nil) {
          self.init(unsafeResultMap: ["__typename": "Cursor", "next": next])
        }

        public var __typename: String {
          get {
            return resultMap["__typename"]! as! String
          }
          set {
            resultMap.updateValue(newValue, forKey: "__typename")
          }
        }

        /// Cursor representing next page
        public var next: String? {
          get {
            return resultMap["next"] as? String
          }
          set {
            resultMap.updateValue(newValue, forKey: "next")
          }
        }
      }

      public struct Location: GraphQLSelectionSet {
        public static let possibleTypes = ["Location"]

        public static let selections: [GraphQLSelection] = [
          GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
          GraphQLFragmentSpread(LocationItem.self),
          GraphQLField("business", type: .nonNull(.object(Business.selections))),
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

        public var business: Business {
          get {
            return Business(unsafeResultMap: resultMap["business"]! as! ResultMap)
          }
          set {
            resultMap.updateValue(newValue.resultMap, forKey: "business")
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

          public var locationItem: LocationItem {
            get {
              return LocationItem(unsafeResultMap: resultMap)
            }
            set {
              resultMap += newValue.resultMap
            }
          }
        }

        public struct Business: GraphQLSelectionSet {
          public static let possibleTypes = ["Business"]

          public static let selections: [GraphQLSelection] = [
            GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
            GraphQLFragmentSpread(BusinessListItem.self),
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

            public var businessListItem: BusinessListItem {
              get {
                return BusinessListItem(unsafeResultMap: resultMap)
              }
              set {
                resultMap += newValue.resultMap
              }
            }
          }
        }
      }
    }
  }
}

public final class CollectionListQuery: GraphQLQuery {
  public let operationDefinition =
    "query CollectionList($cursor: String, $tagNames: [String!], $geoArea: [[Float!]!]) {\n  collectionFeed(cursor: $cursor, tagNames: $tagNames, contextGeoArea: $geoArea) {\n    __typename\n    cursor {\n      __typename\n      next\n    }\n    collections {\n      __typename\n      ...CollectionItem\n    }\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(CollectionItem.fragmentDefinition) }

  public var cursor: String?
  public var tagNames: [String]?
  public var geoArea: [[Double]]?

  public init(cursor: String? = nil, tagNames: [String]?, geoArea: [[Double]]?) {
    self.cursor = cursor
    self.tagNames = tagNames
    self.geoArea = geoArea
  }

  public var variables: GraphQLMap? {
    return ["cursor": cursor, "tagNames": tagNames, "geoArea": geoArea]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Query"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("collectionFeed", arguments: ["cursor": GraphQLVariable("cursor"), "tagNames": GraphQLVariable("tagNames"), "contextGeoArea": GraphQLVariable("geoArea")], type: .nonNull(.object(CollectionFeed.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(collectionFeed: CollectionFeed) {
      self.init(unsafeResultMap: ["__typename": "Query", "collectionFeed": collectionFeed.resultMap])
    }

    public var collectionFeed: CollectionFeed {
      get {
        return CollectionFeed(unsafeResultMap: resultMap["collectionFeed"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "collectionFeed")
      }
    }

    public struct CollectionFeed: GraphQLSelectionSet {
      public static let possibleTypes = ["CollectionFeed"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("cursor", type: .nonNull(.object(Cursor.selections))),
        GraphQLField("collections", type: .nonNull(.list(.nonNull(.object(Collection.selections))))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(cursor: Cursor, collections: [Collection]) {
        self.init(unsafeResultMap: ["__typename": "CollectionFeed", "cursor": cursor.resultMap, "collections": collections.map { (value: Collection) -> ResultMap in value.resultMap }])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      public var cursor: Cursor {
        get {
          return Cursor(unsafeResultMap: resultMap["cursor"]! as! ResultMap)
        }
        set {
          resultMap.updateValue(newValue.resultMap, forKey: "cursor")
        }
      }

      public var collections: [Collection] {
        get {
          return (resultMap["collections"] as! [ResultMap]).map { (value: ResultMap) -> Collection in Collection(unsafeResultMap: value) }
        }
        set {
          resultMap.updateValue(newValue.map { (value: Collection) -> ResultMap in value.resultMap }, forKey: "collections")
        }
      }

      public struct Cursor: GraphQLSelectionSet {
        public static let possibleTypes = ["Cursor"]

        public static let selections: [GraphQLSelection] = [
          GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
          GraphQLField("next", type: .scalar(String.self)),
        ]

        public private(set) var resultMap: ResultMap

        public init(unsafeResultMap: ResultMap) {
          self.resultMap = unsafeResultMap
        }

        public init(next: String? = nil) {
          self.init(unsafeResultMap: ["__typename": "Cursor", "next": next])
        }

        public var __typename: String {
          get {
            return resultMap["__typename"]! as! String
          }
          set {
            resultMap.updateValue(newValue, forKey: "__typename")
          }
        }

        /// Cursor representing next page
        public var next: String? {
          get {
            return resultMap["next"] as? String
          }
          set {
            resultMap.updateValue(newValue, forKey: "next")
          }
        }
      }

      public struct Collection: GraphQLSelectionSet {
        public static let possibleTypes = ["Collection"]

        public static let selections: [GraphQLSelection] = [
          GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
          GraphQLFragmentSpread(CollectionItem.self),
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

          public var collectionItem: CollectionItem {
            get {
              return CollectionItem(unsafeResultMap: resultMap)
            }
            set {
              resultMap += newValue.resultMap
            }
          }
        }
      }
    }
  }
}

public final class CollectionDetailQuery: GraphQLQuery {
  public let operationDefinition =
    "query CollectionDetail($id: ID!) {\n  collection(collectionId: $id) {\n    __typename\n    ...CollectionItem\n  }\n}"

  public var queryDocument: String { return operationDefinition.appending(CollectionItem.fragmentDefinition) }

  public var id: GraphQLID

  public init(id: GraphQLID) {
    self.id = id
  }

  public var variables: GraphQLMap? {
    return ["id": id]
  }

  public struct Data: GraphQLSelectionSet {
    public static let possibleTypes = ["Query"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("collection", arguments: ["collectionId": GraphQLVariable("id")], type: .nonNull(.object(Collection.selections))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(collection: Collection) {
      self.init(unsafeResultMap: ["__typename": "Query", "collection": collection.resultMap])
    }

    public var collection: Collection {
      get {
        return Collection(unsafeResultMap: resultMap["collection"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "collection")
      }
    }

    public struct Collection: GraphQLSelectionSet {
      public static let possibleTypes = ["Collection"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLFragmentSpread(CollectionItem.self),
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

        public var collectionItem: CollectionItem {
          get {
            return CollectionItem(unsafeResultMap: resultMap)
          }
          set {
            resultMap += newValue.resultMap
          }
        }
      }
    }
  }
}

public struct OfferListItem: GraphQLFragment {
  public static let fragmentDefinition =
    "fragment OfferListItem on Offer {\n  __typename\n  id\n  headline\n  subhead\n  flags\n  isBookmarked\n  shareUrl\n  schedules\n  heroImages {\n    __typename\n    url\n  }\n}"

  public static let possibleTypes = ["Offer"]

  public static let selections: [GraphQLSelection] = [
    GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
    GraphQLField("id", type: .nonNull(.scalar(GraphQLID.self))),
    GraphQLField("headline", type: .nonNull(.scalar(String.self))),
    GraphQLField("subhead", type: .nonNull(.scalar(String.self))),
    GraphQLField("flags", type: .nonNull(.list(.nonNull(.scalar(String.self))))),
    GraphQLField("isBookmarked", type: .nonNull(.scalar(Bool.self))),
    GraphQLField("shareUrl", type: .nonNull(.scalar(String.self))),
    GraphQLField("schedules", type: .nonNull(.list(.nonNull(.scalar(String.self))))),
    GraphQLField("heroImages", type: .nonNull(.list(.nonNull(.object(HeroImage.selections))))),
  ]

  public private(set) var resultMap: ResultMap

  public init(unsafeResultMap: ResultMap) {
    self.resultMap = unsafeResultMap
  }

  public init(id: GraphQLID, headline: String, subhead: String, flags: [String], isBookmarked: Bool, shareUrl: String, schedules: [String], heroImages: [HeroImage]) {
    self.init(unsafeResultMap: ["__typename": "Offer", "id": id, "headline": headline, "subhead": subhead, "flags": flags, "isBookmarked": isBookmarked, "shareUrl": shareUrl, "schedules": schedules, "heroImages": heroImages.map { (value: HeroImage) -> ResultMap in value.resultMap }])
  }

  public var __typename: String {
    get {
      return resultMap["__typename"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "__typename")
    }
  }

  public var id: GraphQLID {
    get {
      return resultMap["id"]! as! GraphQLID
    }
    set {
      resultMap.updateValue(newValue, forKey: "id")
    }
  }

  public var headline: String {
    get {
      return resultMap["headline"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "headline")
    }
  }

  public var subhead: String {
    get {
      return resultMap["subhead"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "subhead")
    }
  }

  public var flags: [String] {
    get {
      return resultMap["flags"]! as! [String]
    }
    set {
      resultMap.updateValue(newValue, forKey: "flags")
    }
  }

  public var isBookmarked: Bool {
    get {
      return resultMap["isBookmarked"]! as! Bool
    }
    set {
      resultMap.updateValue(newValue, forKey: "isBookmarked")
    }
  }

  public var shareUrl: String {
    get {
      return resultMap["shareUrl"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "shareUrl")
    }
  }

  public var schedules: [String] {
    get {
      return resultMap["schedules"]! as! [String]
    }
    set {
      resultMap.updateValue(newValue, forKey: "schedules")
    }
  }

  public var heroImages: [HeroImage] {
    get {
      return (resultMap["heroImages"] as! [ResultMap]).map { (value: ResultMap) -> HeroImage in HeroImage(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: HeroImage) -> ResultMap in value.resultMap }, forKey: "heroImages")
    }
  }

  public struct HeroImage: GraphQLSelectionSet {
    public static let possibleTypes = ["Image"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("url", type: .nonNull(.scalar(String.self))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(url: String) {
      self.init(unsafeResultMap: ["__typename": "Image", "url": url])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var url: String {
      get {
        return resultMap["url"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "url")
      }
    }
  }
}

public struct OfferDetails: GraphQLFragment {
  public static let fragmentDefinition =
    "fragment OfferDetails on Offer {\n  __typename\n  id\n  headline\n  subhead\n  details\n  legal\n  flags\n  promoCode\n  shareUrl\n  isBookmarked\n  business {\n    __typename\n    ...BusinessListItem\n  }\n  heroImages {\n    __typename\n    url\n  }\n}"

  public static let possibleTypes = ["Offer"]

  public static let selections: [GraphQLSelection] = [
    GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
    GraphQLField("id", type: .nonNull(.scalar(GraphQLID.self))),
    GraphQLField("headline", type: .nonNull(.scalar(String.self))),
    GraphQLField("subhead", type: .nonNull(.scalar(String.self))),
    GraphQLField("details", type: .nonNull(.scalar(String.self))),
    GraphQLField("legal", type: .scalar(String.self)),
    GraphQLField("flags", type: .nonNull(.list(.nonNull(.scalar(String.self))))),
    GraphQLField("promoCode", type: .scalar(String.self)),
    GraphQLField("shareUrl", type: .nonNull(.scalar(String.self))),
    GraphQLField("isBookmarked", type: .nonNull(.scalar(Bool.self))),
    GraphQLField("business", type: .nonNull(.object(Business.selections))),
    GraphQLField("heroImages", type: .nonNull(.list(.nonNull(.object(HeroImage.selections))))),
  ]

  public private(set) var resultMap: ResultMap

  public init(unsafeResultMap: ResultMap) {
    self.resultMap = unsafeResultMap
  }

  public init(id: GraphQLID, headline: String, subhead: String, details: String, legal: String? = nil, flags: [String], promoCode: String? = nil, shareUrl: String, isBookmarked: Bool, business: Business, heroImages: [HeroImage]) {
    self.init(unsafeResultMap: ["__typename": "Offer", "id": id, "headline": headline, "subhead": subhead, "details": details, "legal": legal, "flags": flags, "promoCode": promoCode, "shareUrl": shareUrl, "isBookmarked": isBookmarked, "business": business.resultMap, "heroImages": heroImages.map { (value: HeroImage) -> ResultMap in value.resultMap }])
  }

  public var __typename: String {
    get {
      return resultMap["__typename"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "__typename")
    }
  }

  public var id: GraphQLID {
    get {
      return resultMap["id"]! as! GraphQLID
    }
    set {
      resultMap.updateValue(newValue, forKey: "id")
    }
  }

  public var headline: String {
    get {
      return resultMap["headline"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "headline")
    }
  }

  public var subhead: String {
    get {
      return resultMap["subhead"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "subhead")
    }
  }

  public var details: String {
    get {
      return resultMap["details"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "details")
    }
  }

  public var legal: String? {
    get {
      return resultMap["legal"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "legal")
    }
  }

  public var flags: [String] {
    get {
      return resultMap["flags"]! as! [String]
    }
    set {
      resultMap.updateValue(newValue, forKey: "flags")
    }
  }

  public var promoCode: String? {
    get {
      return resultMap["promoCode"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "promoCode")
    }
  }

  public var shareUrl: String {
    get {
      return resultMap["shareUrl"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "shareUrl")
    }
  }

  public var isBookmarked: Bool {
    get {
      return resultMap["isBookmarked"]! as! Bool
    }
    set {
      resultMap.updateValue(newValue, forKey: "isBookmarked")
    }
  }

  public var business: Business {
    get {
      return Business(unsafeResultMap: resultMap["business"]! as! ResultMap)
    }
    set {
      resultMap.updateValue(newValue.resultMap, forKey: "business")
    }
  }

  public var heroImages: [HeroImage] {
    get {
      return (resultMap["heroImages"] as! [ResultMap]).map { (value: ResultMap) -> HeroImage in HeroImage(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: HeroImage) -> ResultMap in value.resultMap }, forKey: "heroImages")
    }
  }

  public struct Business: GraphQLSelectionSet {
    public static let possibleTypes = ["Business"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLFragmentSpread(BusinessListItem.self),
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

      public var businessListItem: BusinessListItem {
        get {
          return BusinessListItem(unsafeResultMap: resultMap)
        }
        set {
          resultMap += newValue.resultMap
        }
      }
    }
  }

  public struct HeroImage: GraphQLSelectionSet {
    public static let possibleTypes = ["Image"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("url", type: .nonNull(.scalar(String.self))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(url: String) {
      self.init(unsafeResultMap: ["__typename": "Image", "url": url])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var url: String {
      get {
        return resultMap["url"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "url")
      }
    }
  }
}

public struct RedeemAction: GraphQLFragment {
  public static let fragmentDefinition =
    "fragment RedeemAction on OfferState {\n  __typename\n  state\n  expiresIn\n  display\n  refreshInterval\n  meta {\n    __typename\n    actionTarget\n    actionType\n  }\n  transitions {\n    __typename\n    index\n    meta {\n      __typename\n      transitionButtonText\n    }\n    args {\n      __typename\n      name\n      required\n      type\n    }\n  }\n}"

  public static let possibleTypes = ["OfferState"]

  public static let selections: [GraphQLSelection] = [
    GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
    GraphQLField("state", type: .nonNull(.scalar(String.self))),
    GraphQLField("expiresIn", type: .scalar(Int.self)),
    GraphQLField("display", type: .nonNull(.list(.nonNull(.scalar(String.self))))),
    GraphQLField("refreshInterval", type: .nonNull(.scalar(Int.self))),
    GraphQLField("meta", type: .nonNull(.object(Metum.selections))),
    GraphQLField("transitions", type: .nonNull(.list(.nonNull(.object(Transition.selections))))),
  ]

  public private(set) var resultMap: ResultMap

  public init(unsafeResultMap: ResultMap) {
    self.resultMap = unsafeResultMap
  }

  public init(state: String, expiresIn: Int? = nil, display: [String], refreshInterval: Int, meta: Metum, transitions: [Transition]) {
    self.init(unsafeResultMap: ["__typename": "OfferState", "state": state, "expiresIn": expiresIn, "display": display, "refreshInterval": refreshInterval, "meta": meta.resultMap, "transitions": transitions.map { (value: Transition) -> ResultMap in value.resultMap }])
  }

  public var __typename: String {
    get {
      return resultMap["__typename"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "__typename")
    }
  }

  /// Name of current state.
  public var state: String {
    get {
      return resultMap["state"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "state")
    }
  }

  /// Expiration of state in seconds.
  public var expiresIn: Int? {
    get {
      return resultMap["expiresIn"] as? Int
    }
    set {
      resultMap.updateValue(newValue, forKey: "expiresIn")
    }
  }

  /// List of desired views to display to client. Select first known.
  public var display: [String] {
    get {
      return resultMap["display"]! as! [String]
    }
    set {
      resultMap.updateValue(newValue, forKey: "display")
    }
  }

  /// Time until data becomes stale in seconds.
  public var refreshInterval: Int {
    get {
      return resultMap["refreshInterval"]! as! Int
    }
    set {
      resultMap.updateValue(newValue, forKey: "refreshInterval")
    }
  }

  /// Additional information for state.
  public var meta: Metum {
    get {
      return Metum(unsafeResultMap: resultMap["meta"]! as! ResultMap)
    }
    set {
      resultMap.updateValue(newValue.resultMap, forKey: "meta")
    }
  }

  /// Available transitions for current state.
  public var transitions: [Transition] {
    get {
      return (resultMap["transitions"] as! [ResultMap]).map { (value: ResultMap) -> Transition in Transition(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: Transition) -> ResultMap in value.resultMap }, forKey: "transitions")
    }
  }

  public struct Metum: GraphQLSelectionSet {
    public static let possibleTypes = ["OfferStateMeta"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("actionTarget", type: .scalar(String.self)),
      GraphQLField("actionType", type: .scalar(String.self)),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(actionTarget: String? = nil, actionType: String? = nil) {
      self.init(unsafeResultMap: ["__typename": "OfferStateMeta", "actionTarget": actionTarget, "actionType": actionType])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    /// Target for available action.
    public var actionTarget: String? {
      get {
        return resultMap["actionTarget"] as? String
      }
      set {
        resultMap.updateValue(newValue, forKey: "actionTarget")
      }
    }

    /// Available action in current state.
    public var actionType: String? {
      get {
        return resultMap["actionType"] as? String
      }
      set {
        resultMap.updateValue(newValue, forKey: "actionType")
      }
    }
  }

  public struct Transition: GraphQLSelectionSet {
    public static let possibleTypes = ["OfferStateTransition"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("index", type: .nonNull(.scalar(Int.self))),
      GraphQLField("meta", type: .nonNull(.object(Metum.selections))),
      GraphQLField("args", type: .nonNull(.list(.nonNull(.object(Arg.selections))))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(index: Int, meta: Metum, args: [Arg]) {
      self.init(unsafeResultMap: ["__typename": "OfferStateTransition", "index": index, "meta": meta.resultMap, "args": args.map { (value: Arg) -> ResultMap in value.resultMap }])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    /// Index used to identify transition.
    public var index: Int {
      get {
        return resultMap["index"]! as! Int
      }
      set {
        resultMap.updateValue(newValue, forKey: "index")
      }
    }

    /// Additional information for transition.
    public var meta: Metum {
      get {
        return Metum(unsafeResultMap: resultMap["meta"]! as! ResultMap)
      }
      set {
        resultMap.updateValue(newValue.resultMap, forKey: "meta")
      }
    }

    /// Arguments for transition.
    public var args: [Arg] {
      get {
        return (resultMap["args"] as! [ResultMap]).map { (value: ResultMap) -> Arg in Arg(unsafeResultMap: value) }
      }
      set {
        resultMap.updateValue(newValue.map { (value: Arg) -> ResultMap in value.resultMap }, forKey: "args")
      }
    }

    public struct Metum: GraphQLSelectionSet {
      public static let possibleTypes = ["OfferStateTransitionMeta"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("transitionButtonText", type: .scalar(String.self)),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(transitionButtonText: String? = nil) {
        self.init(unsafeResultMap: ["__typename": "OfferStateTransitionMeta", "transitionButtonText": transitionButtonText])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      /// Text on client button that executes transition mutation.
      public var transitionButtonText: String? {
        get {
          return resultMap["transitionButtonText"] as? String
        }
        set {
          resultMap.updateValue(newValue, forKey: "transitionButtonText")
        }
      }
    }

    public struct Arg: GraphQLSelectionSet {
      public static let possibleTypes = ["OfferStateTransitionArg"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("name", type: .nonNull(.scalar(String.self))),
        GraphQLField("required", type: .nonNull(.scalar(Bool.self))),
        GraphQLField("type", type: .nonNull(.scalar(String.self))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(name: String, `required`: Bool, type: String) {
        self.init(unsafeResultMap: ["__typename": "OfferStateTransitionArg", "name": name, "required": `required`, "type": type])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      /// Name of argument.
      public var name: String {
        get {
          return resultMap["name"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "name")
        }
      }

      /// Whether the argument is required.
      public var `required`: Bool {
        get {
          return resultMap["required"]! as! Bool
        }
        set {
          resultMap.updateValue(newValue, forKey: "required")
        }
      }

      /// Type of argument.
      public var type: String {
        get {
          return resultMap["type"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "type")
        }
      }
    }
  }
}

public struct OfferDetailStatus: GraphQLFragment {
  public static let fragmentDefinition =
    "fragment OfferDetailStatus on OfferStatus {\n  __typename\n  redeemable\n  reason\n  limitDetails {\n    __typename\n    perProfile {\n      __typename\n      total\n      used\n      priority\n    }\n    perProfilePerWindow {\n      __typename\n      total\n      used\n      granularity\n      resetsIn\n      priority\n    }\n    global {\n      __typename\n      total\n      used\n      priority\n    }\n    globalPerWindow {\n      __typename\n      total\n      used\n      granularity\n      resetsIn\n      priority\n    }\n  }\n}"

  public static let possibleTypes = ["OfferStatus"]

  public static let selections: [GraphQLSelection] = [
    GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
    GraphQLField("redeemable", type: .nonNull(.scalar(Bool.self))),
    GraphQLField("reason", type: .scalar(String.self)),
    GraphQLField("limitDetails", type: .object(LimitDetail.selections)),
  ]

  public private(set) var resultMap: ResultMap

  public init(unsafeResultMap: ResultMap) {
    self.resultMap = unsafeResultMap
  }

  public init(redeemable: Bool, reason: String? = nil, limitDetails: LimitDetail? = nil) {
    self.init(unsafeResultMap: ["__typename": "OfferStatus", "redeemable": redeemable, "reason": reason, "limitDetails": limitDetails.flatMap { (value: LimitDetail) -> ResultMap in value.resultMap }])
  }

  public var __typename: String {
    get {
      return resultMap["__typename"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "__typename")
    }
  }

  /// True iff Offer is available for use.
  public var redeemable: Bool {
    get {
      return resultMap["redeemable"]! as! Bool
    }
    set {
      resultMap.updateValue(newValue, forKey: "redeemable")
    }
  }

  /// Returned iff available == false. Returns prioritized reason offer is not available.
  public var reason: String? {
    get {
      return resultMap["reason"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "reason")
    }
  }

  /// Usage limits and current usages.
  public var limitDetails: LimitDetail? {
    get {
      return (resultMap["limitDetails"] as? ResultMap).flatMap { LimitDetail(unsafeResultMap: $0) }
    }
    set {
      resultMap.updateValue(newValue?.resultMap, forKey: "limitDetails")
    }
  }

  public struct LimitDetail: GraphQLSelectionSet {
    public static let possibleTypes = ["OfferStatusLimitDetails"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("perProfile", type: .object(PerProfile.selections)),
      GraphQLField("perProfilePerWindow", type: .object(PerProfilePerWindow.selections)),
      GraphQLField("global", type: .object(Global.selections)),
      GraphQLField("globalPerWindow", type: .object(GlobalPerWindow.selections)),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(perProfile: PerProfile? = nil, perProfilePerWindow: PerProfilePerWindow? = nil, global: Global? = nil, globalPerWindow: GlobalPerWindow? = nil) {
      self.init(unsafeResultMap: ["__typename": "OfferStatusLimitDetails", "perProfile": perProfile.flatMap { (value: PerProfile) -> ResultMap in value.resultMap }, "perProfilePerWindow": perProfilePerWindow.flatMap { (value: PerProfilePerWindow) -> ResultMap in value.resultMap }, "global": global.flatMap { (value: Global) -> ResultMap in value.resultMap }, "globalPerWindow": globalPerWindow.flatMap { (value: GlobalPerWindow) -> ResultMap in value.resultMap }])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    /// Per profile limit.
    public var perProfile: PerProfile? {
      get {
        return (resultMap["perProfile"] as? ResultMap).flatMap { PerProfile(unsafeResultMap: $0) }
      }
      set {
        resultMap.updateValue(newValue?.resultMap, forKey: "perProfile")
      }
    }

    /// Per profile limit per window.
    public var perProfilePerWindow: PerProfilePerWindow? {
      get {
        return (resultMap["perProfilePerWindow"] as? ResultMap).flatMap { PerProfilePerWindow(unsafeResultMap: $0) }
      }
      set {
        resultMap.updateValue(newValue?.resultMap, forKey: "perProfilePerWindow")
      }
    }

    /// Global limit.
    public var global: Global? {
      get {
        return (resultMap["global"] as? ResultMap).flatMap { Global(unsafeResultMap: $0) }
      }
      set {
        resultMap.updateValue(newValue?.resultMap, forKey: "global")
      }
    }

    /// Global limit per window.
    public var globalPerWindow: GlobalPerWindow? {
      get {
        return (resultMap["globalPerWindow"] as? ResultMap).flatMap { GlobalPerWindow(unsafeResultMap: $0) }
      }
      set {
        resultMap.updateValue(newValue?.resultMap, forKey: "globalPerWindow")
      }
    }

    public struct PerProfile: GraphQLSelectionSet {
      public static let possibleTypes = ["OfferStatusLimitDetailsUsage"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("total", type: .nonNull(.scalar(Int.self))),
        GraphQLField("used", type: .nonNull(.scalar(Int.self))),
        GraphQLField("priority", type: .nonNull(.scalar(Int.self))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(total: Int, used: Int, priority: Int) {
        self.init(unsafeResultMap: ["__typename": "OfferStatusLimitDetailsUsage", "total": total, "used": used, "priority": priority])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      /// Max allowed uses.
      public var total: Int {
        get {
          return resultMap["total"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "total")
        }
      }

      /// Current uses.
      public var used: Int {
        get {
          return resultMap["used"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "used")
        }
      }

      /// Priority of Limit
      public var priority: Int {
        get {
          return resultMap["priority"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "priority")
        }
      }
    }

    public struct PerProfilePerWindow: GraphQLSelectionSet {
      public static let possibleTypes = ["OfferStatusLimitDetailsUsagePerWindow"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("total", type: .nonNull(.scalar(Int.self))),
        GraphQLField("used", type: .nonNull(.scalar(Int.self))),
        GraphQLField("granularity", type: .nonNull(.scalar(String.self))),
        GraphQLField("resetsIn", type: .nonNull(.scalar(Int.self))),
        GraphQLField("priority", type: .nonNull(.scalar(Int.self))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(total: Int, used: Int, granularity: String, resetsIn: Int, priority: Int) {
        self.init(unsafeResultMap: ["__typename": "OfferStatusLimitDetailsUsagePerWindow", "total": total, "used": used, "granularity": granularity, "resetsIn": resetsIn, "priority": priority])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      /// Max allowed uses.
      public var total: Int {
        get {
          return resultMap["total"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "total")
        }
      }

      /// Current uses.
      public var used: Int {
        get {
          return resultMap["used"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "used")
        }
      }

      /// Granularity for reset window.
      public var granularity: String {
        get {
          return resultMap["granularity"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "granularity")
        }
      }

      /// Time to reset in seconds.
      public var resetsIn: Int {
        get {
          return resultMap["resetsIn"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "resetsIn")
        }
      }

      /// Priority of Limit
      public var priority: Int {
        get {
          return resultMap["priority"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "priority")
        }
      }
    }

    public struct Global: GraphQLSelectionSet {
      public static let possibleTypes = ["OfferStatusLimitDetailsUsage"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("total", type: .nonNull(.scalar(Int.self))),
        GraphQLField("used", type: .nonNull(.scalar(Int.self))),
        GraphQLField("priority", type: .nonNull(.scalar(Int.self))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(total: Int, used: Int, priority: Int) {
        self.init(unsafeResultMap: ["__typename": "OfferStatusLimitDetailsUsage", "total": total, "used": used, "priority": priority])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      /// Max allowed uses.
      public var total: Int {
        get {
          return resultMap["total"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "total")
        }
      }

      /// Current uses.
      public var used: Int {
        get {
          return resultMap["used"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "used")
        }
      }

      /// Priority of Limit
      public var priority: Int {
        get {
          return resultMap["priority"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "priority")
        }
      }
    }

    public struct GlobalPerWindow: GraphQLSelectionSet {
      public static let possibleTypes = ["OfferStatusLimitDetailsUsagePerWindow"]

      public static let selections: [GraphQLSelection] = [
        GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
        GraphQLField("total", type: .nonNull(.scalar(Int.self))),
        GraphQLField("used", type: .nonNull(.scalar(Int.self))),
        GraphQLField("granularity", type: .nonNull(.scalar(String.self))),
        GraphQLField("resetsIn", type: .nonNull(.scalar(Int.self))),
        GraphQLField("priority", type: .nonNull(.scalar(Int.self))),
      ]

      public private(set) var resultMap: ResultMap

      public init(unsafeResultMap: ResultMap) {
        self.resultMap = unsafeResultMap
      }

      public init(total: Int, used: Int, granularity: String, resetsIn: Int, priority: Int) {
        self.init(unsafeResultMap: ["__typename": "OfferStatusLimitDetailsUsagePerWindow", "total": total, "used": used, "granularity": granularity, "resetsIn": resetsIn, "priority": priority])
      }

      public var __typename: String {
        get {
          return resultMap["__typename"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "__typename")
        }
      }

      /// Max allowed uses.
      public var total: Int {
        get {
          return resultMap["total"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "total")
        }
      }

      /// Current uses.
      public var used: Int {
        get {
          return resultMap["used"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "used")
        }
      }

      /// Granularity for reset window.
      public var granularity: String {
        get {
          return resultMap["granularity"]! as! String
        }
        set {
          resultMap.updateValue(newValue, forKey: "granularity")
        }
      }

      /// Time to reset in seconds.
      public var resetsIn: Int {
        get {
          return resultMap["resetsIn"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "resetsIn")
        }
      }

      /// Priority of Limit
      public var priority: Int {
        get {
          return resultMap["priority"]! as! Int
        }
        set {
          resultMap.updateValue(newValue, forKey: "priority")
        }
      }
    }
  }
}

public struct BusinessDetails: GraphQLFragment {
  public static let fragmentDefinition =
    "fragment BusinessDetails on Business {\n  __typename\n  id\n  name\n  shortName\n  slogan\n  desc\n  url\n  phone\n  profileImages {\n    __typename\n    url\n  }\n  heroStandardImages {\n    __typename\n    url\n  }\n  offers {\n    __typename\n    ...OfferListItem\n  }\n  categories {\n    __typename\n    ...CategoryItem\n  }\n}"

  public static let possibleTypes = ["Business"]

  public static let selections: [GraphQLSelection] = [
    GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
    GraphQLField("id", type: .nonNull(.scalar(GraphQLID.self))),
    GraphQLField("name", type: .nonNull(.scalar(String.self))),
    GraphQLField("shortName", type: .nonNull(.scalar(String.self))),
    GraphQLField("slogan", type: .scalar(String.self)),
    GraphQLField("desc", type: .scalar(String.self)),
    GraphQLField("url", type: .scalar(String.self)),
    GraphQLField("phone", type: .scalar(String.self)),
    GraphQLField("profileImages", type: .nonNull(.list(.nonNull(.object(ProfileImage.selections))))),
    GraphQLField("heroStandardImages", type: .nonNull(.list(.nonNull(.object(HeroStandardImage.selections))))),
    GraphQLField("offers", type: .nonNull(.list(.nonNull(.object(Offer.selections))))),
    GraphQLField("categories", type: .nonNull(.list(.nonNull(.object(Category.selections))))),
  ]

  public private(set) var resultMap: ResultMap

  public init(unsafeResultMap: ResultMap) {
    self.resultMap = unsafeResultMap
  }

  public init(id: GraphQLID, name: String, shortName: String, slogan: String? = nil, desc: String? = nil, url: String? = nil, phone: String? = nil, profileImages: [ProfileImage], heroStandardImages: [HeroStandardImage], offers: [Offer], categories: [Category]) {
    self.init(unsafeResultMap: ["__typename": "Business", "id": id, "name": name, "shortName": shortName, "slogan": slogan, "desc": desc, "url": url, "phone": phone, "profileImages": profileImages.map { (value: ProfileImage) -> ResultMap in value.resultMap }, "heroStandardImages": heroStandardImages.map { (value: HeroStandardImage) -> ResultMap in value.resultMap }, "offers": offers.map { (value: Offer) -> ResultMap in value.resultMap }, "categories": categories.map { (value: Category) -> ResultMap in value.resultMap }])
  }

  public var __typename: String {
    get {
      return resultMap["__typename"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "__typename")
    }
  }

  public var id: GraphQLID {
    get {
      return resultMap["id"]! as! GraphQLID
    }
    set {
      resultMap.updateValue(newValue, forKey: "id")
    }
  }

  public var name: String {
    get {
      return resultMap["name"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "name")
    }
  }

  public var shortName: String {
    get {
      return resultMap["shortName"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "shortName")
    }
  }

  public var slogan: String? {
    get {
      return resultMap["slogan"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "slogan")
    }
  }

  public var desc: String? {
    get {
      return resultMap["desc"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "desc")
    }
  }

  public var url: String? {
    get {
      return resultMap["url"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "url")
    }
  }

  public var phone: String? {
    get {
      return resultMap["phone"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "phone")
    }
  }

  public var profileImages: [ProfileImage] {
    get {
      return (resultMap["profileImages"] as! [ResultMap]).map { (value: ResultMap) -> ProfileImage in ProfileImage(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: ProfileImage) -> ResultMap in value.resultMap }, forKey: "profileImages")
    }
  }

  public var heroStandardImages: [HeroStandardImage] {
    get {
      return (resultMap["heroStandardImages"] as! [ResultMap]).map { (value: ResultMap) -> HeroStandardImage in HeroStandardImage(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: HeroStandardImage) -> ResultMap in value.resultMap }, forKey: "heroStandardImages")
    }
  }

  public var offers: [Offer] {
    get {
      return (resultMap["offers"] as! [ResultMap]).map { (value: ResultMap) -> Offer in Offer(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: Offer) -> ResultMap in value.resultMap }, forKey: "offers")
    }
  }

  public var categories: [Category] {
    get {
      return (resultMap["categories"] as! [ResultMap]).map { (value: ResultMap) -> Category in Category(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: Category) -> ResultMap in value.resultMap }, forKey: "categories")
    }
  }

  public struct ProfileImage: GraphQLSelectionSet {
    public static let possibleTypes = ["Image"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("url", type: .nonNull(.scalar(String.self))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(url: String) {
      self.init(unsafeResultMap: ["__typename": "Image", "url": url])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var url: String {
      get {
        return resultMap["url"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "url")
      }
    }
  }

  public struct HeroStandardImage: GraphQLSelectionSet {
    public static let possibleTypes = ["Image"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("url", type: .nonNull(.scalar(String.self))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(url: String) {
      self.init(unsafeResultMap: ["__typename": "Image", "url": url])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var url: String {
      get {
        return resultMap["url"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "url")
      }
    }
  }

  public struct Offer: GraphQLSelectionSet {
    public static let possibleTypes = ["Offer"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLFragmentSpread(OfferListItem.self),
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

      public var offerListItem: OfferListItem {
        get {
          return OfferListItem(unsafeResultMap: resultMap)
        }
        set {
          resultMap += newValue.resultMap
        }
      }
    }
  }

  public struct Category: GraphQLSelectionSet {
    public static let possibleTypes = ["Category"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLFragmentSpread(CategoryItem.self),
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

      public var categoryItem: CategoryItem {
        get {
          return CategoryItem(unsafeResultMap: resultMap)
        }
        set {
          resultMap += newValue.resultMap
        }
      }
    }
  }
}

public struct BusinessListItem: GraphQLFragment {
  public static let fragmentDefinition =
    "fragment BusinessListItem on Business {\n  __typename\n  id\n  name\n  shortName\n  phone\n  url\n  slogan\n  desc\n  profileImages {\n    __typename\n    url\n  }\n  categories {\n    __typename\n    ...CategoryItem\n  }\n}"

  public static let possibleTypes = ["Business"]

  public static let selections: [GraphQLSelection] = [
    GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
    GraphQLField("id", type: .nonNull(.scalar(GraphQLID.self))),
    GraphQLField("name", type: .nonNull(.scalar(String.self))),
    GraphQLField("shortName", type: .nonNull(.scalar(String.self))),
    GraphQLField("phone", type: .scalar(String.self)),
    GraphQLField("url", type: .scalar(String.self)),
    GraphQLField("slogan", type: .scalar(String.self)),
    GraphQLField("desc", type: .scalar(String.self)),
    GraphQLField("profileImages", type: .nonNull(.list(.nonNull(.object(ProfileImage.selections))))),
    GraphQLField("categories", type: .nonNull(.list(.nonNull(.object(Category.selections))))),
  ]

  public private(set) var resultMap: ResultMap

  public init(unsafeResultMap: ResultMap) {
    self.resultMap = unsafeResultMap
  }

  public init(id: GraphQLID, name: String, shortName: String, phone: String? = nil, url: String? = nil, slogan: String? = nil, desc: String? = nil, profileImages: [ProfileImage], categories: [Category]) {
    self.init(unsafeResultMap: ["__typename": "Business", "id": id, "name": name, "shortName": shortName, "phone": phone, "url": url, "slogan": slogan, "desc": desc, "profileImages": profileImages.map { (value: ProfileImage) -> ResultMap in value.resultMap }, "categories": categories.map { (value: Category) -> ResultMap in value.resultMap }])
  }

  public var __typename: String {
    get {
      return resultMap["__typename"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "__typename")
    }
  }

  public var id: GraphQLID {
    get {
      return resultMap["id"]! as! GraphQLID
    }
    set {
      resultMap.updateValue(newValue, forKey: "id")
    }
  }

  public var name: String {
    get {
      return resultMap["name"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "name")
    }
  }

  public var shortName: String {
    get {
      return resultMap["shortName"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "shortName")
    }
  }

  public var phone: String? {
    get {
      return resultMap["phone"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "phone")
    }
  }

  public var url: String? {
    get {
      return resultMap["url"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "url")
    }
  }

  public var slogan: String? {
    get {
      return resultMap["slogan"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "slogan")
    }
  }

  public var desc: String? {
    get {
      return resultMap["desc"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "desc")
    }
  }

  public var profileImages: [ProfileImage] {
    get {
      return (resultMap["profileImages"] as! [ResultMap]).map { (value: ResultMap) -> ProfileImage in ProfileImage(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: ProfileImage) -> ResultMap in value.resultMap }, forKey: "profileImages")
    }
  }

  public var categories: [Category] {
    get {
      return (resultMap["categories"] as! [ResultMap]).map { (value: ResultMap) -> Category in Category(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: Category) -> ResultMap in value.resultMap }, forKey: "categories")
    }
  }

  public struct ProfileImage: GraphQLSelectionSet {
    public static let possibleTypes = ["Image"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("url", type: .nonNull(.scalar(String.self))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(url: String) {
      self.init(unsafeResultMap: ["__typename": "Image", "url": url])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var url: String {
      get {
        return resultMap["url"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "url")
      }
    }
  }

  public struct Category: GraphQLSelectionSet {
    public static let possibleTypes = ["Category"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLFragmentSpread(CategoryItem.self),
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

      public var categoryItem: CategoryItem {
        get {
          return CategoryItem(unsafeResultMap: resultMap)
        }
        set {
          resultMap += newValue.resultMap
        }
      }
    }
  }
}

public struct CategoryItem: GraphQLFragment {
  public static let fragmentDefinition =
    "fragment CategoryItem on Category {\n  __typename\n  id\n  name\n  shortName\n  iconSmallImages {\n    __typename\n    url\n  }\n}"

  public static let possibleTypes = ["Category"]

  public static let selections: [GraphQLSelection] = [
    GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
    GraphQLField("id", type: .nonNull(.scalar(GraphQLID.self))),
    GraphQLField("name", type: .nonNull(.scalar(String.self))),
    GraphQLField("shortName", type: .nonNull(.scalar(String.self))),
    GraphQLField("iconSmallImages", type: .nonNull(.list(.nonNull(.object(IconSmallImage.selections))))),
  ]

  public private(set) var resultMap: ResultMap

  public init(unsafeResultMap: ResultMap) {
    self.resultMap = unsafeResultMap
  }

  public init(id: GraphQLID, name: String, shortName: String, iconSmallImages: [IconSmallImage]) {
    self.init(unsafeResultMap: ["__typename": "Category", "id": id, "name": name, "shortName": shortName, "iconSmallImages": iconSmallImages.map { (value: IconSmallImage) -> ResultMap in value.resultMap }])
  }

  public var __typename: String {
    get {
      return resultMap["__typename"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "__typename")
    }
  }

  public var id: GraphQLID {
    get {
      return resultMap["id"]! as! GraphQLID
    }
    set {
      resultMap.updateValue(newValue, forKey: "id")
    }
  }

  public var name: String {
    get {
      return resultMap["name"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "name")
    }
  }

  public var shortName: String {
    get {
      return resultMap["shortName"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "shortName")
    }
  }

  public var iconSmallImages: [IconSmallImage] {
    get {
      return (resultMap["iconSmallImages"] as! [ResultMap]).map { (value: ResultMap) -> IconSmallImage in IconSmallImage(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: IconSmallImage) -> ResultMap in value.resultMap }, forKey: "iconSmallImages")
    }
  }

  public struct IconSmallImage: GraphQLSelectionSet {
    public static let possibleTypes = ["Image"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("url", type: .nonNull(.scalar(String.self))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(url: String) {
      self.init(unsafeResultMap: ["__typename": "Image", "url": url])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var url: String {
      get {
        return resultMap["url"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "url")
      }
    }
  }
}

public struct CollectionItem: GraphQLFragment {
  public static let fragmentDefinition =
    "fragment CollectionItem on Collection {\n  __typename\n  id\n  name\n  shortName\n  slug\n  iconSmallImages {\n    __typename\n    url\n  }\n  heroStandardImages {\n    __typename\n    url\n  }\n}"

  public static let possibleTypes = ["Collection"]

  public static let selections: [GraphQLSelection] = [
    GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
    GraphQLField("id", type: .nonNull(.scalar(GraphQLID.self))),
    GraphQLField("name", type: .nonNull(.scalar(String.self))),
    GraphQLField("shortName", type: .nonNull(.scalar(String.self))),
    GraphQLField("slug", type: .nonNull(.scalar(String.self))),
    GraphQLField("iconSmallImages", type: .nonNull(.list(.nonNull(.object(IconSmallImage.selections))))),
    GraphQLField("heroStandardImages", type: .nonNull(.list(.nonNull(.object(HeroStandardImage.selections))))),
  ]

  public private(set) var resultMap: ResultMap

  public init(unsafeResultMap: ResultMap) {
    self.resultMap = unsafeResultMap
  }

  public init(id: GraphQLID, name: String, shortName: String, slug: String, iconSmallImages: [IconSmallImage], heroStandardImages: [HeroStandardImage]) {
    self.init(unsafeResultMap: ["__typename": "Collection", "id": id, "name": name, "shortName": shortName, "slug": slug, "iconSmallImages": iconSmallImages.map { (value: IconSmallImage) -> ResultMap in value.resultMap }, "heroStandardImages": heroStandardImages.map { (value: HeroStandardImage) -> ResultMap in value.resultMap }])
  }

  public var __typename: String {
    get {
      return resultMap["__typename"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "__typename")
    }
  }

  public var id: GraphQLID {
    get {
      return resultMap["id"]! as! GraphQLID
    }
    set {
      resultMap.updateValue(newValue, forKey: "id")
    }
  }

  public var name: String {
    get {
      return resultMap["name"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "name")
    }
  }

  public var shortName: String {
    get {
      return resultMap["shortName"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "shortName")
    }
  }

  public var slug: String {
    get {
      return resultMap["slug"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "slug")
    }
  }

  public var iconSmallImages: [IconSmallImage] {
    get {
      return (resultMap["iconSmallImages"] as! [ResultMap]).map { (value: ResultMap) -> IconSmallImage in IconSmallImage(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: IconSmallImage) -> ResultMap in value.resultMap }, forKey: "iconSmallImages")
    }
  }

  public var heroStandardImages: [HeroStandardImage] {
    get {
      return (resultMap["heroStandardImages"] as! [ResultMap]).map { (value: ResultMap) -> HeroStandardImage in HeroStandardImage(unsafeResultMap: value) }
    }
    set {
      resultMap.updateValue(newValue.map { (value: HeroStandardImage) -> ResultMap in value.resultMap }, forKey: "heroStandardImages")
    }
  }

  public struct IconSmallImage: GraphQLSelectionSet {
    public static let possibleTypes = ["Image"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("url", type: .nonNull(.scalar(String.self))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(url: String) {
      self.init(unsafeResultMap: ["__typename": "Image", "url": url])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var url: String {
      get {
        return resultMap["url"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "url")
      }
    }
  }

  public struct HeroStandardImage: GraphQLSelectionSet {
    public static let possibleTypes = ["Image"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("url", type: .nonNull(.scalar(String.self))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(url: String) {
      self.init(unsafeResultMap: ["__typename": "Image", "url": url])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var url: String {
      get {
        return resultMap["url"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "url")
      }
    }
  }
}

public struct LocationItem: GraphQLFragment {
  public static let fragmentDefinition =
    "fragment LocationItem on Location {\n  __typename\n  id\n  name\n  distance\n  phone\n  url\n  shareUrl\n  address {\n    __typename\n    id\n    suite\n    building\n    streetAddress\n    street\n    postalcode\n    city\n    state\n    country\n    centre\n  }\n}"

  public static let possibleTypes = ["Location"]

  public static let selections: [GraphQLSelection] = [
    GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
    GraphQLField("id", type: .nonNull(.scalar(GraphQLID.self))),
    GraphQLField("name", type: .nonNull(.scalar(String.self))),
    GraphQLField("distance", type: .scalar(Double.self)),
    GraphQLField("phone", type: .scalar(String.self)),
    GraphQLField("url", type: .scalar(String.self)),
    GraphQLField("shareUrl", type: .nonNull(.scalar(String.self))),
    GraphQLField("address", type: .nonNull(.object(Address.selections))),
  ]

  public private(set) var resultMap: ResultMap

  public init(unsafeResultMap: ResultMap) {
    self.resultMap = unsafeResultMap
  }

  public init(id: GraphQLID, name: String, distance: Double? = nil, phone: String? = nil, url: String? = nil, shareUrl: String, address: Address) {
    self.init(unsafeResultMap: ["__typename": "Location", "id": id, "name": name, "distance": distance, "phone": phone, "url": url, "shareUrl": shareUrl, "address": address.resultMap])
  }

  public var __typename: String {
    get {
      return resultMap["__typename"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "__typename")
    }
  }

  public var id: GraphQLID {
    get {
      return resultMap["id"]! as! GraphQLID
    }
    set {
      resultMap.updateValue(newValue, forKey: "id")
    }
  }

  public var name: String {
    get {
      return resultMap["name"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "name")
    }
  }

  public var distance: Double? {
    get {
      return resultMap["distance"] as? Double
    }
    set {
      resultMap.updateValue(newValue, forKey: "distance")
    }
  }

  public var phone: String? {
    get {
      return resultMap["phone"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "phone")
    }
  }

  public var url: String? {
    get {
      return resultMap["url"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "url")
    }
  }

  public var shareUrl: String {
    get {
      return resultMap["shareUrl"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "shareUrl")
    }
  }

  public var address: Address {
    get {
      return Address(unsafeResultMap: resultMap["address"]! as! ResultMap)
    }
    set {
      resultMap.updateValue(newValue.resultMap, forKey: "address")
    }
  }

  public struct Address: GraphQLSelectionSet {
    public static let possibleTypes = ["Address"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("id", type: .nonNull(.scalar(GraphQLID.self))),
      GraphQLField("suite", type: .scalar(String.self)),
      GraphQLField("building", type: .scalar(String.self)),
      GraphQLField("streetAddress", type: .nonNull(.scalar(String.self))),
      GraphQLField("street", type: .nonNull(.scalar(String.self))),
      GraphQLField("postalcode", type: .nonNull(.scalar(String.self))),
      GraphQLField("city", type: .nonNull(.scalar(String.self))),
      GraphQLField("state", type: .nonNull(.scalar(String.self))),
      GraphQLField("country", type: .nonNull(.scalar(String.self))),
      GraphQLField("centre", type: .nonNull(.list(.nonNull(.scalar(Double.self))))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(id: GraphQLID, suite: String? = nil, building: String? = nil, streetAddress: String, street: String, postalcode: String, city: String, state: String, country: String, centre: [Double]) {
      self.init(unsafeResultMap: ["__typename": "Address", "id": id, "suite": suite, "building": building, "streetAddress": streetAddress, "street": street, "postalcode": postalcode, "city": city, "state": state, "country": country, "centre": centre])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var id: GraphQLID {
      get {
        return resultMap["id"]! as! GraphQLID
      }
      set {
        resultMap.updateValue(newValue, forKey: "id")
      }
    }

    public var suite: String? {
      get {
        return resultMap["suite"] as? String
      }
      set {
        resultMap.updateValue(newValue, forKey: "suite")
      }
    }

    public var building: String? {
      get {
        return resultMap["building"] as? String
      }
      set {
        resultMap.updateValue(newValue, forKey: "building")
      }
    }

    public var streetAddress: String {
      get {
        return resultMap["streetAddress"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "streetAddress")
      }
    }

    public var street: String {
      get {
        return resultMap["street"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "street")
      }
    }

    public var postalcode: String {
      get {
        return resultMap["postalcode"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "postalcode")
      }
    }

    public var city: String {
      get {
        return resultMap["city"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "city")
      }
    }

    public var state: String {
      get {
        return resultMap["state"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "state")
      }
    }

    public var country: String {
      get {
        return resultMap["country"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "country")
      }
    }

    public var centre: [Double] {
      get {
        return resultMap["centre"]! as! [Double]
      }
      set {
        resultMap.updateValue(newValue, forKey: "centre")
      }
    }
  }
}

public struct OfferLocationItem: GraphQLFragment {
  public static let fragmentDefinition =
    "fragment OfferLocationItem on Location {\n  __typename\n  id\n  name\n  distance\n  phone\n  url\n  address {\n    __typename\n    id\n    suite\n    building\n    streetAddress\n    street\n    postalcode\n    city\n    state\n    country\n    centre\n  }\n}"

  public static let possibleTypes = ["Location"]

  public static let selections: [GraphQLSelection] = [
    GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
    GraphQLField("id", type: .nonNull(.scalar(GraphQLID.self))),
    GraphQLField("name", type: .nonNull(.scalar(String.self))),
    GraphQLField("distance", type: .scalar(Double.self)),
    GraphQLField("phone", type: .scalar(String.self)),
    GraphQLField("url", type: .scalar(String.self)),
    GraphQLField("address", type: .nonNull(.object(Address.selections))),
  ]

  public private(set) var resultMap: ResultMap

  public init(unsafeResultMap: ResultMap) {
    self.resultMap = unsafeResultMap
  }

  public init(id: GraphQLID, name: String, distance: Double? = nil, phone: String? = nil, url: String? = nil, address: Address) {
    self.init(unsafeResultMap: ["__typename": "Location", "id": id, "name": name, "distance": distance, "phone": phone, "url": url, "address": address.resultMap])
  }

  public var __typename: String {
    get {
      return resultMap["__typename"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "__typename")
    }
  }

  public var id: GraphQLID {
    get {
      return resultMap["id"]! as! GraphQLID
    }
    set {
      resultMap.updateValue(newValue, forKey: "id")
    }
  }

  public var name: String {
    get {
      return resultMap["name"]! as! String
    }
    set {
      resultMap.updateValue(newValue, forKey: "name")
    }
  }

  public var distance: Double? {
    get {
      return resultMap["distance"] as? Double
    }
    set {
      resultMap.updateValue(newValue, forKey: "distance")
    }
  }

  public var phone: String? {
    get {
      return resultMap["phone"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "phone")
    }
  }

  public var url: String? {
    get {
      return resultMap["url"] as? String
    }
    set {
      resultMap.updateValue(newValue, forKey: "url")
    }
  }

  public var address: Address {
    get {
      return Address(unsafeResultMap: resultMap["address"]! as! ResultMap)
    }
    set {
      resultMap.updateValue(newValue.resultMap, forKey: "address")
    }
  }

  public struct Address: GraphQLSelectionSet {
    public static let possibleTypes = ["Address"]

    public static let selections: [GraphQLSelection] = [
      GraphQLField("__typename", type: .nonNull(.scalar(String.self))),
      GraphQLField("id", type: .nonNull(.scalar(GraphQLID.self))),
      GraphQLField("suite", type: .scalar(String.self)),
      GraphQLField("building", type: .scalar(String.self)),
      GraphQLField("streetAddress", type: .nonNull(.scalar(String.self))),
      GraphQLField("street", type: .nonNull(.scalar(String.self))),
      GraphQLField("postalcode", type: .nonNull(.scalar(String.self))),
      GraphQLField("city", type: .nonNull(.scalar(String.self))),
      GraphQLField("state", type: .nonNull(.scalar(String.self))),
      GraphQLField("country", type: .nonNull(.scalar(String.self))),
      GraphQLField("centre", type: .nonNull(.list(.nonNull(.scalar(Double.self))))),
    ]

    public private(set) var resultMap: ResultMap

    public init(unsafeResultMap: ResultMap) {
      self.resultMap = unsafeResultMap
    }

    public init(id: GraphQLID, suite: String? = nil, building: String? = nil, streetAddress: String, street: String, postalcode: String, city: String, state: String, country: String, centre: [Double]) {
      self.init(unsafeResultMap: ["__typename": "Address", "id": id, "suite": suite, "building": building, "streetAddress": streetAddress, "street": street, "postalcode": postalcode, "city": city, "state": state, "country": country, "centre": centre])
    }

    public var __typename: String {
      get {
        return resultMap["__typename"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "__typename")
      }
    }

    public var id: GraphQLID {
      get {
        return resultMap["id"]! as! GraphQLID
      }
      set {
        resultMap.updateValue(newValue, forKey: "id")
      }
    }

    public var suite: String? {
      get {
        return resultMap["suite"] as? String
      }
      set {
        resultMap.updateValue(newValue, forKey: "suite")
      }
    }

    public var building: String? {
      get {
        return resultMap["building"] as? String
      }
      set {
        resultMap.updateValue(newValue, forKey: "building")
      }
    }

    public var streetAddress: String {
      get {
        return resultMap["streetAddress"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "streetAddress")
      }
    }

    public var street: String {
      get {
        return resultMap["street"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "street")
      }
    }

    public var postalcode: String {
      get {
        return resultMap["postalcode"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "postalcode")
      }
    }

    public var city: String {
      get {
        return resultMap["city"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "city")
      }
    }

    public var state: String {
      get {
        return resultMap["state"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "state")
      }
    }

    public var country: String {
      get {
        return resultMap["country"]! as! String
      }
      set {
        resultMap.updateValue(newValue, forKey: "country")
      }
    }

    public var centre: [Double] {
      get {
        return resultMap["centre"]! as! [Double]
      }
      set {
        resultMap.updateValue(newValue, forKey: "centre")
      }
    }
  }
}