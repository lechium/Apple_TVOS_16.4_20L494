//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, VCPBackwarp, VCPCorrelation, VCPFlowDecoder, VCPFlowFeatureExtractor;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCPModelR2D2
{
    NSString *_resConfig;	// 48 = 0x30
    int _numLevels;	// 56 = 0x38
    int _startLevel;	// 60 = 0x3c
    struct __CVBuffer *_firstBuffer;	// 64 = 0x40
    struct __CVBuffer *_secondBuffer;	// 72 = 0x48
    struct __CVBuffer *_outputFlow;	// 80 = 0x50
    VCPFlowFeatureExtractor *_featureExtractor;	// 88 = 0x58
    VCPFlowDecoder *_flowDecoder[7];	// 96 = 0x60
    VCPCorrelation *_correlation;	// 152 = 0x98
    VCPBackwarp *_backwarp;	// 160 = 0xa0
    CDStruct_80570e6e _imageFeature[2];	// 168 = 0xa8
    struct {
        struct __CVBuffer *correlations[7];
        struct __CVBuffer *flows[7];
        struct __CVBuffer *upscaledFlows[7];
        struct __CVBuffer *warpedBuffers[7];
    } _storage;	// 456 = 0x1c8
    NSObject<OS_dispatch_semaphore> *_flowDecoderSemaphore;	// 680 = 0x2a8
}

- (void).cxx_destruct;	// IMP=0x00000000000a331b
- (void)dealloc;	// IMP=0x00000000000a329b
- (void)releaseMemory;	// IMP=0x00000000000a3260
- (int)updateModelForAspectRatio:(id)arg1 computationAccuracy:(unsigned int)arg2;	// IMP=0x00000000000a31bb
- (int)flowScalingTo:(struct __CVBuffer *)arg1 flowBufferY:(struct __CVBuffer *)arg2 scalerX:(float)arg3 scalerY:(float)arg4;	// IMP=0x00000000000a2c63
- (int)flowScalingTo:(struct __CVBuffer *)arg1 scalerX:(float)arg2 scalerY:(float)arg3;	// IMP=0x00000000000a2904
- (int)getFlowToBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000000a28e4
- (int)analyzeImages:(struct __CVBuffer *)arg1 secondImage:(struct __CVBuffer *)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a2818
- (int)createInput:(struct __CVBuffer *)arg1 withImage:(struct __CVBuffer *)arg2 modelInputHeight:(int)arg3 modelInputWidth:(int)arg4;	// IMP=0x00000000000a26cf
- (int)copyImage:(struct __CVBuffer *)arg1 toBuffer:(struct __CVBuffer *)arg2 withChannels:(int)arg3;	// IMP=0x00000000000a231c
- (int)estimateFlowForLevel:(int)arg1 upperFlow:(struct __CVBuffer *)arg2 outputFlow:(struct __CVBuffer *)arg3;	// IMP=0x00000000000a1e4e
- (int)estimateMotionFlow:(struct __CVBuffer *)arg1;	// IMP=0x00000000000a1d3a
- (int)extractFeatureFromImage:(struct __CVBuffer *)arg1 toFeature:(CDStruct_80570e6e *)arg2;	// IMP=0x00000000000a1c47
- (int)extractFeaturesFromFirst:(struct __CVBuffer *)arg1 andSecond:(struct __CVBuffer *)arg2;	// IMP=0x00000000000a1beb
- (void)releaseFeatureBuffers;	// IMP=0x00000000000a1b6b
- (int)allocateFeatures;	// IMP=0x00000000000a1a3f
- (int)allocateCorreleationBuffer:(struct __CVBuffer **)arg1 forLevel:(unsigned int)arg2;	// IMP=0x00000000000a19f7
- (void)releaseStorages;	// IMP=0x00000000000a1965
- (int)allocateStorages;	// IMP=0x00000000000a17ef
- (int)updateModulesWithConfig:(id)arg1;	// IMP=0x00000000000a163a
- (int)createModules:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a143c
- (int)configForAspectRatio:(id)arg1;	// IMP=0x00000000000a12e8
- (int)releaseInputAndOutputBuffers;	// IMP=0x00000000000a1297
- (int)allocateInputAndOutputBuffers;	// IMP=0x00000000000a118b
- (int)prepareWithLightweightOption:(_Bool)arg1 aspectRatio:(id)arg2 numLevels:(int)arg3 startLevel:(int)arg4 cancel:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a1010

@end

