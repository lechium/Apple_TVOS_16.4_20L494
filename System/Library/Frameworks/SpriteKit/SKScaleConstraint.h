//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKScaleConstraint : SKConstraint
{
    SKRange *_xRange;	// 24 = 0x18
    SKRange *_yRange;	// 32 = 0x20
}

+ (id)constraintWithYRange:(id)arg1;	// IMP=0x00600000000e65de
+ (id)constraintWithXRange:(id)arg1;	// IMP=0x00600000000e6534
+ (id)constraintWithScaleRange:(id)arg1;	// IMP=0x00600000000e64cc
+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x00600000000e6438
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e5f0e
- (void).cxx_destruct;	// IMP=0x00000000000e66d6
@property(copy) SKRange *yRange; // @synthesize yRange=_yRange;
@property(copy) SKRange *xRange; // @synthesize xRange=_xRange;
- (_Bool)isEqualToScaleConstraint:(id)arg1;	// IMP=0x00000000000e62e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e6214
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e611f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e5fe1
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x00000000000e5f16

@end

