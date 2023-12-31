//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSystemAudioCaptureController
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    _Bool _running;	// 32 = 0x20
    struct tagVCSystemAudioCaptureControllerConfig _configuration;	// 40 = 0x28
    _Bool _useScreenCaptureKitForAudio;	// 64 = 0x40
}

+ (int)captureSourceForSystemAudioCaptureControllerConfig:(struct tagVCSystemAudioCaptureControllerConfig *)arg1;	// IMP=0x00100000000ff950
+ (int)captureSourceForTypeProcessID:(int)arg1;	// IMP=0x00100000000ff933
+ (int)captureSourceForTypePreSpatialSessionType:(unsigned int)arg1;	// IMP=0x00100000000ff921
+ (id)captureServerConfigForAudioConfig:(struct tagVCSystemAudioCaptureControllerConfig *)arg1 forClient:(id)arg2;	// IMP=0x00100000000ff919
+ (_Bool)isValidConfiguration:(const struct tagVCSystemAudioCaptureControllerConfig *)arg1;	// IMP=0x00100000000ff5b7
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x0000000000100741
- (void)updateClient:(id)arg1 direction:(unsigned char)arg2;	// IMP=0x000000000010056c
- (void)stopClient:(id)arg1;	// IMP=0x00000000000fffe6
- (void)startClient:(id)arg1;	// IMP=0x00000000000ff987
- (id)dispatchQueueNameWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig *)arg1;	// IMP=0x00000000000ff886
- (void)setupLogPrefixWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig *)arg1;	// IMP=0x00000000000ff7f0
- (void)dealloc;	// IMP=0x00000000000ff3bc
- (id)initWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig *)arg1;	// IMP=0x00000000000fee23
- (id)init;	// IMP=0x00000000000fedc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *reportingStats;
@property(readonly) Class superclass;

@end

