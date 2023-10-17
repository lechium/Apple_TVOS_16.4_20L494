//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGnssProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000006a26fe
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006a26e5
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006a2688
+ (_Bool)isSupported;	// IMP=0x00100000006a2680
- (void)removeRhythmicGnssClient:(int)arg1;	// IMP=0x00200000006a2ae0
- (void)addRhythmicGnssClient:(int)arg1;	// IMP=0x00100000006a2abd
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x00100000006a2a9a
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x00100000006a2a77
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x00100000006a2a54
- (_Bool)syncgetIonosphereParameters:(struct ThinShellIonosphereParameters *)arg1;	// IMP=0x00100000006a284f
- (void)cacheEmergencyAWDStatistics:(struct CLDaemonLocation)arg1;	// IMP=0x00100000006a282c
- (_Bool)syncgetActiveGnssBands:(void *)arg1;	// IMP=0x00100000006a2809
- (_Bool)syncgetControlPlaneStatusReport:(struct CLGnssControlPlaneStatusReport *)arg1;	// IMP=0x00100000006a27e6
- (void)resetControlPlaneStatus;	// IMP=0x00100000006a27c3
- (void)endService;	// IMP=0x00100000006a27a0
- (void)beginService;	// IMP=0x00100000006a277d
- (id)init;	// IMP=0x00100000006a275a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

