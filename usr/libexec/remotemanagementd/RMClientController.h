//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSPersistentContainer, NSString, RMDeviceLockStateListener, RMSharedLock;
@protocol OS_dispatch_queue;

@interface RMClientController : NSObject
{
    RMSharedLock *_cloudConfigLock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSManagedObjectContext *_context;	// 24 = 0x18
    NSPersistentContainer *_persistentContainer;	// 32 = 0x20
    RMDeviceLockStateListener *_lockStateListener;	// 40 = 0x28
    NSMutableSet *_processingClientStateChanges;	// 48 = 0x30
    NSMutableDictionary *_clientByManagementSourceIdentifier;	// 56 = 0x38
}

+ (_Bool)_shouldRegisterForCloudConfigAvailableNotification;	// IMP=0x0020000000013664
+ (void)startListeningForNotifications;	// IMP=0x0010000000011f5a
+ (void)start;	// IMP=0x0010000000011ec1
+ (id)sharedController;	// IMP=0x0010000000011dc2
- (void).cxx_destruct;	// IMP=0x002000000001bfaf
@property(readonly, nonatomic) NSMutableDictionary *clientByManagementSourceIdentifier; // @synthesize clientByManagementSourceIdentifier=_clientByManagementSourceIdentifier;
@property(retain, nonatomic) NSMutableSet *processingClientStateChanges; // @synthesize processingClientStateChanges=_processingClientStateChanges;
@property(readonly, nonatomic) RMDeviceLockStateListener *lockStateListener; // @synthesize lockStateListener=_lockStateListener;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)lockStateDidChange:(_Bool)arg1;	// IMP=0x001000000001bf32
- (void)_completedClientStateChanges:(id)arg1;	// IMP=0x001000000001be80
- (_Bool)_canProcessClientStateChanges:(id)arg1;	// IMP=0x001000000001bd44
- (void)clientNeedsToUnenrollWithManagementSourceIdentifier:(id)arg1;	// IMP=0x001000000001bc5e
- (void)clientNeedsToReenrollWithManagementSourceIdentifier:(id)arg1;	// IMP=0x001000000001b880
- (id)_clientWithIdentifier:(id)arg1;	// IMP=0x001000000001b7f5
- (void)sendStatusForSubscriptionsWithIdentifiers:(id)arg1 toManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b496
- (void)queryForStatusSubscriptionsWithIdentifiers:(id)arg1 fromManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b125
- (void)sendStatusData:(id)arg1 toManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001af54
- (void)updateWithIdentifier:(id)arg1 tokensResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ad84
- (void)updateWithIdentifier:(id)arg1 pushMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001abb4
- (void)applyNowWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a9fb
- (void)syncAllManagementSourcesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001a641
- (void)syncWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a488
- (void)managementChannelsChanged;	// IMP=0x001000000001a2c0
- (void)managementChannelWithEnrollmentURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019f93
- (void)managementChannelWithAccountIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019c8f
- (void)deviceChannelEnrollmentExistsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019a78
- (_Bool)_didUnenrollClientWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000193e4
- (void)unenrollWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000190e7
- (void)_didEnrollClient:(id)arg1 conduitType:(long long)arg2 managementSourceObjectID:(id)arg3 account:(id)arg4 accountStore:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000018864
- (void)_didFailToEnrollClientForManagementObjectID:(id)arg1;	// IMP=0x00100000000186a8
- (id)_genericCredentialForAccount:(id)arg1 fromStore:(id)arg2;	// IMP=0x00100000000182af
- (id)_bootstrapURIForAccount:(id)arg1;	// IMP=0x0010000000018156
- (void)_enrollAccount:(id)arg1 fromStore:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017560
- (void)reenrollWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017273
- (void)enrollViaMDMWithEnrollmentType:(long long)arg1 uri:(id)arg2 accountIdentifier:(id)arg3 personaIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000162ad
- (void)enrollUserChannelWithAccountIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015ec5
- (void)enrollDeviceChannelWithURI:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014ed1
- (_Bool)_hasMDMv1ManagementForManagingProfileIdentifier:(id)arg1;	// IMP=0x0010000000014e39
- (void)_syncMDMv1ManagementSourcesWithUnenroll:(_Bool)arg1;	// IMP=0x001000000001451c
- (void)_receivedMDMv1UnenrollNotification;	// IMP=0x0010000000014505
- (void)_unenrollAndReenrollIfDEP:(id)arg1;	// IMP=0x0010000000013eb4
- (id)_makeClientWithManagementSourceObjectID:(id)arg1 managementSourceIdentifier:(id)arg2 persistentContainer:(id)arg3;	// IMP=0x0010000000013de5
- (void)_checkForMandatoryDeviceEnrollmentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001399f
- (void)_checkCloudConfig;	// IMP=0x0010000000013773
- (MISSING_TYPE *)_checkCloudConfigAsync: /* Error: Ran out of types for this method. */;	// IMP=0x001000000001366c
- (void)_registerForCloudConfigAvailableNotificationIfNeeded;	// IMP=0x00100000000135fb
- (void)_startListeningForNotifications;	// IMP=0x00100000000135e9
- (void)_removeInvalidManagementChannels:(id)arg1;	// IMP=0x00100000000131f9
- (void)_validateManagementSources;	// IMP=0x0010000000012b47
- (void)_start;	// IMP=0x00100000000120eb
- (id)initWithPersistentContainer:(id)arg1 context:(id)arg2;	// IMP=0x0010000000011f97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

