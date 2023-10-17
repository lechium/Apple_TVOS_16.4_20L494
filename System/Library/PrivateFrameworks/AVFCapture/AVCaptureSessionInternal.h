//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureSessionConfiguration, AVRunLoopCondition, AVWeakReference, FigCaptureSessionConfiguration, NSError, NSHashTable, NSMutableArray, NSString;
@protocol OS_tcc_identity;

__attribute__((visibility("hidden")))
@interface AVCaptureSessionInternal : NSObject
{
    AVWeakReference *weakReference;	// 8 = 0x8
    NSString *sessionPreset;	// 16 = 0x10
    NSObject<OS_tcc_identity> *tccIdentity;	// 24 = 0x18
    int beginConfigRefCount;	// 32 = 0x20
    int graphRebuildFromCommitConfigRefCount;	// 36 = 0x24
    FigCaptureSessionConfiguration *sessionConfig;	// 40 = 0x28
    struct OpaqueFigCaptureSession *figCaptureSession;	// 48 = 0x30
    _Bool figCaptureSessionRunning;	// 56 = 0x38
    _Bool figCaptureSessionStarted;	// 57 = 0x39
    _Bool isCameraOrDerivative;	// 58 = 0x3a
    NSMutableArray *inputs;	// 64 = 0x40
    NSMutableArray *outputs;	// 72 = 0x48
    NSHashTable *videoPreviewLayers;	// 80 = 0x50
    NSMutableArray *connections;	// 88 = 0x58
    NSMutableArray *committedAVCaptureSessionConfigurations;	// 96 = 0x60
    AVCaptureSessionConfiguration *liveAVCaptureSessionConfiguration;	// 104 = 0x68
    NSError *stopError;	// 112 = 0x70
    _Bool running;	// 120 = 0x78
    _Bool interrupted;	// 121 = 0x79
    _Bool usesApplicationAudioSession;	// 122 = 0x7a
    _Bool automaticallyConfiguresApplicationAudioSession;	// 123 = 0x7b
    _Bool automaticallyConfiguresCaptureDeviceForWideColor;	// 124 = 0x7c
    AVRunLoopCondition *runLoopCondition;	// 128 = 0x80
    _Bool waitingForFigCaptureSessionToStart;	// 136 = 0x88
    _Bool waitingForFigCaptureSessionToStop;	// 137 = 0x89
    _Bool waitingForFigCaptureSessionConfigurationToBecomeLive;	// 138 = 0x8a
    long long graphRebuildSignalCount;	// 144 = 0x90
    float hardwareCost;	// 152 = 0x98
    struct OpaqueCMClock *synchronizationClock;	// 160 = 0xa0
    _Bool notifiesOnMainThread;	// 168 = 0xa8
    NSMutableArray *devicesToResetVideoZoomFactorAndMinMaxFrameDurations;	// 176 = 0xb0
    _Bool authorizedToUseCameraInMultipleForegroundAppLayout;	// 184 = 0xb8
    _Bool xctestAuthorizedToStealDevice;	// 185 = 0xb9
    _Bool continuityCameraIsWired;	// 186 = 0xba
    struct OpaqueFigReentrantMutex *figCaptureSourceConfigChangeCacheMutex;	// 192 = 0xc0
    NSMutableArray *_devicesObservingVideoZoomFactor;	// 200 = 0xc8
}

@end
