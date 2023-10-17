//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPAVBatteryLevel, MPAVOutputDeviceRoute, MPVolumeController, NSString;

@interface TVNPOutputDeviceRoute
{
    NSString *_overrideTitle;	// 96 = 0x60
    _Bool _spatialAudioSupported;	// 104 = 0x68
    _Bool _noiseControlSupported;	// 105 = 0x69
    MPAVOutputDeviceRoute *_outputDeviceRoute;	// 112 = 0x70
    MPAVBatteryLevel *_batteryLevel;	// 120 = 0x78
    MPVolumeController *_volumeController;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000000c9a0
@property(retain, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) MPAVBatteryLevel *batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(readonly, nonatomic) _Bool noiseControlSupported; // @synthesize noiseControlSupported=_noiseControlSupported;
@property(readonly, nonatomic) _Bool spatialAudioSupported; // @synthesize spatialAudioSupported=_spatialAudioSupported;
@property(retain, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute; // @synthesize outputDeviceRoute=_outputDeviceRoute;
- (void)_updateVolume;	// IMP=0x000000000000c400
- (id)_imageForAVRoute:(id)arg1 destination:(id)arg2;	// IMP=0x000000000000c290
- (id)overrideTitle;	// IMP=0x000000000000c260
- (void)setOverrideTitle:(id)arg1;	// IMP=0x000000000000c1d0
- (void)volumeController:(id)arg1 mutedStateDidChange:(_Bool)arg2;	// IMP=0x000000000000c0d0
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x000000000000bfc0
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x000000000000bec0
- (id)deviceTypeDescription;	// IMP=0x000000000000bd30
- (void)setMuted:(_Bool)arg1;	// IMP=0x000000000000bcb0
- (void)setVolumeLevel:(id)arg1;	// IMP=0x000000000000bbe0
- (id)deviceImage;	// IMP=0x000000000000bb40
- (void)updateWithOutputDevice:(id)arg1 selectionState:(unsigned long long)arg2 destination:(id)arg3 wantsVolumeUpdates:(_Bool)arg4;	// IMP=0x000000000000b130
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000000b010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

