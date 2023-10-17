//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVWeakReference, NSArray;
@protocol AVCallbackCancellation;

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceInputInternal : NSObject
{
    AVCaptureDevice *device;	// 8 = 0x8
    NSArray *ports;	// 16 = 0x10
    NSArray *multiCamPorts;	// 24 = 0x18
    _Bool unifiedAutoExposureDefaultsEnabled;	// 32 = 0x20
    _Bool builtInMicrophoneStereoAudioCaptureEnabled;	// 33 = 0x21
    _Bool visionDataDeliveryEnabled;	// 34 = 0x22
    _Bool cameraCalibrationDataDeliveryEnabled;	// 35 = 0x23
    float simulatedAperture;	// 36 = 0x24
    CDStruct_1b6d18a9 videoMinFrameDurationOverride;	// 40 = 0x28
    float maxGainOverride;	// 64 = 0x40
    _Bool centerStageAllowed;	// 68 = 0x44
    _Bool backgroundBlurAllowed;	// 69 = 0x45
    _Bool ready;	// 70 = 0x46
    float portraitLightingEffectStrength;	// 72 = 0x48
    AVWeakReference *weakReference;	// 80 = 0x50
    id <AVCallbackCancellation> deviceOpenCallbackInvoker;	// 88 = 0x58
    _Bool studioLightingAllowed;	// 96 = 0x60
}

- (void)dealloc;	// IMP=0x0000000000033ad1

@end

