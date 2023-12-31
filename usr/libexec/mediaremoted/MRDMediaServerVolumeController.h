//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PBSVolumeControlService;

@interface MRDMediaServerVolumeController
{
    _Bool _volumeDataIntialized;	// 8 = 0x8
    float _volumeValue;	// 12 = 0xc
    _Bool _isMutedValue;	// 16 = 0x10
    unsigned int _capabilitiesValue;	// 20 = 0x14
    PBSVolumeControlService *_pbsVolumeController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000fbc10
- (id)_pineboardHangdogInterface;	// IMP=0x00100000000fbb9f
- (_Bool)_platformHasNativeMuteSupport;	// IMP=0x00100000000fbb97
- (void)_postVolumeControlCapabilitiesDidChange:(unsigned int)arg1;	// IMP=0x00100000000fbafa
- (void)_postIsMutedDidChange:(_Bool)arg1;	// IMP=0x00100000000fba5d
- (void)_postVolumeDidChange:(float)arg1;	// IMP=0x00100000000fb9bd
- (void)_updateCapabilitiesValueCache;	// IMP=0x00100000000fb7d5
- (void)_updateIsMutedValueCache;	// IMP=0x00100000000fb713
- (void)_updateVolumeValueCache;	// IMP=0x00100000000fb6d9
- (float)_volumeFromAVController;	// IMP=0x00100000000fb63f
- (void)_reloadVolumeDataWithReason:(id)arg1;	// IMP=0x00100000000fb566
- (void)_initVolumeDataIfNeccessary;	// IMP=0x00100000000fb543
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000fb3ad
- (void)_forceEnableCECVolumeNotification:(id)arg1;	// IMP=0x00100000000fb35e
- (void)_avSessionMediaServicesResetNotification:(id)arg1;	// IMP=0x00100000000fb288
- (void)_currentRouteHasVolumeControlDidChangeNotification:(id)arg1;	// IMP=0x00100000000fb239
- (void)_systemMuteDidChange:(id)arg1;	// IMP=0x00100000000fb1ea
- (void)_systemVolumeDidChange:(id)arg1;	// IMP=0x00100000000fb11d
- (void)_tearDownNotifications;	// IMP=0x00100000000fb01a
- (void)_setupNotifications;	// IMP=0x00100000000fac05
- (id)_mediaServerController;	// IMP=0x00100000000fabea
- (void)adjustVolume:(long long)arg1 error:(id *)arg2;	// IMP=0x00100000000faabd
- (void)setIsMuted:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000fa856
- (void)adjustVolumeWithStepAmount:(float)arg1 error:(id *)arg2;	// IMP=0x00100000000fa838
- (void)setVolume:(float)arg1 error:(id *)arg2;	// IMP=0x00100000000fa684
- (_Bool)isMuted;	// IMP=0x00100000000fa65d
- (float)currentVolume;	// IMP=0x00100000000fa634
- (unsigned int)capabilities;	// IMP=0x00100000000fa60d
- (void)dealloc;	// IMP=0x00100000000fa598
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x00100000000fa318

@end

