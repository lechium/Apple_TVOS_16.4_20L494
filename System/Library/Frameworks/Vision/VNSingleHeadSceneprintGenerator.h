//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNSingleHeadSceneprintGenerator
{
}

+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierStandaloneSceneprint_3_0_0;	// IMP=0x00800000000f5d7b
+ (id)availableVNInferenceNetworkIdentifierStandaloneSceneprintVersions;	// IMP=0x00800000000f5ccb
+ (id)inferenceNetworkIdentifiers;	// IMP=0x00800000000f5c64
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x00800000000f5c5c
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x00800000000f5c51
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00800000000f5c44
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x00800000000f5c37
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00800000000f5bd4
+ (void)fullyPopulateConfigurationOptions:(id)arg1;	// IMP=0x00800000000f5ba5
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x00800000000f5b76
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000f635b
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000f6124

@end

