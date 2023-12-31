//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol CKFetchArchivedRecordsOperationCallbacks, OS_dispatch_queue;

@interface CKDFetchArchivedRecordsOperation
{
    CDUnknownBlockType _recordFetchedBlock;	// 8 = 0x8
    CDUnknownBlockType _serverChangeTokenUpdatedBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000034735b
@property(copy, nonatomic) CDUnknownBlockType serverChangeTokenUpdatedBlock; // @synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000003472b1
- (void)_noteOperationFinishedBlockEnd;	// IMP=0x000000000034728b
- (void)_noteOperationEnding;	// IMP=0x0000000000347265
- (void)_noteOperationBeginning;	// IMP=0x000000000034723f
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;	// IMP=0x0000000000346d91
- (int)operationType;	// IMP=0x0000000000346d86
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;	// IMP=0x0000000000346aa8
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;	// IMP=0x0000000000346a2e
- (void)_noteChangedRecordWithID:(id)arg1 record:(id)arg2 error:(id)arg3;	// IMP=0x000000000034696f
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;	// IMP=0x0000000000345d24
- (id)activityCreate;	// IMP=0x0000000000345cfb
@property(readonly, nonatomic) NSString *pipeliningDescription;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000345b75

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(retain, nonatomic) id <CKFetchArchivedRecordsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

