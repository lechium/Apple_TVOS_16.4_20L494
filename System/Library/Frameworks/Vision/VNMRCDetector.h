//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNMRCDetector
{
    unsigned long long _networkWidth;	// 16 = 0x10
    unsigned long long _networkHeight;	// 24 = 0x18
    struct __MRCContext *_mrcContext;	// 32 = 0x20
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00600000001cdd66
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x00600000001cdd36
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00600000001cdcd3
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001ce809
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001cdfd3
- (void)dealloc;	// IMP=0x00000000001cdf50
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001cde56

@end

