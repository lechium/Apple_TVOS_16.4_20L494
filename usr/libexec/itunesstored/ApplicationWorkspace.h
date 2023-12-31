//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSCountedSet, NSLock, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ApplicationWorkspace : NSObject
{
    NSMutableDictionary *_appProgress;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
    NSMutableArray *_operations;	// 40 = 0x28
    NSCountedSet *_pendingInstalls;	// 48 = 0x30
    ISOperationQueue *_placeholderIconOperationQueue;	// 56 = 0x38
    NSMutableArray *_syncWaitBlocks;	// 64 = 0x40
    NSMutableDictionary *_waitBlocks;	// 72 = 0x48
}

+ (_Bool)keepSafeHarborDataForBundleID:(id)arg1;	// IMP=0x00400000000efa1c
+ (id)defaultWorkspace;	// IMP=0x00100000000ee10b
- (void).cxx_destruct;	// IMP=0x00200000000f319b
- (void)_decrementPendingInstallsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f2f5a
- (void)_incrementPendingInstallsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f2ee3
- (void)_updatePlaceholderWithODRProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000f2e03
- (id)_thumbnailDownloadOperationForDownloadID:(long long)arg1;	// IMP=0x00100000000f2c47
- (void)_stopObservingODRProgress:(id)arg1;	// IMP=0x00100000000f2be2
- (void)_removeOperationsForDownloadIdentifier:(long long)arg1 operationClass:(Class)arg2;	// IMP=0x00100000000f2ad4
- (void)_removeOperationsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f2ac0
- (void)_removeApplicationDownloadProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000f2a73
- (void)_performNextOperation;	// IMP=0x00100000000f277d
- (_Bool)_isInstallingForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f253d
- (_Bool)_hasThumbnailDownloadOperationForDownloadID:(long long)arg1;	// IMP=0x00100000000f250a
- (void)_fireWaitBlocksForSyncTermination;	// IMP=0x00100000000f22aa
- (void)_fireWaitBlocksIfNecessaryForDownloadWithIdentifier:(long long)arg1;	// IMP=0x00100000000f2061
- (id)_copyCombinedApplicationProgress:(id)arg1 forApplicationHandle:(id)arg2;	// IMP=0x00100000000f1faa
- (void)_cancelPlaceholderThumbnailInstallForDownloadID:(long long)arg1;	// IMP=0x00100000000f1dc1
- (void)_addProgressOperation:(id)arg1;	// IMP=0x00100000000f1b14
- (void)_addOperationAtBeginning:(id)arg1;	// IMP=0x00100000000f1a47
- (id)sinfPathForBundleID:(id)arg1;	// IMP=0x00100000000f1872
- (void)waitForSyncBubbleToTerminateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f186c
- (void)waitForInstallOfDownloadIdentifier:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f1513
- (void)updatePlaceholderWithApplicationProgress:(id)arg1;	// IMP=0x00100000000f13dc
- (void)updatePlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f12ef
- (void)uninstallPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f11e0
- (void)suspendQuotas;	// IMP=0x00100000000f11da
- (_Bool)shouldModifyQuota:(id)arg1;	// IMP=0x00100000000f1179
- (void)setIconData:(id)arg1 forApplicationHandle:(id)arg2;	// IMP=0x00100000000f0f03
- (void)resumeQuotas;	// IMP=0x00100000000f0efd
- (void)restorePlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f0e11
- (void)resetProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000f0d29
- (void)replayIncompleteOperations;	// IMP=0x00100000000efc7b
- (void)markFailedPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000efb6c
- (_Bool)isRemovedSystemApp:(id)arg1;	// IMP=0x00100000000efa07
- (_Bool)isInstalledApp:(id)arg1;	// IMP=0x00100000000ef8d6
- (void)installPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000ef600
- (_Bool)isMultiUser;	// IMP=0x00100000000ef5f8
- (_Bool)isDownloadingOrInstallingForItemIdentifier:(id)arg1;	// IMP=0x00100000000ee961
- (void)finishInstallOfApplicationHandle:(id)arg1;	// IMP=0x00100000000ee845
- (void)endExternalInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000ee7b9
- (void)cancelPlaceholderInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000ee752
- (void)beginExternalInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000ee740
- (void)addPlaceholderThumbnailOperation:(id)arg1;	// IMP=0x00100000000ee440
- (void)applyWorkspaceChanges:(id)arg1;	// IMP=0x00100000000ee190
- (id)init;	// IMP=0x00100000000edf9c

@end

