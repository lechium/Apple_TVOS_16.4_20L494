//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSSet, NSString;
@protocol SKPaymentDelegateProtocol, SKTransactionReceiverProtocol;

@protocol SKServiceProtocol <NSObject>
- (void)endAdImpressionWithConfig:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startAdImpressionWithConfig:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)updateConversionValue:(NSNumber *)arg1 coarseValue:(NSString *)arg2 lockWindow:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)updateConversionValue:(NSNumber *)arg1 coarseValue:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)updateConversionValue:(NSNumber *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)updateConversionValue:(NSNumber *)arg1;
- (void)registerForInstallAttribution;
- (void)repairArcadeApp;
- (void)arcadeSubscriptionStatusWithNonce:(unsigned long long)arg1 resultHandler:(void (^)(NSData *, unsigned int, NSData *, unsigned int, NSError *))arg2;
- (void)registerArcadeAppWithRandomFromLib:(NSData *)arg1 randomFromLibLength:(unsigned int)arg2 resultHandler:(void (^)(NSData *, unsigned int, NSData *, unsigned int, NSError *))arg3;
- (void)xcodeTestServerPortWithReplyBlock:(void (^)(long long))arg1;
- (void)xcodeTestCertificatesWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)manageSubscriptionsRequestWithReply:(void (^)(NSError *, NSData *))arg1;
- (void)refundRequestForTransactionId:(NSNumber *)arg1 replyBlock:(void (^)(NSError *, NSData *))arg2;
- (void)storefrontForClient:(NSDictionary *)arg1 withReplyBlock:(void (^)(NSString *, NSString *))arg2;
- (void)statusForSubscriptionGroupID:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setPromotionInfo:(NSDictionary *)arg1 forClient:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)setClientOverrides:(NSDictionary *)arg1 forBundleIdentifier:(NSString *)arg2 untilDate:(NSDate *)arg3 reply:(void (^)(NSError *))arg4;
- (void)resumeDownloadWithID:(NSNumber *)arg1;
- (void)restoreCompletedTransactionsForUsername:(NSString *)arg1 client:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestProductsWithIdentifiers:(NSArray *)arg1 client:(NSDictionary *)arg2 replyBlock:(void (^)(NSArray *, NSArray *, NSError *))arg3;
- (void)requestProductReviewWithInterfaceOrientation:(unsigned long long)arg1 bundleIdentifier:(NSString *)arg2 sceneID:(NSString *)arg3 replyBlock:(void (^)(_Bool))arg4;
- (void)requestProductReview;
- (void)renewReceiptWithOptions:(NSDictionary *)arg1 client:(NSDictionary *)arg2 replyBlock:(void (^)(_Bool, NSError *))arg3;
- (void)purchaseIntentsForClient:(NSDictionary *)arg1 clearOnRetrieval:(_Bool)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)clearPurchaseIntentForProductIdentifier:(NSString *)arg1;
- (void)clearPurchaseIntentsForBundleIdentifier:(NSString *)arg1;
- (void)purchaseIntentAppInstallSheetOpenForBundleIdentifier:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)promotionInfoForProductIdentifiers:(NSSet *)arg1 client:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)processPaymentWithBuyParamsString:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)processPayment:(NSDictionary *)arg1 forClient:(NSDictionary *)arg2 paymentDelegate:(id <SKPaymentDelegateProtocol>)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)presentCodeRedemptionSheet;
- (void)pauseDownloadWithID:(NSNumber *)arg1;
- (void)openGalette:(long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)openAlternativeWithReply:(void (^)(NSError *))arg1;
- (void)lookUpItemIDsForDeletableSystemAppsWithBundleIDs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)isXcodeTestAppWithReply:(void (^)(_Bool))arg1;
- (void)invalidateTransactionsAndStatusCacheWithReply:(void (^)(void))arg1;
- (void)insertMessageForBundleID:(NSString *)arg1 status:(long long)arg2 type:(long long)arg3 allowDeveloperControl:(_Bool)arg4 environment:(long long)arg5 reply:(void (^)(NSError *))arg6;
- (void)handleInvalidReceipt:(void (^)(void))arg1;
- (void)forceSandboxForBundleIdentifier:(NSString *)arg1 untilDate:(NSDate *)arg2 reply:(void (^)(void))arg3;
- (void)finishPaymentWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)enumerateUnfinishedTransactionsWithReceiver:(id <SKTransactionReceiverProtocol>)arg1 reply:(void (^)(NSError *))arg2;
- (void)enumerateReceiptsForProductID:(NSString *)arg1 withReceiver:(id <SKTransactionReceiverProtocol>)arg2 reply:(void (^)(NSError *))arg3;
- (void)enumerateCurrentReceiptsForProductID:(NSString *)arg1 withReceiver:(id <SKTransactionReceiverProtocol>)arg2 reply:(void (^)(NSError *))arg3;
- (void)deleteContentForProductID:(NSString *)arg1;
- (void)checkServerQueueForQueue:(NSString *)arg1 withClient:(NSDictionary *)arg2;
- (void)checkServerQueueForClientIfNecessary:(NSDictionary *)arg1 forceCheck:(_Bool)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)engagementRequestForOfferCodeRedemptionSheetWithReply:(void (^)(NSError *, NSData *))arg1;
- (void)displayMessageWithType:(NSNumber *)arg1;
- (void)checkForMessages;
- (void)canOpenGalette:(long long)arg1 reply:(void (^)(_Bool))arg2;
- (void)cancelDownloadWithID:(NSNumber *)arg1;
- (void)authenticateAndSyncTransactionsAndStatusWithReply:(void (^)(NSError *))arg1;
- (void)appTransactionForClient:(NSDictionary *)arg1 ignoreCache:(_Bool)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)addPurchaseIntent:(NSDictionary *)arg1 reply:(void (^)(void))arg2;
- (void)addDownloadWithID:(NSNumber *)arg1;
@end

