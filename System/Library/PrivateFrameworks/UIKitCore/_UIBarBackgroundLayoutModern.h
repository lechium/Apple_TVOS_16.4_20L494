//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIBarBackgroundAppearanceData;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundLayoutModern
{
    _Bool _backgroundsAreSame;	// 88 = 0x58
    _UIBarBackgroundAppearanceData *_backgroundData1;	// 96 = 0x60
    _UIBarBackgroundAppearanceData *_backgroundData2;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000701964
@property(retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData2; // @synthesize backgroundData2=_backgroundData2;
@property(retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData1; // @synthesize backgroundData1=_backgroundData1;
- (void)describeInto:(id)arg1;	// IMP=0x00000000007018a0
- (double)bg2ShadowAlpha;	// IMP=0x000000000070188a
- (id)bg2ShadowTint;	// IMP=0x00000000007017cd
- (id)bg2ShadowEffect;	// IMP=0x00000000007017b0
- (id)bg2ShadowImage;	// IMP=0x0000000000701793
- (id)bg2ShadowColor;	// IMP=0x00000000007016c3
- (_Bool)bg2HasShadow;	// IMP=0x000000000070168c
- (long long)bg2ImageMode;	// IMP=0x000000000070166f
- (id)bg2Image;	// IMP=0x0000000000701652
- (id)bg2Color;	// IMP=0x0000000000701635
- (id)bg2Effects;	// IMP=0x0000000000701618
- (double)bg2Alpha;	// IMP=0x000000000070160d
- (_Bool)bg2Enabled;	// IMP=0x00000000007015e7
- (double)bg1ShadowAlpha;	// IMP=0x00000000007015b5
- (id)bg1ShadowTint;	// IMP=0x0000000000701496
- (id)bg1ShadowEffect;	// IMP=0x0000000000701479
- (id)bg1ShadowImage;	// IMP=0x000000000070145c
- (id)bg1ShadowColor;	// IMP=0x00000000007010e8
- (_Bool)bg1HasShadow;	// IMP=0x00000000007010b1
- (long long)bg1ImageMode;	// IMP=0x0000000000701094
- (id)bg1Image;	// IMP=0x0000000000701077
- (id)bg1Color;	// IMP=0x000000000070105a
- (id)bg1Effects;	// IMP=0x000000000070103d
- (double)bg1Alpha;	// IMP=0x0000000000700fe7
- (_Bool)shouldUseExplicitGeometry;	// IMP=0x0000000000700fc9
- (id)initWithLayout:(id)arg1;	// IMP=0x0000000000700da0

@end
