//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetector
{
    struct shared_ptr<vision::mod::LandmarkAttributes> _faceAttributesPupilRefiner;	// 16 = 0x10
    _Bool _requireFaceAttributesPupilRefiner;	// 32 = 0x20
    _Bool _modelFilesWereMemmapped;	// 33 = 0x21
}

+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000070440
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00100000000703dd
+ (struct _Geometry2D_point2D_)computeCentroidUsingPoints:(const struct _Geometry2D_point2D_ *)arg1 indicies:(const int *)arg2 numberOfIndicies:(int)arg3;	// IMP=0x00100000000703a2
+ (const void *)allLandmarksPointsIndexesForConstellation:(unsigned long long)arg1;	// IMP=0x00100000000702a3
+ (const struct _LandmarkDetector_faceMeshParts_ *)landmarksMeshPartsForConstellation:(unsigned long long)arg1;	// IMP=0x00100000000701a4
- (id).cxx_construct;	// IMP=0x0000000000073069
- (void).cxx_destruct;	// IMP=0x0000000000073058
- (_Bool)detectBlinkOnFaceImage:(const struct vImage_Buffer *)arg1 faceObservation:(id)arg2 lumaRec2DInImageCoordinates:(struct _Geometry2D_rect2D_ *)arg3 landmarks:(const void *)arg4 warningRecorder:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000071d43
- (struct CGRect)normalizedFaceBBoxForLandmarks:(id)arg1;	// IMP=0x0000000000071ce3
- (_Bool)postprocessLandmarkResultsForLandmarks:(const void *)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 options:(id)arg4 warningRecorder:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000071689
- (id)computeLandmarksScoreOnImage:(const struct vImage_Buffer *)arg1 withFaceBoundingBox:(const struct _Geometry2D_rect2D_ *)arg2 andLandmarks:(const void *)arg3 error:(id *)arg4;	// IMP=0x00000000000711c7
- (void)calculatePupilLocationAndUpdateLandmarkPoints:(void *)arg1;	// IMP=0x0000000000070fc4
- (void)dealloc;	// IMP=0x0000000000070ed1
- (_Bool)loadRefinersAndReturnError:(id *)arg1;	// IMP=0x0000000000070ce9
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000070c18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

