//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIColor.h"

__attribute__((visibility("hidden")))
@interface UIDeviceRGBColor : UIColor
{
    double redComponent;	// 8 = 0x8
    double greenComponent;	// 16 = 0x10
    double blueComponent;	// 24 = 0x18
    double alphaComponent;	// 32 = 0x20
    _Atomic struct CGColor *_cachedColor;	// 40 = 0x28
}

- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x0000000000763ee9
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000763e8b
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000763dd5
- (double)alphaComponent;	// IMP=0x0000000000763dc3
- (struct CGColor *)CGColor;	// IMP=0x0000000000763d6d
- (unsigned long long)hash;	// IMP=0x0000000000763ce8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000763ad2
- (_Bool)_isDeepColor;	// IMP=0x0000000000763a35
- (id)description;	// IMP=0x0000000000763997
- (id)colorSpaceName;	// IMP=0x000000000076396a
- (void)setStroke;	// IMP=0x000000000076391f
- (void)setFill;	// IMP=0x00000000007638d4
- (void)set;	// IMP=0x0000000000763871
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;	// IMP=0x00000000007637d9
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x000000000076373b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000763730
- (void)dealloc;	// IMP=0x00000000007636ef
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x0000000000763647
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000007634a0
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000007632cf

@end

