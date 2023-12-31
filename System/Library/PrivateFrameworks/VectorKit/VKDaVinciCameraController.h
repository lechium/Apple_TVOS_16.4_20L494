//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VKDaVinciCameraController
{
    void *_mapEngine;	// 96 = 0x60
    void *_cameraManager;	// 104 = 0x68
    double _currentDoublePanPitch;	// 112 = 0x70
    _Bool _isPitching;	// 120 = 0x78
    _Bool _isRotating;	// 121 = 0x79
    _Bool _wasPitched;	// 122 = 0x7a
    _Bool _couldEnter3DMode;	// 123 = 0x7b
    double _lastRotation;	// 128 = 0x80
    struct CGPoint _panStartScreenPoint;	// 136 = 0x88
    struct CGPoint _panLastScreenPoint;	// 152 = 0x98
    double _beganDoublePanPitch;	// 168 = 0xa8
    _Bool _updateHeight;	// 176 = 0xb0
}

- (float)maxPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x00000000005ac9bf
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x00000000005ac98e
- (float)minPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x00000000005ac95d
- (double)topDownMinimumZoomLevel;	// IMP=0x00000000005ac7f9
- (double)currentZoomLevel;	// IMP=0x00000000005ac6bf
- (double)maximumZoomLevel;	// IMP=0x00000000005ac55b
- (double)minimumZoomLevel;	// IMP=0x00000000005ac3f7
- (void)updateCameraLimits;	// IMP=0x00000000005ab82e
- (long long)tileSize;	// IMP=0x00000000005ab800
- (float)minimumNormalizedZoomLevel;	// IMP=0x00000000005ab7ae
- (float)maximumNormalizedZoomLevel;	// IMP=0x00000000005ab77f
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x00000000005ab46a
- (_Bool)usesVKCamera;	// IMP=0x00000000005ab462
- (void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000005aab94
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000005aa7a2
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 stepHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000005aa514
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000005a9cee
- (double)pitch;	// IMP=0x00000000005a9c82
- (double)heading;	// IMP=0x00000000005a9bf1
- (double)altitude;	// IMP=0x00000000005a9b18
- (double)distanceFromCenterCoordinate;	// IMP=0x00000000005a9ab4
- (CDStruct_c3b9c2ee)centerCoordinate;	// IMP=0x00000000005a9a7a
- (Coordinate2D_cb341d5f)centerCoordinateRad;	// IMP=0x00000000005a9966
- (Coordinate2D_cb341d5f)_centerCoordinateForMapRegion:(id)arg1;	// IMP=0x00000000005a9908
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000005a9789
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x00000000005a977b
- (double)zoomForMapRegion:(id)arg1;	// IMP=0x00000000005a8ff4
- (Unit_5669e52e)widestLatitudeForMapRegion:(id)arg1;	// IMP=0x00000000005a8f42
- (Unit_5669e52e)greatCircleMidPointLatitude:(Unit_5669e52e)arg1 fromLongitude:(Unit_5669e52e)arg2 toLongitude:(Unit_5669e52e)arg3;	// IMP=0x00000000005a8ec6
- (double)earthRadiusAt:(Unit_5669e52e)arg1;	// IMP=0x00000000005a8e83
- (double)geocAngleBetween:(Coordinate2D_cb341d5f)arg1 andCoordinate:(Coordinate2D_cb341d5f)arg2;	// IMP=0x00000000005a8d3a
- (id)mapRegionIgnoringEdgeInsets;	// IMP=0x00000000005a8d28
- (id)mapRegion;	// IMP=0x00000000005a8a6e
- (vector_6baf6815)_getVisibleArea;	// IMP=0x00000000005a8072
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005a7fff
- (double)presentationYaw;	// IMP=0x00000000005a7fed
- (void)updateCameraManager;	// IMP=0x00000000005a7f7f
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x00000000005a7c83
- (void)setGesturing:(_Bool)arg1;	// IMP=0x00000000005a7c2d
- (void)updateState;	// IMP=0x00000000005a7bff
- (void)_updateCanEnter3DMode;	// IMP=0x00000000005a7b71
- (void)_updateIsPitched;	// IMP=0x00000000005a7ae3
- (double)maxPitch;	// IMP=0x00000000005a7aa6
- (double)minPitch;	// IMP=0x00000000005a7a69
- (_Bool)isFullyPitched;	// IMP=0x00000000005a79a0
- (_Bool)isPitched;	// IMP=0x00000000005a7931
- (_Bool)canEnter3DMode;	// IMP=0x00000000005a78d5
- (void)exit3DMode;	// IMP=0x00000000005a78b6
- (void)enter3DMode;	// IMP=0x00000000005a7869
- (void)stopGlobeAnimations;	// IMP=0x00000000005a779a
- (void)moveToZoomOutZoomInTransition:(Coordinate2D_cb341d5f)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000005a6512
- (CDUnknownBlockType)createMoveToZoomOutZoomInFrameFunction:(CameraFrame_b765d6d7)arg1 toLatLon:(CameraFrame_b765d6d7)arg2;	// IMP=0x00000000005a56ed
- (void)moveTo:(Coordinate2D_cb341d5f)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000005a4570
- (void)moveTo:(Coordinate2D_cb341d5f)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000005a4534
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000005a411f
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;	// IMP=0x00000000005a4108
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000005a3c55
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005a3737
- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;	// IMP=0x00000000005a313c
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005a2b58
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x00000000005a292d
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000005a27eb
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000005a267c
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000005a25a4
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x00000000005a240f
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000005a232c
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005a21fd
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x00000000005a2019
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000005a1f43
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000005a1d89
- (void)dealloc;	// IMP=0x00000000005a1d29
- (id)initWithMapDataAccess:(void *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4 mapEngine:(void *)arg5;	// IMP=0x00000000005a1bc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

