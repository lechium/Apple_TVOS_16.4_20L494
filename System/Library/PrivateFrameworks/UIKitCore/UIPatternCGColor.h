//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIPatternCGColor
{
    struct CGColor *_cachedUnflippedColor;	// 16 = 0x10
}

- (_Bool)isPatternColor;	// IMP=0x000000000076425e
- (id)colorSpaceName;	// IMP=0x0000000000764251
- (id)description;	// IMP=0x00000000007641c0
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000007641b8
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000007641b0
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x00000000007641a8
- (void)dealloc;	// IMP=0x000000000076415b
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x000000000076409e

@end

