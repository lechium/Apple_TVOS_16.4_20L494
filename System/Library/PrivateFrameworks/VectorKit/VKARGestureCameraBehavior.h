//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKARCameraController;

__attribute__((visibility("hidden")))
@interface VKARGestureCameraBehavior
{
    VKARCameraController *_arCameraController;	// 176 = 0xb0
    Geocentric_d8fde6f2 _startPanPosition;	// 184 = 0xb8
}

- (id).cxx_construct;	// IMP=0x00000000005bdedb
- (void).cxx_destruct;	// IMP=0x00000000005bdeca
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000005bdc1a
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x00000000005bd91a
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000005bd455
- (void)beginPan:(struct CGPoint)arg1;	// IMP=0x00000000005bd344
- (id)initWithARCameraController:(id)arg1;	// IMP=0x00000000005bd2c6

@end

