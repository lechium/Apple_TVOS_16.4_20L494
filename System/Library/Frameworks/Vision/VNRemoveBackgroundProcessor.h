//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSImageSpatioTemporalGuidedFilter, NSObject;
@protocol MTLComputePipelineState, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VNRemoveBackgroundProcessor
{
    unsigned long long _networkWidth;	// 16 = 0x10
    unsigned long long _networkHeight;	// 24 = 0x18
    CDStruct_0a65202a _outputMaskEspressoBuffer;	// 32 = 0x20
    CDStruct_0a65202a _outputConfidenceEspressoBuffer;	// 200 = 0xc8
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;	// 368 = 0x170
    id <MTLComputePipelineState> _assembleConstraintsState;	// 376 = 0x178
    id <MTLComputePipelineState> _applyMaskComputeState;	// 384 = 0x180
    id <MTLComputePipelineState> _copyCropComputeState;	// 392 = 0x188
    NSObject<OS_dispatch_semaphore> *_removeBackgroundSemaphore;	// 400 = 0x190
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x006000000025ef47
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x006000000025ef17
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x006000000025eeb4
- (void).cxx_destruct;	// IMP=0x000000000025cece
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000025baa2
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000025b604
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000025b22a
- (_Bool)needsMetalContext;	// IMP=0x000000000025b179
- (void)dealloc;	// IMP=0x000000000025b133

@end

