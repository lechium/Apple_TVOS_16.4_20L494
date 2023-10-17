//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, ShotflowNetwork;

__attribute__((visibility("hidden")))
@interface ShotflowDetector : NSObject
{
    float _nmsThreshold;	// 8 = 0x8
    ShotflowNetwork *_network;	// 16 = 0x10
    float _osfsThreshold;	// 24 = 0x18
    float _osfsSizeRatio;	// 28 = 0x1c
    float _olmcsThreshold;	// 32 = 0x20
    int _olmcsMergeCountDelta;	// 36 = 0x24
    float _smartThreshold;	// 40 = 0x28
    float _smartDistanceFactor;	// 44 = 0x2c
    NSArray *_filterThresholds;	// 48 = 0x30
}

+ (struct CGSize)getSuggestedImageSize:(struct CGSize)arg1;	// IMP=0x00400000000fbe6a
+ (float)networkThreshold;	// IMP=0x00400000000fbe5c
+ (id)processingDeviceDetectorWithEspressoNetwork:(CDStruct_2bc666a5)arg1 espressoPlan:(void *)arg2;	// IMP=0x00400000000fbdad
+ (id)processingDeviceDetectorWithEspressoNetwork:(CDStruct_2bc666a5)arg1 espressoPlan:(void *)arg2 networkThreshold:(float)arg3 filterThresholds:(id)arg4;	// IMP=0x00400000000fbcdd
+ (id)processingDeviceDetectorWithModelPath:(id)arg1 preferredDeviceID:(int)arg2 engineID:(int)arg3 storageType:(int)arg4;	// IMP=0x00400000000fbc00
+ (id)processingDeviceDetectorWithModelPath:(id)arg1 networkThreshold:(float)arg2 filterThresholds:(id)arg3 preferredDeviceID:(int)arg4 engineID:(int)arg5 storageType:(int)arg6;	// IMP=0x00400000000fbb0b
+ (id)supportedLabelKeys;	// IMP=0x00400000000fba08
+ (float)inputImageAspectRatio;	// IMP=0x00400000000fb9dd
+ (float)inputImageMaxDimension;	// IMP=0x00400000000fb9b2
+ (float)inputImageMinDimension;	// IMP=0x00400000000fb987
+ (struct CGSize)inputImageSize;	// IMP=0x00400000000fb95c
+ (id)modelName;	// IMP=0x00400000000fb931
+ (id)inputLayerName;	// IMP=0x00400000000fb906
- (void).cxx_destruct;	// IMP=0x00000000000fb776
@property(nonatomic) float smartDistanceFactor; // @synthesize smartDistanceFactor=_smartDistanceFactor;
@property(nonatomic) float smartThreshold; // @synthesize smartThreshold=_smartThreshold;
@property(nonatomic) int olmcsMergeCountDelta; // @synthesize olmcsMergeCountDelta=_olmcsMergeCountDelta;
@property(nonatomic) float olmcsThreshold; // @synthesize olmcsThreshold=_olmcsThreshold;
@property(nonatomic) float osfsSizeRatio; // @synthesize osfsSizeRatio=_osfsSizeRatio;
@property(nonatomic) float osfsThreshold; // @synthesize osfsThreshold=_osfsThreshold;
@property(retain, nonatomic) NSArray *filterThresholds; // @synthesize filterThresholds=_filterThresholds;
@property(nonatomic) float nmsThreshold; // @synthesize nmsThreshold=_nmsThreshold;
- (id)enforceSquareFaces:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000fb3df
- (id)detectAndProcessObjects:(const struct vImage_Buffer *)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x00000000000fb31b
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000fae20
- (id)detect:(const struct vImage_Buffer *)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x00000000000fadef
- (id)filterBoxes:(id)arg1;	// IMP=0x00000000000fabcc
- (id)sortBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;	// IMP=0x00000000000faa20
- (id)nmsBoxes:(id)arg1;	// IMP=0x00000000000fa9f1
- (id)smartMergeBoxes:(id)arg1;	// IMP=0x00000000000f9e1e
- (id)mergeBoxes:(id)arg1;	// IMP=0x00000000000f97f3
- (id)overlappingLowMergeCountSuppression:(id)arg1;	// IMP=0x00000000000f94a8
- (id)overlappingSmallFacesSuppression:(id)arg1;	// IMP=0x00000000000f916f
@property(nonatomic) float threshold;
- (id)initWithNetwork:(id)arg1;	// IMP=0x00000000000f9091
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;	// IMP=0x00000000000f8fa9

@end
