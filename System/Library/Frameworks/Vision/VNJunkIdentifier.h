//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNJunkIdentifier
{
    shared_ptr_b26ea6de mJunkDescriptorImpl;	// 16 = 0x10
    shared_ptr_047f28ed mJunkClassifierImpl;	// 32 = 0x20
}

+ (_Bool)shouldDumpDebugIntermediates;	// IMP=0x00600000001930a5
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0060000000193042
- (id).cxx_construct;	// IMP=0x000000000019411d
- (void).cxx_destruct;	// IMP=0x00000000001940f0
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000193aab
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001939c9
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001934e2
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000193215

@end
