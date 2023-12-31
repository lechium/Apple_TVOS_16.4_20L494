//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSUserDefaults, PCSAccountsModel, PCSKeySyncing, PCSMobileBackup, PCSUserRegistry;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface PCSSyncing : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    PCSUserRegistry *_registry;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_registryQueue;	// 24 = 0x18
    PCSKeySyncing *_manager;	// 32 = 0x20
    PCSAccountsModel *_accounts;	// 40 = 0x28
    NSOperationQueue *_serialOperationQueue;	// 48 = 0x30
    NSUserDefaults *_settings;	// 56 = 0x38
    PCSMobileBackup *_mobileBackup;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_keyrollSchedulerSource;	// 72 = 0x48
    NSObject<OS_xpc_object> *_scheduledKeyrollActivity;	// 80 = 0x50
}

+ (id)defaultPCSSyncing;	// IMP=0x0020000000010e23
- (void).cxx_destruct;	// IMP=0x0020000000019355
@property(retain) NSObject<OS_xpc_object> *scheduledKeyrollActivity; // @synthesize scheduledKeyrollActivity=_scheduledKeyrollActivity;
@property(retain) NSObject<OS_dispatch_source> *keyrollSchedulerSource; // @synthesize keyrollSchedulerSource=_keyrollSchedulerSource;
@property(retain) PCSMobileBackup *mobileBackup; // @synthesize mobileBackup=_mobileBackup;
@property(retain) NSUserDefaults *settings; // @synthesize settings=_settings;
@property(retain) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(retain) PCSAccountsModel *accounts; // @synthesize accounts=_accounts;
@property(retain) PCSKeySyncing *manager; // @synthesize manager=_manager;
@property(retain) NSObject<OS_dispatch_queue> *registryQueue; // @synthesize registryQueue=_registryQueue;
@property(retain) PCSUserRegistry *registry; // @synthesize registry=_registry;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)getHealthSummary:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019189
- (void)keyRollPending:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000001903e
- (void)manateeStatus:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000001842d
- (void)fetchStats:(CDUnknownBlockType)arg1;	// IMP=0x00100000000183da
- (void)userDBBackupRecordIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000183c8
- (void)mobileBackupRecordIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000183b6
- (void)triggerUserRegistryCheck:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000183a4
- (void)restoreMobileBackup:(_Bool)arg1 dsid:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000177b9
- (void)fetchAllDeviceKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017714
- (void)checkSyncingForPeer:(id)arg1 force:(_Bool)arg2;	// IMP=0x001000000001770e
- (void)triggerDaily:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000176c0
- (void)requestKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017648
- (void)syncKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017631
- (void)getAllClients:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017431
- (void)queuedCheckRegistry:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000173d1
- (void)notifyEvent:(id)arg1;	// IMP=0x0010000000017303
- (void)notifyDailyEvent;	// IMP=0x0010000000017174
- (void)repairWalrus;	// IMP=0x0010000000016dff
- (struct _PCSIdentitySetData *)identityCopySet:(id)arg1;	// IMP=0x0010000000016baa
- (void)createIdentity:(id)arg1 dsid:(id)arg2 roll:(_Bool)arg3 sync:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x0010000000016522
- (void)disableWalrusForAccount:(id)arg1 withParameters:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x001000000001629b
- (void)enableWalrusForAccount:(id)arg1 withParameters:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015f91
- (void)migrateToiCDPForAccount:(id)arg1 withParameters:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015df9
- (void)setupIdentitiesForAccount:(id)arg1 withParameters:(id)arg2 optional:(_Bool)arg3;	// IMP=0x0010000000015afe
- (void)triggerSyncingWithEscrowProxy:(id)arg1 dsid:(id)arg2 accountIdentifier:(id)arg3 accountLastError:(id)arg4 settingsKeyExpirationDate:(id)arg5 settingsKeyIdentifier:(id)arg6 complete:(CDUnknownBlockType)arg7;	// IMP=0x00100000000157d9
- (void)triggerCKKSSyncForService:(id)arg1 dsid:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015314
- (void)triggerEscrowSyncWithDSID:(id)arg1 accountIdentifier:(id)arg2 accountLastError:(id)arg3 settingsKeyExpirationDate:(id)arg4 settingsKeyIdentifier:(id)arg5 complete:(CDUnknownBlockType)arg6;	// IMP=0x001000000001484a
- (_Bool)ensureMKExists:(struct _PCSIdentitySetData *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0010000000014696
- (void)triggerKeyRolling;	// IMP=0x000000000001389f
- (void)rollingComplete:(_Bool)arg1;	// IMP=0x001000000001368f
- (_Bool)getServicesToRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012fb2
- (void)actuallyScheduleRollAttempt;	// IMP=0x0010000000012d7b
- (void)scheduleRollAttempt;	// IMP=0x0010000000012d41
- (long long)attemptTimer;	// IMP=0x0010000000012be2
- (_Bool)shouldRollStingray;	// IMP=0x00100000000128fa
- (_Bool)shouldRoll;	// IMP=0x0010000000012832
- (void)checkForBackupStateChange;	// IMP=0x0010000000012108
- (void)recordEpochForKeyroll;	// IMP=0x0010000000011fc1
- (id)getRollEpoch;	// IMP=0x0010000000011db5
- (void)mobileBackupStatus:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011d37
- (void)clearNextSyncNegativeCache;	// IMP=0x0010000000011b3d
- (void)wStateChanged;	// IMP=0x0010000000011a7d
- (void)notifyInternalEvent:(id)arg1;	// IMP=0x0010000000011734
- (void)triggerWatchSyncing:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011729
- (void)notifyKeyRegistry;	// IMP=0x0010000000011723
- (void)triggerWatchSyncing;	// IMP=0x001000000001171d
- (id)healthSummary;	// IMP=0x001000000001140f
- (void)setupMetrics;	// IMP=0x0010000000011409
- (void)setupActivity;	// IMP=0x0010000000011310
- (id)initWithPCSKeySyncing:(id)arg1;	// IMP=0x001000000001102f
- (id)initForTesting;	// IMP=0x0010000000010f07

@end

