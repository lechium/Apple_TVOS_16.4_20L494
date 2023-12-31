//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UITintColor
{
}

- (id)colorSpaceName;	// IMP=0x0000000000771ed5
- (_Bool)_isDeepColor;	// IMP=0x0000000000771e2e
- (_Bool)isPatternColor;	// IMP=0x0000000000771d87
- (double)alphaComponent;	// IMP=0x0000000000771ce0
- (struct CGColor *)CGColor;	// IMP=0x0000000000771c33
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000771b5e
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000771a89
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x00000000007719ce
- (void)setStroke;	// IMP=0x0000000000771931
- (void)setFill;	// IMP=0x0000000000771894
- (void)set;	// IMP=0x00000000007717f7
- (unsigned long long)hash;	// IMP=0x00000000007717dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007717d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000771787
- (id)_resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x000000000077165c
- (_Bool)_isDynamicTintColor;	// IMP=0x0000000000771654
- (id)init;	// IMP=0x0000000000771601

@end

