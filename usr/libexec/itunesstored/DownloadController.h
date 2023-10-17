//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WorkspaceDownloadObserver;
@protocol OS_dispatch_queue;

@interface DownloadController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_externalQueue;	// 16 = 0x10
    NSMutableArray *_managerClients;	// 24 = 0x18
    NSCountedSet *_networkKinds;	// 32 = 0x20
    NSMutableSet *_rescuingBundleIdentifiers;	// 40 = 0x28
    ISOperationQueue *_thumbnailOperationQueue;	// 48 = 0x30
    NSMutableDictionary *_thumbnailRequestsByDownloadID;	// 56 = 0x38
    WorkspaceDownloadObserver *_workspaceDownloadObserver;	// 64 = 0x40
}

+ (id)controller;	// IMP=0x0020000000148c53
- (void).cxx_destruct;	// IMP=0x002000000015af0e
- (void)_sendDownloadKindsUsingNetwork:(id)arg1;	// IMP=0x001000000015ad6c
- (void)_retryRestoreIfNecessaryForTransaction:(id)arg1;	// IMP=0x001000000015aac6
- (_Bool)_restartDownloads:(id)arg1 client:(id)arg2;	// IMP=0x001000000015a2ef
- (_Bool)_resumeDownloads:(id)arg1 client:(id)arg2;	// IMP=0x0010000000159afd
- (void)_rescueStuckPlaceholderWithBundleID:(id)arg1;	// IMP=0x0010000000159373
- (_Bool)_prioritizeDownload:(id)arg1 aboveDownload:(id)arg2 client:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000158d0d
- (_Bool)_pauseDownloads:(id)arg1 isForced:(_Bool)arg2 client:(id)arg3;	// IMP=0x0010000000157f8a
- (id)_managerClientForConnection:(id)arg1;	// IMP=0x0010000000157d92
- (void)_handleSessionMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000157c75
- (void)_handleSessionMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000157bdb
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000157a7a
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000157977
- (void)_filterAndTranslateProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001577e4
- (id)_downloadPersistentIDsFromBundleIDs:(id)arg1;	// IMP=0x00100000001572b4
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000157195
- (_Bool)_cancelDownloads:(id)arg1 client:(id)arg2;	// IMP=0x00100000001568f0
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x0010000000156568
- (void)setSessionStatusDescriptionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001563f7
- (void)setSessionPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001560c6
- (void)setSessionProgressWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000155f4b
- (void)setHandlerPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000155a39
- (void)setClientDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001558b6
- (void)resetDisavowedSessionsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001557b8
- (void)getSessionPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015538c
- (void)finishSessionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000154cc7
- (void)connectDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000154632
- (void)setCellularNetworkAllowed:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000154508
- (void)getCellularNetworkAllowed:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015445e
- (void)setDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000152a33
- (void)setDownloadPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001524d6
- (void)setDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000151c16
- (void)setAssetPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015180b
- (void)retryRestoreDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000151669
- (void)restartDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000151402
- (void)resumeDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015119b
- (void)removePersistenceIDWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000150fb4
- (void)registerClientDownloadManager:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001503e0
- (void)prioritizeDownloadWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001501f7
- (void)pauseDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000150087
- (void)notifyClientsOfExternalPropertyChanges:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014fecf
- (void)notifyClientsOfExternalStateChanges:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014f816
- (void)moveDownloadWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014f581
- (void)insertDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014e2c3
- (void)getEntityExistsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014dfe9
- (void)getDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014d38c
- (void)getDownloadPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014ce4f
- (void)getDownloadKindsUsingNetworkWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014cdad
- (void)getDownloadAssetsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014c97f
- (void)getDownloadAssetPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014c440
- (void)getActiveDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014c0f8
- (void)finishDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014bb4c
- (void)cancelDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014b9f0
- (void)cancelAllDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014b5a5
- (void)applicationInstallsDidPrioritize:(id)arg1;	// IMP=0x001000000014a829
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x001000000014a530
- (void)applicationInstallsDidResume:(id)arg1;	// IMP=0x001000000014a200
- (void)applicationInstallsDidPause:(id)arg1;	// IMP=0x0010000000149ef9
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;	// IMP=0x0010000000149ef3
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000149eed
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0010000000149ee7
- (void)applicationInstallsDidUpdateIcon:(id)arg1;	// IMP=0x0010000000149ee1
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x0010000000149edb
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x0010000000149ed5
- (void)start;	// IMP=0x0010000000149d11
- (void)observeXPCServer:(id)arg1;	// IMP=0x00100000001498eb
- (void)notifyClientsOfPropertyChanges:(id)arg1 forDownloadID:(long long)arg2 downloadKind:(id)arg3;	// IMP=0x0010000000149631
- (void)notifyClientsOfExternalPropertyChanges:(id)arg1 forDownloadID:(long long)arg2 downloadKind:(id)arg3;	// IMP=0x0010000000149376
- (void)notifyClientsOfChangeset:(id)arg1;	// IMP=0x0010000000148efa
- (void)endUsingNetworkForDownloadKind:(id)arg1;	// IMP=0x0010000000148df7
- (void)beginUsingNetworkForDownloadKind:(id)arg1;	// IMP=0x0010000000148ce0
- (void)dealloc;	// IMP=0x0010000000148bb3
- (id)init;	// IMP=0x0010000000148a64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
