//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, PARSessionConfiguration;

@interface _TtC7parsecd16ClientConnection
{
    MISSING_TYPE *assembly;	// 8 = 0x8
    MISSING_TYPE *backgroundQueue;	// 24 = 0x18
    MISSING_TYPE *clientStateManager;	// 32 = 0x20
    MISSING_TYPE *remoteObject;	// 48 = 0x30
    MISSING_TYPE *connection;	// 56 = 0x38
    MISSING_TYPE *timer;	// 64 = 0x40
    MISSING_TYPE *transactionOpen;	// 72 = 0x48
    MISSING_TYPE *isActiveListener;	// 80 = 0x50
    MISSING_TYPE *transaction;	// 88 = 0x58
    MISSING_TYPE *cancellableLock;	// 96 = 0x60
    MISSING_TYPE *cancellables;	// 104 = 0x68
    MISSING_TYPE *parClientRequiresStateChangeNotifications;	// 112 = 0x70
    MISSING_TYPE *_lastState;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0040000000066480
- (id)init;	// IMP=0x001000000006c620
- (void)getImageMap:(CDUnknownBlockType)arg1;	// IMP=0x001000000006c5c0
- (void)updateParametersForSmartSearchV1:(id)arg1 smartSearchV2:(id)arg2;	// IMP=0x001000000006c550
- (void)clearEncodedEngagedResults:(id)arg1 withConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006c340
- (void)topEncodedEngagedResultsForInput:(NSString *)arg1 maxCount:(long long)arg2 withConfiguration:(PARSessionConfiguration *)arg3 completion:(void (^)(NSArray *))arg4;	// IMP=0x001000000006bbb0
- (void)addEncodedEngagedResults:(id)arg1 withConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006b680
- (void)addEncodedEngagedResults:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x001000000006b480
- (void)clearEngagementsWithTitle:(id)arg1 type:(id)arg2;	// IMP=0x001000000006aeb0
- (void)clearEngagementsFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x001000000006aca0
- (void)fileHandleForWritingFeedbackType:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000006ab20
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006aa90
- (void)listSessions:(CDUnknownBlockType)arg1;	// IMP=0x001000000006a9d0
- (void)stopSessions:(CDUnknownBlockType)arg1;	// IMP=0x001000000006a730
- (void)teeFeedback:(CDUnknownBlockType)arg1;	// IMP=0x001000000006a670
- (void)reportFeedback:(id)arg1 payloadData:(id)arg2 queryId:(unsigned long long)arg3;	// IMP=0x001000000006a270
- (void)reportPegasusFeedbackWithPayloadData:(id)arg1 forUseragent:(id)arg2;	// IMP=0x00100000000681b0
- (void)request:(id)arg1 request:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000067b10
- (void)forceFetchBag:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067a40
- (void)bag:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067840
- (void)fileDeleteNotificationWithNotification:(id)arg1;	// IMP=0x00100000000674f0
- (void)fileDownloadNotificationWithNotification:(id)arg1;	// IMP=0x0010000000067310
- (void)bagChangeNotificationWithNotification:(id)arg1;	// IMP=0x0010000000066e70
- (void)handleInvocation;	// IMP=0x0010000000066a30
- (void)dealloc;	// IMP=0x0010000000066460

@end

