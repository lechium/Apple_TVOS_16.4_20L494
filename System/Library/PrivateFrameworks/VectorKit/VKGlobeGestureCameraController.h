//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKGlobeGestureCameraController
{
    void *_globeView;	// 176 = 0xb0
    void *_cameraManager;	// 184 = 0xb8
    double _beganDoublePanPitch;	// 192 = 0xc0
    double _currentDoublePanPitch;	// 200 = 0xc8
    _Bool _isPitchIncreasing;	// 208 = 0xd0
}

- (_Bool)isPitchIncreasing;	// IMP=0x000000000027592b
- (void)endPitch:(struct CGPoint)arg1;	// IMP=0x00000000002758a5
- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;	// IMP=0x000000000027565a
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x000000000027540a
- (void)beginPitch:(struct CGPoint)arg1;	// IMP=0x000000000027531b
- (void)endRotate:(struct CGPoint)arg1;	// IMP=0x0000000000275295
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000002751ee
- (void)beginRotate:(struct CGPoint)arg1;	// IMP=0x000000000027514d
- (void)endPan:(struct CGPoint)arg1;	// IMP=0x00000000002750c7
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;	// IMP=0x0000000000275041
- (void)beginPan:(struct CGPoint)arg1;	// IMP=0x0000000000274f98
- (void)endZoom:(struct CGPoint)arg1;	// IMP=0x0000000000274f0f
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x0000000000274dfb
- (void)beginZoom:(struct CGPoint)arg1;	// IMP=0x0000000000274d3a
- (void)setCameraManager:(void *)arg1;	// IMP=0x0000000000274d29
- (void)setGlobeView:(void *)arg1;	// IMP=0x0000000000274d18

@end

