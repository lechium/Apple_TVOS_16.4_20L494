//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNSmartCamCombinedAestheticsAndSaliencyDetector
{
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x0080000000286100
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x00800000002860f5
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00800000002860e8
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x00800000002860db
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000285b7c
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000285a8c
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000285902
- (_Bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000285829
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;	// IMP=0x000000000028581e
- (id)_classifyAesthetics:(_Bool)arg1 generateSaliencyHeatMap:(_Bool)arg2 for32BGRAImageInPixelBuffer:(struct __CVBuffer *)arg3 withOptions:(id)arg4 modelInputImageSize:(struct CGSize)arg5 originalImageSize:(struct CGSize)arg6 regionOfInterest:(struct CGRect)arg7 warningRecorder:(id)arg8 error:(id *)arg9;	// IMP=0x0000000000284ef6

@end

