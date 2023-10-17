//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCRestrictionManager.h>

@class NSDictionary, NSMutableSet, NSNumber;

@interface MCRestrictionManagerWriter : MCRestrictionManager
{
    int _senderPID;	// 8 = 0x8
    NSDictionary *_clientTypeLoaders;	// 16 = 0x10
    NSNumber *_memberQueuePasscodeCompliesWithRestrictions;	// 24 = 0x18
    NSNumber *_memberQueuePasscodeCompliesWithProfileRestrictions;	// 32 = 0x20
    NSMutableSet *_memberQueueRecomputePasscodeComplianceForClientUUID;	// 40 = 0x28
}

+ (id)enforcedAppWhitelistRestrictions;	// IMP=0x004000000005f05e
+ (id)sharedManager;	// IMP=0x001000000005f017
- (void).cxx_destruct;	// IMP=0x00200000000670f3
@property(retain, nonatomic) NSMutableSet *memberQueueRecomputePasscodeComplianceForClientUUID; // @synthesize memberQueueRecomputePasscodeComplianceForClientUUID=_memberQueueRecomputePasscodeComplianceForClientUUID;
@property(retain, nonatomic) NSNumber *memberQueuePasscodeCompliesWithProfileRestrictions; // @synthesize memberQueuePasscodeCompliesWithProfileRestrictions=_memberQueuePasscodeCompliesWithProfileRestrictions;
@property(retain, nonatomic) NSNumber *memberQueuePasscodeCompliesWithRestrictions; // @synthesize memberQueuePasscodeCompliesWithRestrictions=_memberQueuePasscodeCompliesWithRestrictions;
@property(readonly, nonatomic) NSDictionary *clientTypeLoaders; // @synthesize clientTypeLoaders=_clientTypeLoaders;
@property(nonatomic) int senderPID; // @synthesize senderPID=_senderPID;
- (void)recomputeUserRestrictionsAndEffectiveUserSettings;	// IMP=0x0010000000066cf9
- (void)recomputeEffectiveUserSettingsPasscode:(id)arg1;	// IMP=0x0010000000066c29
- (void)resetAllSettingsToDefaultsSender:(id)arg1;	// IMP=0x0010000000066afb
- (void)removeValueSetting:(id)arg1 sender:(id)arg2;	// IMP=0x0010000000066909
- (void)removeBoolSetting:(id)arg1 sender:(id)arg2;	// IMP=0x00100000000666eb
- (void)setUnionValues:(id)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x00100000000664bd
- (void)setIntersectionValues:(id)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x001000000006628f
- (void)setValue:(id)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x0010000000066121
- (void)setBoolValue:(_Bool)arg1 ask:(_Bool)arg2 forSetting:(id)arg3 sender:(id)arg4;	// IMP=0x0010000000065f2d
- (void)setBoolValue:(_Bool)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x0010000000065f13
- (_Bool)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 sender:(id)arg7;	// IMP=0x0010000000065c09
- (_Bool)setParametersForSettingsByType:(id)arg1 sender:(id)arg2;	// IMP=0x0010000000065bd7
- (_Bool)memberQueueSetParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 sender:(id)arg7;	// IMP=0x00100000000658d1
- (id)_memberQueueNewUserSettingsWithParametersForSettingsByType:(id)arg1 currentUserSettings:(id)arg2;	// IMP=0x00100000000653ff
- (_Bool)memberQueueRecomputeEffectiveUserSettingsPasscode:(id)arg1 credentialSet:(id)arg2;	// IMP=0x0010000000064807
- (void)memberQueueCommitEffectiveUserSettingsToDiskOldEffectiveUserSettings:(id)arg1;	// IMP=0x00100000000645cd
- (void)memberQueueCommitUserSettingsToDisk;	// IMP=0x0010000000064406
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1;	// IMP=0x00100000000642a9
- (void)setShowNagMessage;	// IMP=0x00100000000641c6
- (void)memberQueueClearPasscodeHistoryIfNecessary;	// IMP=0x00100000000640c1
- (void)clearAllPasscodeComplianceCaches;	// IMP=0x001000000006403a
- (void)memberQueueClearAllPasscodeComplianceCaches;	// IMP=0x0010000000063fb2
- (void)memberQueueClearProfileRestrictionPasscodeComplianceCache;	// IMP=0x0010000000063f49
- (void)memberQueueClearRestrictionPasscodeComplianceCache;	// IMP=0x0010000000063ee0
- (void)memberQueueCacheClientRestrictionPasscodeCompliance;	// IMP=0x0010000000063868
- (void)memberQueueMarkToClearPasscodeComplianceCacheWithOldSystemClientRestrictions:(id)arg1 newSystemClientRestrictions:(id)arg2;	// IMP=0x001000000006320a
- (_Bool)recomputeNagMetadata:(_Bool *)arg1;	// IMP=0x00100000000623f1
- (_Bool)recomputeNagMetadata;	// IMP=0x00100000000623dd
- (_Bool)removeOrphanedClientRestrictions;	// IMP=0x0010000000062014
- (id)orphanedClientUUIDsForClientRestrictionDictionary:(id)arg1;	// IMP=0x00100000000618bc
- (void)notifyClientsToRecomputeCompliance;	// IMP=0x00100000000616ac
- (id)_liveClientUUIDsForClientType:(id)arg1 outLoaderMissing:(_Bool *)arg2;	// IMP=0x0010000000061530
- (id)orphanCheckUnexemptClientTypes;	// IMP=0x001000000006146d
- (id)orphanCheckExemptClientTypes;	// IMP=0x001000000006143d
- (_Bool)setClientRestrictions:(id)arg1 appsAndOptions:(id)arg2 system:(_Bool)arg3 clientType:(id)arg4 clientUUID:(id)arg5 sender:(id)arg6 localizedClientDescription:(id)arg7 localizedWarning:(id)arg8 shouldRecomputeNag:(_Bool)arg9 outRestrictionsChanged:(_Bool *)arg10 outEffectiveSettingsChanged:(_Bool *)arg11 outRecomputedNag:(_Bool *)arg12 outError:(id *)arg13;	// IMP=0x0010000000060af5
- (_Bool)setClientRestrictions:(id)arg1 system:(_Bool)arg2 clientType:(id)arg3 clientUUID:(id)arg4 sender:(id)arg5 localizedClientDescription:(id)arg6 localizedWarning:(id)arg7 shouldRecomputeNag:(_Bool)arg8 outRestrictionsChanged:(_Bool *)arg9 outEffectiveSettingsChanged:(_Bool *)arg10 outRecomputedNag:(_Bool *)arg11 outError:(id *)arg12;	// IMP=0x0010000000060a9d
- (_Bool)setClientRestrictions:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 sender:(id)arg4 localizedClientDescription:(id)arg5 localizedWarning:(id)arg6 shouldRecomputeNag:(_Bool)arg7 outRestrictionsChanged:(_Bool *)arg8 outEffectiveSettingsChanged:(_Bool *)arg9 outRecomputedNag:(_Bool *)arg10 outError:(id *)arg11;	// IMP=0x0010000000060a4d
- (_Bool)setClientRestrictions:(id)arg1 system:(_Bool)arg2 clientType:(id)arg3 clientUUID:(id)arg4 sender:(id)arg5 localizedClientDescription:(id)arg6 localizedWarning:(id)arg7 outRestrictionsChanged:(_Bool *)arg8 outEffectiveSettingsChanged:(_Bool *)arg9 outRecomputedNag:(_Bool *)arg10 outError:(id *)arg11;	// IMP=0x0010000000060a07
- (_Bool)setClientRestrictions:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 sender:(id)arg5 localizedClientDescription:(id)arg6 localizedWarning:(id)arg7 outRestrictionsChanged:(_Bool *)arg8 outEffectiveSettingsChanged:(_Bool *)arg9 outRecomputedNag:(_Bool *)arg10 outError:(id *)arg11;	// IMP=0x00100000000609b0
- (_Bool)setClientRestrictions:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 sender:(id)arg4 localizedClientDescription:(id)arg5 localizedWarning:(id)arg6 outRestrictionsChanged:(_Bool *)arg7 outEffectiveSettingsChanged:(_Bool *)arg8 outRecomputedNag:(_Bool *)arg9 outError:(id *)arg10;	// IMP=0x0010000000060960
- (_Bool)setAllClientRestrictions:(id)arg1 sender:(id)arg2 outRestrictionsChanged:(_Bool *)arg3 outEffectiveSettingsChanged:(_Bool *)arg4 outRecomputedNag:(_Bool *)arg5 outError:(id *)arg6;	// IMP=0x001000000006064c
- (_Bool)memberQueueSetSystemClientRestrictions:(id)arg1 userClientRestrictions:(id)arg2 sender:(id)arg3 outRestrictionsChanged:(_Bool *)arg4 outEffectiveSettingsChanged:(_Bool *)arg5 outError:(id *)arg6;	// IMP=0x0010000000060285
- (_Bool)memberQueueSetAllClientRestrictions:(id)arg1 sender:(id)arg2 outRestrictionsChanged:(_Bool *)arg3 outEffectiveSettingsChanged:(_Bool *)arg4 outError:(id *)arg5;	// IMP=0x00100000000601df
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 sender:(id)arg3;	// IMP=0x001000000005fe8c
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2;	// IMP=0x001000000005fe77
- (void)memberQueueCommitClientRestrictionsToDisk;	// IMP=0x001000000005fd3d
- (_Bool)setSystemProfileRestrictions:(id)arg1 userProfileRestrictions:(id)arg2 sender:(id)arg3 outRestrictionsChanged:(_Bool *)arg4 outEffectiveSettingsChanged:(_Bool *)arg5 outAppWhitelistSettingsChanged:(_Bool *)arg6 outRecomputedNag:(_Bool *)arg7 outError:(id *)arg8;	// IMP=0x001000000005f293
- (void)memberQueueCommitRestrictionsToDisk;	// IMP=0x001000000005f19d
- (id)_init;	// IMP=0x001000000005f152

@end

