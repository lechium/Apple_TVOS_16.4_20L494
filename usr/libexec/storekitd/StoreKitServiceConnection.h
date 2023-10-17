//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue, NSString, _TtC9storekitd6Client;
@protocol OS_dispatch_queue, SKClientProtocol;

@interface StoreKitServiceConnection : NSObject
{
    NSMutableSet *_downloadIDs;	// 8 = 0x8
    int _pid;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_messageQueue;	// 24 = 0x18
    NSOperationQueue *_finishPaymentQueue;	// 32 = 0x20
    NSOperationQueue *_paymentQueue;	// 40 = 0x28
    NSOperationQueue *_productRequestQueue;	// 48 = 0x30
    NSOperationQueue *_appTerminationQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_productPromotionsQueue;	// 64 = 0x40
    _TtC9storekitd6Client *_client;	// 72 = 0x48
    id <SKClientProtocol> _remoteObject;	// 80 = 0x50
}

+ (long long)_apiVersionForClientDict:(id)arg1;	// IMP=0x002000000004a29b
+ (id)octaneConnectionForBundleID:(id)arg1;	// IMP=0x001000000003c950
+ (id)connectionForClient:(id)arg1;	// IMP=0x001000000003c4a5
+ (id)allConnections;	// IMP=0x001000000003c44d
+ (void)initialize;	// IMP=0x001000000003c3ef
- (void).cxx_destruct;	// IMP=0x001000000004a602
@property(readonly, nonatomic) id <SKClientProtocol> remoteObject; // @synthesize remoteObject=_remoteObject;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
- (_Bool)_isSKANVersionFourOrHigher:(id)arg1;	// IMP=0x001000000004a5c5
- (_Bool)_isClientValidForReview:(id)arg1;	// IMP=0x001000000004a5bd
- (id)_taskForLinkMode:(long long)arg1 presentingSheet:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004a301
- (id)_offerCodeRedemptionURLForClient:(id)arg1;	// IMP=0x0010000000049dd6
- (id)_silentAuthWithClientInfo:(id)arg1 account:(id)arg2 logKey:(id)arg3;	// IMP=0x001000000004994c
- (id)_processNameForConnection:(id)arg1;	// IMP=0x00100000000498cc
- (id)_processDownloadsForTransactions:(id)arg1;	// IMP=0x001000000004956a
- (id)_bundleURLForConnection:(id)arg1;	// IMP=0x0010000000049494
- (void)downloadManager:(id)arg1 updatedStatus:(id)arg2;	// IMP=0x001000000004909e
- (void)repairArcadeApp;	// IMP=0x0010000000048fa6
- (void)arcadeSubscriptionStatusWithNonce:(unsigned long long)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048e4b
- (void)registerArcadeAppWithRandomFromLib:(id)arg1 randomFromLibLength:(unsigned int)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000048cd5
- (void)checkForMessages;	// IMP=0x001000000004897b
- (void)isXcodeTestAppWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000048833
- (void)invalidateTransactionsAndStatusCacheWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000048677
- (void)enumerateUnfinishedTransactionsWithReceiver:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000481c6
- (void)enumerateReceiptsForProductID:(id)arg1 withReceiver:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047cff
- (void)enumerateCurrentReceiptsForProductID:(id)arg1 withReceiver:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047838
- (void)authenticateAndSyncTransactionsAndStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000047407
- (void)appTransactionForClient:(id)arg1 ignoreCache:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047003
- (void)purchaseIntentsForClient:(id)arg1 clearOnRetrieval:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000046970
- (void)clearPurchaseIntentForProductIdentifier:(id)arg1;	// IMP=0x0010000000046834
- (void)clearPurchaseIntentsForBundleIdentifier:(id)arg1;	// IMP=0x0010000000046731
- (void)purchaseIntentAppInstallSheetOpenForBundleIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004656a
- (void)addPurchaseIntent:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000460b0
- (void)setPromotionInfo:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045d56
- (void)promotionInfoForProductIdentifiers:(id)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000459db
- (void)xcodeTestCertificatesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045719
- (void)displayMessageWithType:(id)arg1;	// IMP=0x0010000000045650
- (void)openAlternativeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045549
- (void)openGalette:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004500b
- (void)canOpenGalette:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000044cdd
- (void)manageSubscriptionsRequestWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000004452e
- (void)refundRequestForTransactionId:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000443ff
- (void)xcodeTestServerPortWithReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000442ee
- (void)handleInvalidReceipt:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043fed
- (void)storefrontForClient:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043d2c
- (void)renewReceiptWithOptions:(id)arg1 client:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000043604
- (void)deleteContentForProductID:(id)arg1;	// IMP=0x001000000004353b
- (void)resumeDownloadWithID:(id)arg1;	// IMP=0x00100000000432f9
- (void)pauseDownloadWithID:(id)arg1;	// IMP=0x00100000000431a5
- (void)cancelDownloadWithID:(id)arg1;	// IMP=0x0010000000043051
- (void)addDownloadWithID:(id)arg1;	// IMP=0x0010000000042d9d
- (void)statusForSubscriptionGroupID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042b32
- (void)restoreCompletedTransactionsForUsername:(id)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004228e
- (void)notifyOfRevokedProductIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000041fbb
- (void)finishPaymentWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000419c2
- (void)_processPayment:(id)arg1 excludeReceipt:(_Bool)arg2 privacyAcknowledgementRequired:(_Bool)arg3 forClient:(id)arg4 apiVersion:(long long)arg5 paymentDelegate:(id)arg6 isProcessingInterruptedBuy:(_Bool)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x0010000000040a7b
- (void)processPayment:(id)arg1 forClient:(id)arg2 paymentDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000040072
- (void)processPaymentWithBuyParamsString:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003ef09
- (void)requestProductsWithIdentifiers:(id)arg1 client:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e87c
- (void)requestProductReview;	// IMP=0x001000000003e876
- (void)setClientOverrides:(id)arg1 forBundleIdentifier:(id)arg2 untilDate:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000003e6ce
- (void)insertMessageForBundleID:(id)arg1 status:(long long)arg2 type:(long long)arg3 allowDeveloperControl:(_Bool)arg4 environment:(long long)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000003e31e
- (void)forceSandboxForBundleIdentifier:(id)arg1 untilDate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e16a
- (void)receivedTransactions:(id)arg1;	// IMP=0x001000000003e048
- (void)checkServerQueueForClientIfNecessary:(id)arg1 forceCheck:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003d9ee
- (void)checkServerQueueForQueue:(id)arg1 withClient:(id)arg2;	// IMP=0x001000000003d707
- (void)loadUnfinishedTransactionsWithLogKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d368
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000003d274
- (id)initWithConnection:(id)arg1 remoteObject:(id)arg2 pid:(int)arg3;	// IMP=0x001000000003cbdf
- (void)bindPaymentAccountWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c3ab0
- (void)checkPaymentAccountBindingEligibilityWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c2e50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

