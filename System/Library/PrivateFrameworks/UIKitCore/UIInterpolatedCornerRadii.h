//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedCornerRadii : NSObject
{
    struct CACornerRadii _cornerRadii;	// 8 = 0x8
}

+ (id)zeroCompatibleWithVector:(id)arg1;	// IMP=0x0010000000e1472f
+ (id)epsilonCompatibleWithVector:(id)arg1;	// IMP=0x0010000000e14682
+ (id)valueWithCornerRadii:(struct CACornerRadii)arg1;	// IMP=0x0010000000e142ec
@property(readonly, copy) NSString *debugDescription;
- (id)multiplyByVector:(id)arg1;	// IMP=0x0000000000e15384
- (id)multiplyByScalar:(double)arg1;	// IMP=0x0000000000e1533f
- (id)addVector:(id)arg1;	// IMP=0x0000000000e152ea
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_500c0369)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;	// IMP=0x0000000000e1483b
- (void)reinitWithVector:(id)arg1;	// IMP=0x0000000000e14815
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e147c5
- (id)getValue;	// IMP=0x0000000000e14624
- (_Bool)isUndefined;	// IMP=0x0000000000e14500
- (_Bool)isCompatibleWith:(id)arg1;	// IMP=0x0000000000e144f8
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;	// IMP=0x0000000000e143ad
- (id)interpolateTo:(id)arg1 progress:(double)arg2;	// IMP=0x0000000000e1431e

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
