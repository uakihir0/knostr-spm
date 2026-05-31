#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KnostrCoreNip05Result, KnostrCoreNip05ResultCompanion, KnostrCoreNip19Entity, KnostrCoreNostrConfig, KnostrCoreNostrEvent, KnostrCoreNostrEventCompanion, KnostrCoreNostrFactory, KnostrCoreNostrFilter, KnostrCoreNostrFilterCompanion, KnostrCoreNostrProfile, KnostrCoreNostrProfileCompanion, KnostrCoreRelayConnection, KnostrCoreRelayPool, KnostrCoreResponse<T>, KnostrCoreUnsignedEvent, KnostrKhttpclientWebsocketRequest, KnostrKnostrFactoryCompanion, KnostrKotlinArray<T>, KnostrKotlinByteArray, KnostrKotlinByteIterator, KnostrKotlinException, KnostrKotlinIllegalStateException, KnostrKotlinNothing, KnostrKotlinPair<__covariant A, __covariant B>, KnostrKotlinRuntimeException, KnostrKotlinThrowable, KnostrKotlinx_serialization_coreSerialKind, KnostrKotlinx_serialization_coreSerializersModule, KnostrKtor_httpHttpMethod, KnostrKtor_httpHttpMethodCompanion, KnostrSocialLnurlPayInfo, KnostrSocialLnurlPayInfoCompanion, KnostrSocialNostrArticle, KnostrSocialNostrBadge, KnostrSocialNostrChannel, KnostrSocialNostrChannelMessage, KnostrSocialNostrDirectMessage, KnostrSocialNostrFileMetadata, KnostrSocialNostrList, KnostrSocialNostrMedia, KnostrSocialNostrNote, KnostrSocialNostrPoll, KnostrSocialNostrPollOption, KnostrSocialNostrReaction, KnostrSocialNostrRelationship, KnostrSocialNostrRelayListEntry, KnostrSocialNostrSocialConfig, KnostrSocialNostrSocialFactory, KnostrSocialNostrThread, KnostrSocialNostrUser, KnostrSocialNostrUserStatus, KnostrSocialNostrZap, KnostrSocialNwcTransaction, KnostrSocialNwcTransactionCompanion;

