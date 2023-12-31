//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSXPCProxyCreating;

@interface CuttlefishXPCWrapper : NSObject
{
    id <NSXPCProxyCreating> _cuttlefishXPCConnection;	// 8 = 0x8
}

+ (_Bool)retryable:(id)arg1;	// IMP=0x00200000000251b7
- (void).cxx_destruct;	// IMP=0x0020000000020300
@property(readonly) id <NSXPCProxyCreating> cuttlefishXPCConnection; // @synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection;
- (void)preflightRecoverOctagonUsingRecoveryKey:(id)arg1 recoveryKey:(id)arg2 salt:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000200e3
- (void)performATOPRVActionsWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ff13
- (void)removeRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001fd43
- (void)isRecoveryKeySet:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001fb73
- (void)recoverTLKSharesForInheritorWithSpecificUser:(id)arg1 crk:(id)arg2 tlkShares:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001f96a
- (void)prepareInheritancePeerWithSpecificUser:(id)arg1 epoch:(unsigned long long)arg2 machineID:(id)arg3 bottleSalt:(id)arg4 bottleID:(id)arg5 modelID:(id)arg6 deviceName:(id)arg7 serialNumber:(id)arg8 osVersion:(id)arg9 policyVersion:(id)arg10 policySecrets:(id)arg11 syncUserControllableViews:(int)arg12 secureElementIdentity:(id)arg13 signingPrivKeyPersistentRef:(id)arg14 encPrivKeyPersistentRef:(id)arg15 crk:(id)arg16 reply:(CDUnknownBlockType)arg17;	// IMP=0x001000000001f5ed
- (void)fetchAccountSettingsWithSpecificUser:(id)arg1 forceFetch:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f40a
- (void)fetchRecoverableTLKSharesWithSpecificUser:(id)arg1 peerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f21d
- (void)resetAccountCDPContentsWithSpecificUser:(id)arg1 idmsTargetContext:(id)arg2 idmsCuttlefishPassword:(id)arg3 notifyIdMS:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001f00a
- (void)removeEscrowCacheWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ee3a
- (void)fetchViableEscrowRecordsWithSpecificUser:(id)arg1 source:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ec5c
- (void)getSupportAppInfoWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ea8c
- (void)requestHealthCheckWithSpecificUser:(id)arg1 requiresEscrowCheck:(_Bool)arg2 knownFederations:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e895
- (void)pushHealthInquiryWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e6c5
- (void)reportHealthWithSpecificUser:(id)arg1 stateMachineState:(id)arg2 trustState:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e4bc
- (void)removeCustodianRecoveryKeyWithSpecificUser:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e2cf
- (void)createCustodianRecoveryKeyWithSpecificUser:(id)arg1 recoveryKey:(id)arg2 salt:(id)arg3 ckksKeys:(id)arg4 uuid:(id)arg5 kind:(int)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000001e07d
- (void)setRecoveryKeyWithSpecificUser:(id)arg1 recoveryKey:(id)arg2 salt:(id)arg3 ckksKeys:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001de59
- (void)fetchTrustStateWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001dc89
- (void)validatePeersWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001dab9
- (void)fetchCurrentPolicyWithSpecificUser:(id)arg1 modelIDOverride:(id)arg2 isInheritedAccount:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001d8c0
- (void)fetchPolicyDocumentsWithSpecificUser:(id)arg1 versions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d6d3
- (void)fetchEscrowContentsWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d503
- (void)fetchViableBottlesWithSpecificUser:(id)arg1 source:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d325
- (void)updateTLKsWithSpecificUser:(id)arg1 ckksKeys:(id)arg2 tlkShares:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001d11c
- (void)setPreapprovedKeysWithSpecificUser:(id)arg1 preapprovedKeys:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001cf2f
- (void)updateWithSpecificUser:(id)arg1 forceRefetch:(_Bool)arg2 deviceName:(id)arg3 serialNumber:(id)arg4 osVersion:(id)arg5 policyVersion:(id)arg6 policySecrets:(id)arg7 syncUserControllableViews:(id)arg8 secureElementIdentity:(id)arg9 walrusSetting:(id)arg10 webAccess:(id)arg11 reply:(CDUnknownBlockType)arg12;	// IMP=0x001000000001cc3e
- (void)attemptPreapprovedJoinWithSpecificUser:(id)arg1 ckksKeys:(id)arg2 tlkShares:(id)arg3 preapprovedKeys:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001ca1a
- (void)preflightPreapprovedJoinWithSpecificUser:(id)arg1 preapprovedKeys:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001c82d
- (void)joinWithSpecificUser:(id)arg1 voucherData:(id)arg2 voucherSig:(id)arg3 ckksKeys:(id)arg4 tlkShares:(id)arg5 preapprovedKeys:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000001c5c2
- (void)vouchWithCustodianRecoveryKeyWithSpecificUser:(id)arg1 crk:(id)arg2 tlkShares:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001c3b9
- (void)vouchWithRecoveryKeyWithSpecificUser:(id)arg1 recoveryKey:(id)arg2 salt:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001c195
- (void)preflightVouchWithCustodianRecoveryKeyWithSpecificUser:(id)arg1 crk:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001bfa8
- (void)preflightVouchWithRecoveryKeyWithSpecificUser:(id)arg1 recoveryKey:(id)arg2 salt:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001bd9f
- (void)vouchWithBottleWithSpecificUser:(id)arg1 bottleID:(id)arg2 entropy:(id)arg3 bottleSalt:(id)arg4 tlkShares:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001bb54
- (void)preflightVouchWithBottleWithSpecificUser:(id)arg1 bottleID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b967
- (void)vouchWithSpecificUser:(id)arg1 peerID:(id)arg2 permanentInfo:(id)arg3 permanentInfoSig:(id)arg4 stableInfo:(id)arg5 stableInfoSig:(id)arg6 ckksKeys:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x001000000001b6e2
- (void)establishWithSpecificUser:(id)arg1 ckksKeys:(id)arg2 tlkShares:(id)arg3 preapprovedKeys:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001b4be
- (void)prepareWithSpecificUser:(id)arg1 epoch:(unsigned long long)arg2 machineID:(id)arg3 bottleSalt:(id)arg4 bottleID:(id)arg5 modelID:(id)arg6 deviceName:(id)arg7 serialNumber:(id)arg8 osVersion:(id)arg9 policyVersion:(id)arg10 policySecrets:(id)arg11 syncUserControllableViews:(int)arg12 secureElementIdentity:(id)arg13 setting:(id)arg14 signingPrivKeyPersistentRef:(id)arg15 encPrivKeyPersistentRef:(id)arg16 reply:(CDUnknownBlockType)arg17;	// IMP=0x001000000001b141
- (void)fetchEgoEpochWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001af71
- (void)fetchAllowedMachineIDsWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ada1
- (void)removeAllowedMachineIDsWithSpecificUser:(id)arg1 machineIDs:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001abb4
- (void)addAllowedMachineIDsWithSpecificUser:(id)arg1 machineIDs:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a9c7
- (void)setAllowedMachineIDsWithSpecificUser:(id)arg1 allowedMachineIDs:(id)arg2 honorIDMSListChanges:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a7ce
- (void)localResetWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a5fe
- (void)resetWithSpecificUser:(id)arg1 resetReason:(long long)arg2 idmsTargetContext:(id)arg3 idmsCuttlefishPassword:(id)arg4 notifyIdMS:(_Bool)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001a3e4
- (void)trustStatusWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a214
- (void)distrustPeerIDsWithSpecificUser:(id)arg1 peerIDs:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a027
- (void)departByDistrustingSelfWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019e57
- (void)dumpWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019c87
- (void)pingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019aee
- (id)initWithCuttlefishXPCConnection:(id)arg1;	// IMP=0x0010000000019a83

@end

