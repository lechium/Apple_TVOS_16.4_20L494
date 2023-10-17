//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, MISSING_TYPE, NSString;

@interface CPLPrequeliteResourceDownloadQueue
{
    CPLPrequeliteVariable *_nextTaskIdentifier;	// 8 = 0x8
    CPLPrequeliteVariable *_nextPosition;	// 16 = 0x10
    MISSING_TYPE *_recreatedDownloadQueueIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000058e19
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0010000000058d0e
- (id)statusPerScopeIndex;	// IMP=0x0010000000058c8a
- (id)status;	// IMP=0x00100000000588b9
- (id)recordsDesignation;	// IMP=0x00100000000588ac
- (_Bool)hasActiveOrQueuedBackgroundDownloadOperations;	// IMP=0x00100000000587fc
- (unsigned long long)countOfQueuedDownloadTasks;	// IMP=0x00100000000587e5
- (unsigned long long)_countOfRecordsWithStatus:(int)arg1;	// IMP=0x0010000000058734
- (id)enumeratorForDownloadedResources;	// IMP=0x0010000000058564
- (_Bool)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000583da
- (_Bool)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;	// IMP=0x00100000000582f3
- (id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 andIntent:(unsigned long long)arg2 maximumSize:(unsigned long long)arg3 maximumCount:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0010000000057c9e
- (_Bool)removeBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000057aff
- (_Bool)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000057954
- (_Bool)reenqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(_Bool)arg3 didDiscard:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0010000000057467
- (_Bool)enqueueBackgroundDownloadTaskForResource:(id)arg1 intent:(unsigned long long)arg2 downloading:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000056e1d
- (id)_enqueuedResourceForResource:(id)arg1 verifyScopeIndex:(_Bool)arg2;	// IMP=0x0010000000056c60
- (_Bool)_deleteEnqueuedResource:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000056ac6
- (_Bool)_getNextPosition:(unsigned long long *)arg1 andBumpWithError:(id *)arg2;	// IMP=0x0010000000056a0f
- (unsigned long long)newTaskIdentifier;	// IMP=0x00100000000568b6
- (_Bool)openWithError:(id *)arg1;	// IMP=0x00100000000567a4
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x001000000005612b
- (_Bool)initializeStorage;	// IMP=0x001000000005600c
- (_Bool)_createResourceTypeAndStatusIndex;	// IMP=0x0010000000055faf
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000055eac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end
