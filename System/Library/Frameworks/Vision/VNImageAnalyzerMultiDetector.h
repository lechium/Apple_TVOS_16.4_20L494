//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerMultiDetector
{
    unsigned long long _model;	// 16 = 0x10
    shared_ptr_eb20c8f2 _defaultSceneClassificationHierarchicalModel;	// 24 = 0x18
    struct shared_ptr<vision::mod::ImageAnalyzer> _imageAnalyzer;	// 40 = 0x28
    struct map<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>> _imageAnalyzerJunkCustomClassifiers;	// 56 = 0x38
    struct unique_ptr<vision::mod::ImageAnalyzer_PCA, std::default_delete<vision::mod::ImageAnalyzer_PCA>> _imageAnalyzerPCA256;	// 80 = 0x50
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;	// 88 = 0x58
    struct map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _VNVYvzEtX1JlUdu8xx5qhDICustomClassifiers;	// 96 = 0x60
    struct map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _potentialLandmarkCustomClassifiers;	// 120 = 0x78
    struct map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifiers;	// 144 = 0x90
    struct map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _significantEventCustomClassifiers;	// 168 = 0xa8
    struct map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _cityNatureGatingCustomClassifiers;	// 192 = 0xc0
    struct os_unfair_lock_s _cachedAllSceneClassificationsFromLastAnalysisAccessLock;	// 216 = 0xd8
    struct shared_ptr<const std::vector<std::tuple<std::string, float, bool>>> _cachedAllSceneClassificationsFromLastAnalysis;	// 224 = 0xe0
    NSMutableDictionary *_cachedSaliencyHeatmapBoundingBoxGenerators;	// 240 = 0xf0
    _Bool _hasherInitialized;	// 248 = 0xf8
}

+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNet_5_10_0;	// IMP=0x0060000000206ddc
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNetObjDetNetSliderNet_3_0_0;	// IMP=0x0060000000206dc3
+ (id)availableVNInferenceNetworkIdentifierSceneNetObjDetNetSliderNetVersions;	// IMP=0x0060000000206d13
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNet_3_0_0;	// IMP=0x0060000000206d00
+ (id)availableVNInferenceNetworkIdentifierSceneNetVersions;	// IMP=0x0060000000206c01
+ (id)inferenceNetworkIdentifiers;	// IMP=0x0060000000206b8f
+ (id)allPhotosAdjustmentKeysForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000206b82
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000020697c
+ (shared_ptr_eb20c8f2)createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00600000002065a4
+ (id)blacklistForModel:(unsigned long long)arg1;	// IMP=0x006000000020655b
+ (unsigned long long)modelForRequestClass:(Class)arg1 revision:(unsigned long long)arg2;	// IMP=0x006000000020643a
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000206246
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00600000002061e3
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x0060000000206164
+ (id)_inputImageBlobNameForModel:(unsigned long long)arg1 configuredWithOptions:(id)arg2;	// IMP=0x0060000000206145
+ (_Bool)_getAnalyzerName:(id *)arg1 version:(id *)arg2 forModel:(unsigned long long)arg3 configuredWithOptions:(id)arg4 error:(id *)arg5;	// IMP=0x0060000000205f44
- (id).cxx_construct;	// IMP=0x00000000001f47e9
- (void).cxx_destruct;	// IMP=0x00000000001f4706
- (id)allCityNatureIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f45fb
- (id)allSignificantEventIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f44f0
- (id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f43e5
- (id)allRecognizedObjectsIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f3d45
- (id)allJunkIdentifiersForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f3b69
- (id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f3b3c
- (id)allSceneIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f378c
@property(readonly) _Bool hasSliderNet;
@property(readonly) _Bool hasObjDetNet;
- (id)_processFullImagePixelBuffer:(const struct __CVBuffer *)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001f2edb
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001f2e92
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001f2a0b
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001f026e
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ef579
- (id)initWithConfigurationOptions:(id)arg1;	// IMP=0x00000000001ef4c6
- (_Bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001eeead
- (_Bool)shouldBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000001eee26
- (_Bool)canBehaveAsDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000001eed76
- (unsigned long long)signPostAdditionalParameter;	// IMP=0x00000000001eed08
- (id)_junkObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ee82b

@end

