//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKOperation, CPLCloudKitScope, CPLCloudKitZoneIdentification, CPLEngineScope, NSDate, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitCleanupStagedScopeTask
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    CPLCloudKitScope *_stagingCloudKitScope;	// 24 = 0x18
    CPLCloudKitScope *_destinationCloudKitScope;	// 32 = 0x20
    long long _batchSize;	// 40 = 0x28
    CPLCloudKitZoneIdentification *_stagingZoneIdentification;	// 48 = 0x30
    CPLEngineScope *_stagedScope;	// 56 = 0x38
    CPLEngineScope *_stagingScope;	// 64 = 0x40
    CPLEngineScope *_destinationScope;	// 72 = 0x48
    CKOperation *_mainOperation;	// 80 = 0x50
    CKOperation *_auxiliaryOperation;	// 88 = 0x58
    NSDate *_dateSinceLastAuxiliaryOperation;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000137e80
@property(readonly, nonatomic) NSDate *dateSinceLastAuxiliaryOperation; // @synthesize dateSinceLastAuxiliaryOperation=_dateSinceLastAuxiliaryOperation;
@property(readonly, nonatomic) CKOperation *auxiliaryOperation; // @synthesize auxiliaryOperation=_auxiliaryOperation;
@property(readonly, nonatomic) CKOperation *mainOperation; // @synthesize mainOperation=_mainOperation;
@property(readonly, nonatomic) CPLEngineScope *destinationScope; // @synthesize destinationScope=_destinationScope;
@property(readonly, nonatomic) CPLEngineScope *stagingScope; // @synthesize stagingScope=_stagingScope;
@property(readonly, nonatomic) CPLEngineScope *stagedScope; // @synthesize stagedScope=_stagedScope;
@property(readonly, nonatomic) _Bool isAuxiliaryOperationResultRelevant;
@property(readonly, nonatomic) _Bool shouldLaunchAuxiliaryOperation;
- (void)auxiliaryOperationDidFinishWithError:(id)arg1;	// IMP=0x0010000000137d56
- (void)launchAuxiliaryOperation:(id)arg1 type:(long long)arg2 withContext:(id)arg3;	// IMP=0x0010000000137be5
- (void)operationDidFinishWithError:(id)arg1;	// IMP=0x0010000000137b7d
- (void)updateProgress:(double)arg1;	// IMP=0x0010000000137b48
- (void)updateContextWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000137ae0
- (void)updateOneBatch;	// IMP=0x0010000000137aab
- (void)operationDidFinish:(id)arg1 error:(id)arg2;	// IMP=0x0010000000137a36
- (void)launchOperation:(id)arg1 type:(long long)arg2 withContext:(id)arg3 sourceBundleIdentifiers:(id)arg4;	// IMP=0x001000000013794a
- (void)dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001377c1
- (void)runOperations;	// IMP=0x0010000000137447
- (void)runAuxiliaryOperation;	// IMP=0x0010000000136fab
- (void)_fetchAndMoveNextBatchWithUserRecordID:(id)arg1;	// IMP=0x00100000001369cc
- (void)_moveBatchRecordWithNames:(id)arg1 userRecordID:(id)arg2 operationID:(id)arg3 moveBatchID:(id)arg4 hasMore:(_Bool)arg5;	// IMP=0x0010000000136338
- (void)_sendExitFeedbackWithSourceRecordIDs:(id)arg1 destinationRecordIDs:(id)arg2 moveError:(id)arg3 operationID:(id)arg4 moveBatchID:(id)arg5;	// IMP=0x0010000000135efa
- (id)initWithController:(id)arg1 stagedScope:(id)arg2 stagingScope:(id)arg3 destinationScope:(id)arg4 transportScopeMapping:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000135cbf

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

