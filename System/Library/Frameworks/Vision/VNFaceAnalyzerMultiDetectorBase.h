//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerMultiDetectorBase
{
    struct shared_ptr<vision::mod::FaceprintAndAttributes> _mMultiHeadedFaceClassifier;	// 16 = 0x10
}

+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00400000000247f3
+ (const void *)modelVersionForOptions:(id)arg1;	// IMP=0x00400000000246f0
+ (unsigned long long)numberOfImageChannels;	// IMP=0x00400000000246e5
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;	// IMP=0x004000000002456a
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0040000000024507
- (id).cxx_construct;	// IMP=0x000000000002d38e
- (void).cxx_destruct;	// IMP=0x000000000002d347
- (_Bool)_saveFaceAttributes:(void *)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002d228
- (_Bool)_isFaceprintJunk:(shared_ptr_0a6daad2)arg1;	// IMP=0x000000000002d148
- (_Bool)_saveFaceprint:(shared_ptr_0a6daad2)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002ce1a
- (void)_addFaceAnalysisResultsFromMap:(void *)arg1 toFaceAttributeObject:(id)arg2 forOriginatingRequestSpecifier:(id)arg3;	// IMP=0x0000000000027bc4
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000277d5
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000024a53

@end

