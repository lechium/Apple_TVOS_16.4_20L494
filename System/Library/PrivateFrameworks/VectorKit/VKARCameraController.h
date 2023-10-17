//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKARCameraController
{
    shared_ptr_e963992e _taskContext;	// 96 = 0x60
    void *_globeView;	// 112 = 0x70
    void *_mapEngine;	// 120 = 0x78
    double _currentZoomLevel;	// 128 = 0x80
    double _maxZoomLevel;	// 136 = 0x88
    double _height;	// 144 = 0x90
    double _altitudeOffset;	// 152 = 0x98
    Unit_5669e52e _fovy;	// 160 = 0xa0
    RigidTransform_b9386d13 _offsetTransform;	// 168 = 0xa8
    CameraFrame_b765d6d7 _cameraFrame;	// 224 = 0xe0
    RigidTransform_b9386d13 _baseTransform;	// 280 = 0x118
    RigidTransform_b9386d13 _arTransform;	// 336 = 0x150
    RigidTransform_b9386d13 _currentARTransform;	// 392 = 0x188
    RigidTransform_b9386d13 _lastARTransform;	// 448 = 0x1c0
    struct Quaternion<double> _arOrientation;	// 504 = 0x1f8
    VKTimedAnimation *_transitionAnimation;	// 536 = 0x218
    long long _interfaceOrientation;	// 544 = 0x220
    struct Quaternion<double> _interfaceOrientationRotation;	// 552 = 0x228
    Coordinate2D_cb341d5f _currentCoordinate;	// 584 = 0x248
    _Bool _overrideARFieldOfView;	// 600 = 0x258
    Unit_6d5b752b _fieldOfView;	// 608 = 0x260
}

- (id).cxx_construct;	// IMP=0x00000000001d91ec
- (void).cxx_destruct;	// IMP=0x00000000001d91bd
@property(nonatomic) Unit_6d5b752b fieldOfView; // @synthesize fieldOfView=_fieldOfView;
@property(nonatomic) RigidTransform_b9386d13 offsetTransform; // @synthesize offsetTransform=_offsetTransform;
@property(nonatomic) _Bool overrideARFieldOfView; // @synthesize overrideARFieldOfView=_overrideARFieldOfView;
@property(nonatomic) void *mapEngine; // @synthesize mapEngine=_mapEngine;
@property(nonatomic) void *globeView; // @synthesize globeView=_globeView;
- (void)arSessionWasInterrupted:(unsigned long long)arg1;	// IMP=0x00000000001d8faa
- (void)updateCameraFrameFromARTransform;	// IMP=0x00000000001d8c83
@property(readonly, nonatomic) float heightScale;
- (RigidTransform_b9386d13)arCameraTransform;	// IMP=0x00000000001d8c26
- (void)trasitionToARModeFromCameraFrame:(const void *)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d8c20
- (CameraFrame_b765d6d7)cameraFrame;	// IMP=0x00000000001d8bec
- (void)trasitionToARModeAtCoordinate:(CDStruct_c3b9c2ee)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d8b32
- (void)_setupPounceAnimation:(const void *)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d8b2c
- (void)_updateBaseTransform;	// IMP=0x00000000001d88aa
- (void)_updateARContext;	// IMP=0x00000000001d844f
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x00000000001d8449
- (void)updateWithARSession:(id)arg1;	// IMP=0x00000000001d8443
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000001d83a1
- (void)setMaxZoomLevel:(double)arg1;	// IMP=0x00000000001d838f
- (void)setCurrentZoomLevel:(double)arg1;	// IMP=0x00000000001d837d
- (double)topDownMinimumZoomLevel;	// IMP=0x00000000001d836b
- (double)currentZoomLevel;	// IMP=0x00000000001d8359
- (double)maximumZoomLevel;	// IMP=0x00000000001d8347
- (double)minimumZoomLevel;	// IMP=0x00000000001d8339
- (double)_fovAdjustment;	// IMP=0x00000000001d82c2
- (double)pitch;	// IMP=0x00000000001d82a0
- (double)heading;	// IMP=0x00000000001d825d
- (double)altitude;	// IMP=0x00000000001d8102
- (double)distanceFromCenterCoordinate;	// IMP=0x00000000001d80e8
- (CDStruct_c3b9c2ee)centerCoordinate;	// IMP=0x00000000001d80c6
- (id)mapRegionIgnoringEdgeInsets;	// IMP=0x00000000001d80b4
- (id)mapRegion;	// IMP=0x00000000001d7e5c
- (Matrix_6e1d3589)_intersectAndResolveWorldCollision:(const void *)arg1;	// IMP=0x00000000001d787a
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001d7874
- (double)presentationYaw;	// IMP=0x00000000001d7862
- (double)maxPitch;	// IMP=0x00000000001d7859
- (double)minPitch;	// IMP=0x00000000001d7850
- (_Bool)isFullyPitched;	// IMP=0x00000000001d7848
- (_Bool)isPitched;	// IMP=0x00000000001d7840
- (Geocentric_d8fde6f2)cameraPosition;	// IMP=0x00000000001d77f8
- (void)updateGlobeFromCamera;	// IMP=0x00000000001d770d
- (long long)tileSize;	// IMP=0x00000000001d7702
- (void)dealloc;	// IMP=0x00000000001d7659
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(struct MapDataAccess *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5;	// IMP=0x00000000001d74cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

