//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSTransactionLogSyncTask, NSObject;
@protocol IDSTransactionLogTaskHandlerDelegate, OS_dispatch_queue;

@interface IDSTransactionLogSyncTaskHandler
{
    IDSTransactionLogSyncTask *_syncTask;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <IDSTransactionLogTaskHandlerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011ba0e
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <IDSTransactionLogTaskHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSTransactionLogSyncTask *syncTask; // @synthesize syncTask=_syncTask;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withDecryptedPayload:(id)arg2 accountInfo:(id)arg3;	// IMP=0x000000000011b51e
- (id)_transactionMessageFromTransportMessage:(id)arg1 withParticipants:(id)arg2 accountInfo:(id)arg3;	// IMP=0x000000000011b24f
- (id)_transactionMessageFromTransportMessage:(id)arg1 withGroupID:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4;	// IMP=0x000000000011b247
- (id)_transactionMessageFromTransportMessage:(id)arg1 groups:(id)arg2 participants:(id)arg3 accountInfo:(id)arg4;	// IMP=0x000000000011b157
- (id)_participantsByAliasFromParticipants:(id)arg1;	// IMP=0x000000000011aecd
- (id)_groupsByGroupIDFromGroups:(id)arg1;	// IMP=0x000000000011ad11
- (id)_groupIDsFromMessages:(id)arg1;	// IMP=0x000000000011ab70
- (id)_destinationsInMessages:(id)arg1;	// IMP=0x000000000011a9cf
- (void)_completeWithError:(id)arg1;	// IMP=0x000000000011a95d
- (void)_transactionMessagesFromTransportMessages:(id)arg1 withParticipants:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000011a5f2
- (void)qFetchParticipantsFromDeviceMessges:(id)arg1 andGroupsFromGroupMessages:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000119bd5
- (void)qIngestMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001191f2
- (void)qPerformWithToken:(id)arg1;	// IMP=0x0000000000118b51
- (void)perform;	// IMP=0x000000000011884a
- (id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x000000000011877d

@end

