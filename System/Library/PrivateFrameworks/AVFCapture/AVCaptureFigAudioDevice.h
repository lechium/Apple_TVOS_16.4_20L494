//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVCaptureDevice.h"

@class AVWeakReference, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureFigAudioDevice : AVCaptureDevice
{
    NSObject<OS_dispatch_queue> *_fcsQueue;	// 16 = 0x10
    struct OpaqueFigCaptureSource *_fcs;	// 24 = 0x18
    NSDictionary *_attributes;	// 32 = 0x20
    _Bool _levelMeteringEnabled;	// 40 = 0x28
    _Bool _isConnected;	// 41 = 0x29
    NSString *_localizedName;	// 48 = 0x30
    AVWeakReference *_weakReference;	// 56 = 0x38
    NSString *_clientAudioClockDeviceUID;	// 64 = 0x40
}

+ (void)_reconnectDevices:(id)arg1;	// IMP=0x00600000000b322d
+ (id)_devices;	// IMP=0x00600000000b3155
+ (void)initialize;	// IMP=0x00600000000b3144
- (void)_handleNotification:(struct __CFString *)arg1 payload:(id)arg2;	// IMP=0x00000000000b3edc
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;	// IMP=0x00000000000b3eca
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;	// IMP=0x00000000000b3e0e
- (void)audioInputDevicesDidChangeHandler:(id)arg1;	// IMP=0x00000000000b3d47
- (id)_copyFigCaptureSourceProperty:(struct __CFString *)arg1;	// IMP=0x00000000000b3c08
- (struct OpaqueCMClock *)deviceClock;	// IMP=0x00000000000b3bdb
- (_Bool)supportsAVCaptureSessionPreset:(id)arg1;	// IMP=0x00000000000b3bd3
- (void)stopUsingDevice;	// IMP=0x00000000000b3bcd
- (_Bool)startUsingDevice:(id *)arg1;	// IMP=0x00000000000b3bc5
- (_Bool)isConnected;	// IMP=0x00000000000b3bb5
- (_Bool)isBuiltInStereoAudioCaptureSupported;	// IMP=0x00000000000b3b75
- (_Bool)hasMediaType:(id)arg1;	// IMP=0x00000000000b3b56
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1;	// IMP=0x00000000000b3b08
- (id)deviceType;	// IMP=0x00000000000b3af8
- (id)localizedName;	// IMP=0x00000000000b3ae7
- (id)modelID;	// IMP=0x00000000000b3ac0
- (id)uniqueID;	// IMP=0x00000000000b3a99
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;	// IMP=0x00000000000b38c1
- (struct OpaqueFigCaptureSource *)figCaptureSource;	// IMP=0x00000000000b38b0
- (void)dealloc;	// IMP=0x00000000000b37fa
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;	// IMP=0x00000000000b35cf
- (id)init;	// IMP=0x00000000000b357d

@end

