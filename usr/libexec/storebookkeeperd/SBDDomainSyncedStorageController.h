//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, NSDate, NSMutableArray, NSNumber, NSOperationQueue, NSString, SBCPlaybackPositionDomain, SBDML3UbiquitousDatabase, SBKUniversalPlaybackPositionStore;
@protocol OS_dispatch_queue;

@interface SBDDomainSyncedStorageController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    SBKUniversalPlaybackPositionStore *_uppStore;	// 32 = 0x20
    SBDML3UbiquitousDatabase *_ubiquitousDatabase;	// 40 = 0x28
    ML3MusicLibrary *_musicLibrary;	// 48 = 0x30
    NSNumber *_accountIdentifier;	// 56 = 0x38
    NSDate *_targetSyncDate;	// 64 = 0x40
    SBCPlaybackPositionDomain *_playbackPositionDomain;	// 72 = 0x48
}

+ (id)storageControllerForPlaybackPositionDomain:(id)arg1;	// IMP=0x0020000000007fab
- (void).cxx_destruct;	// IMP=0x00200000000073cb
@property(readonly, copy, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // @synthesize playbackPositionDomain=_playbackPositionDomain;
- (void)commitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007169
- (void)cancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x0010000000007153
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000070f1
- (_Bool)_isEnabled;	// IMP=0x00100000000070e3
- (_Bool)_databaseHasBookmarkableContents;	// IMP=0x001000000000705a
- (id)accountIdentifier;	// IMP=0x001000000000700f
- (void)_onOperationQueue_scheduleSyncBeforeDate:(id)arg1 isCheckpoint:(_Bool)arg2;	// IMP=0x0010000000006bb3
- (void)removeStorageObserver:(id)arg1;	// IMP=0x0010000000006b26
- (void)addStorageObserver:(id)arg1;	// IMP=0x0010000000006a99
@property(readonly, copy, nonatomic) NSNumber *lastSynchronizationFailureAccountIdentifier;
@property(readonly, copy, nonatomic) NSNumber *lastSynchronizedAccountIdentifier;
- (id)readUbiquitousDatabaseMetadataValuesForIdentifiers:(id)arg1 clientIdentity:(id)arg2;	// IMP=0x0010000000006a66
- (void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1 clientIdentity:(id)arg2;	// IMP=0x001000000000699c
- (void)deletePlaybackPositionEntity:(id)arg1 clientIdentity:(id)arg2;	// IMP=0x00100000000068d2
- (void)persistPlaybackPositionEntity:(id)arg1 clientIdentity:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000067e6
- (void)synchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000066f0
- (void)synchronizeForChangedAccountByResetInvalidatingLocalChanges:(_Bool)arg1 beforeDate:(id)arg2;	// IMP=0x00100000000065bb
- (void)synchronizeForUpdatedRemoteDomainVersion:(id)arg1 beforeDate:(id)arg2;	// IMP=0x0010000000006474
- (void)synchronizeBeforeDate:(id)arg1 isCheckpoint:(_Bool)arg2;	// IMP=0x00100000000063d2
@property(readonly, nonatomic) _Bool needsInitialSync;
@property(readonly, nonatomic) _Bool needsPush;
@property(readonly, nonatomic) _Bool needsPull;
@property(readonly, nonatomic) _Bool needsPoll;
- (id)initWithPlaybackPositionDomain:(id)arg1;	// IMP=0x0010000000005e98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

