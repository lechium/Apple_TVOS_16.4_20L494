//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVVideoOutputSettings.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings
{
    NSDictionary *_adaptedVideoCompressionProperties;	// 16 = 0x10
    NSDictionary *_VTPixelAspectRatioDictionary;	// 24 = 0x18
    NSDictionary *_VTCleanApertureDictionary;	// 32 = 0x20
}

+ (_Bool)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id *)arg4;	// IMP=0x0010000000112c99
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x0010000000112c5d
+ (id)eligibleOutputSettingsDictionaryKeys;	// IMP=0x0010000000112ba7
@property(readonly, nonatomic) NSDictionary *videoCompressionProperties;
@property(readonly, nonatomic) NSDictionary *videoEncoderSpecification;
@property(readonly, nonatomic) unsigned int videoCodecType;
- (id)cleanApertureDictionary;	// IMP=0x0000000000114776
- (id)pixelAspectRatioDictionary;	// IMP=0x0000000000114765
- (int)height;	// IMP=0x0000000000114719
- (int)width;	// IMP=0x00000000001146cd
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;	// IMP=0x0000000000114526
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;	// IMP=0x0000000000114350
- (_Bool)willYieldCompressedSamples;	// IMP=0x0000000000114348
- (void)dealloc;	// IMP=0x00000000001142e2
- (id)initWithTrustedAVVideoSettingsDictionary:(id)arg1;	// IMP=0x00000000001141c1
- (id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x00000000001131df

@end
