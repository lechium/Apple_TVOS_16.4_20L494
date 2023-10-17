//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingTouchSequence : NSObject
{
    _Bool _didReceiveSpatialFocusUpdate;	// 8 = 0x8
    _Bool _didReceiveProgrammaticFocusUpdate;	// 9 = 0x9
    double _peakSpeed;	// 16 = 0x10
    struct CGPoint _startLocation;	// 24 = 0x18
    struct CGPoint _previousLocation;	// 40 = 0x28
    struct CGPoint _endLocation;	// 56 = 0x38
    struct CGVector _axisLockedDistanceAccumulator;	// 72 = 0x48
}

@property(nonatomic) _Bool didReceiveProgrammaticFocusUpdate; // @synthesize didReceiveProgrammaticFocusUpdate=_didReceiveProgrammaticFocusUpdate;
@property(nonatomic) _Bool didReceiveSpatialFocusUpdate; // @synthesize didReceiveSpatialFocusUpdate=_didReceiveSpatialFocusUpdate;
@property(nonatomic) struct CGVector axisLockedDistanceAccumulator; // @synthesize axisLockedDistanceAccumulator=_axisLockedDistanceAccumulator;
@property(nonatomic) double peakSpeed; // @synthesize peakSpeed=_peakSpeed;
@property(nonatomic) struct CGPoint endLocation; // @synthesize endLocation=_endLocation;
@property(nonatomic) struct CGPoint previousLocation; // @synthesize previousLocation=_previousLocation;
@property(nonatomic) struct CGPoint startLocation; // @synthesize startLocation=_startLocation;

@end
