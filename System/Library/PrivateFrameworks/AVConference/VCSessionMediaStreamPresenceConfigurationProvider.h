//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface VCSessionMediaStreamPresenceConfigurationProvider : NSObject
{
    NSDictionary *_configuration;	// 8 = 0x8
    NSSet *_streamInputConfigurations;	// 16 = 0x10
    NSSet *_streamGroupConfigurations;	// 24 = 0x18
}

+ (unsigned int)remainingBitrateSplitQualityIndexForStreamGroup:(unsigned int)arg1 splitType:(unsigned int)arg2;	// IMP=0x006000000009e607
+ (id)oneToOneTierTableForStreamGroupID:(unsigned int)arg1 splitType:(unsigned int)arg2;	// IMP=0x006000000009e5dc
+ (unsigned int)foregroundCameraRemainingBitrateSplit:(unsigned int)arg1;	// IMP=0x006000000009e546
+ (unsigned int)defaultRemainingBitrateSplit:(unsigned int)arg1;	// IMP=0x006000000009e4b0
+ (id)foregroundCameraOneToOneTierTable:(unsigned int)arg1;	// IMP=0x006000000009e268
+ (id)defaultOneToOneTierTable:(unsigned int)arg1;	// IMP=0x006000000009dfcc
+ (unsigned int)readUint32WithPList:(id)arg1 key:(id)arg2 defaultValue:(unsigned int)arg3;	// IMP=0x006000000009df1d
+ (unsigned int)streamSSRCForStreamGroupID:(unsigned int)arg1 streamIndex:(int)arg2;	// IMP=0x006000000009dde9
+ (id)publicSessionConfigurationForType:(unsigned int)arg1;	// IMP=0x006000000009d7eb
+ (id)loadSessionConfigurationWithResourceName:(id)arg1;	// IMP=0x006000000009d5b3
+ (id)replaceTag:(id)arg1;	// IMP=0x006000000009d4a6
+ (id)fdatGroupDisabled;	// IMP=0x006000000009d467
+ (id)ftxtGroupDisabled;	// IMP=0x006000000009d417
+ (id)ftxtOldGroupDisabled;	// IMP=0x006000000009d3c9
+ (id)bdatGroupDisabled;	// IMP=0x006000000009d379
+ (id)bdatOldGroupDisabled;	// IMP=0x006000000009d32b
+ (id)screenStreamBaseTierFramerate;	// IMP=0x006000000009d31e
+ (id)sessionConfigurationForType:(unsigned int)arg1;	// IMP=0x006000000009cff5
+ (id)resourceNameForConfigurationType:(unsigned int)arg1;	// IMP=0x006000000009cfd1
@property(readonly, nonatomic) NSSet *streamGroupConfigurations; // @synthesize streamGroupConfigurations=_streamGroupConfigurations;
@property(readonly, nonatomic) NSSet *streamInputConfigurations; // @synthesize streamInputConfigurations=_streamInputConfigurations;
- (id)newStreamGroupConfigurationsWithSupportedAudioRules:(id)arg1 streamIDGenerator:(id)arg2;	// IMP=0x00000000000a72d8
- (id)newStreamGroupConfigurationWithPList:(id)arg1 supportedAudioRules:(id)arg2 streamIDGenerator:(id)arg3;	// IMP=0x00000000000a6cdc
- (_Bool)setupAudioStreamGroupStreams:(id)arg1 streamGroupConfig:(id)arg2 supportedAudioRules:(id)arg3 streamIDGenerator:(id)arg4;	// IMP=0x00000000000a695c
- (id)newAudioStreamGroupStreamConfigWithPList:(id)arg1 supportedAudioRules:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3 streamIDGenerator:(id)arg4 ssrc:(unsigned int)arg5 groupID:(unsigned int)arg6;	// IMP=0x00000000000a56ea
- (_Bool)setupAudioRulesWithPList:(id)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;	// IMP=0x00000000000a4386
- (_Bool)setupAudioRedWithPlist:(id)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;	// IMP=0x00000000000a3bba
- (_Bool)setupRedFactorsWithPList:(id)arg1 audioStreamConfig:(id)arg2;	// IMP=0x00000000000a3918
- (id)newAudioMultiwayConfigWithPList:(id)arg1 audioRules:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3 streamIDGenerator:(id)arg4 ssrc:(unsigned int)arg5;	// IMP=0x00000000000a3261
- (_Bool)addPayload:(int)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;	// IMP=0x00000000000a3106
- (_Bool)setupVideoStreamGroupStreams:(id)arg1 streamGroupConfig:(id)arg2 streamIDGenerator:(id)arg3;	// IMP=0x00000000000a2d63
- (unsigned short)setParentStreamID:(unsigned short)arg1 videoConfig:(id)arg2;	// IMP=0x00000000000a2d10
- (id)newVideoStreamGroupStreamConfigWithPList:(id)arg1 streamIDGenerator:(id)arg2 ssrc:(unsigned int)arg3 groupID:(unsigned int)arg4 shouldSkip:(_Bool *)arg5;	// IMP=0x00000000000a0dd6
- (long long)getVideoCodecFromStreamCodecPList:(id)arg1;	// IMP=0x00000000000a0bae
- (id)getVideoCodecConfigFromStreamConfigPList:(id)arg1;	// IMP=0x00000000000a0882
- (_Bool)checkEncoderSupportForCodecType:(long long)arg1;	// IMP=0x00000000000a0684
- (_Bool)checkEncoderSupportForConfig:(id)arg1;	// IMP=0x00000000000a02c9
- (void)updateStreamConfig:(id)arg1 forPayload:(int)arg2 networkPayload:(unsigned int)arg3 groupID:(unsigned int)arg4;	// IMP=0x00000000000a0012
- (id)newVideoMultiwayConfigWithPList:(id)arg1 codecType:(long long)arg2 streamIDGenerator:(id)arg3 ssrc:(unsigned int)arg4;	// IMP=0x000000000009f2c4
- (id)newDataStreamInputConfigurationWithPList:(id)arg1;	// IMP=0x000000000009f03e
- (id)newVideoStreamInputConfigurationWithPList:(id)arg1;	// IMP=0x000000000009eba2
- (id)newStreamInputConfigurations;	// IMP=0x000000000009e632
- (void)dealloc;	// IMP=0x000000000009d2aa
- (id)initWithConfigurationType:(unsigned int)arg1 supportedAudioRules:(id)arg2 streamIDGenerator:(id)arg3;	// IMP=0x000000000009d0de

@end

