//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKPositionConstraint : SKConstraint
{
    SKRange *_xRange;	// 24 = 0x18
    SKRange *_yRange;	// 32 = 0x20
}

+ (id)constraintWithYRange:(id)arg1;	// IMP=0x00600000000e8563
+ (id)constraintWithXRange:(id)arg1;	// IMP=0x00600000000e84b9
+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x00600000000e8425
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e7efb
- (void).cxx_destruct;	// IMP=0x00000000000e865b
@property(copy) SKRange *yRange; // @synthesize yRange=_yRange;
@property(copy) SKRange *xRange; // @synthesize xRange=_xRange;
- (_Bool)isEqualToPositionConstraint:(id)arg1;	// IMP=0x00000000000e82d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e8201
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e810c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e7fce
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x00000000000e7f03

@end

