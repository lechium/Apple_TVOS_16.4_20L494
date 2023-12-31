//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKSizeConstraint : SKConstraint
{
    SKRange *_widthRange;	// 24 = 0x18
    SKRange *_heightRange;	// 32 = 0x20
}

+ (id)constraintWithHeightRange:(id)arg1;	// IMP=0x00600000000e5de5
+ (id)constraintWithWidthRange:(id)arg1;	// IMP=0x00600000000e5d3b
+ (id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2;	// IMP=0x00600000000e5ca7
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e577d
- (void).cxx_destruct;	// IMP=0x00000000000e5edd
@property(copy) SKRange *heightRange; // @synthesize heightRange=_heightRange;
@property(copy) SKRange *widthRange; // @synthesize widthRange=_widthRange;
- (_Bool)isEqualToSizeConstraint:(id)arg1;	// IMP=0x00000000000e5b54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e5a83
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e598e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e5850
- (id)initWithWidthRange:(id)arg1 heightRange:(id)arg2;	// IMP=0x00000000000e5785

@end

