//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, LoadDownloadQueueOperation, MISSING_TYPE, NSMutableOrderedSet, NSMutableSet, NSNumber, NSSet;
@protocol OS_dispatch_queue;

@interface StoreDownloadQueue : NSObject
{
    NSMutableOrderedSet *_activeRestoreIDs;	// 8 = 0x8
    _Bool _automaticDownloadsAreDisabled;	// 16 = 0x10
    _Bool _checkAutomaticDownloadQueueOnEnable;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSNumber *_lastCheckedAccountID;	// 32 = 0x20
    LoadDownloadQueueOperation *_loadAutomaticDownloadQueueOperation;	// 40 = 0x28
    ISOperationQueue *_operationQueue;	// 48 = 0x30
    ISOperationQueue *_restoreOperationQueue;	// 56 = 0x38
    NSMutableSet *_storeQueueRequests;	// 64 = 0x40
    NSMutableOrderedSet *_trackedPurchaseDownloadIDs;	// 72 = 0x48
}

+ (void)triggerDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00400000000adc87
+ (void)synchronizeAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000adc04
+ (void)setAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000ad629
+ (void)reloadFromServerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000ad1d8
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00100000000ad0fd
+ (void)getAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000acf82
+ (void)cancelRedownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000ace98
+ (id)sharedDownloadQueue;	// IMP=0x00100000000aa048
- (void).cxx_destruct;	// IMP=0x00200000000b3714
- (id)_validQueueIdentifiersForPlatform;	// IMP=0x00100000000b3652
- (id)_validQueueIdentifiersForDaemon;	// IMP=0x00100000000b348f
- (void)_synchronizeAutomaticDownloadKinds:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b31d5
- (void)_setLastCheckedAccountID:(id)arg1;	// IMP=0x00100000000b3127
- (id)_restorableDownloadsQueryInDatabase:(id)arg1;	// IMP=0x00100000000b2ee1
- (void)_retrySoftFailedRestoreDownloads;	// IMP=0x00100000000b2c43
- (void)_retryCanceledRestoreDownloads;	// IMP=0x00100000000b2992
- (id)_newSetAutomaticDownloadKindsOperationWithDownloadKinds:(id)arg1 account:(id)arg2;	// IMP=0x00100000000b28e5
- (id)_newQueueRequestsWithReason:(id)arg1 accountID:(id)arg2 session:(id)arg3;	// IMP=0x00100000000b22cf
- (id)_newOperationByCommitingAutomaticDownloadKinds:(id)arg1 account:(id)arg2;	// IMP=0x00100000000b2204
- (id)_newLoadQueueOperationForQueueRequest:(id)arg1;	// IMP=0x00100000000b1485
- (id)_newCheckQueueOperationForQueueRequest:(id)arg1;	// IMP=0x00100000000b0574
- (_Bool)_ignoreVideos;	// IMP=0x00100000000b0495
- (MISSING_TYPE *)_checkAutomaticDownloadQueue: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000af57d
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000af3f8
- (id)_downloadQueryWithQueueRequest:(id)arg1 database:(id)arg2;	// IMP=0x00100000000af1c2
- (id)_automaticDownloadsQueryWithDatabase:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000000af031
- (void)_addOperationsForRequests:(id)arg1 reason:(id)arg2;	// IMP=0x00100000000ae7a8
- (void)_networkTypeChangedNotification:(id)arg1;	// IMP=0x00100000000ae6a1
- (void)_accountStoreChangedNotification:(id)arg1;	// IMP=0x00100000000ae1a6
- (void)_accountAuthenticatedNotification:(id)arg1;	// IMP=0x00100000000adedd
- (void)synchronizeAutomaticDownloadKinds;	// IMP=0x00100000000ace84
- (void)setAutomaticDownloadKinds:(id)arg1 account:(id)arg2;	// IMP=0x00100000000ace16
@property(copy, nonatomic) NSSet *automaticDownloadKinds;
- (void)restoreDownloadsWithIdentifiers:(id)arg1 reason:(id)arg2;	// IMP=0x00100000000ac59b
- (void)restoreAllRestorableDownloadsWithReason:(id)arg1;	// IMP=0x00100000000ac379
@property(readonly, nonatomic) NSSet *enabledDownloadKinds;
- (void)enableAutomaticDownloadsWithReason:(id)arg1;	// IMP=0x00100000000abf15
- (void)disableAutomaticDownloadsWithReason:(id)arg1;	// IMP=0x00100000000abcbe
@property(readonly) NSSet *downloadKindsBeingChecked;
- (void)commitAutomaticDownloadKinds:(id)arg1 markAsDirty:(_Bool)arg2;	// IMP=0x00100000000ab3c2
- (void)checkQueuesWithRequest:(id)arg1;	// IMP=0x00100000000ab2b1
- (_Bool)checkQueuesWithReason:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000000ab055
- (void)checkAutomaticDownloadQueue;	// IMP=0x00100000000aa3fe
- (_Bool)cancelAllRedownloads;	// IMP=0x00100000000aa118
- (void)dealloc;	// IMP=0x00100000000a9ed6
- (id)init;	// IMP=0x00100000000a997f

@end

