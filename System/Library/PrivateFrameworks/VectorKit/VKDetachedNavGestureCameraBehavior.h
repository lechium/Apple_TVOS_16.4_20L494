//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKNavCameraController, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKDetachedNavGestureCameraBehavior
{
    VKNavCameraController *_navCameraController;	// 176 = 0xb0
    double _startZoomScale;	// 184 = 0xb8
    Unit_5669e52e _startPitch;	// 192 = 0xc0
    VKTimedAnimation *_tapZoomAnimation;	// 200 = 0xc8
}

- (id).cxx_construct;	// IMP=0x00000000008a45ac
- (void).cxx_destruct;	// IMP=0x00000000008a457d
- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;	// IMP=0x00000000008a4126
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x00000000008a3cbf
- (void)beginPitch:(struct CGPoint)arg1;	// IMP=0x00000000008a3ba4
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000008a378c
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000008a3208
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x00000000008a2a90
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000008a2665
- (void)dealloc;	// IMP=0x00000000008a25d5
- (id)initWithNavCameraController:(id)arg1;	// IMP=0x00000000008a252c

@end
