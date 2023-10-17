//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ADDailyDeviceStatusActivity : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)taskFromActivity:(id)arg1;	// IMP=0x0020000000082973
+ (id)xpcCriteria;	// IMP=0x0010000000082902
+ (const char *)activityIdentifier;	// IMP=0x00100000000828f5
- (void).cxx_destruct;	// IMP=0x00200000000863e2
- (void)fetchICUserIdentityForSharedUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000085e88
- (void)fetchAppleMusicSubscriptionForSharedUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000085b06
- (id)getVolumeCapacity;	// IMP=0x001000000008598d
- (void)_triggerABCForNullAssistantIdentifier;	// IMP=0x00100000000858b3
- (id)_truncatedGradingOptInStateChanges:(id)arg1;	// IMP=0x00100000000855f2
- (int)getAdaptiveVolumeUserIntent:(int)arg1;	// IMP=0x00100000000855db
- (int)getSiriDataSharingOptInStatus;	// IMP=0x00100000000855bf
- (void)fetchEnrolledUsersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000084e82
- (_Bool)_preciseLocationEnabled;	// IMP=0x0010000000084e0d
- (id)_buildDailyVoiceTriggerMetrics:(id)arg1;	// IMP=0x0010000000084cc1
- (void)buildDailyDeviceStatusHeartbeatMetricsWithSiriEnabled:(_Bool)arg1 onLockscreen:(_Bool)arg2 dictationEnabled:(_Bool)arg3 voiceTriggerEnabled:(_Bool)arg4 starkHasBeenActiveWithin24Hours:(_Bool)arg5 raiseToSpeakEnabled:(_Bool)arg6 activeAppleAudioDevices:(id)arg7 spokenNotificationsEnabled:(_Bool)arg8 announceNotificationsEnabledOnHeadphones:(_Bool)arg9 carplayAnnounceEnablementType:(long long)arg10 isAnnounceNotificationsMutedForCarPlay:(_Bool)arg11 shouldSkipTriggerlessReplyConfirmation:(_Bool)arg12 spokenNotificationsProxCardSeen:(_Bool)arg13 spokenNotificationsControlCenterModuleEnabled:(_Bool)arg14 spokenNotificationsWhitelistSettings:(unsigned long long)arg15 announceCallsEnabled:(_Bool)arg16 preciseLocationEnabled:(_Bool)arg17 adaptiveSiriVolumeEnabled:(_Bool)arg18 adaptiveSiriVolumePermanentOffsetEnabled:(_Bool)arg19 adaptiveSiriVolumePermanentOffsetFactor:(id)arg20 adaptiveSiriVolumeMostRecentIntent:(id)arg21 isRemoteDarwinVoiceTriggerEnabled:(_Bool)arg22 autoSendSettings:(id)arg23 hangUpEnablementState:(int)arg24 heartbeatQueuedTime:(unsigned long long)arg25 withCompletion:(CDUnknownBlockType)arg26;	// IMP=0x001000000008313e
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008298c
- (id)init;	// IMP=0x001000000008284c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
