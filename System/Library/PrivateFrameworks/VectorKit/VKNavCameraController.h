//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapRegion, NSString, VKAttachedNavGestureCameraBehavior, VKDaVinciGestureCameraController, VKDetachedNavGestureCameraBehavior, VKGestureCameraBehavior, VKNavContext, VKSceneConfiguration, VKScreenCanvas, VKTimedAnimation;
@protocol VKInteractiveMap;

__attribute__((visibility("hidden")))
@interface VKNavCameraController
{
    unsigned char _cameraType;	// 8 = 0x8
    unsigned char _headingType;	// 9 = 0x9
    Unit_5669e52e _puckCourse;	// 16 = 0x10
    Coordinate3D_332c2c3b _puckCoordinate;	// 24 = 0x18
    Unit_5669e52e _headingDelta;	// 48 = 0x30
    Unit_5669e52e _headingMinDelta;	// 56 = 0x38
    CameraFrame_b765d6d7 _lastCalculatedCameraFrame;	// 64 = 0x40
    CameraFrame_b765d6d7 _cameraFrame;	// 120 = 0x78
    _Bool _needsUpdate;	// 176 = 0xb0
    struct Spring<double, 1, gdc::SpringType::Linear> _pitchSpring;	// 184 = 0xb8
    struct Spring<double, 1, gdc::SpringType::Angular> _headingSpring;	// 224 = 0xe0
    struct Spring<double, 1, gdc::SpringType::Linear> _distanceFromTargetSpring;	// 264 = 0x108
    struct Spring<double, 2, gdc::SpringType::Linear> _screenPositionSpring;	// 304 = 0x130
    Unit_e1574806 _cameraDistanceFromTarget;	// 368 = 0x170
    Unit_5669e52e _cameraPitch;	// 376 = 0x178
    double _previousUpdateTime;	// 384 = 0x180
    double _ignoreStyleChangeStartTime;	// 392 = 0x188
    double _lastSARUpdateTime;	// 400 = 0x190
    double _maxZoomScale;	// 408 = 0x198
    double _minZoomScale;	// 416 = 0x1a0
    VKGestureCameraBehavior *_gestureBehavior;	// 424 = 0x1a8
    VKAttachedNavGestureCameraBehavior *_attachedGestureBehavior;	// 432 = 0x1b0
    VKDetachedNavGestureCameraBehavior *_detachedGestureBehavior;	// 440 = 0x1b8
    VKDaVinciGestureCameraController *_davinciGestureCameraController;	// 448 = 0x1c0
    _Bool _isDetached;	// 456 = 0x1c8
    _Bool _isIgnoringStyleChange;	// 457 = 0x1c9
    _Bool _panning;	// 458 = 0x1ca
    _Bool _rotating;	// 459 = 0x1cb
    _Bool _pitching;	// 460 = 0x1cc
    _Bool _zooming;	// 461 = 0x1cd
    VKTimedAnimation *_transitionAnimation;	// 464 = 0x1d0
    VKTimedAnimation *_snapPitchAnimation;	// 472 = 0x1d8
    VKTimedAnimation *_snapHeadingAnimation;	// 480 = 0x1e0
    CameraFrame_b765d6d7 _transitionFrame;	// 488 = 0x1e8
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _currentStyleName;	// 544 = 0x220
    struct vector<geo::Coordinate3D<geo::Radians, double>, std::allocator<geo::Coordinate3D<geo::Radians, double>>> _coordinatesToFrame;	// 568 = 0x238
    unsigned char _styleManeuversToFrame;	// 592 = 0x250
    unsigned char _maneuversToFrame;	// 593 = 0x251
    unsigned char _styleLegsToFrame;	// 594 = 0x252
    unsigned char _segmentsToFrame;	// 595 = 0x253
    double _minCameraHeight;	// 600 = 0x258
    double _maxCameraHeight;	// 608 = 0x260
    Unit_5669e52e _minCameraPitch;	// 616 = 0x268
    Unit_5669e52e _maxCameraPitch;	// 624 = 0x270
    struct VKEdgeInsets _previousMapEdgeInsets;	// 632 = 0x278
    struct VKEdgeInsets _framingEdgeInset;	// 648 = 0x288
    struct VKEdgeInsets _framingEdgeInsetProportional;	// 664 = 0x298
    struct VKEdgeInsets _clientFramingInsets;	// 680 = 0x2a8
    Matrix_8746f91e _puckMovementBoundsMin;	// 696 = 0x2b8
    Matrix_8746f91e _puckMovementBoundsMax;	// 704 = 0x2c0
    Matrix_8746f91e _idealPuckScreenPosition;	// 712 = 0x2c8
    double _minHeightDeltaChangeHorizontal;	// 720 = 0x2d0
    double _maxHeightDeltaChangeHorizontal;	// 728 = 0x2d8
    double _minHeightDeltaChangeVertical;	// 736 = 0x2e0
    double _maxHeightDeltaChangeVertical;	// 744 = 0x2e8
    double _halfPuckSize;	// 752 = 0x2f0
    Box_3d7e3c2c _viewableScreenRect;	// 760 = 0x2f8
    Box_3d7e3c2c _framingScreenRect;	// 792 = 0x318
    _Bool _enablePan;	// 824 = 0x338
    _Bool _enableZoom;	// 825 = 0x339
    _Bool _enablePitch;	// 826 = 0x33a
    _Bool _enableRotate;	// 827 = 0x33b
    float _panReturnDelayTime;	// 828 = 0x33c
    unsigned char _alternateFramingSource;	// 832 = 0x340
    unsigned char _secondaryAlternateFramingSource;	// 833 = 0x341
    double _maxFramingDistance;	// 840 = 0x348
    double _framingDistanceAfterManeuver;	// 848 = 0x350
    VKNavContext *_navContext;	// 856 = 0x358
    CDStruct_2c43369c _locationCoordinate;	// 864 = 0x360
    struct PolylineCoordinate _routeCoordinate;	// 880 = 0x370
    _Bool _frameAllGroupedManeuvers;	// 888 = 0x378
    unsigned char _maxManeuversToFrame;	// 889 = 0x379
    _Bool _ignorePointsBehind;	// 890 = 0x37a
    Coordinate3D_332c2c3b _routeFocusCoordinate;	// 896 = 0x380
    unsigned long long _lastTargetStyleIdentifier;	// 920 = 0x398
    unsigned long long _previousSearchItemCount;	// 928 = 0x3a0
    double _desiredZoomScale;	// 936 = 0x3a8
    float _animationTime;	// 944 = 0x3b0
    _Bool _isTracking;	// 948 = 0x3b4
    shared_ptr_e963992e _taskContext;	// 952 = 0x3b8
    double _depthNear;	// 968 = 0x3c8
    _Bool _leftHanded;	// 976 = 0x3d0
    _Bool _sentZoomNotification;	// 977 = 0x3d1
    _Bool _enableDynamicFrameRate;	// 978 = 0x3d2
    Coordinate3D_332c2c3b _cornerCoordinates[4];	// 984 = 0x3d8
    struct WindowedSampler<60UL> _pixelSamples;	// 1080 = 0x438
    struct Sampler _requesteDisplayRateSampler;	// 1608 = 0x648
    long long _requestedDisplayRate;	// 1648 = 0x670
    _Bool _isElevatedRoute;	// 1656 = 0x678
    void *_cameraManager;	// 1664 = 0x680
    _Bool _needsElasticFrameUpdate;	// 1672 = 0x688
    _Bool _isElasticFramingEnabled;	// 1673 = 0x689
    long long _defaultMaxDisplayRate;	// 1680 = 0x690
    struct vector<NavCameraPixelFrameRate, std::allocator<NavCameraPixelFrameRate>> _pixelChangeFrameRate;	// 1688 = 0x698
    Matrix_6e1d3589 _lastProjectedPosition;	// 1712 = 0x6b0
    double _farClipPlaneFactor;	// 1736 = 0x6c8
    struct shared_ptr<gss::StylesheetQuery<gss::ScenePropertyID>> _sceneQuery;	// 1744 = 0x6d0
    unsigned long long _cameraMode;	// 1760 = 0x6e0
    _Bool _didNavCameraTransition;	// 1768 = 0x6e8
    VKScreenCanvas<VKInteractiveMap> *_screenCanvas;	// 1776 = 0x6f0
    VKSceneConfiguration *_sceneConfiguration;	// 1784 = 0x6f8
    long long _baseDisplayRate;	// 1792 = 0x700
}