@protocol KnostrCoreEventResource, KnostrCoreNipResource, KnostrCoreNostr, KnostrCoreNostrSigner, KnostrCoreRelayResource, KnostrKotlinAnnotation, KnostrKotlinCoroutineContext, KnostrKotlinCoroutineContextElement, KnostrKotlinCoroutineContextKey, KnostrKotlinFunction, KnostrKotlinIterator, KnostrKotlinKAnnotatedElement, KnostrKotlinKClass, KnostrKotlinKClassifier, KnostrKotlinKDeclarationContainer, KnostrKotlinSuspendFunction1, KnostrKotlinx_coroutines_coreCoroutineScope, KnostrKotlinx_serialization_coreCompositeDecoder, KnostrKotlinx_serialization_coreCompositeEncoder, KnostrKotlinx_serialization_coreDecoder, KnostrKotlinx_serialization_coreDeserializationStrategy, KnostrKotlinx_serialization_coreEncoder, KnostrKotlinx_serialization_coreKSerializer, KnostrKotlinx_serialization_coreSerialDescriptor, KnostrKotlinx_serialization_coreSerializationStrategy, KnostrKotlinx_serialization_coreSerializersModuleCollector, KnostrSocialAppDataResource, KnostrSocialArticleResource, KnostrSocialBadgeResource, KnostrSocialBookmarkResource, KnostrSocialChannelResource, KnostrSocialFeedResource, KnostrSocialInterestResource, KnostrSocialListResource, KnostrSocialMediaResource, KnostrSocialMessageResource, KnostrSocialMuteResource, KnostrSocialNostrSocial, KnostrSocialPinResource, KnostrSocialPollResource, KnostrSocialReactionResource, KnostrSocialRelayListResource, KnostrSocialSearchResource, KnostrSocialUserResource, KnostrSocialWalletResource, KnostrSocialZapResource;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KnostrBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KnostrBase (KnostrBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KnostrMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KnostrMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKnostrKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KnostrNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KnostrByte : KnostrNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KnostrUByte : KnostrNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KnostrShort : KnostrNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KnostrUShort : KnostrNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KnostrInt : KnostrNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KnostrUInt : KnostrNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KnostrLong : KnostrNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KnostrULong : KnostrNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KnostrFloat : KnostrNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KnostrDouble : KnostrNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KnostrBoolean : KnostrNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KnostrFactory")))
@interface KnostrKnostrFactory : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KnostrKnostrFactoryCompanion *companion __attribute__((swift_name("companion")));
- (id<KnostrCoreNostr>)nostrConfig:(KnostrCoreNostrConfig *)config __attribute__((swift_name("nostr(config:)")));
- (id<KnostrSocialNostrSocial>)socialNostr:(id<KnostrCoreNostr>)nostr __attribute__((swift_name("social(nostr:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KnostrFactory.Companion")))
@interface KnostrKnostrFactoryCompanion : KnostrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KnostrKnostrFactoryCompanion *shared __attribute__((swift_name("shared")));

/**
 * 参照を行わないとフレームワーク内でオミットされるため。
 * Because it is omitted in the framework if no reference is made.
 */
- (KnostrCoreNostrFactory *)getNostrFactory __attribute__((swift_name("getNostrFactory()")));
- (KnostrSocialNostrSocialFactory *)getNostrSocialFactory __attribute__((swift_name("getNostrSocialFactory()")));
@end

__attribute__((swift_name("CoreNostr")))
@protocol KnostrCoreNostr
@required
- (KnostrCoreNostrConfig *)config __attribute__((swift_name("config()")));
- (id<KnostrCoreEventResource>)events __attribute__((swift_name("events()")));
- (id<KnostrCoreNipResource>)nip __attribute__((swift_name("nip()")));
- (KnostrCoreRelayPool *)relayPool __attribute__((swift_name("relayPool()")));
- (id<KnostrCoreRelayResource>)relays __attribute__((swift_name("relays()")));
- (id<KnostrCoreNostrSigner> _Nullable)signer __attribute__((swift_name("signer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNostrConfig")))
@interface KnostrCoreNostrConfig : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Whether to automatically respond to relay AUTH challenges (NIP-42) */
@property BOOL autoAuth __attribute__((swift_name("autoAuth")));

/** Whether to automatically reconnect on disconnect */
@property BOOL autoReconnect __attribute__((swift_name("autoReconnect")));

/** WebSocket connect timeout in milliseconds */
@property int64_t connectTimeoutMs __attribute__((swift_name("connectTimeoutMs")));

/** Maximum number of reconnection attempts */
@property int32_t maxReconnectAttempts __attribute__((swift_name("maxReconnectAttempts")));

/** Query timeout in milliseconds (waiting for EOSE) */
@property int64_t queryTimeoutMs __attribute__((swift_name("queryTimeoutMs")));

/** Initial reconnection delay in milliseconds (exponential backoff) */
@property int64_t reconnectDelayMs __attribute__((swift_name("reconnectDelayMs")));

/** Relay WebSocket URLs (e.g., wss://relay.damus.io) */
@property NSArray<NSString *> *relayUrls __attribute__((swift_name("relayUrls")));

/** Signer for event signing (null for read-only) */
@property id<KnostrCoreNostrSigner> _Nullable signer __attribute__((swift_name("signer")));
@end

__attribute__((swift_name("SocialNostrSocial")))
@protocol KnostrSocialNostrSocial
@required
- (id<KnostrSocialAppDataResource>)appData __attribute__((swift_name("appData()")));
- (id<KnostrSocialArticleResource>)articles __attribute__((swift_name("articles()")));
- (id<KnostrSocialBadgeResource>)badges __attribute__((swift_name("badges()")));
- (id<KnostrSocialBookmarkResource>)bookmarks __attribute__((swift_name("bookmarks()")));
- (id<KnostrSocialChannelResource>)channels __attribute__((swift_name("channels()")));
- (id<KnostrSocialFeedResource>)feed __attribute__((swift_name("feed()")));
- (id<KnostrSocialInterestResource>)interests __attribute__((swift_name("interests()")));
- (id<KnostrSocialListResource>)lists __attribute__((swift_name("lists()")));
- (id<KnostrSocialMediaResource>)media __attribute__((swift_name("media()")));
- (id<KnostrSocialMessageResource>)messages __attribute__((swift_name("messages()")));
- (id<KnostrSocialMuteResource>)mutes __attribute__((swift_name("mutes()")));
- (id<KnostrCoreNostr>)nostr __attribute__((swift_name("nostr()")));
- (id<KnostrSocialPinResource>)pins __attribute__((swift_name("pins()")));
- (id<KnostrSocialPollResource>)polls __attribute__((swift_name("polls()")));
- (id<KnostrSocialReactionResource>)reactions __attribute__((swift_name("reactions()")));
- (id<KnostrSocialRelayListResource>)relayList __attribute__((swift_name("relayList()")));
- (id<KnostrSocialSearchResource>)search __attribute__((swift_name("search()")));
- (id<KnostrSocialUserResource>)users __attribute__((swift_name("users()")));
- (id<KnostrSocialWalletResource>)wallet __attribute__((swift_name("wallet()")));
- (id<KnostrSocialZapResource>)zaps __attribute__((swift_name("zaps()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNostrFactory")))
@interface KnostrCoreNostrFactory : KnostrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nostrFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KnostrCoreNostrFactory *shared __attribute__((swift_name("shared")));

/** Create read-only (no signing capability) */
- (id<KnostrCoreNostr>)instanceRelays:(NSArray<NSString *> *)relays __attribute__((swift_name("instance(relays:)")));

/** Create with full config */
- (id<KnostrCoreNostr>)instanceConfig:(KnostrCoreNostrConfig *)config __attribute__((swift_name("instance(config:)")));

/** Create with private key and relay list */
- (id<KnostrCoreNostr>)instancePrivateKeyHex:(NSString *)privateKeyHex relays:(NSArray<NSString *> *)relays __attribute__((swift_name("instance(privateKeyHex:relays:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrSocialFactory")))
@interface KnostrSocialNostrSocialFactory : KnostrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nostrSocialFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KnostrSocialNostrSocialFactory *shared __attribute__((swift_name("shared")));
- (id<KnostrSocialNostrSocial>)instanceNostr:(id<KnostrCoreNostr>)nostr config:(KnostrSocialNostrSocialConfig *)config __attribute__((swift_name("instance(nostr:config:)")));
@end

__attribute__((swift_name("CoreEventResource")))
@protocol KnostrCoreEventResource
@required

/** Delete an event by publishing a kind:5 deletion event
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteEventEventId:(NSString *)eventId reason:(NSString *)reason completionHandler:(void (^)(KnostrCoreResponse<KnostrBoolean *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteEvent(eventId:reason:completionHandler:)")));
- (KnostrCoreResponse<KnostrBoolean *> *)deleteEventBlockingEventId:(NSString *)eventId reason:(NSString *)reason __attribute__((swift_name("deleteEventBlocking(eventId:reason:)")));

/** Publish a signed event to all connected relays
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)publishEventEvent:(KnostrCoreNostrEvent *)event completionHandler:(void (^)(KnostrCoreResponse<KnostrBoolean *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("publishEvent(event:completionHandler:)")));
- (KnostrCoreResponse<KnostrBoolean *> *)publishEventBlockingEvent:(KnostrCoreNostrEvent *)event __attribute__((swift_name("publishEventBlocking(event:)")));

/** Query events matching the given filters
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)queryEventsFilters:(NSArray<KnostrCoreNostrFilter *> *)filters completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrCoreNostrEvent *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("queryEvents(filters:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrCoreNostrEvent *> *> *)queryEventsBlockingFilters:(NSArray<KnostrCoreNostrFilter *> *)filters __attribute__((swift_name("queryEventsBlocking(filters:)")));
@end

__attribute__((swift_name("CoreNipResource")))
@protocol KnostrCoreNipResource
@required

/** Decode a NIP-19 bech32 string */
- (KnostrCoreNip19Entity *)decodeNip19Encoded:(NSString *)encoded __attribute__((swift_name("decodeNip19(encoded:)")));

/** Encode an addressable event as naddr (TLV) */
- (NSString *)encodeNaddrIdentifier:(NSString *)identifier pubkey:(NSString *)pubkey kind:(int32_t)kind relays:(NSArray<NSString *> *)relays __attribute__((swift_name("encodeNaddr(identifier:pubkey:kind:relays:)")));

/** Encode an event ID with relay hints as nevent (TLV) */
- (NSString *)encodeNeventEventId:(NSString *)eventId relays:(NSArray<NSString *> *)relays author:(NSString * _Nullable)author __attribute__((swift_name("encodeNevent(eventId:relays:author:)")));

/** Encode an event ID as note */
- (NSString *)encodeNoteEventId:(NSString *)eventId __attribute__((swift_name("encodeNote(eventId:)")));

/** Encode a public key with relay hints as nprofile (TLV) */
- (NSString *)encodeNprofilePubkey:(NSString *)pubkey relays:(NSArray<NSString *> *)relays __attribute__((swift_name("encodeNprofile(pubkey:relays:)")));

/** Encode a public key as npub */
- (NSString *)encodeNpubPubkey:(NSString *)pubkey __attribute__((swift_name("encodeNpub(pubkey:)")));

/** Encode a secret key as nsec */
- (NSString *)encodeNsecSeckey:(NSString *)seckey __attribute__((swift_name("encodeNsec(seckey:)")));

/** Resolve a NIP-05 address (e.g., "alice@example.com")
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resolveNip05Address:(NSString *)address completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNip05Result *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resolveNip05(address:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNip05Result *> *)resolveNip05BlockingAddress:(NSString *)address __attribute__((swift_name("resolveNip05Blocking(address:)")));
@end


/**
 * Manages multiple relay connections.
 * Handles event deduplication, subscription distribution, and event publishing.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelayPool")))
@interface KnostrCoreRelayPool : KnostrBase

/**
 * Manages multiple relay connections.
 * Handles event deduplication, subscription distribution, and event publishing.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Manages multiple relay connections.
 * Handles event deduplication, subscription distribution, and event publishing.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Add a relay connection */
- (KnostrCoreRelayConnection *)addRelayUrl:(NSString *)url config:(KnostrCoreNostrConfig * _Nullable)config __attribute__((swift_name("addRelay(url:config:)")));

/** Clear seen event IDs cache */
- (void)clearSeenEvents __attribute__((swift_name("clearSeenEvents()")));

/** Connect to all relays using the provided CoroutineScope
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectAllScope:(id<KnostrKotlinx_coroutines_coreCoroutineScope>)scope completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("connectAll(scope:completionHandler:)")));

/** Disconnect from all relays */
- (void)disconnectAll __attribute__((swift_name("disconnectAll()")));

/** Get list of connected relay URLs */
- (NSArray<NSString *> *)getConnectedRelays __attribute__((swift_name("getConnectedRelays()")));

/** Publish an event to all connected relays
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)publishEventEvent:(KnostrCoreNostrEvent *)event completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("publishEvent(event:completionHandler:)")));

/** Remove a relay connection */
- (void)removeRelayUrl:(NSString *)url __attribute__((swift_name("removeRelay(url:)")));

/** Subscribe to events across all connected relays
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)subscribeFilters:(NSArray<KnostrCoreNostrFilter *> *)filters onEvent:(void (^)(KnostrCoreNostrEvent *))onEvent onEose:(void (^ _Nullable)(NSString *))onEose completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("subscribe(filters:onEvent:onEose:completionHandler:)")));

/** Unsubscribe from a subscription
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unsubscribeSubscriptionId:(NSString *)subscriptionId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("unsubscribe(subscriptionId:completionHandler:)")));

/** Whether to automatically respond to AUTH challenges (NIP-42) */
@property BOOL autoAuth __attribute__((swift_name("autoAuth")));

/** Whether any relay is currently connected */
@property (readonly) BOOL isConnected __attribute__((swift_name("isConnected")));
@property void (^ _Nullable onAuthCallback)(NSString *, NSString *) __attribute__((swift_name("onAuthCallback")));
@property void (^ _Nullable onErrorCallback)(NSString *, KnostrKotlinException *) __attribute__((swift_name("onErrorCallback")));

/** Callbacks for pool-level events */
@property void (^ _Nullable onEventCallback)(NSString *, KnostrCoreNostrEvent *) __attribute__((swift_name("onEventCallback")));
@property void (^ _Nullable onNoticeCallback)(NSString *, NSString *) __attribute__((swift_name("onNoticeCallback")));
@property void (^ _Nullable onOkCallback)(NSString *, KnostrBoolean *, NSString *) __attribute__((swift_name("onOkCallback")));

/** Signer for auto-auth (NIP-42) */
@property id<KnostrCoreNostrSigner> _Nullable signer __attribute__((swift_name("signer")));
@end

__attribute__((swift_name("CoreRelayResource")))
@protocol KnostrCoreRelayResource
@required

/** Connect to all configured relays
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("connect(completionHandler:)")));
- (void)connectBlocking __attribute__((swift_name("connectBlocking()")));

/** Disconnect from all relays
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disconnectWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("disconnect(completionHandler:)")));
- (void)disconnectBlocking __attribute__((swift_name("disconnectBlocking()")));

/** Get list of currently connected relay URLs */
- (NSArray<NSString *> *)getConnectedRelays __attribute__((swift_name("getConnectedRelays()")));
@end


/**
 * Interface for signing Nostr events.
 * Implementations must provide Schnorr signature (BIP-340) over secp256k1.
 */
__attribute__((swift_name("CoreNostrSigner")))
@protocol KnostrCoreNostrSigner
@required

/** Compute the event ID (SHA-256 hash of serialized event) */
- (NSString *)computeEventIdEvent:(KnostrCoreUnsignedEvent *)event __attribute__((swift_name("computeEventId(event:)")));

/** Get the public key (hex encoded, 64 chars) */
- (NSString *)getPublicKey __attribute__((swift_name("getPublicKey()")));

/** Decrypt a NIP-04 (legacy) payload from the given sender */
- (NSString *)nip04DecryptCiphertext:(NSString *)ciphertext senderPubkey:(NSString *)senderPubkey __attribute__((swift_name("nip04Decrypt(ciphertext:senderPubkey:)")));

/** Encrypt plaintext using NIP-04 (legacy) for the given recipient */
- (NSString *)nip04EncryptPlaintext:(NSString *)plaintext recipientPubkey:(NSString *)recipientPubkey __attribute__((swift_name("nip04Encrypt(plaintext:recipientPubkey:)")));

/** Decrypt a NIP-44 v2 payload from the given sender */
- (NSString *)nip44DecryptPayload:(NSString *)payload senderPubkey:(NSString *)senderPubkey __attribute__((swift_name("nip44Decrypt(payload:senderPubkey:)")));

/** Encrypt plaintext using NIP-44 v2 for the given recipient */
- (NSString *)nip44EncryptPlaintext:(NSString *)plaintext recipientPubkey:(NSString *)recipientPubkey __attribute__((swift_name("nip44Encrypt(plaintext:recipientPubkey:)")));

/** Sign an unsigned event, producing a complete NostrEvent with id and sig */
- (KnostrCoreNostrEvent *)signEvent:(KnostrCoreUnsignedEvent *)event __attribute__((swift_name("sign(event:)")));
@end

__attribute__((swift_name("SocialAppDataResource")))
@protocol KnostrSocialAppDataResource
@required

/** Get own app-specific data by d-tag
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAppDataDTag:(NSString *)dTag completionHandler:(void (^)(KnostrCoreResponse<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAppData(dTag:completionHandler:)")));
- (KnostrCoreResponse<NSString *> *)getAppDataBlockingDTag:(NSString *)dTag __attribute__((swift_name("getAppDataBlocking(dTag:)")));

/** Get another user's app-specific data by pubkey and d-tag
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAppDataByPubkeyPubkey:(NSString *)pubkey dTag:(NSString *)dTag completionHandler:(void (^)(KnostrCoreResponse<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAppDataByPubkey(pubkey:dTag:completionHandler:)")));
- (KnostrCoreResponse<NSString *> *)getAppDataByPubkeyBlockingPubkey:(NSString *)pubkey dTag:(NSString *)dTag __attribute__((swift_name("getAppDataByPubkeyBlocking(pubkey:dTag:)")));

/** Set app-specific data (NIP-78, kind:30078). Content is stored as-is.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setAppDataDTag:(NSString *)dTag content:(NSString *)content completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setAppData(dTag:content:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)setAppDataBlockingDTag:(NSString *)dTag content:(NSString *)content __attribute__((swift_name("setAppDataBlocking(dTag:content:)")));
@end

__attribute__((swift_name("SocialArticleResource")))
@protocol KnostrSocialArticleResource
@required

/** Delete an article
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteArticleIdentifier:(NSString *)identifier reason:(NSString *)reason completionHandler:(void (^)(KnostrCoreResponse<KnostrBoolean *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteArticle(identifier:reason:completionHandler:)")));
- (KnostrCoreResponse<KnostrBoolean *> *)deleteArticleBlockingIdentifier:(NSString *)identifier reason:(NSString *)reason __attribute__((swift_name("deleteArticleBlocking(identifier:reason:)")));

/** Get an article by author pubkey and d-tag identifier
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getArticlePubkey:(NSString *)pubkey identifier:(NSString *)identifier completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrArticle *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getArticle(pubkey:identifier:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrArticle *> *)getArticleBlockingPubkey:(NSString *)pubkey identifier:(NSString *)identifier __attribute__((swift_name("getArticleBlocking(pubkey:identifier:)")));

/** Get articles by a user
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserArticlesPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrArticle *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserArticles(pubkey:since:until:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrArticle *> *> *)getUserArticlesBlockingPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit __attribute__((swift_name("getUserArticlesBlocking(pubkey:since:until:limit:)")));

/** Publish a long-form article (NIP-23, kind:30023)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)publishArticleIdentifier:(NSString *)identifier title:(NSString *)title content:(NSString *)content summary:(NSString *)summary image:(NSString * _Nullable)image hashtags:(NSArray<NSString *> *)hashtags publishedAt:(KnostrLong * _Nullable)publishedAt expiry:(KnostrLong * _Nullable)expiry sensitive:(BOOL)sensitive completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("publishArticle(identifier:title:content:summary:image:hashtags:publishedAt:expiry:sensitive:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)publishArticleBlockingIdentifier:(NSString *)identifier title:(NSString *)title content:(NSString *)content summary:(NSString *)summary image:(NSString * _Nullable)image hashtags:(NSArray<NSString *> *)hashtags publishedAt:(KnostrLong * _Nullable)publishedAt expiry:(KnostrLong * _Nullable)expiry sensitive:(BOOL)sensitive __attribute__((swift_name("publishArticleBlocking(identifier:title:content:summary:image:hashtags:publishedAt:expiry:sensitive:)")));
@end

__attribute__((swift_name("SocialBadgeResource")))
@protocol KnostrSocialBadgeResource
@required

/** Award a badge to recipients (NIP-58, kind:8)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awardBadgeBadgeDTag:(NSString *)badgeDTag recipientPubkeys:(NSArray<NSString *> *)recipientPubkeys completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awardBadge(badgeDTag:recipientPubkeys:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)awardBadgeBlockingBadgeDTag:(NSString *)badgeDTag recipientPubkeys:(NSArray<NSString *> *)recipientPubkeys __attribute__((swift_name("awardBadgeBlocking(badgeDTag:recipientPubkeys:)")));

/** Define a badge (NIP-58, kind:30009)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)defineBadgeDTag:(NSString *)dTag name:(NSString *)name description:(NSString *)description image:(NSString *)image thumbImage:(NSString *)thumbImage completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("defineBadge(dTag:name:description:image:thumbImage:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)defineBadgeBlockingDTag:(NSString *)dTag name:(NSString *)name description:(NSString *)description image:(NSString *)image thumbImage:(NSString *)thumbImage __attribute__((swift_name("defineBadgeBlocking(dTag:name:description:image:thumbImage:)")));

/** Get badge definition by author pubkey and d-tag
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBadgeDefinitionPubkey:(NSString *)pubkey dTag:(NSString *)dTag completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrBadge *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBadgeDefinition(pubkey:dTag:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrBadge *> *)getBadgeDefinitionBlockingPubkey:(NSString *)pubkey dTag:(NSString *)dTag __attribute__((swift_name("getBadgeDefinitionBlocking(pubkey:dTag:)")));

/** Get profile badges for a user
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getProfileBadgesPubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrBadge *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getProfileBadges(pubkey:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrBadge *> *> *)getProfileBadgesBlockingPubkey:(NSString *)pubkey __attribute__((swift_name("getProfileBadgesBlocking(pubkey:)")));

/** Set profile badges (NIP-58, kind:30008)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setProfileBadgesBadgeRefs:(NSArray<KnostrKotlinPair<NSString *, NSString *> *> *)badgeRefs completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setProfileBadges(badgeRefs:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)setProfileBadgesBlockingBadgeRefs:(NSArray<KnostrKotlinPair<NSString *, NSString *> *> *)badgeRefs __attribute__((swift_name("setProfileBadgesBlocking(badgeRefs:)")));
@end

__attribute__((swift_name("SocialBookmarkResource")))
@protocol KnostrSocialBookmarkResource
@required

/** Bookmark a note (NIP-51 kind:10003)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bookmarkEventId:(NSString *)eventId completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bookmark(eventId:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)bookmarkBlockingEventId:(NSString *)eventId __attribute__((swift_name("bookmarkBlocking(eventId:)")));

/** Get list of bookmarked event IDs
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBookmarksWithCompletionHandler:(void (^)(KnostrCoreResponse<NSArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBookmarks(completionHandler:)")));
- (KnostrCoreResponse<NSArray<NSString *> *> *)getBookmarksBlocking __attribute__((swift_name("getBookmarksBlocking()")));

/** Remove a note from bookmarks
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unbookmarkEventId:(NSString *)eventId completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unbookmark(eventId:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)unbookmarkBlockingEventId:(NSString *)eventId __attribute__((swift_name("unbookmarkBlocking(eventId:)")));
@end

__attribute__((swift_name("SocialChannelResource")))
@protocol KnostrSocialChannelResource
@required

/** Create a channel (NIP-28 kind:40)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createChannelName:(NSString *)name about:(NSString *)about picture:(NSString *)picture completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createChannel(name:about:picture:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)createChannelBlockingName:(NSString *)name about:(NSString *)about picture:(NSString *)picture __attribute__((swift_name("createChannelBlocking(name:about:picture:)")));

/** Get channel info
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getChannelChannelId:(NSString *)channelId completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrChannel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getChannel(channelId:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrChannel *> *)getChannelBlockingChannelId:(NSString *)channelId __attribute__((swift_name("getChannelBlocking(channelId:)")));

/** Get channel messages
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getChannelMessagesChannelId:(NSString *)channelId since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrChannelMessage *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getChannelMessages(channelId:since:until:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrChannelMessage *> *> *)getChannelMessagesBlockingChannelId:(NSString *)channelId since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit __attribute__((swift_name("getChannelMessagesBlocking(channelId:since:until:limit:)")));

/** Get list of channels
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getChannelsLimit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrChannel *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getChannels(limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrChannel *> *> *)getChannelsBlockingLimit:(int32_t)limit __attribute__((swift_name("getChannelsBlocking(limit:)")));

/** Get user's joined channels list (NIP-51, kind:10005)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getJoinedChannelsWithCompletionHandler:(void (^)(KnostrCoreResponse<NSArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getJoinedChannels(completionHandler:)")));
- (KnostrCoreResponse<NSArray<NSString *> *> *)getJoinedChannelsBlocking __attribute__((swift_name("getJoinedChannelsBlocking()")));

/** Join a channel (add to kind:10005 list)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinChannelChannelId:(NSString *)channelId completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("joinChannel(channelId:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)joinChannelBlockingChannelId:(NSString *)channelId __attribute__((swift_name("joinChannelBlocking(channelId:)")));

/** Leave a channel (remove from kind:10005 list)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)leaveChannelChannelId:(NSString *)channelId completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("leaveChannel(channelId:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)leaveChannelBlockingChannelId:(NSString *)channelId __attribute__((swift_name("leaveChannelBlocking(channelId:)")));

/** Send a message to a channel (kind:42)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessageChannelId:(NSString *)channelId content:(NSString *)content completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendMessage(channelId:content:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)sendMessageBlockingChannelId:(NSString *)channelId content:(NSString *)content __attribute__((swift_name("sendMessageBlocking(channelId:content:)")));

/** Update channel metadata (kind:41)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateChannelChannelId:(NSString *)channelId name:(NSString * _Nullable)name about:(NSString * _Nullable)about picture:(NSString * _Nullable)picture completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateChannel(channelId:name:about:picture:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)updateChannelBlockingChannelId:(NSString *)channelId name:(NSString * _Nullable)name about:(NSString * _Nullable)about picture:(NSString * _Nullable)picture __attribute__((swift_name("updateChannelBlocking(channelId:name:about:picture:)")));
@end

__attribute__((swift_name("SocialFeedResource")))
@protocol KnostrSocialFeedResource
@required

/** Delete a note (kind:5)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteEventId:(NSString *)eventId reason:(NSString *)reason completionHandler:(void (^)(KnostrCoreResponse<KnostrBoolean *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(eventId:reason:completionHandler:)")));
- (KnostrCoreResponse<KnostrBoolean *> *)deleteBlockingEventId:(NSString *)eventId reason:(NSString *)reason __attribute__((swift_name("deleteBlocking(eventId:reason:)")));

/** Get home feed (posts from followed users)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHomeFeedSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit excludeSensitive:(BOOL)excludeSensitive completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHomeFeed(since:until:limit:excludeSensitive:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> *)getHomeFeedBlockingSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit excludeSensitive:(BOOL)excludeSensitive __attribute__((swift_name("getHomeFeedBlocking(since:until:limit:excludeSensitive:)")));

/** Get notes mentioning the authenticated user (p-tag)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMentionsSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit excludeSensitive:(BOOL)excludeSensitive completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMentions(since:until:limit:excludeSensitive:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> *)getMentionsBlockingSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit excludeSensitive:(BOOL)excludeSensitive __attribute__((swift_name("getMentionsBlocking(since:until:limit:excludeSensitive:)")));

/** Get a single note by event ID
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNoteEventId:(NSString *)eventId completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrNote *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNote(eventId:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrNote *> *)getNoteBlockingEventId:(NSString *)eventId __attribute__((swift_name("getNoteBlocking(eventId:)")));

/** Resolve note1... bech32 to event
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNoteByNpubNoteId:(NSString *)noteId completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrNote *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNoteByNpub(noteId:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrNote *> *)getNoteByNpubBlockingNoteId:(NSString *)noteId __attribute__((swift_name("getNoteByNpubBlocking(noteId:)")));

/** Get thread context (ancestors + descendants) for a note
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getThreadEventId:(NSString *)eventId completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrThread *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getThread(eventId:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrThread *> *)getThreadBlockingEventId:(NSString *)eventId __attribute__((swift_name("getThreadBlocking(eventId:)")));

/** Get notes posted by a specific user
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserFeedPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit excludeSensitive:(BOOL)excludeSensitive completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserFeed(pubkey:since:until:limit:excludeSensitive:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> *)getUserFeedBlockingPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit excludeSensitive:(BOOL)excludeSensitive __attribute__((swift_name("getUserFeedBlocking(pubkey:since:until:limit:excludeSensitive:)")));

/** Get posts that the user has liked (via kind:7 reaction lookup)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserLikesFeedPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit excludeSensitive:(BOOL)excludeSensitive completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserLikesFeed(pubkey:since:until:limit:excludeSensitive:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> *)getUserLikesFeedBlockingPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit excludeSensitive:(BOOL)excludeSensitive __attribute__((swift_name("getUserLikesFeedBlocking(pubkey:since:until:limit:excludeSensitive:)")));

/** Get posts with media attachments (via imeta tag filter)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserMediaFeedPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit excludeSensitive:(BOOL)excludeSensitive completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserMediaFeed(pubkey:since:until:limit:excludeSensitive:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> *)getUserMediaFeedBlockingPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit excludeSensitive:(BOOL)excludeSensitive __attribute__((swift_name("getUserMediaFeedBlocking(pubkey:since:until:limit:excludeSensitive:)")));

/** Post a new text note (kind:1)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postContent:(NSString *)content tags:(NSArray<NSArray<NSString *> *> *)tags contentWarning:(NSString * _Nullable)contentWarning expiry:(KnostrLong * _Nullable)expiry sensitive:(BOOL)sensitive completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(content:tags:contentWarning:expiry:sensitive:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)postBlockingContent:(NSString *)content tags:(NSArray<NSArray<NSString *> *> *)tags contentWarning:(NSString * _Nullable)contentWarning expiry:(KnostrLong * _Nullable)expiry sensitive:(BOOL)sensitive __attribute__((swift_name("postBlocking(content:tags:contentWarning:expiry:sensitive:)")));

/** Quote repost a note (kind:1 with q tag, NIP-18)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)quoteRepostEventId:(NSString *)eventId comment:(NSString *)comment contentWarning:(NSString * _Nullable)contentWarning expiry:(KnostrLong * _Nullable)expiry sensitive:(BOOL)sensitive completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("quoteRepost(eventId:comment:contentWarning:expiry:sensitive:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)quoteRepostBlockingEventId:(NSString *)eventId comment:(NSString *)comment contentWarning:(NSString * _Nullable)contentWarning expiry:(KnostrLong * _Nullable)expiry sensitive:(BOOL)sensitive __attribute__((swift_name("quoteRepostBlocking(eventId:comment:contentWarning:expiry:sensitive:)")));

/** Reply to a note (NIP-10 threading)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)replyContent:(NSString *)content replyToEventId:(NSString *)replyToEventId rootEventId:(NSString * _Nullable)rootEventId contentWarning:(NSString * _Nullable)contentWarning expiry:(KnostrLong * _Nullable)expiry sensitive:(BOOL)sensitive completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reply(content:replyToEventId:rootEventId:contentWarning:expiry:sensitive:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)replyBlockingContent:(NSString *)content replyToEventId:(NSString *)replyToEventId rootEventId:(NSString * _Nullable)rootEventId contentWarning:(NSString * _Nullable)contentWarning expiry:(KnostrLong * _Nullable)expiry sensitive:(BOOL)sensitive __attribute__((swift_name("replyBlocking(content:replyToEventId:rootEventId:contentWarning:expiry:sensitive:)")));

/** Repost a note (kind:6)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)repostEventId:(NSString *)eventId completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("repost(eventId:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)repostBlockingEventId:(NSString *)eventId __attribute__((swift_name("repostBlocking(eventId:)")));
@end

__attribute__((swift_name("SocialInterestResource")))
@protocol KnostrSocialInterestResource
@required

/** Follow a hashtag (NIP-51 kind:10015)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followHashtagHashtag:(NSString *)hashtag completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("followHashtag(hashtag:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)followHashtagBlockingHashtag:(NSString *)hashtag __attribute__((swift_name("followHashtagBlocking(hashtag:)")));

/** Get list of followed hashtags
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowedHashtagsWithCompletionHandler:(void (^)(KnostrCoreResponse<NSArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollowedHashtags(completionHandler:)")));
- (KnostrCoreResponse<NSArray<NSString *> *> *)getFollowedHashtagsBlocking __attribute__((swift_name("getFollowedHashtagsBlocking()")));

/** Unfollow a hashtag
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unfollowHashtagHashtag:(NSString *)hashtag completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unfollowHashtag(hashtag:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)unfollowHashtagBlockingHashtag:(NSString *)hashtag __attribute__((swift_name("unfollowHashtagBlocking(hashtag:)")));
@end

__attribute__((swift_name("SocialListResource")))
@protocol KnostrSocialListResource
@required

/** Add a pubkey to a list
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addToListName:(NSString *)name pubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addToList(name:pubkey:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)addToListBlockingName:(NSString *)name pubkey:(NSString *)pubkey __attribute__((swift_name("addToListBlocking(name:pubkey:)")));

/** Create a new people list (NIP-51, kind:30000)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createListName:(NSString *)name pubkeys:(NSArray<NSString *> *)pubkeys completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createList(name:pubkeys:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)createListBlockingName:(NSString *)name pubkeys:(NSArray<NSString *> *)pubkeys __attribute__((swift_name("createListBlocking(name:pubkeys:)")));

/** Get a specific list by name
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListName:(NSString *)name completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getList(name:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrList *> *)getListBlockingName:(NSString *)name __attribute__((swift_name("getListBlocking(name:)")));

/** Get all lists for the authenticated user
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListsWithCompletionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrList *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLists(completionHandler:)")));

/** Get all lists for a specific user
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListsPubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrList *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLists(pubkey:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrList *> *> *)getListsBlocking __attribute__((swift_name("getListsBlocking()")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrList *> *> *)getListsBlockingPubkey:(NSString *)pubkey __attribute__((swift_name("getListsBlocking(pubkey:)")));

/** Remove a pubkey from a list
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFromListName:(NSString *)name pubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFromList(name:pubkey:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)removeFromListBlockingName:(NSString *)name pubkey:(NSString *)pubkey __attribute__((swift_name("removeFromListBlocking(name:pubkey:)")));
@end

__attribute__((swift_name("SocialMediaResource")))
@protocol KnostrSocialMediaResource
@required

/** Get file metadata for a URL
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFileMetadataUrl:(NSString *)url completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrFileMetadata *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFileMetadata(url:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrFileMetadata *> *)getFileMetadataBlockingUrl:(NSString *)url __attribute__((swift_name("getFileMetadataBlocking(url:)")));

/**
 * Get the NIP-96 server info to discover upload endpoint.
 * @param serverUrl The NIP-96 server base URL
 * @return The upload API URL
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getServerInfoServerUrl:(NSString *)serverUrl completionHandler:(void (^)(KnostrCoreResponse<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getServerInfo(serverUrl:completionHandler:)")));
- (KnostrCoreResponse<NSString *> *)getServerInfoBlockingServerUrl:(NSString *)serverUrl __attribute__((swift_name("getServerInfoBlocking(serverUrl:)")));

/** Publish file metadata event (NIP-94, kind:1063)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)publishFileMetadataUrl:(NSString *)url mimeType:(NSString *)mimeType sha256:(NSString * _Nullable)sha256 sizeBytes:(KnostrLong * _Nullable)sizeBytes dimensions:(NSString * _Nullable)dimensions blurhash:(NSString * _Nullable)blurhash thumbnailUrl:(NSString * _Nullable)thumbnailUrl description:(NSString * _Nullable)description completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("publishFileMetadata(url:mimeType:sha256:sizeBytes:dimensions:blurhash:thumbnailUrl:description:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)publishFileMetadataBlockingUrl:(NSString *)url mimeType:(NSString *)mimeType sha256:(NSString * _Nullable)sha256 sizeBytes:(KnostrLong * _Nullable)sizeBytes dimensions:(NSString * _Nullable)dimensions blurhash:(NSString * _Nullable)blurhash thumbnailUrl:(NSString * _Nullable)thumbnailUrl description:(NSString * _Nullable)description __attribute__((swift_name("publishFileMetadataBlocking(url:mimeType:sha256:sizeBytes:dimensions:blurhash:thumbnailUrl:description:)")));

/**
 * Upload a file to a NIP-96 compatible media server.
 * @param serverUrl The NIP-96 server base URL (e.g., "https://nostr.build")
 * @param fileData The file content as bytes
 * @param fileName The file name
 * @param mimeType The MIME type (e.g., "image/png")
 * @param description Optional alt text / description
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadServerUrl:(NSString *)serverUrl fileData:(KnostrKotlinByteArray *)fileData fileName:(NSString *)fileName mimeType:(NSString *)mimeType description:(NSString *)description completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrMedia *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upload(serverUrl:fileData:fileName:mimeType:description:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrMedia *> *)uploadBlockingServerUrl:(NSString *)serverUrl fileData:(KnostrKotlinByteArray *)fileData fileName:(NSString *)fileName mimeType:(NSString *)mimeType description:(NSString *)description __attribute__((swift_name("uploadBlocking(serverUrl:fileData:fileName:mimeType:description:)")));
@end

__attribute__((swift_name("SocialMessageResource")))
@protocol KnostrSocialMessageResource
@required

/** NIP-17: Get conversation with a specific user
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConversationPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrDirectMessage *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConversation(pubkey:since:until:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrDirectMessage *> *> *)getConversationBlockingPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit __attribute__((swift_name("getConversationBlocking(pubkey:since:until:limit:)")));

/** NIP-04 (legacy): Get received legacy DMs
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLegacyMessagesSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrDirectMessage *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLegacyMessages(since:until:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrDirectMessage *> *> *)getLegacyMessagesBlockingSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit __attribute__((swift_name("getLegacyMessagesBlocking(since:until:limit:)")));

/** NIP-17: Get received DMs (unwrap gift wraps)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMessagesSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrDirectMessage *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMessages(since:until:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrDirectMessage *> *> *)getMessagesBlockingSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit __attribute__((swift_name("getMessagesBlocking(since:until:limit:)")));

/** Get list of DM conversation threads (grouped by sender)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getThreadsSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrThread *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getThreads(since:until:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrThread *> *> *)getThreadsBlockingSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit __attribute__((swift_name("getThreadsBlocking(since:until:limit:)")));

/** NIP-04 (legacy): Send an encrypted DM
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendLegacyMessageRecipientPubkey:(NSString *)recipientPubkey content:(NSString *)content completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendLegacyMessage(recipientPubkey:content:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)sendLegacyMessageBlockingRecipientPubkey:(NSString *)recipientPubkey content:(NSString *)content __attribute__((swift_name("sendLegacyMessageBlocking(recipientPubkey:content:)")));

/** NIP-17: Send a DM using Gift Wrap pattern
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessageRecipientPubkey:(NSString *)recipientPubkey content:(NSString *)content completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendMessage(recipientPubkey:content:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)sendMessageBlockingRecipientPubkey:(NSString *)recipientPubkey content:(NSString *)content __attribute__((swift_name("sendMessageBlocking(recipientPubkey:content:)")));
@end

__attribute__((swift_name("SocialMuteResource")))
@protocol KnostrSocialMuteResource
@required

/** Get the list of muted pubkeys
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMuteListWithCompletionHandler:(void (^)(KnostrCoreResponse<NSArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMuteList(completionHandler:)")));
- (KnostrCoreResponse<NSArray<NSString *> *> *)getMuteListBlocking __attribute__((swift_name("getMuteListBlocking()")));

/** Add a user to the public mute list (NIP-51 kind:10000)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)mutePubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("mute(pubkey:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)muteBlockingPubkey:(NSString *)pubkey __attribute__((swift_name("muteBlocking(pubkey:)")));

/** Remove a user from the public mute list
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unmutePubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unmute(pubkey:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)unmuteBlockingPubkey:(NSString *)pubkey __attribute__((swift_name("unmuteBlocking(pubkey:)")));
@end

__attribute__((swift_name("SocialPinResource")))
@protocol KnostrSocialPinResource
@required

/** Get list of pinned event IDs
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPinListWithCompletionHandler:(void (^)(KnostrCoreResponse<NSArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPinList(completionHandler:)")));
- (KnostrCoreResponse<NSArray<NSString *> *> *)getPinListBlocking __attribute__((swift_name("getPinListBlocking()")));

/** Pin a note (NIP-51 kind:10001)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pinEventId:(NSString *)eventId completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("pin(eventId:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)pinBlockingEventId:(NSString *)eventId __attribute__((swift_name("pinBlocking(eventId:)")));

/** Unpin a note
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unpinEventId:(NSString *)eventId completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unpin(eventId:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)unpinBlockingEventId:(NSString *)eventId __attribute__((swift_name("unpinBlocking(eventId:)")));
@end

__attribute__((swift_name("SocialPollResource")))
@protocol KnostrSocialPollResource
@required

/** Create a poll (kind:1068)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createPollContent:(NSString *)content options:(NSArray<NSString *> *)options closedAt:(KnostrLong * _Nullable)closedAt completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createPoll(content:options:closedAt:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)createPollBlockingContent:(NSString *)content options:(NSArray<NSString *> *)options closedAt:(KnostrLong * _Nullable)closedAt __attribute__((swift_name("createPollBlocking(content:options:closedAt:)")));

/** Get a poll by event ID
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPollPollEventId:(NSString *)pollEventId completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrPoll *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPoll(pollEventId:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrPoll *> *)getPollBlockingPollEventId:(NSString *)pollEventId __attribute__((swift_name("getPollBlocking(pollEventId:)")));

/** Get votes for a poll
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPollVotesPollEventId:(NSString *)pollEventId completionHandler:(void (^)(KnostrCoreResponse<NSDictionary<KnostrInt *, KnostrInt *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPollVotes(pollEventId:completionHandler:)")));
- (KnostrCoreResponse<NSDictionary<KnostrInt *, KnostrInt *> *> *)getPollVotesBlockingPollEventId:(NSString *)pollEventId __attribute__((swift_name("getPollVotesBlocking(pollEventId:)")));

/** Vote on a poll (kind:1018)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)votePollEventId:(NSString *)pollEventId optionIndexes:(NSArray<KnostrInt *> *)optionIndexes completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("vote(pollEventId:optionIndexes:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)voteBlockingPollEventId:(NSString *)pollEventId optionIndexes:(NSArray<KnostrInt *> *)optionIndexes __attribute__((swift_name("voteBlocking(pollEventId:optionIndexes:)")));
@end

__attribute__((swift_name("SocialReactionResource")))
@protocol KnostrSocialReactionResource
@required

/** Get reactions for a note
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getReactionsEventId:(NSString *)eventId completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrReaction *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getReactions(eventId:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrReaction *> *> *)getReactionsBlockingEventId:(NSString *)eventId __attribute__((swift_name("getReactionsBlocking(eventId:)")));

/** Get reactions made by a specific user
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserReactionsPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrReaction *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserReactions(pubkey:since:until:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrReaction *> *> *)getUserReactionsBlockingPubkey:(NSString *)pubkey since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit __attribute__((swift_name("getUserReactionsBlocking(pubkey:since:until:limit:)")));

/** Like a note (kind:7, content: "+")
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)likeEventId:(NSString *)eventId authorPubkey:(NSString *)authorPubkey completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("like(eventId:authorPubkey:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)likeBlockingEventId:(NSString *)eventId authorPubkey:(NSString *)authorPubkey __attribute__((swift_name("likeBlocking(eventId:authorPubkey:)")));

/** React with custom content (kind:7)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactEventId:(NSString *)eventId authorPubkey:(NSString *)authorPubkey content:(NSString *)content completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("react(eventId:authorPubkey:content:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)reactBlockingEventId:(NSString *)eventId authorPubkey:(NSString *)authorPubkey content:(NSString *)content __attribute__((swift_name("reactBlocking(eventId:authorPubkey:content:)")));

/** React with custom emoji (NIP-30, kind:7 with emoji tag)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactWithEmojiEventId:(NSString *)eventId authorPubkey:(NSString *)authorPubkey shortcode:(NSString *)shortcode emojiUrl:(NSString *)emojiUrl completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reactWithEmoji(eventId:authorPubkey:shortcode:emojiUrl:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)reactWithEmojiBlockingEventId:(NSString *)eventId authorPubkey:(NSString *)authorPubkey shortcode:(NSString *)shortcode emojiUrl:(NSString *)emojiUrl __attribute__((swift_name("reactWithEmojiBlocking(eventId:authorPubkey:shortcode:emojiUrl:)")));

/** Remove a like (find own kind:7 "+" for eventId, then delete via kind:5)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unlikeEventId:(NSString *)eventId completionHandler:(void (^)(KnostrCoreResponse<KnostrBoolean *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unlike(eventId:completionHandler:)")));
- (KnostrCoreResponse<KnostrBoolean *> *)unlikeBlockingEventId:(NSString *)eventId __attribute__((swift_name("unlikeBlocking(eventId:)")));

/** Remove a reaction (find own kind:7 with matching content, then delete)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unreactEventId:(NSString *)eventId content:(NSString * _Nullable)content completionHandler:(void (^)(KnostrCoreResponse<KnostrBoolean *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unreact(eventId:content:completionHandler:)")));
- (KnostrCoreResponse<KnostrBoolean *> *)unreactBlockingEventId:(NSString *)eventId content:(NSString * _Nullable)content __attribute__((swift_name("unreactBlocking(eventId:content:)")));
@end

__attribute__((swift_name("SocialRelayListResource")))
@protocol KnostrSocialRelayListResource
@required

/** Get relay list for the authenticated user (NIP-65 kind:10002)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRelayListWithCompletionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrRelayListEntry *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRelayList(completionHandler:)")));

/** Get relay list for a specific user
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRelayListPubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrRelayListEntry *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRelayList(pubkey:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrRelayListEntry *> *> *)getRelayListBlocking __attribute__((swift_name("getRelayListBlocking()")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrRelayListEntry *> *> *)getRelayListBlockingPubkey:(NSString *)pubkey __attribute__((swift_name("getRelayListBlocking(pubkey:)")));

/** Set relay list (replaces existing, kind:10002)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setRelayListRelays:(NSArray<KnostrSocialNostrRelayListEntry *> *)relays completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setRelayList(relays:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)setRelayListBlockingRelays:(NSArray<KnostrSocialNostrRelayListEntry *> *)relays __attribute__((swift_name("setRelayListBlocking(relays:)")));
@end

__attribute__((swift_name("SocialSearchResource")))
@protocol KnostrSocialSearchResource
@required

/** Search for notes (NIP-50)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchNotesQuery:(NSString *)query limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchNotes(query:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrNote *> *> *)searchNotesBlockingQuery:(NSString *)query limit:(int32_t)limit __attribute__((swift_name("searchNotesBlocking(query:limit:)")));

/** Search for users (NIP-50, kind:0)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchUsersQuery:(NSString *)query limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrUser *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchUsers(query:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrUser *> *> *)searchUsersBlockingQuery:(NSString *)query limit:(int32_t)limit __attribute__((swift_name("searchUsersBlocking(query:limit:)")));
@end

__attribute__((swift_name("SocialUserResource")))
@protocol KnostrSocialUserResource
@required

/** Clear user status
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearStatusType:(NSString *)type completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("clearStatus(type:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)clearStatusBlockingType:(NSString *)type __attribute__((swift_name("clearStatusBlocking(type:)")));

/** Follow a user (update kind:3 follow list)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followPubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("follow(pubkey:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)followBlockingPubkey:(NSString *)pubkey __attribute__((swift_name("followBlocking(pubkey:)")));

/** Get pubkeys of users who follow the given user (kind:3 reverse lookup)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowersPubkey:(NSString *)pubkey limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollowers(pubkey:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<NSString *> *> *)getFollowersBlockingPubkey:(NSString *)pubkey limit:(int32_t)limit __attribute__((swift_name("getFollowersBlocking(pubkey:limit:)")));

/** Get follower profiles in batch
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowersWithProfilesPubkey:(NSString *)pubkey limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrUser *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollowersWithProfiles(pubkey:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrUser *> *> *)getFollowersWithProfilesBlockingPubkey:(NSString *)pubkey limit:(int32_t)limit __attribute__((swift_name("getFollowersWithProfilesBlocking(pubkey:limit:)")));

/** Get list of pubkeys the user is following
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowingPubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<NSArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollowing(pubkey:completionHandler:)")));
- (KnostrCoreResponse<NSArray<NSString *> *> *)getFollowingBlockingPubkey:(NSString *)pubkey __attribute__((swift_name("getFollowingBlocking(pubkey:)")));

/** Get a user's profile
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getProfilePubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getProfile(pubkey:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrUser *> *)getProfileBlockingPubkey:(NSString *)pubkey __attribute__((swift_name("getProfileBlocking(pubkey:)")));

/** Resolve npub... bech32 to profile
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getProfileByNpubNpub:(NSString *)npub completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getProfileByNpub(npub:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrUser *> *)getProfileByNpubBlockingNpub:(NSString *)npub __attribute__((swift_name("getProfileByNpubBlocking(npub:)")));

/** Get profiles for multiple pubkeys in a single query
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getProfilesPubkeys:(NSArray<NSString *> *)pubkeys completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrUser *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getProfiles(pubkeys:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrUser *> *> *)getProfilesBlockingPubkeys:(NSArray<NSString *> *)pubkeys __attribute__((swift_name("getProfilesBlocking(pubkeys:)")));

/** Get relationship status (follow/mute/block) with target user
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRelationshipPubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrRelationship *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRelationship(pubkey:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrRelationship *> *)getRelationshipBlockingPubkey:(NSString *)pubkey __attribute__((swift_name("getRelationshipBlocking(pubkey:)")));

/** Get user status
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatusPubkey:(NSString *)pubkey type:(NSString *)type completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialNostrUserStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatus(pubkey:type:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialNostrUserStatus *> *)getStatusBlockingPubkey:(NSString *)pubkey type:(NSString *)type __attribute__((swift_name("getStatusBlocking(pubkey:type:)")));

/** Set user status (NIP-315, kind:30315)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setStatusContent:(NSString *)content type:(NSString *)type url:(NSString * _Nullable)url expiration:(KnostrLong * _Nullable)expiration completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setStatus(content:type:url:expiration:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)setStatusBlockingContent:(NSString *)content type:(NSString *)type url:(NSString * _Nullable)url expiration:(KnostrLong * _Nullable)expiration __attribute__((swift_name("setStatusBlocking(content:type:url:expiration:)")));

/** Unfollow a user (update kind:3 follow list)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unfollowPubkey:(NSString *)pubkey completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unfollow(pubkey:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)unfollowBlockingPubkey:(NSString *)pubkey __attribute__((swift_name("unfollowBlocking(pubkey:)")));

/** Update own profile (kind:0)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateProfileProfile:(KnostrCoreNostrProfile *)profile completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateProfile(profile:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)updateProfileBlockingProfile:(KnostrCoreNostrProfile *)profile __attribute__((swift_name("updateProfileBlocking(profile:)")));

/** Verify a NIP-05 address
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyNip05Address:(NSString *)address completionHandler:(void (^)(KnostrCoreResponse<KnostrBoolean *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyNip05(address:completionHandler:)")));
- (KnostrCoreResponse<KnostrBoolean *> *)verifyNip05BlockingAddress:(NSString *)address __attribute__((swift_name("verifyNip05Blocking(address:)")));
@end

__attribute__((swift_name("SocialWalletResource")))
@protocol KnostrSocialWalletResource
@required

/** Connect to a NWC wallet service using a nostr+walletconnect:// URL
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectNwcUrl:(NSString *)nwcUrl completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("connect(nwcUrl:completionHandler:)")));
- (void)connectBlockingNwcUrl:(NSString *)nwcUrl __attribute__((swift_name("connectBlocking(nwcUrl:)")));

/** Disconnect from the wallet service
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disconnectWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("disconnect(completionHandler:)")));
- (void)disconnectBlocking __attribute__((swift_name("disconnectBlocking()")));

/** Get wallet balance in millisatoshis
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBalanceWithCompletionHandler:(void (^)(KnostrCoreResponse<KnostrLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBalance(completionHandler:)")));
- (KnostrCoreResponse<KnostrLong *> *)getBalanceBlocking __attribute__((swift_name("getBalanceBlocking()")));

/** Get wallet info (supported methods)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getInfoWithCompletionHandler:(void (^)(KnostrCoreResponse<NSArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getInfo(completionHandler:)")));
- (KnostrCoreResponse<NSArray<NSString *> *> *)getInfoBlocking __attribute__((swift_name("getInfoBlocking()")));

/** List transactions
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listTransactionsSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNwcTransaction *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listTransactions(since:until:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNwcTransaction *> *> *)listTransactionsBlockingSince:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until limit:(int32_t)limit __attribute__((swift_name("listTransactionsBlocking(since:until:limit:)")));

/** Create a Lightning invoice
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)makeInvoiceAmountMsats:(int64_t)amountMsats description:(NSString *)description completionHandler:(void (^)(KnostrCoreResponse<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("makeInvoice(amountMsats:description:completionHandler:)")));
- (KnostrCoreResponse<NSString *> *)makeInvoiceBlockingAmountMsats:(int64_t)amountMsats description:(NSString *)description __attribute__((swift_name("makeInvoiceBlocking(amountMsats:description:)")));

/** Pay a Lightning invoice
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)payInvoiceInvoice:(NSString *)invoice completionHandler:(void (^)(KnostrCoreResponse<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("payInvoice(invoice:completionHandler:)")));
- (KnostrCoreResponse<NSString *> *)payInvoiceBlockingInvoice:(NSString *)invoice __attribute__((swift_name("payInvoiceBlocking(invoice:)")));
@end

__attribute__((swift_name("SocialZapResource")))
@protocol KnostrSocialZapResource
@required

/**
 * Create a zap request event (kind:9734) for a user.
 * The caller is responsible for sending this to the recipient's LNURL pay endpoint.
 * @param recipientPubkey The pubkey of the user to zap
 * @param amountMilliSats Amount in millisatoshis
 * @param relays List of relays to include in the zap request
 * @param message Optional zap message
 * @param eventId Optional event ID to zap (null for profile zap)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createZapRequestRecipientPubkey:(NSString *)recipientPubkey amountMilliSats:(int64_t)amountMilliSats relays:(NSArray<NSString *> *)relays message:(NSString *)message eventId:(NSString * _Nullable)eventId completionHandler:(void (^)(KnostrCoreResponse<KnostrCoreNostrEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createZapRequest(recipientPubkey:amountMilliSats:relays:message:eventId:completionHandler:)")));
- (KnostrCoreResponse<KnostrCoreNostrEvent *> *)createZapRequestBlockingRecipientPubkey:(NSString *)recipientPubkey amountMilliSats:(int64_t)amountMilliSats relays:(NSArray<NSString *> *)relays message:(NSString *)message eventId:(NSString * _Nullable)eventId __attribute__((swift_name("createZapRequestBlocking(recipientPubkey:amountMilliSats:relays:message:eventId:)")));

/**
 * Get the LNURL pay info for a user (from their profile's lud16 field).
 * @param lud16 The Lightning address (e.g., user@getalby.com)
 * @return The LNURL pay callback URL
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLnurlPayInfoLud16:(NSString *)lud16 completionHandler:(void (^)(KnostrCoreResponse<KnostrSocialLnurlPayInfo *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLnurlPayInfo(lud16:completionHandler:)")));
- (KnostrCoreResponse<KnostrSocialLnurlPayInfo *> *)getLnurlPayInfoBlockingLud16:(NSString *)lud16 __attribute__((swift_name("getLnurlPayInfoBlocking(lud16:)")));

/**
 * Get zap receipts (kind:9735) for a specific event.
 * @param eventId The event ID to get zaps for
 * @param limit Maximum number of zaps to return
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getZapsForEventEventId:(NSString *)eventId limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrZap *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getZapsForEvent(eventId:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrZap *> *> *)getZapsForEventBlockingEventId:(NSString *)eventId limit:(int32_t)limit __attribute__((swift_name("getZapsForEventBlocking(eventId:limit:)")));

/**
 * Get zap receipts (kind:9735) for a specific user.
 * @param pubkey The pubkey to get zaps for
 * @param limit Maximum number of zaps to return
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getZapsForUserPubkey:(NSString *)pubkey limit:(int32_t)limit completionHandler:(void (^)(KnostrCoreResponse<NSArray<KnostrSocialNostrZap *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getZapsForUser(pubkey:limit:completionHandler:)")));
- (KnostrCoreResponse<NSArray<KnostrSocialNostrZap *> *> *)getZapsForUserBlockingPubkey:(NSString *)pubkey limit:(int32_t)limit __attribute__((swift_name("getZapsForUserBlocking(pubkey:limit:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrSocialConfig")))
@interface KnostrSocialNostrSocialConfig : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** フォローリスト (kind:3) のキャッシュを有効にする */
@property BOOL cacheFollowList __attribute__((swift_name("cacheFollowList")));

/** ユーザープロフィール (kind:0) のキャッシュを有効にする */
@property BOOL cacheUserProfile __attribute__((swift_name("cacheUserProfile")));

/** フォローリストキャッシュの有効期限 (ミリ秒) */
@property int64_t followListCacheTtlMs __attribute__((swift_name("followListCacheTtlMs")));

/** ユーザープロフィールキャッシュの有効期限 (ミリ秒) */
@property int64_t userProfileCacheTtlMs __attribute__((swift_name("userProfileCacheTtlMs")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KnostrKotlinThrowable : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KnostrKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KnostrKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KnostrKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KnostrKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KnostrKotlinException : KnostrKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KnostrKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KnostrKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KnostrKotlinRuntimeException : KnostrKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KnostrKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KnostrKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KnostrKotlinIllegalStateException : KnostrKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KnostrKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KnostrKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KnostrKotlinCancellationException : KnostrKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KnostrKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KnostrKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponse")))
@interface KnostrCoreResponse<T> : KnostrBase
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property T _Nullable data __attribute__((swift_name("data")));
@property NSString * _Nullable json __attribute__((swift_name("json")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNostrEvent")))
@interface KnostrCoreNostrEvent : KnostrBase
- (instancetype)initWithId:(NSString *)id pubkey:(NSString *)pubkey createdAt:(int64_t)createdAt kind:(int32_t)kind tags:(NSArray<NSArray<NSString *> *> *)tags content:(NSString *)content sig:(NSString *)sig __attribute__((swift_name("init(id:pubkey:createdAt:kind:tags:content:sig:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KnostrCoreNostrEventCompanion *companion __attribute__((swift_name("companion")));
- (KnostrCoreNostrEvent *)doCopyId:(NSString *)id pubkey:(NSString *)pubkey createdAt:(int64_t)createdAt kind:(int32_t)kind tags:(NSArray<NSArray<NSString *> *> *)tags content:(NSString *)content sig:(NSString *)sig __attribute__((swift_name("doCopy(id:pubkey:createdAt:kind:tags:content:sig:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int32_t kind __attribute__((swift_name("kind")));
@property (readonly) NSString *pubkey __attribute__((swift_name("pubkey")));
@property (readonly) NSString *sig __attribute__((swift_name("sig")));
@property (readonly) NSArray<NSArray<NSString *> *> *tags __attribute__((swift_name("tags")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNostrFilter")))
@interface KnostrCoreNostrFilter : KnostrBase
- (instancetype)initWithIds:(NSArray<NSString *> * _Nullable)ids authors:(NSArray<NSString *> * _Nullable)authors kinds:(NSArray<KnostrInt *> * _Nullable)kinds since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until eTags:(NSArray<NSString *> * _Nullable)eTags pTags:(NSArray<NSString *> * _Nullable)pTags tTags:(NSArray<NSString *> * _Nullable)tTags dTags:(NSArray<NSString *> * _Nullable)dTags aTags:(NSArray<NSString *> * _Nullable)aTags limit:(KnostrInt * _Nullable)limit search:(NSString * _Nullable)search __attribute__((swift_name("init(ids:authors:kinds:since:until:eTags:pTags:tTags:dTags:aTags:limit:search:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KnostrCoreNostrFilterCompanion *companion __attribute__((swift_name("companion")));
- (KnostrCoreNostrFilter *)doCopyIds:(NSArray<NSString *> * _Nullable)ids authors:(NSArray<NSString *> * _Nullable)authors kinds:(NSArray<KnostrInt *> * _Nullable)kinds since:(KnostrLong * _Nullable)since until:(KnostrLong * _Nullable)until eTags:(NSArray<NSString *> * _Nullable)eTags pTags:(NSArray<NSString *> * _Nullable)pTags tTags:(NSArray<NSString *> * _Nullable)tTags dTags:(NSArray<NSString *> * _Nullable)dTags aTags:(NSArray<NSString *> * _Nullable)aTags limit:(KnostrInt * _Nullable)limit search:(NSString * _Nullable)search __attribute__((swift_name("doCopy(ids:authors:kinds:since:until:eTags:pTags:tTags:dTags:aTags:limit:search:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="#a")
*/
@property (readonly) NSArray<NSString *> * _Nullable aTags __attribute__((swift_name("aTags")));
@property (readonly) NSArray<NSString *> * _Nullable authors __attribute__((swift_name("authors")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="#d")
*/
@property (readonly) NSArray<NSString *> * _Nullable dTags __attribute__((swift_name("dTags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="#e")
*/
@property (readonly) NSArray<NSString *> * _Nullable eTags __attribute__((swift_name("eTags")));
@property (readonly) NSArray<NSString *> * _Nullable ids __attribute__((swift_name("ids")));
@property (readonly) NSArray<KnostrInt *> * _Nullable kinds __attribute__((swift_name("kinds")));
@property (readonly) KnostrInt * _Nullable limit __attribute__((swift_name("limit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="#p")
*/
@property (readonly) NSArray<NSString *> * _Nullable pTags __attribute__((swift_name("pTags")));
@property (readonly) NSString * _Nullable search __attribute__((swift_name("search")));
@property (readonly) KnostrLong * _Nullable since __attribute__((swift_name("since")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="#t")
*/
@property (readonly) NSArray<NSString *> * _Nullable tTags __attribute__((swift_name("tTags")));
@property (readonly) KnostrLong * _Nullable until __attribute__((swift_name("until")));
@end

__attribute__((swift_name("CoreNip19Entity")))
@interface KnostrCoreNip19Entity : KnostrBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNip05Result")))
@interface KnostrCoreNip05Result : KnostrBase
- (instancetype)initWithNames:(NSDictionary<NSString *, NSString *> *)names relays:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nullable)relays __attribute__((swift_name("init(names:relays:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KnostrCoreNip05ResultCompanion *companion __attribute__((swift_name("companion")));
- (KnostrCoreNip05Result *)doCopyNames:(NSDictionary<NSString *, NSString *> *)names relays:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nullable)relays __attribute__((swift_name("doCopy(names:relays:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> *names __attribute__((swift_name("names")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> * _Nullable relays __attribute__((swift_name("relays")));
@end


/**
 * WebSocket connection to a single Nostr relay.
 * Based on kbsky's JetStreamClient pattern using khttpclient.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelayConnection")))
@interface KnostrCoreRelayConnection : KnostrBase
- (instancetype)initWithUrl:(NSString *)url autoReconnect:(BOOL)autoReconnect maxReconnectAttempts:(int32_t)maxReconnectAttempts reconnectDelayMs:(int64_t)reconnectDelayMs __attribute__((swift_name("init(url:autoReconnect:maxReconnectAttempts:reconnectDelayMs:)"))) __attribute__((objc_designated_initializer));

/** Close WebSocket connection */
- (void)close __attribute__((swift_name("close()")));

/** Open WebSocket connection (suspending)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)openWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("open(completionHandler:)")));

/** Send an AUTH message: ["AUTH", signedEvent] (NIP-42)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendAuthEvent:(KnostrCoreNostrEvent *)event completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendAuth(event:completionHandler:)")));

/** Send a CLOSE message: ["CLOSE", subscription_id]
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendCloseSubscriptionId:(NSString *)subscriptionId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendClose(subscriptionId:completionHandler:)")));

/** Send an EVENT message: ["EVENT", event]
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendEventEvent:(KnostrCoreNostrEvent *)event completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendEvent(event:completionHandler:)")));

/** Send a REQ message: ["REQ", subscription_id, filter1, ...]
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendReqSubscriptionId:(NSString *)subscriptionId filters:(NSArray<KnostrCoreNostrFilter *> *)filters completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendReq(subscriptionId:filters:completionHandler:)")));

/** Set the CoroutineScope used for reconnection */
- (void)setReconnectScopeScope:(id<KnostrKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("setReconnectScope(scope:)")));
@property KnostrKhttpclientWebsocketRequest *client __attribute__((swift_name("client")));
@property (readonly) BOOL isOpen __attribute__((swift_name("isOpen")));
@property void (^ _Nullable onAuthCallback)(NSString *) __attribute__((swift_name("onAuthCallback")));
@property void (^ _Nullable onCloseCallback)(void) __attribute__((swift_name("onCloseCallback")));
@property void (^ _Nullable onClosedCallback)(NSString *, NSString *) __attribute__((swift_name("onClosedCallback")));
@property void (^ _Nullable onEoseCallback)(NSString *) __attribute__((swift_name("onEoseCallback")));
@property void (^ _Nullable onErrorCallback)(KnostrKotlinException *) __attribute__((swift_name("onErrorCallback")));
@property void (^ _Nullable onEventCallback)(NSString *, KnostrCoreNostrEvent *) __attribute__((swift_name("onEventCallback")));
@property void (^ _Nullable onNoticeCallback)(NSString *) __attribute__((swift_name("onNoticeCallback")));
@property void (^ _Nullable onOkCallback)(NSString *, KnostrBoolean *, NSString *) __attribute__((swift_name("onOkCallback")));
@property void (^ _Nullable onOpenCallback)(void) __attribute__((swift_name("onOpenCallback")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end


/**
 * A scope in which coroutines run.
 *
 * A coroutine scope allows managing the lifecycles of several coroutines simultaneously
 * and setting the execution properties with which coroutines (its "children") are launched.
 *
 * Execution properties are [CoroutineContext.Element] values that may affect the behavior of
 * `kotlinx.coroutines`—for example, which thread pool a coroutine should run on.
 * See a more detailed explanation of coroutine context elements in a separate section below.
 *
 * A set of rules called "structured concurrency" ensures that the lifecycles of children
 * are nested inside the lifecycles of their parent scopes.
 * For example, if a scope is cancelled, all coroutines in it are cancelled too, and the scope itself
 * cannot be completed until all its children are completed.
 * See a more detailed explanation of structured concurrency in a separate section below.
 *
 * ## Using coroutine scopes
 *
 * The methods of this interface are not intended to be called directly.
 * Instead, a [CoroutineScope] is passed as a receiver to the coroutine builders such as [launch] and [async]
 * and affects the execution properties and lifetimes of the created coroutines.
 *
 * ## Coroutine context elements
 *
 * A [CoroutineScope] is defined by a set of [CoroutineContext] elements, one of which is typically a [Job],
 * described in the section on structured concurrency and responsible for managing lifetimes of coroutines.
 *
 * Other coroutine context elements include, but are not limited to, the following:
 *
 * - The scheduling policy, represented by a [CoroutineDispatcher] element.
 *   Some commonly used dispatchers are provided in the [Dispatchers] object.
 * - [CoroutineExceptionHandler] that defines how to handle coroutine failures that cannot
 *   be propagated to any other coroutine.
 * - A [CoroutineName] element that can be used to name coroutines for debugging purposes.
 * - On the JVM, a `ThreadContextElement` ensures that a specific thread-local value gets set on the thread
 *   that executes the coroutine.
 *
 * ## Obtaining a coroutine scope
 *
 * Manual implementations of this interface are not recommended.
 * Instead, a [CoroutineScope] should be obtained in a way that reflects the
 * intended structured concurrency relationships.
 *
 * ### Lexical scopes
 *
 * [coroutineScope] and [supervisorScope] functions can be called in any `suspend` function to define a scope
 * lexically, ensuring that all coroutines launched in this scope complete by the time the scope-limiting
 * function exits.
 *
 * ```
 * suspend fun doSomething() = coroutineScope { // scope `A`
 *     repeat(5) { outer ->
 *         // spawn a new coroutine in the scope `A`
 *         launch {
 *             println("Coroutine $outer started")
 *             coroutineScope { // scope `B`, separate for each `outer` coroutine
 *                 repeat(5) { inner ->
 *                     // spawn a new coroutine in the scope `B`
 *                     launch {
 *                         println("Coroutine $outer.$inner started")
 *                         delay(10.milliseconds)
 *                         println("Coroutine $outer.$inner finished")
 *                     }
 *                 }
 *             }
 *             // will only exit once all `Coroutine $outer.X finished` messages are printed
 *             println("Coroutine $outer finished")
 *         }
 *     }
 * } // will only exit once all `Coroutine X finished` messages are printed
 * ```
 *
 * This is the preferred way to create a [CoroutineScope].
 *
 * ### `CoroutineScope` constructor function
 *
 * When the lifecycle of the scope is not limited lexically
 * (for example, when coroutines should outlive the function that creates them)
 * but is tied to the lifecycle of some entity, the [CoroutineScope] constructor function can be used
 * to define a personal scope for the entity. This scope should be stored as a field in the entity.
 *
 * **The key part of using a custom `CoroutineScope` is cancelling it at the end of the lifecycle.**
 * The [CoroutineScope.cancel] extension function shall be used when the entity launching coroutines
 * is no longer needed. It cancels all the coroutines that might still be running on its behalf.
 *
 * ```
 * class MyEntity(scope: CoroutineScope? = null): AutoCloseable {
 *    // careful: do not write `get() =` here by accident!
 *    private val scope = scope ?: CoroutineScope(SupervisorJob() + CoroutineExceptionHandler { _, e ->
 *        println("Error in coroutine: $e")
 *    })
 *
 *    fun doSomethingWhileEntityExists() = scope.launch {
 *        while (true) {
 *            // do some work
 *            delay(50.milliseconds)
 *            println("Doing something")
 *        }
 *    }
 *
 *    override fun close() {
 *        // cancel all computations related to this entity
 *        scope.cancel()
 *    }
 * }
 *
 * fun main() {
 *     MyEntity().use { entity ->
 *         entity.doSomethingWhileEntityExists()
 *         Thread.sleep(200)
 *     }
 * }
 * ```
 *
 * Usually, a custom [CoroutineScope] should be created with a [SupervisorJob] and
 * a [CoroutineExceptionHandler] to handle exceptions in child coroutines.
 * See the documentation for the [CoroutineScope] constructor function for more details.
 * Also note that `MyEntity` accepts the `scope` parameter that can be used to pass a custom scope for testing.
 *
 * Sometimes, coroutine-aware frameworks provide [CoroutineScope] instances like this out of the box.
 * For example, on Android, all entities with a lifecycle and all `ViewModel` instances expose a [CoroutineScope]:
 * see [the corresponding documentation](https://developer.android.com/topic/libraries/architecture/coroutines).
 *
 * ### Taking another view of an existing scope
 *
 * Occasionally, several coroutines need to be launched with the same additional [CoroutineContext] that is not
 * present in the original scope.
 * In this case, the [CoroutineScope.plus] operator can be used to create a new view of an existing scope:
 *
 * ```
 * coroutineScope {
 *     val sameScopeButInUiThread = this + Dispatchers.Main
 *     sameScopeButInUiThread.launch {
 *         println("Running on the main thread")
 *     }
 *     launch {
 *         println("This will run using the original dispatcher")
 *     }
 *     sameScopeButInUiThread.launch {
 *         println("And this will also run on the main thread")
 *     }
 * }
 * ```
 *
 * The lifecycle of the new scope is the same as the original one, but the context includes new elements.
 *
 * ### Application lifecycle scope
 *
 * [GlobalScope] is a [CoroutineScope] that has the lifetime of the whole application.
 * Although it is convenient for launching top-level coroutines that are not tied to the lifecycle of any entity,
 * it is easy to misuse it and create memory or resource leaks when a coroutine actually should be tied
 * to the lifecycle of some entity.
 *
 * ```
 * GlobalScope.launch(CoroutineExceptionHandler { _, e ->
 *     println("Error in coroutine: $e")
 * }) {
 *    while (true) {
 *        println("I will be running forever, you cannot stop me!")
 *        delay(1.seconds)
 *    }
 * }
 * ```
 *
 * ### `by`-delegation
 *
 * When the approaches listed above are not applicable and a custom [CoroutineScope] implementation is needed,
 * it is recommended to use `by`-delegation to implement the interface:
 *
 * ```
 * class MyEntity : CoroutineScope by CoroutineScope(
 *     SupervisorJob() + Dispatchers.Main + CoroutineExceptionHandler { _, e ->
 *         println("Error in coroutine: $e")
 *     }
 * )
 * ```
 *
 * ## Structured concurrency in detail
 *
 * ### Overview
 *
 * *Structured concurrency* is an approach to concurrent programming that attempts to clarify the lifecycles of
 * concurrent operations and to make them easier to reason about.
 *
 * Skim the following motivating example:
 *
 * ```
 * suspend fun downloadFile(url: String): ByteArray {
 *     return withContext(Dispatchers.IO) {
 *         // this code will execute on a thread for blocking work
 *         val file = byteArrayOf()
 *         // download the file
 *         file
 *     }
 * }
 *
 * suspend fun downloadAndCompareTwoFiles() {
 *     coroutineScope {
 *         val file1 = async {
 *             // if this fails, everything else quickly fails too
 *             downloadFile("http://example.com/file1")
 *         }
 *         val file2 = async {
 *             downloadFile("http://example.com/file2")
 *         }
 *         launch(Dispatchers.Main) {
 *             // create a separate coroutine on the UI thread
 *             if (file1.await().contentEquals(file2.await())) {
 *                 uiShow("Files are equal")
 *             } else {
 *                 uiShow("Files are not equal")
 *             }
 *         }
 *     }
 *     // this line will only run once all the coroutines created above
 *     // finish their work or get cancelled
 * }
 * ```
 *
 * In this example, two asynchronous operations are launched in parallel to download two files.
 * If one of the files fails to download, the other one is cancelled too, and the whole operation fails.
 * The `coroutineScope` function will not return until all the coroutines inside it are completed or cancelled.
 * In addition, it is possible to cancel the coroutine calling `downloadAndCompareTwoFiles`, and all the coroutines
 * inside it will be cancelled too.
 *
 * Without structured concurrency, ensuring that no resource leaks occur by the end of the operation and that
 * the operation responds promptly to failure and cancellation requests is challenging.
 * With structured concurrency, this orchestration is done automatically by the coroutine library,
 * and it is enough to specify the relationships between operations declaratively, as shown in the example,
 * without being overwhelmed by intricate inter-thread communications.
 *
 * ### Specifics
 *
 * Coroutines and [CoroutineScope] instances have an associated lifecycle.
 * A runtime representation of a lifecycle in `kotlinx.coroutines` is called a [Job].
 * [Job] instances form a hierarchy of parent-child relationships,
 * and the [Job] of every coroutine spawned in a [CoroutineScope] is a child of the [Job] of that scope.
 * This is often shortened to saying that the coroutine is the scope's child.
 *
 * See the [Job] documentation for a detailed explanation of the lifecycle stages.
 *
 * ```
 * coroutineScope {
 *     val job = coroutineContext[Job]
 *     val childJob = launch { }
 *     check(job === childJob.parent)
 * }
 * ```
 *
 * Because every coroutine has a lifecycle represented by a [Job], a [CoroutineScope] can be associated with it.
 * Most coroutine builders in `kotlinx.coroutines` expose the [CoroutineScope] of the coroutine on creation:
 *
 * ```
 * coroutineScope { // this block has a `CoroutineScope` receiver
 *     val parentScope = this
 *     var grandChildFinished = false
 *     val childJob = launch {
 *         // this block has a `CoroutineScope` receiver, too
 *         val childScope = this
 *         check(childScope.coroutineContext[Job]?.parent
 *             === parentScope.coroutineContext[Job])
 *         launch {
 *             // This block also has a `CoroutineScope` receiver!
 *             val grandChildScope = this
 *             check(grandChildScope.coroutineContext[Job]?.parent
 *                 === childScope.coroutineContext[Job])
 *             delay(100.milliseconds)
 *             grandChildFinished = true
 *         }
 *         // Because the grandchild coroutine
 *         // is a child of the child coroutine,
 *         // the child coroutine will not complete
 *         // until the grandchild coroutine does.
 *     }
 *     // Await completion of the child coroutine,
 *     // and therefore the grandchild coroutine too.
 *     childJob.join()
 *     check(grandChildFinished)
 * }
 * ```
 *
 * Such a [CoroutineScope] receiver is provided for [launch], [async], and other coroutine builders,
 * as well as for lexically scoping functions like [coroutineScope], [supervisorScope], and [withContext].
 * Each of these [CoroutineScope] instances is tied to the lifecycle of the code block it runs in.
 *
 * Like the example above shows, a coroutine does not complete until all its children are completed.
 * This means that [Job.join] on a [launch] or [async] result or [Deferred.await] on an [async] result
 * will not return until all the children of that coroutine are completed.
 * Likewise, lexically scoping functions like [coroutineScope] and [withContext] will not return
 * until all the coroutines launched in them are completed.
 *
 * #### Interactions between coroutines
 *
 * See the [Job] documentation for a detailed explanation of interactions between [Job] values.
 * Below is a summary of the most important points for structuring code in day-to-day usage.
 *
 * A coroutine cannot reach the final state until all its children have reached their final states.
 * See the example above.
 *
 * If a [CoroutineScope] is cancelled (either explicitly or because it corresponds to some coroutine that failed
 * with an exception), all its children are cancelled too:
 *
 * ```
 * val scope = CoroutineScope(
 *     SupervisorJob() + CoroutineExceptionHandler { _, e -> }
 * )
 * val job = scope.launch {
 *      // this coroutine will be cancelled
 *      awaitCancellation()
 * }
 * scope.cancel() // comment this out for the line below to hang
 * job.join() // finishes normally
 * ```
 *
 * A failure of a child coroutine causes the parent to fail with the same exception if all of the following conditions
 * are met:
 * 1. The exception is not a [CancellationException].
 * 2. The failed child coroutine was not created with lexically scoped coroutine builders
 *    like [coroutineScope] or [withContext].
 * 3. The parent coroutine's [Job] is not a [SupervisorJob].
 *
 * The same logic applies recursively to the parent of the parent, etc.
 * Example:
 *
 * ```
 * check(
 *     runCatching {
 *         coroutineScope {
 *             launch {
 *                 // This cancels the `coroutineScope` coroutine, since
 *                 // 1. The coroutine fails with a non-`CancellationException` exception,
 *                 // 2. `launch` is not a lexically scoped coroutine builder,
 *                 // 3. `coroutineScope` has a non-supervisor `Job`
 *                 throw IllegalStateException()
 *             }
 *             launch {
 *                 // this coroutine will be cancelled
 *                 // when the parent gets cancelled
 *                 awaitCancellation()
 *             }
 *         }
 *     }.exceptionOrNull()
 *     is IllegalStateException
 * )
 * // The currently running coroutine will *not* be cancelled
 * // because the failed coroutine (`coroutineScope`) is lexically scoped.
 * check(currentCoroutineContext().isActive)
 * ```
 *
 * Child jobs can lead to the failure of the parent even if the parent has already finished its work
 * and was ready to return a value:
 *
 * ```
 * val deferred = GlobalScope.async {
 *     launch {
 *         delay(100.milliseconds)
 *         throw IllegalStateException()
 *     }
 *     10 // this value will be lost!
 * }
 * check(
 *     runCatching { deferred.await() }.exceptionOrNull()
 *     is IllegalStateException
 * )
 * ```
 *
 * If several coroutines fail with non-[CancellationException] exceptions,
 * the first observed failure will be propagated, and the rest will be attached to it as
 * [suppressed exceptions][Throwable.suppressedExceptions].
 *
 * Failing with a [CancellationException] only cancels the coroutine itself and its children.
 * It does not affect the parent or sibling coroutines and is not considered a failure.
 *
 * ### How-to: stop failures of child coroutines from cancelling other coroutines
 *
 * If not affecting the [CoroutineScope] on a failure in a child coroutine is the desired behaviour,
 * then a [SupervisorJob] should be used instead of `Job()` when constructing the scope:
 *
 * ```
 * val scope = CoroutineScope(SupervisorJob() + Dispatchers.Main + CoroutineExceptionHandler { _, e ->
 *     println("Coroutine failed with exception $e")
 * })
 * val failingCoroutine = scope.launch(Dispatchers.IO) {
 *     throw IllegalStateException("This exception will not cancel the scope")
 * }
 * failingCoroutine.join()
 * scope.launch(Dispatchers.IO) {
 *     println("This coroutine is active! See: ${isActive}")
 * }
 * ```
 *
 * Likewise, [supervisorScope] can replace [coroutineScope]:
 *
 * ```
 * supervisorScope {
 *     val failingCoroutine = launch(CoroutineExceptionHandler { _, e ->
 *         println("Coroutine failed with exception $e")
 *     }) {
 *         throw IllegalStateException("This exception will not cancel the scope")
 *     }
 *     failingCoroutine.join()
 *     launch {
 *         println("This coroutine is active! See: ${isActive}")
 *     }
 * }
 * ```
 *
 * ### How-to: prevent a child coroutine from being cancelled
 *
 * Sometimes, you may want to run a coroutine even if the parent coroutine is cancelled.
 * This pattern provides a way to achieve that:
 *
 * ```
 * scope.launch(start = CoroutineStart.ATOMIC) {
 *     // Do not move `NonCancellable` to the `context` argument of `launch`!
 *     withContext(NonCancellable) {
 *         // This code will run even if the parent coroutine is cancelled
 *     }
 * }
 * ```
 *
 * [CoroutineStart.ATOMIC] ensures that the new coroutine is not cancelled until it at least started to execute.
 * [NonCancellable] in [withContext] ensures that the code inside the block is executed even if the coroutine
 * created by [launch] is cancelled.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol KnostrKotlinx_coroutines_coreCoroutineScope
@required

/**
 * The context of this scope.
 *
 * The context represents various execution properties of the coroutines launched in this scope,
 * such as the [dispatcher][CoroutineDispatcher] or
 * the [procedure for handling exceptions without a propagation path][CoroutineExceptionHandler].
 * Except [GlobalScope], a [job][Job] instance for enforcing structured concurrency
 * must also be present in the context of every [CoroutineScope].
 * See the documentation of [CoroutineScope] for details.
 *
 * Accessing this property in general code is not recommended for any purposes
 * except accessing the [Job] instance for advanced usages.
 */
@property (readonly) id<KnostrKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUnsignedEvent")))
@interface KnostrCoreUnsignedEvent : KnostrBase
- (instancetype)initWithPubkey:(NSString *)pubkey createdAt:(int64_t)createdAt kind:(int32_t)kind tags:(NSArray<NSArray<NSString *> *> *)tags content:(NSString *)content __attribute__((swift_name("init(pubkey:createdAt:kind:tags:content:)"))) __attribute__((objc_designated_initializer));
- (KnostrCoreUnsignedEvent *)doCopyPubkey:(NSString *)pubkey createdAt:(int64_t)createdAt kind:(int32_t)kind tags:(NSArray<NSArray<NSString *> *> *)tags content:(NSString *)content __attribute__((swift_name("doCopy(pubkey:createdAt:kind:tags:content:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) int32_t kind __attribute__((swift_name("kind")));
@property (readonly) NSString *pubkey __attribute__((swift_name("pubkey")));
@property (readonly) NSArray<NSArray<NSString *> *> *tags __attribute__((swift_name("tags")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrArticle")))
@interface KnostrSocialNostrArticle : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Markdown content */
@property NSString *content __attribute__((swift_name("content")));
@property int64_t createdAt __attribute__((swift_name("createdAt")));
@property KnostrCoreNostrEvent *event __attribute__((swift_name("event")));

/** NIP-40: article expiry timestamp (null if no expiry) */
@property KnostrLong * _Nullable expiry __attribute__((swift_name("expiry")));
@property NSArray<NSString *> *hashtags __attribute__((swift_name("hashtags")));

/** d-tag identifier */
@property NSString *identifier __attribute__((swift_name("identifier")));
@property NSString * _Nullable image __attribute__((swift_name("image")));

/** NIP-36: whether this article is marked as sensitive */
@property BOOL isSensitive __attribute__((swift_name("isSensitive")));
@property KnostrLong * _Nullable publishedAt __attribute__((swift_name("publishedAt")));
@property NSString *summary __attribute__((swift_name("summary")));
@property NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrBadge")))
@interface KnostrSocialNostrBadge : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int64_t createdAt __attribute__((swift_name("createdAt")));
@property NSString *dTag __attribute__((swift_name("dTag")));
@property (setter=setDescription:) NSString *description_ __attribute__((swift_name("description_")));
@property KnostrCoreNostrEvent *event __attribute__((swift_name("event")));
@property NSString *image __attribute__((swift_name("image")));
@property NSString *name __attribute__((swift_name("name")));
@property NSString *thumbImage __attribute__((swift_name("thumbImage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface KnostrKotlinPair<__covariant A, __covariant B> : KnostrBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (KnostrKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrChannel")))
@interface KnostrSocialNostrChannel : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *about __attribute__((swift_name("about")));
@property int64_t createdAt __attribute__((swift_name("createdAt")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *name __attribute__((swift_name("name")));
@property NSString *picture __attribute__((swift_name("picture")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrChannelMessage")))
@interface KnostrSocialNostrChannelMessage : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *channelId __attribute__((swift_name("channelId")));
@property NSString *content __attribute__((swift_name("content")));
@property int64_t createdAt __attribute__((swift_name("createdAt")));
@property KnostrCoreNostrEvent *event __attribute__((swift_name("event")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrNote")))
@interface KnostrSocialNostrNote : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KnostrSocialNostrUser * _Nullable author __attribute__((swift_name("author")));
@property NSString *content __attribute__((swift_name("content")));

/** NIP-36 content warning reason (null if no warning) */
@property NSString * _Nullable contentWarning __attribute__((swift_name("contentWarning")));
@property int64_t createdAt __attribute__((swift_name("createdAt")));
@property KnostrCoreNostrEvent *event __attribute__((swift_name("event")));

/** NIP-40: event expiry timestamp (null if no expiry) */
@property KnostrLong * _Nullable expiry __attribute__((swift_name("expiry")));

/** NIP-36: whether this event is marked as sensitive */
@property BOOL isSensitive __attribute__((swift_name("isSensitive")));

/** Number of likes (kind:7 reactions) */
@property int32_t likeCount __attribute__((swift_name("likeCount")));

/** Media attachments (parsed from imeta/NIP-94 tags) */
@property NSArray<KnostrSocialNostrMedia *> *medias __attribute__((swift_name("medias")));

/** NIP-19 note bech32 ID */
@property NSString *noteId __attribute__((swift_name("noteId")));

/** NIP-18: quoted event ID (q tag) */
@property NSString * _Nullable quotedEventId __attribute__((swift_name("quotedEventId")));

/** Resolved quoted note content (from q-tag) */
@property KnostrSocialNostrNote * _Nullable quotedNote __attribute__((swift_name("quotedNote")));
@property NSArray<KnostrSocialNostrReaction *> *reactions __attribute__((swift_name("reactions")));
@property int32_t replyCount __attribute__((swift_name("replyCount")));

/** NIP-10: direct parent event ID (reply marker) */
@property NSString * _Nullable replyToEventId __attribute__((swift_name("replyToEventId")));
@property int32_t repostCount __attribute__((swift_name("repostCount")));

/** NIP-10: root event ID of the thread */
@property NSString * _Nullable rootEventId __attribute__((swift_name("rootEventId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrThread")))
@interface KnostrSocialNostrThread : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSArray<KnostrSocialNostrNote *> *replies __attribute__((swift_name("replies")));
@property KnostrSocialNostrNote * _Nullable rootNote __attribute__((swift_name("rootNote")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrList")))
@interface KnostrSocialNostrList : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int64_t createdAt __attribute__((swift_name("createdAt")));
@property KnostrCoreNostrEvent *event __attribute__((swift_name("event")));

/** d-tag list name */
@property NSString *name __attribute__((swift_name("name")));
@property NSArray<NSString *> *pubkeys __attribute__((swift_name("pubkeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrFileMetadata")))
@interface KnostrSocialNostrFileMetadata : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable blurhash __attribute__((swift_name("blurhash")));
@property int64_t createdAt __attribute__((swift_name("createdAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable dimensions __attribute__((swift_name("dimensions")));
@property KnostrCoreNostrEvent *event __attribute__((swift_name("event")));
@property NSString *mimeType __attribute__((swift_name("mimeType")));
@property NSString * _Nullable sha256 __attribute__((swift_name("sha256")));
@property KnostrLong * _Nullable sizeBytes __attribute__((swift_name("sizeBytes")));
@property NSString * _Nullable thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@property NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KnostrKotlinByteArray : KnostrBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KnostrByte *(^)(KnostrInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KnostrKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrMedia")))
@interface KnostrSocialNostrMedia : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Blurhash (for images) */
@property NSString * _Nullable blurhash __attribute__((swift_name("blurhash")));

/** Original file name */
@property NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@property KnostrInt * _Nullable height __attribute__((swift_name("height")));

/** MIME type */
@property NSString * _Nullable mimeType __attribute__((swift_name("mimeType")));

/** SHA-256 hash of the file */
@property NSString * _Nullable sha256 __attribute__((swift_name("sha256")));

/** File size in bytes */
@property KnostrLong * _Nullable sizeBytes __attribute__((swift_name("sizeBytes")));

/** Thumbnail URL */
@property NSString * _Nullable thumbnailUrl __attribute__((swift_name("thumbnailUrl")));

/** URL of the uploaded file */
@property NSString *url __attribute__((swift_name("url")));

/** Dimensions (for images/videos) */
@property KnostrInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrDirectMessage")))
@interface KnostrSocialNostrDirectMessage : KnostrBase
- (instancetype)initWithId:(NSString *)id senderPubkey:(NSString *)senderPubkey recipientPubkey:(NSString *)recipientPubkey content:(NSString *)content createdAt:(int64_t)createdAt event:(KnostrCoreNostrEvent * _Nullable)event isLegacy:(BOOL)isLegacy __attribute__((swift_name("init(id:senderPubkey:recipientPubkey:content:createdAt:event:isLegacy:)"))) __attribute__((objc_designated_initializer));
- (KnostrSocialNostrDirectMessage *)doCopyId:(NSString *)id senderPubkey:(NSString *)senderPubkey recipientPubkey:(NSString *)recipientPubkey content:(NSString *)content createdAt:(int64_t)createdAt event:(KnostrCoreNostrEvent * _Nullable)event isLegacy:(BOOL)isLegacy __attribute__((swift_name("doCopy(id:senderPubkey:recipientPubkey:content:createdAt:event:isLegacy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/** Decrypted message content */
@property (readonly) NSString *content __attribute__((swift_name("content")));

/** Timestamp (epoch seconds) */
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));

/** Original event (Gift Wrap for NIP-17, kind:4 for NIP-04) */
@property (readonly) KnostrCoreNostrEvent * _Nullable event __attribute__((swift_name("event")));

/** Event ID (from the Gift Wrap or kind:4 event) */
@property (readonly) NSString *id __attribute__((swift_name("id")));

/** true = NIP-04 legacy, false = NIP-17 modern */
@property (readonly) BOOL isLegacy __attribute__((swift_name("isLegacy")));

/** Recipient's pubkey (hex) */
@property (readonly) NSString *recipientPubkey __attribute__((swift_name("recipientPubkey")));

/** Sender's pubkey (hex) */
@property (readonly) NSString *senderPubkey __attribute__((swift_name("senderPubkey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrPoll")))
@interface KnostrSocialNostrPoll : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Closing timestamp (epoch seconds, null = no close) */
@property KnostrLong * _Nullable closedAt __attribute__((swift_name("closedAt")));
@property NSString *content __attribute__((swift_name("content")));
@property int64_t createdAt __attribute__((swift_name("createdAt")));
@property KnostrCoreNostrEvent *event __attribute__((swift_name("event")));
@property NSArray<KnostrSocialNostrPollOption *> *options __attribute__((swift_name("options")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrReaction")))
@interface KnostrSocialNostrReaction : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KnostrSocialNostrUser * _Nullable author __attribute__((swift_name("author")));

/** Reaction content: "+" (like), "-" (dislike), or emoji */
@property NSString *content __attribute__((swift_name("content")));
@property int64_t createdAt __attribute__((swift_name("createdAt")));

/** NIP-30: custom emoji URL (null for standard reactions) */
@property NSString * _Nullable emojiUrl __attribute__((swift_name("emojiUrl")));
@property KnostrCoreNostrEvent *event __attribute__((swift_name("event")));
@property NSString *targetEventId __attribute__((swift_name("targetEventId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrRelayListEntry")))
@interface KnostrSocialNostrRelayListEntry : KnostrBase
- (instancetype)initWithUrl:(NSString *)url read:(BOOL)read write:(BOOL)write __attribute__((swift_name("init(url:read:write:)"))) __attribute__((objc_designated_initializer));
- (KnostrSocialNostrRelayListEntry *)doCopyUrl:(NSString *)url read:(BOOL)read write:(BOOL)write __attribute__((swift_name("doCopy(url:read:write:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL read __attribute__((swift_name("read")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) BOOL write __attribute__((swift_name("write")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrUser")))
@interface KnostrSocialNostrUser : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable about __attribute__((swift_name("about")));
@property NSString * _Nullable banner __attribute__((swift_name("banner")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property int32_t followersCount __attribute__((swift_name("followersCount")));
@property int32_t followingCount __attribute__((swift_name("followingCount")));
@property BOOL isFollowedBy __attribute__((swift_name("isFollowedBy")));
@property BOOL isFollowing __attribute__((swift_name("isFollowing")));
@property BOOL isMuted __attribute__((swift_name("isMuted")));
@property NSString * _Nullable lud16 __attribute__((swift_name("lud16")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable nip05 __attribute__((swift_name("nip05")));
@property NSString *npub __attribute__((swift_name("npub")));
@property NSString * _Nullable picture __attribute__((swift_name("picture")));
@property NSString *pubkey __attribute__((swift_name("pubkey")));
@property NSString * _Nullable website __attribute__((swift_name("website")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrRelationship")))
@interface KnostrSocialNostrRelationship : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL isFollowedBy __attribute__((swift_name("isFollowedBy")));
@property BOOL isFollowing __attribute__((swift_name("isFollowing")));
@property BOOL isMuting __attribute__((swift_name("isMuting")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrUserStatus")))
@interface KnostrSocialNostrUserStatus : KnostrBase
- (instancetype)initWithType:(NSString *)type content:(NSString *)content url:(NSString * _Nullable)url expiration:(KnostrLong * _Nullable)expiration __attribute__((swift_name("init(type:content:url:expiration:)"))) __attribute__((objc_designated_initializer));
- (KnostrSocialNostrUserStatus *)doCopyType:(NSString *)type content:(NSString *)content url:(NSString * _Nullable)url expiration:(KnostrLong * _Nullable)expiration __attribute__((swift_name("doCopy(type:content:url:expiration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/** Status content text */
@property (readonly) NSString *content __attribute__((swift_name("content")));

/** Expiration timestamp (epoch seconds, null = no expiry) */
@property (readonly) KnostrLong * _Nullable expiration __attribute__((swift_name("expiration")));

/** Status type: "general" or "music" */
@property (readonly) NSString *type __attribute__((swift_name("type")));

/** Optional URL link */
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNostrProfile")))
@interface KnostrCoreNostrProfile : KnostrBase
- (instancetype)initWithName:(NSString * _Nullable)name about:(NSString * _Nullable)about picture:(NSString * _Nullable)picture banner:(NSString * _Nullable)banner nip05:(NSString * _Nullable)nip05 displayName:(NSString * _Nullable)displayName website:(NSString * _Nullable)website lud16:(NSString * _Nullable)lud16 __attribute__((swift_name("init(name:about:picture:banner:nip05:displayName:website:lud16:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KnostrCoreNostrProfileCompanion *companion __attribute__((swift_name("companion")));
- (KnostrCoreNostrProfile *)doCopyName:(NSString * _Nullable)name about:(NSString * _Nullable)about picture:(NSString * _Nullable)picture banner:(NSString * _Nullable)banner nip05:(NSString * _Nullable)nip05 displayName:(NSString * _Nullable)displayName website:(NSString * _Nullable)website lud16:(NSString * _Nullable)lud16 __attribute__((swift_name("doCopy(name:about:picture:banner:nip05:displayName:website:lud16:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable about __attribute__((swift_name("about")));
@property (readonly) NSString * _Nullable banner __attribute__((swift_name("banner")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name")
*/
@property (readonly) NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString * _Nullable lud16 __attribute__((swift_name("lud16")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable nip05 __attribute__((swift_name("nip05")));
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@property (readonly) NSString * _Nullable website __attribute__((swift_name("website")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNwcTransaction")))
@interface KnostrSocialNwcTransaction : KnostrBase
- (instancetype)initWithType:(NSString *)type invoice:(NSString *)invoice description:(NSString *)description preimage:(NSString *)preimage paymentHash:(NSString *)paymentHash amount:(int64_t)amount feesPaid:(int64_t)feesPaid createdAt:(int64_t)createdAt settledAt:(KnostrLong * _Nullable)settledAt __attribute__((swift_name("init(type:invoice:description:preimage:paymentHash:amount:feesPaid:createdAt:settledAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KnostrSocialNwcTransactionCompanion *companion __attribute__((swift_name("companion")));
- (KnostrSocialNwcTransaction *)doCopyType:(NSString *)type invoice:(NSString *)invoice description:(NSString *)description preimage:(NSString *)preimage paymentHash:(NSString *)paymentHash amount:(int64_t)amount feesPaid:(int64_t)feesPaid createdAt:(int64_t)createdAt settledAt:(KnostrLong * _Nullable)settledAt __attribute__((swift_name("doCopy(type:invoice:description:preimage:paymentHash:amount:feesPaid:createdAt:settledAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t amount __attribute__((swift_name("amount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fees_paid")
*/
@property (readonly) int64_t feesPaid __attribute__((swift_name("feesPaid")));
@property (readonly) NSString *invoice __attribute__((swift_name("invoice")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_hash")
*/
@property (readonly) NSString *paymentHash __attribute__((swift_name("paymentHash")));
@property (readonly) NSString *preimage __attribute__((swift_name("preimage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="settled_at")
*/
@property (readonly) KnostrLong * _Nullable settledAt __attribute__((swift_name("settledAt")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialLnurlPayInfo")))
@interface KnostrSocialLnurlPayInfo : KnostrBase
- (instancetype)initWithCallback:(NSString *)callback minSendable:(int64_t)minSendable maxSendable:(int64_t)maxSendable allowsNostr:(BOOL)allowsNostr nostrPubkey:(NSString * _Nullable)nostrPubkey __attribute__((swift_name("init(callback:minSendable:maxSendable:allowsNostr:nostrPubkey:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KnostrSocialLnurlPayInfoCompanion *companion __attribute__((swift_name("companion")));
- (KnostrSocialLnurlPayInfo *)doCopyCallback:(NSString *)callback minSendable:(int64_t)minSendable maxSendable:(int64_t)maxSendable allowsNostr:(BOOL)allowsNostr nostrPubkey:(NSString * _Nullable)nostrPubkey __attribute__((swift_name("doCopy(callback:minSendable:maxSendable:allowsNostr:nostrPubkey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allowsNostr")
*/
@property (readonly) BOOL allowsNostr __attribute__((swift_name("allowsNostr")));
@property (readonly) NSString *callback __attribute__((swift_name("callback")));
@property (readonly) int64_t maxSendable __attribute__((swift_name("maxSendable")));
@property (readonly) int64_t minSendable __attribute__((swift_name("minSendable")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nostrPubkey")
*/
@property (readonly) NSString * _Nullable nostrPubkey __attribute__((swift_name("nostrPubkey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrZap")))
@interface KnostrSocialNostrZap : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Amount in millisatoshis */
@property int64_t amountMilliSats __attribute__((swift_name("amountMilliSats")));
@property int64_t createdAt __attribute__((swift_name("createdAt")));

/** The zap receipt event (kind:9735) */
@property KnostrCoreNostrEvent *event __attribute__((swift_name("event")));

/** Zap message (from the zap request) */
@property NSString *message __attribute__((swift_name("message")));

/** The recipient of the zap */
@property NSString *recipientPubkey __attribute__((swift_name("recipientPubkey")));

/** The sender of the zap */
@property KnostrSocialNostrUser * _Nullable sender __attribute__((swift_name("sender")));

/** Target event ID (if zapping a specific note) */
@property NSString * _Nullable targetEventId __attribute__((swift_name("targetEventId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KnostrKotlinArray<T> : KnostrBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KnostrInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KnostrKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNostrEvent.Companion")))
@interface KnostrCoreNostrEventCompanion : KnostrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KnostrCoreNostrEventCompanion *shared __attribute__((swift_name("shared")));
- (id<KnostrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNostrFilter.Companion")))
@interface KnostrCoreNostrFilterCompanion : KnostrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KnostrCoreNostrFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<KnostrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNip05Result.Companion")))
@interface KnostrCoreNip05ResultCompanion : KnostrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KnostrCoreNip05ResultCompanion *shared __attribute__((swift_name("shared")));
- (id<KnostrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientWebsocketRequest")))
@interface KnostrKhttpclientWebsocketRequest : KnostrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KnostrKhttpclientWebsocketRequest *)acceptAccept:(NSString *)accept __attribute__((swift_name("accept(accept:)")));
- (KnostrKhttpclientWebsocketRequest *)bytesListenerListener:(id<KnostrKotlinSuspendFunction1>)listener __attribute__((swift_name("bytesListener(listener:)")));
- (void)close __attribute__((swift_name("close()")));
- (KnostrKhttpclientWebsocketRequest *)headerKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("header(key:value:)")));
- (KnostrKhttpclientWebsocketRequest *)hostHost:(NSString *)host __attribute__((swift_name("host(host:)")));
- (KnostrKhttpclientWebsocketRequest *)onCloseListenerListener:(void (^)(KnostrKhttpclientWebsocketRequest *))listener __attribute__((swift_name("onCloseListener(listener:)")));
- (KnostrKhttpclientWebsocketRequest *)onErrorListenerListener:(void (^)(KnostrKotlinException *))listener __attribute__((swift_name("onErrorListener(listener:)")));
- (KnostrKhttpclientWebsocketRequest *)onOpenListenerListener:(void (^)(KnostrKhttpclientWebsocketRequest *))listener __attribute__((swift_name("onOpenListener(listener:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)openWithCompletionHandler:(void (^)(KnostrKhttpclientWebsocketRequest * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("open(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)openPostWithCompletionHandler:(void (^)(KnostrKhttpclientWebsocketRequest * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("openPost(completionHandler:)")));
- (KnostrKhttpclientWebsocketRequest *)pathPath:(NSString *)path __attribute__((swift_name("path(path:)")));
- (KnostrKhttpclientWebsocketRequest *)portPort:(KnostrInt * _Nullable)port __attribute__((swift_name("port(port:)")));
- (KnostrKhttpclientWebsocketRequest *)schemaSchema:(NSString *)schema __attribute__((swift_name("schema(schema:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendBinaryContent:(KnostrKotlinByteArray *)content completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendBinary(content:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendTextText:(NSString *)text completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendText(text:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startMethod:(KnostrKtor_httpHttpMethod *)method completionHandler:(void (^)(KnostrKhttpclientWebsocketRequest * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("start(method:completionHandler:)")));
- (KnostrKhttpclientWebsocketRequest *)textListenerListener:(id<KnostrKotlinSuspendFunction1>)listener __attribute__((swift_name("textListener(listener:)")));
- (KnostrKhttpclientWebsocketRequest *)urlUrl:(NSString * _Nullable)url __attribute__((swift_name("url(url:)")));
- (KnostrKhttpclientWebsocketRequest *)userAgentUserAgent:(NSString *)userAgent __attribute__((swift_name("userAgent(userAgent:)")));
@property NSString * _Nullable accept __attribute__((swift_name("accept")));
@property id<KnostrKotlinSuspendFunction1> bytesListener __attribute__((swift_name("bytesListener")));
@property (readonly) KnostrMutableDictionary<NSString *, NSString *> *header __attribute__((swift_name("header")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property void (^onCloseListener)(KnostrKhttpclientWebsocketRequest *) __attribute__((swift_name("onCloseListener")));
@property void (^onErrorListener)(KnostrKotlinException *) __attribute__((swift_name("onErrorListener")));
@property void (^onOpenListener)(KnostrKhttpclientWebsocketRequest *) __attribute__((swift_name("onOpenListener")));
@property NSString * _Nullable path __attribute__((swift_name("path")));
@property KnostrInt * _Nullable port __attribute__((swift_name("port")));
@property NSString *schema __attribute__((swift_name("schema")));
@property id<KnostrKotlinSuspendFunction1> textListener __attribute__((swift_name("textListener")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property NSString * _Nullable userAgent __attribute__((swift_name("userAgent")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KnostrKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KnostrKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KnostrKotlinCoroutineContextElement> _Nullable)getKey:(id<KnostrKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KnostrKotlinCoroutineContext>)minusKeyKey:(id<KnostrKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KnostrKotlinCoroutineContext>)plusContext:(id<KnostrKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KnostrKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KnostrKotlinByteIterator : KnostrBase <KnostrKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KnostrByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNostrPollOption")))
@interface KnostrSocialNostrPollOption : KnostrBase
- (instancetype)initWithIndex:(int32_t)index label:(NSString *)label __attribute__((swift_name("init(index:label:)"))) __attribute__((objc_designated_initializer));
- (KnostrSocialNostrPollOption *)doCopyIndex:(int32_t)index label:(NSString *)label __attribute__((swift_name("doCopy(index:label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNostrProfile.Companion")))
@interface KnostrCoreNostrProfileCompanion : KnostrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KnostrCoreNostrProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<KnostrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialNwcTransaction.Companion")))
@interface KnostrSocialNwcTransactionCompanion : KnostrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KnostrSocialNwcTransactionCompanion *shared __attribute__((swift_name("shared")));
- (id<KnostrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialLnurlPayInfo.Companion")))
@interface KnostrSocialLnurlPayInfoCompanion : KnostrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KnostrSocialLnurlPayInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KnostrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KnostrKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<KnostrKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<KnostrKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KnostrKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<KnostrKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<KnostrKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KnostrKotlinx_serialization_coreKSerializer <KnostrKotlinx_serialization_coreSerializationStrategy, KnostrKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinFunction")))
@protocol KnostrKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol KnostrKotlinSuspendFunction1 <KnostrKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end


/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface KnostrKtor_httpHttpMethod : KnostrBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KnostrKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (KnostrKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KnostrKotlinCoroutineContextElement <KnostrKotlinCoroutineContext>
@required
@property (readonly) id<KnostrKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KnostrKotlinCoroutineContextKey
@required
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KnostrKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<KnostrKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<KnostrKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KnostrKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KnostrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<KnostrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KnostrKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/serialization/SealedSerializationApi)])
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KnostrKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<KnostrKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<KnostrKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<KnostrKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) KnostrKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KnostrKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<KnostrKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KnostrKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KnostrKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KnostrKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<KnostrKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KnostrKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface KnostrKtor_httpHttpMethodCompanion : KnostrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KnostrKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<KnostrKtor_httpHttpMethod *> *)getDefaultMethods __attribute__((swift_name("getDefaultMethods()"))) __attribute__((deprecated("Use DefaultMethods const instead")));
- (KnostrKtor_httpHttpMethod *)getDelete __attribute__((swift_name("getDelete()"))) __attribute__((deprecated("Use Delete const instead")));
- (KnostrKtor_httpHttpMethod *)getGet __attribute__((swift_name("getGet()"))) __attribute__((deprecated("Use Get const instead")));
- (KnostrKtor_httpHttpMethod *)getHead __attribute__((swift_name("getHead()"))) __attribute__((deprecated("Use Head const instead")));
- (KnostrKtor_httpHttpMethod *)getOptions __attribute__((swift_name("getOptions()"))) __attribute__((deprecated("Use Options const instead")));
- (KnostrKtor_httpHttpMethod *)getPatch __attribute__((swift_name("getPatch()"))) __attribute__((deprecated("Use Patch const instead")));
- (KnostrKtor_httpHttpMethod *)getPost __attribute__((swift_name("getPost()"))) __attribute__((deprecated("Use Post const instead")));
- (KnostrKtor_httpHttpMethod *)getPut __attribute__((swift_name("getPut()"))) __attribute__((deprecated("Use Put const instead")));
- (KnostrKtor_httpHttpMethod *)getTrace __attribute__((swift_name("getTrace()"))) __attribute__((deprecated("Use Trace const instead")));

/**
 * Parse HTTP method by [method] string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.parse)
 */
- (KnostrKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));

/**
 * A list of default HTTP methods
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.DefaultMethods)
 */
@property (readonly) NSArray<KnostrKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) KnostrKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) KnostrKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) KnostrKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) KnostrKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) KnostrKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) KnostrKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) KnostrKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@property (readonly) KnostrKtor_httpHttpMethod *Query __attribute__((swift_name("Query")));
@property (readonly) KnostrKtor_httpHttpMethod *Trace __attribute__((swift_name("Trace")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KnostrKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KnostrKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KnostrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KnostrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KnostrKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KnostrKotlinx_serialization_coreSerializersModule : KnostrBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KnostrKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KnostrKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KnostrKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KnostrKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KnostrKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KnostrKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KnostrKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KnostrKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KnostrKotlinAnnotation
@required
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KnostrKotlinx_serialization_coreSerialKind : KnostrBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KnostrKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KnostrKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KnostrKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KnostrKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<KnostrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KnostrKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KnostrKotlinNothing : KnostrBase
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KnostrKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KnostrKotlinKClass>)kClass provider:(id<KnostrKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KnostrKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KnostrKotlinKClass>)kClass serializer:(id<KnostrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<KnostrKotlinKClass>)baseClass actualClass:(id<KnostrKotlinKClass>)actualClass actualSerializer:(id<KnostrKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<KnostrKotlinKClass>)baseClass defaultDeserializerProvider:(id<KnostrKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<KnostrKotlinKClass>)baseClass defaultDeserializerProvider:(id<KnostrKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<KnostrKotlinKClass>)baseClass defaultSerializerProvider:(id<KnostrKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KnostrKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KnostrKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KnostrKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KnostrKotlinKClass <KnostrKotlinKDeclarationContainer, KnostrKotlinKAnnotatedElement, KnostrKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
