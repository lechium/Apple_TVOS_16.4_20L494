//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SHPalette : NSObject
{
}

+ (struct CGColor *)sh_colorNamed:(id)arg1;	// IMP=0x008000000000733a
+ (id)default;	// IMP=0x0080000000007045
+ (double)contentsScale;	// IMP=0x0080000000007037
- (struct CGColor *)R:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;	// IMP=0x000000000000731a
- (struct CGColor *)shadowColor;	// IMP=0x0000000000007308
- (struct CGColor *)alternateTintColor;	// IMP=0x00000000000072c0
- (struct CGColor *)blackColor;	// IMP=0x000000000000729d
- (struct CGColor *)clearColor;	// IMP=0x000000000000727a
- (struct CGColor *)appTintColor;	// IMP=0x0000000000007232
- (struct CGColor *)listeningCircleColor;	// IMP=0x00000000000071ea
- (struct CGColor *)listeningButtonBackgroundTransparentColor;	// IMP=0x00000000000071a2
- (struct CGColor *)listeningButtonShazamShapeColor;	// IMP=0x000000000000715a
- (struct CGColor *)listeningButtonTopBorderColor;	// IMP=0x0000000000007112
- (struct CGColor *)listeningButtonBackgroundColor;	// IMP=0x00000000000070ca
- (struct CGColor *)shazamColorNearBlack;	// IMP=0x0000000000007082

@end