- (id).cxx_construct;	// IMP=0x00000000007e5827
- (void).cxx_destruct;	// IMP=0x00000000007e56f8
@property(nonatomic) long long defaultMaxDisplayRate; // @synthesize defaultMaxDisplayRate=_defaultMaxDisplayRate;
@property(nonatomic) long long baseDisplayRate; // @synthesize baseDisplayRate=_baseDisplayRate;
@property(nonatomic) _Bool isElasticFramingEnabled; // @synthesize isElasticFramingEnabled=_isElasticFramingEnabled;
@property(nonatomic) struct VKEdgeInsets clientFramingInsets; // @synthesize clientFramingInsets=_clientFramingInsets;
@property(nonatomic) __weak VKSceneConfiguration *sceneConfiguration; // @synthesize sceneConfiguration=_sceneConfiguration;
@property(nonatomic) __weak VKScreenCanvas<VKInteractiveMap> *screenCanvas; // @synthesize screenCanvas=_screenCanvas;
- (float)maxPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x00000000007e5528
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x00000000007e546c
- (float)minPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x00000000007e53b0
- (float)minimumNormalizedZoomLevel;	// IMP=0x00000000007e52ef
- (float)maximumNormalizedZoomLevel;	// IMP=0x00000000007e523d
- (long long)tileSize;	// IMP=0x00000000007e510c
- (void)_updateCameraLimits;	// IMP=0x00000000007e4797
- (void)pitchTo:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000007e4405
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000007e4063
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x00000000007e3e03
- (_Bool)usesVKCamera;	// IMP=0x00000000007e3dfb
- (float)_currentRoadSignOffset;	// IMP=0x00000000007e3d74
- (void)_setNavCameraTransitionComplete:(_Bool)arg1;	// IMP=0x00000000007e3cfb
- (void)_setNavCameraIsDetached:(_Bool)arg1;	// IMP=0x00000000007e3bfc
- (unsigned char)cameraHeadingType;	// IMP=0x00000000007e3b8f
- (void)canvasDidLayout;	// IMP=0x00000000007e3b20
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000007e3a63
- (void)setVkCamera:(id)arg1;	// IMP=0x00000000007e39d8
- (void)stopAnimations;	// IMP=0x00000000007e3949
- (void)setCameraFrame:(CameraFrame_b765d6d7)arg1;	// IMP=0x00000000007e390e
- (CameraFrame_b765d6d7)cameraFrame;	// IMP=0x00000000007e38da
- (void)_snapHeading;	// IMP=0x00000000007e354f
- (void)_snapPitch;	// IMP=0x00000000007e323c
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;	// IMP=0x00000000007e31e0
- (void)setEdgeInsetsAnimating:(_Bool)arg1;	// IMP=0x00000000007e313b
- (Unit_5669e52e)maxCameraPitch;	// IMP=0x00000000007e3122
- (Unit_5669e52e)minCameraPitch;	// IMP=0x00000000007e3109
- (double)maxZoomHeight;	// IMP=0x00000000007e303e
- (double)minZoomHeight;	// IMP=0x00000000007e2f73
- (double)maxZoomScale;	// IMP=0x00000000007e2f61
- (double)minZoomScale;	// IMP=0x00000000007e2f4f
- (void)updateState;	// IMP=0x00000000007e2f49
@property(nonatomic) double zoomScale;
- (void)_updateDidNavCameraTransition;	// IMP=0x00000000007e2e39
- (void)_updateZoomScaleLimts;	// IMP=0x00000000007e2cbe
- (void)_setNeedsUpdate;	// IMP=0x00000000007e2c84
- (void)navContextCameraHeadingOverrideDidChange:(id)arg1;	// IMP=0x00000000007e2c1e
- (void)navContextStateDidChange:(id)arg1;	// IMP=0x00000000007e2c0c
- (void)_updateForAnimatedEdgeInsets;	// IMP=0x00000000007e2b3b
- (void)updateSpringsForFramingCamera;	// IMP=0x00000000007e2249
- (void)_updateRouteSinuosity;	// IMP=0x00000000007e1f2d
- (void)_addAdditionalRoutePointsToFrameToList:(void *)arg1;	// IMP=0x00000000007e1d00
- (Coordinate3D_332c2c3b)_coordinateForGeoLocation:(CDStruct_071ac149)arg1;	// IMP=0x00000000007e1ccc
- (void)updatePointsToFrame;	// IMP=0x00000000007e09c6
- (_Bool)_addStepToFraming:(unsigned long long)arg1 forRoute:(id)arg2;	// IMP=0x00000000007e061a
- (void)updateManeuversToFrame;	// IMP=0x00000000007e05ac
- (Coordinate3D_332c2c3b)routeCoordinateAtDistance:(double)arg1;	// IMP=0x00000000007e042c
- (Coordinate3D_332c2c3b)routeLocationAtDistance:(double)arg1 fromManeuver:(unsigned long long)arg2;	// IMP=0x00000000007e004c
- (double)distanceToManeuver:(unsigned long long)arg1;	// IMP=0x00000000007dfec8
- (void)updateSpringsForTrackingCamera;	// IMP=0x00000000007dfe04
- (Box_3d7e3c2c)calculateViewableScreenRect;	// IMP=0x00000000007dfdcd
- (Box_3d7e3c2c)calculateViewableScreenRectForEdgeInsets:(struct VKEdgeInsets)arg1;	// IMP=0x00000000007dfa31
- (Unit_5669e52e)calculateHeading;	// IMP=0x00000000007df495
- (void)stop;	// IMP=0x00000000007df1f6
- (_Bool)isRotateEnabled;	// IMP=0x00000000007df1ee
- (_Bool)isPitchEnabled;	// IMP=0x00000000007df1e6
- (void)stopSnappingAnimations;	// IMP=0x00000000007df1e0
- (_Bool)_canZoomOut;	// IMP=0x00000000007df1a8
- (_Bool)canZoomOutForTileSize:(long long)arg1;	// IMP=0x00000000007df196
- (_Bool)_canZoomIn;	// IMP=0x00000000007df15e
- (_Bool)canZoomInForTileSize:(long long)arg1;	// IMP=0x00000000007df14c
- (double)topDownMinimumZoomLevel;	// IMP=0x00000000007df064
- (double)currentZoomLevel;	// IMP=0x00000000007dee5c
- (double)maximumZoomLevel;	// IMP=0x00000000007ded74
- (double)minimumZoomLevel;	// IMP=0x00000000007dec8c
- (double)_normalizedZoomLevelForDisplayZoomLevel:(double)arg1;	// IMP=0x00000000007deb71
- (_Bool)canEnter3DMode;	// IMP=0x00000000007deb69
- (void)setNavContext:(id)arg1;	// IMP=0x00000000007dead3
- (void)returnToPuck;	// IMP=0x00000000007deab9
- (void)returnToTrackingWithDelay:(double)arg1 resetZoom:(_Bool)arg2;	// IMP=0x00000000007de1f7
- (void)animateCameraWithDuration:(float)arg1 fromFrame:(const void *)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000007dda7f
- (CameraFrame_b765d6d7)restingCameraFrame;	// IMP=0x00000000007dd8e7
- (CameraFrame_b765d6d7)currentCameraFrame;	// IMP=0x00000000007dd73e
@property(nonatomic) double pitch;
@property(nonatomic) double heading;
@property(readonly, nonatomic) double altitude;
@property(nonatomic) double distanceFromCenterCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate;
- (void)_updateStyles;	// IMP=0x00000000007dd249
- (void)_updateSceneStyles:(_Bool)arg1;	// IMP=0x00000000007dbf92
- (void)_updateSceneQuery;	// IMP=0x00000000007dbbbf
- (void)stylesheetDidReload;	// IMP=0x00000000007dbb9e
- (void)stylesheetDidChange;	// IMP=0x00000000007dbb8c
- (_Bool)_springsNeedUpdate;	// IMP=0x00000000007dba7e
- (void)_updateSprings:(double)arg1;	// IMP=0x00000000007db505
- (Matrix_2bdd42a3)puckScreenPoint;	// IMP=0x00000000007db47b
- (void)_updateDebugOverlay;	// IMP=0x00000000007d9d9d
- (void)_updateDebugText;	// IMP=0x00000000007d99c3
- (shared_ptr_60abd8cc)_getActiveSceneManager;	// IMP=0x00000000007d9906
- (id)_debugText:(_Bool)arg1 showNavCameraDebugConsoleAttributes:(_Bool)arg2 includeSensitiveAttributes:(_Bool)arg3;	// IMP=0x00000000007d8802
- (id)detailedDescription;	// IMP=0x00000000007d86fa
- (_Bool)_hasRunningAnimation;	// IMP=0x00000000007d869a
- (double)_calculateMaxPixelChangeAndUpdateCorners;	// IMP=0x00000000007d8510
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x00000000007d7d5b
- (long long)displayRate;	// IMP=0x00000000007d7cb9
- (long long)defaultDisplayRate;	// IMP=0x00000000007d7a64
- (void)_updateClipPlanes;	// IMP=0x00000000007d7909
- (void)resetSpringsToResting;	// IMP=0x00000000007d78a4
- (void)updateCameraState;	// IMP=0x00000000007d77c8
- (_Bool)wantsTimerTick;	// IMP=0x00000000007d77b8
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(const void *)arg2;	// IMP=0x00000000007d7796
- (void)puckAnimatorDidStop:(id)arg1;	// IMP=0x00000000007d7790
- (void)projectCoordinate:(CDStruct_c3b9c2ee)arg1 toPoint:(struct CGPoint *)arg2;	// IMP=0x00000000007d771f
- (void)updateLocation:(const void *)arg1 andCourse:(const void *)arg2;	// IMP=0x00000000007d718b
- (struct optional<double>)puckAnimator:(id)arg1 getElevationWithCoordinate:(const void *)arg2;	// IMP=0x00000000007d7131
- (void)puckAnimator:(id)arg1 updatedPosition:(const void *)arg2 course:(const void *)arg3;	// IMP=0x00000000007d708a
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;	// IMP=0x00000000007d7038
- (_Bool)isGesturing;	// IMP=0x00000000007d6ffb
- (_Bool)tapAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000007d6ff3
- (void)transferGestureState:(id)arg1;	// IMP=0x00000000007d6fed
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000007d6f02
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 degrees:(double)arg2;	// IMP=0x00000000007d6e69
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x00000000007d6dd0
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000007d6d0c
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000007d6c17
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;	// IMP=0x00000000007d6b7e
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000007d6aba
- (void)stopPanningAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000007d69ea
- (void)updatePanWithTranslation:(struct CGPoint)arg1;	// IMP=0x00000000007d695b
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;	// IMP=0x00000000007d686e
- (void)_updateObserverCouldZoomIn:(_Bool)arg1 couldZoomOut:(_Bool)arg2;	// IMP=0x00000000007d665d
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000007d646f
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x00000000007d63cc
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000007d631e
- (void)stopIgnoreStyleChange;	// IMP=0x00000000007d630d
- (void)startIgnoreStyleChangeTimer;	// IMP=0x00000000007d62e4
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000007d6160
- (void)_setDetached:(_Bool)arg1;	// IMP=0x00000000007d5fb7
- (id)_detachedGestureController;	// IMP=0x00000000007d5f63
- (void)startWithPounce:(_Bool)arg1 startLocation:(CDStruct_c3b9c2ee)arg2 startCourse:(double)arg3 pounceCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000007d5623
- (void)dealloc;	// IMP=0x00000000007d5484
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 device:(void *)arg2 mapDataAccess:(void *)arg3 animationRunner:(struct AnimationRunner *)arg4 runLoopController:(struct RunLoopController *)arg5 cameraDelegate:(id)arg6;	// IMP=0x00000000007d49c9
- (id)init;	// IMP=0x00000000007d4974

// Remaining properties
@property(readonly, nonatomic) struct AnimationRunner *animationRunner;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isFullyPitched;
@property(readonly, nonatomic) _Bool isPitched;
@property(readonly, nonatomic) _Bool isRotated;
@property(readonly, nonatomic) void *mapDataAccess;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) GEOMapRegion *mapRegionIgnoringEdgeInsets;
@property(readonly, nonatomic) double maxPitch;
@property(readonly, nonatomic) double minPitch;
@property(readonly, nonatomic) struct RunLoopController *runLoopController;
@property(readonly) Class superclass;

@end

