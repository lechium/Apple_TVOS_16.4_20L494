//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerBasedDetector
{
    struct shared_ptr<vision::mod::ImageAnalyzer> _imageAnalyzer;	// 16 = 0x10
    struct _Geometry2D_size2D_ _networkRequiredInputImageSize;	// 32 = 0x20
    _Bool _networkUsesAnisotropicScaling;	// 40 = 0x28
    NSArray *_cachedSupportedClassificationIdentifiers;	// 48 = 0x30
}

+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x006000000003a5e7
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000003a35b
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x006000000003a350
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x006000000003a348
+ (id)modelNameForConfiguration:(id)arg1;	// IMP=0x006000000003a340
- (id).cxx_construct;	// IMP=0x000000000003bd5d
- (void).cxx_destruct;	// IMP=0x000000000003bd2e
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000003ba4b
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000003b6a4
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000003b59b
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003b044
- (id)segmentationLabelsFileName;	// IMP=0x000000000003b03c
- (_Bool)providesSegmentationLabels;	// IMP=0x000000000003afe4
- (id)observationsForSceneLabelsFromLastAnalysisOfImageAnalyzer:(void *)arg1 identifierAcceptingBlock:(CDUnknownBlockType)arg2 operationPointsProvider:(id)arg3 originatingRequestSpecifier:(id)arg4 qosClass:(unsigned int)arg5 error:(id *)arg6;	// IMP=0x000000000003acda
- (id)supportedClassificationIdentifiersAcceptedByBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x000000000003aa3e
- (id)sceneLabelsFileName;	// IMP=0x000000000003aa36
- (_Bool)providesSceneLabels;	// IMP=0x000000000003a9de
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x000000000003a999
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x000000000003a991
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x000000000003a757
- (unsigned long long)defaultImageCropAndScaleOption;	// IMP=0x000000000003a74f
- (struct CGSize)inputImageSize;	// IMP=0x000000000003a737

@end

