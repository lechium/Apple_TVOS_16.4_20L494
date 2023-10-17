//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SOSAccountTrustClassic
{
}

+ (id)trustClassic;	// IMP=0x00400000002021bb
- (void)resetRingDictionary;	// IMP=0x0020000000201311
- (void)addRingDictionary;	// IMP=0x0010000000201208
- (_Bool)clientPing:(id)arg1;	// IMP=0x0010000000201118
- (_Bool)removeIncompleteiCloudIdentities:(struct __OpaqueSOSCircle *)arg1 privKey:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000020102d
- (struct __SecKey *)copyDeviceKey:(struct __CFError **)arg1;	// IMP=0x0010000000200fc2
- (_Bool)postDebugScope:(id)arg1 scope:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000200f9a
- (struct __OpaqueSOSEngine *)getDataSourceEngine:(struct SOSDataSourceFactory *)arg1;	// IMP=0x0010000000200ed4
- (_Bool)isSyncingV0;	// IMP=0x0010000000200e35
- (_Bool)requestSyncWithAllPeers:(id)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000200d08
- (struct __CFSet *)syncWithPeers:(id)arg1 peerIDs:(struct __CFSet *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000200ae8
- (char *)encodeToDER:(id)arg1 err:(id *)arg2 start:(const char *)arg3 end:(char *)arg4;	// IMP=0x0010000000200809
- (unsigned long long)getDEREncodedSize:(id)arg1 err:(id *)arg2;	// IMP=0x00100000002004b9
- (struct __CFArray *)copySortedPeerArray:(struct __CFError **)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0010000000200446
- (_Bool)addEscrowToPeerInfo:(struct __OpaqueSOSFullPeerInfo *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000200413
- (_Bool)addiCloudIdentity:(struct __OpaqueSOSCircle *)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000200198
- (struct __CFSet *)copyPreApprovedHSA2Info;	// IMP=0x000000000020015b
- (_Bool)upgradeiCloudIdentity:(struct __OpaqueSOSCircle *)arg1 privKey:(struct __SecKey *)arg2;	// IMP=0x00100000002000f7
- (void)removeInvalidApplications:(struct __OpaqueSOSCircle *)arg1 userPublic:(struct __SecKey *)arg2;	// IMP=0x001000000020004d
- (_Bool)updatePeerInfo:(id)arg1 description:(struct __CFString *)arg2 err:(struct __CFError **)arg3 update:(CDUnknownBlockType)arg4;	// IMP=0x00100000001fff42
- (_Bool)peerSignatureUpdate:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001ffeec
- (struct __CFArray *)copyPeersToListenTo:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001ffe65
- (struct __CFSet *)copyPeerSetMatching:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ffda2
- (_Bool)isAccountIdentity:(struct __OpaqueSOSPeerInfo *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001ffd63
- (struct __OpaqueSOSPeerInfo *)copyPeerWithID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001ffd0d
- (struct __SecKey *)copyPublicKeyForPeer:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001ffc84
- (struct __CFSet *)copyPeerSetForView:(struct __CFString *)arg1;	// IMP=0x00100000001ffbec
- (void)addSyncablePeerBlock:(id)arg1 dsName:(struct __CFString *)arg2 change:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ffa60
- (_Bool)updateViewSets:(id)arg1 enabled:(struct __CFSet *)arg2 disabled:(struct __CFSet *)arg3;	// IMP=0x00100000001ff481
- (_Bool)matchOTUserViewSettings:(id)arg1 userViewsEnabled:(_Bool)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000001ff22f
- (int)viewStatus:(id)arg1 name:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000001ff00a
- (_Bool)activeValidInCircle:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001fef82
- (int)updateView:(id)arg1 name:(struct __CFString *)arg2 code:(int)arg3 err:(struct __CFError **)arg4;	// IMP=0x00100000001feb7c
- (_Bool)updateGestalt:(id)arg1 newGestalt:(struct __CFDictionary *)arg2;	// IMP=0x00100000001fe9eb
- (id)initWithRetirees:(id)arg1 fpi:(struct __OpaqueSOSFullPeerInfo *)arg2 circle:(struct __OpaqueSOSCircle *)arg3 departureCode:(int)arg4 peerExpansion:(id)arg5;	// IMP=0x00100000001fe880
- (id)init;	// IMP=0x00100000001fe788
- (_Bool)cleanupAfterPeer:(id)arg1 circleTransport:(id)arg2 seconds:(unsigned long long)arg3 circle:(struct __OpaqueSOSCircle *)arg4 cleanupPeer:(struct __OpaqueSOSPeerInfo *)arg5 err:(struct __CFError **)arg6;	// IMP=0x00100000001f2938
- (_Bool)cleanupRetirementTickets:(id)arg1 circle:(struct __OpaqueSOSCircle *)arg2 time:(unsigned long long)arg3 err:(struct __CFError **)arg4;	// IMP=0x00100000001f277f
- (_Bool)resetRing:(id)arg1 ringName:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000001fdebf
- (struct __CFDictionary *)getRings:(struct __CFError **)arg1;	// IMP=0x00100000001fde28
- (struct __OpaqueSOSRing *)copyRing:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001fddac
- (_Bool)handleUpdateRing:(id)arg1 prospectiveRing:(struct __OpaqueSOSRing *)arg2 transport:(id)arg3 userPublicKey:(struct __SecKey *)arg4 writeUpdate:(_Bool)arg5 err:(struct __CFError **)arg6;	// IMP=0x00100000001fc386
- (_Bool)setRing:(struct __OpaqueSOSRing *)arg1 ringName:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000001fc2f9
- (_Bool)checkForRings:(struct __CFError **)arg1;	// IMP=0x00100000001fc1f1
- (void)setRings:(struct __CFDictionary *)arg1;	// IMP=0x00100000001fc19e
- (_Bool)resetAccountToEmpty:(id)arg1 transport:(id)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000001fbed3
- (_Bool)resetAllRings:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001fbd5d
- (_Bool)forEachRing:(CDUnknownBlockType)arg1;	// IMP=0x00100000001fbaa8
- (_Bool)updateV2Dictionary:(id)arg1 v2:(struct __CFDictionary *)arg2;	// IMP=0x00100000001fb977
- (void)pendEnableViewSet:(struct __CFSet *)arg1;	// IMP=0x00100000001fb8ba
- (void)valueSubtractFrom:(struct __CFString *)arg1 valuesToSubtract:(struct __CFSet *)arg2;	// IMP=0x00100000001fb7e4
- (void)valueUnionWith:(struct __CFString *)arg1 valuesToUnion:(struct __CFSet *)arg2;	// IMP=0x00100000001fb70f
- (_Bool)valueSetContainsValue:(struct __CFString *)arg1 value:(void *)arg2;	// IMP=0x00100000001fb6af
- (_Bool)setValueInExpansion:(struct __CFString *)arg1 value:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000001fb617
- (_Bool)clearValueFromExpansion:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001fb5ab
- (_Bool)ensureExpansion:(struct __CFError **)arg1;	// IMP=0x00100000001fb4e9
- (void *)getValueFromExpansion:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001fb45f
- (_Bool)joinCircle:(id)arg1 userKey:(struct __SecKey *)arg2 useCloudPeer:(_Bool)arg3 err:(struct __CFError **)arg4;	// IMP=0x0010000000213842
- (_Bool)resetCircleToOffering:(id)arg1 userKey:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000002136b6
- (_Bool)resetToOffering:(id)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000002135ef
- (_Bool)leaveCircle:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000002134a2
- (_Bool)leaveCircleWithAccount:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000213365
- (void)forEachCirclePeerExceptMe:(CDUnknownBlockType)arg1;	// IMP=0x001000000021325c
- (void)generationSignatureUpdateWith:(id)arg1 key:(struct __SecKey *)arg2;	// IMP=0x0010000000213048
- (_Bool)fixICloudIdentities:(id)arg1 circle:(struct __OpaqueSOSCircle *)arg2;	// IMP=0x0010000000212d4b
- (_Bool)modifyCircle:(id)arg1 err:(struct __CFError **)arg2 action:(CDUnknownBlockType)arg3;	// IMP=0x0010000000212c4d
- (_Bool)updateCircle:(id)arg1 newCircle:(struct __OpaqueSOSCircle *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000212c29
- (_Bool)updateCircleFromRemote:(id)arg1 newCircle:(struct __OpaqueSOSCircle *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000212c08
- (_Bool)handleUpdateCircle:(struct __OpaqueSOSCircle *)arg1 transport:(id)arg2 update:(_Bool)arg3 err:(struct __CFError **)arg4;	// IMP=0x0010000000210da5
- (id)iCloudCleanerHandle:(id)arg1;	// IMP=0x0010000000210d07
- (id)iCloudCheckEventHandle:(id)arg1;	// IMP=0x0010000000210c69
- (_Bool)checkForSponsorshipTrust:(struct __OpaqueSOSCircle *)arg1;	// IMP=0x0010000000210b9f
- (_Bool)ghostBustingOK:(struct __OpaqueSOSCircle *)arg1 updatingTo:(struct __OpaqueSOSCircle *)arg2;	// IMP=0x0010000000210ac6
- (_Bool)hasLeft;	// IMP=0x0010000000210a9d
- (struct __OpaqueSOSCircle *)ensureCircle:(id)arg1 name:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000210992
- (struct __OpaqueSOSCircle *)getCircle:(struct __CFError **)arg1;	// IMP=0x0010000000210931
- (int)getCircleStatusOnly:(struct __CFError **)arg1;	// IMP=0x00100000002108e4
- (int)thisDeviceStatusInCircle:(struct __OpaqueSOSCircle *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2;	// IMP=0x0010000000210865
- (_Bool)hasCircle:(struct __CFError **)arg1;	// IMP=0x0010000000210809
- (_Bool)isInCircleOnly:(struct __CFError **)arg1;	// IMP=0x00100000002107ca
- (void)purgeIdentity;	// IMP=0x00100000002354a9
- (_Bool)isMyPeerActive:(struct __CFError **)arg1;	// IMP=0x0010000000235433
- (_Bool)ensureFullPeerAvailable:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000234c3b
- (void)ensureOctagonPeerKeys:(id)arg1;	// IMP=0x001000000023417f
- (_Bool)haveConfirmedOctagonKeys;	// IMP=0x0010000000233fb5
- (struct __SecKey *)randomPermanentFullECKey:(int)arg1 name:(id)arg2 error:(struct __CFError **)arg3;	// IMP=0x0010000000233f8f
- (struct __OpaqueSOSFullPeerInfo *)CopyAccountIdentityPeerInfo;	// IMP=0x0010000000233f75
- (_Bool)hasFullPeerInfo:(struct __CFError **)arg1;	// IMP=0x0010000000233f19
- (_Bool)fullPeerInfoVerify:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000233ea8
- (struct __OpaqueSOSFullPeerInfo *)getMyFullPeerInfo;	// IMP=0x0010000000233e6e
- (_Bool)updateFullPeerInfo:(id)arg1 minimum:(struct __CFSet *)arg2 excluded:(struct __CFSet *)arg3;	// IMP=0x0010000000233d70
- (_Bool)isLockedError:(id)arg1;	// IMP=0x0010000000233cd7

@end

