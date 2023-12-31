//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUINamedVectorGlyph.h"

@class CUIVectorGlyphGraphicVariantOptions;

__attribute__((visibility("hidden")))
@interface _CUIGraphicVariantVectorGlyph : CUINamedVectorGlyph
{
    CUIVectorGlyphGraphicVariantOptions *_options;	// 184 = 0xb8
}

@property(retain, nonatomic) CUIVectorGlyphGraphicVariantOptions *options; // @synthesize options=_options;
- (id)_createShapeEffectsForTargetSize:(struct CGSize)arg1 scale:(double *)arg2;	// IMP=0x000000000001f518
- (id)_createContentEffectsForTargetSize:(struct CGSize)arg1 scale:(double *)arg2;	// IMP=0x000000000001f399
- (void)_drawBackgroundShapeInContext:(struct CGContext *)arg1 targetSize:(struct CGSize)arg2 scale:(double)arg3;	// IMP=0x000000000001edaf
- (struct CGRect)_backgroundShapeBoundsForTargetSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000001ec83
- (struct CGGradient *)_createBackgroundGradientWithColors:(id)arg1;	// IMP=0x000000000001e8a0
- (struct CGPath *)_createBackgroundShapeInRect:(struct CGRect)arg1 scale:(double)arg2;	// IMP=0x000000000001e753
- (struct CGImage *)_createBackgroundImageOfSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000001e5f1
- (struct CGImage *)_createGraphicVariantImageAtScale:(double)arg1 backgroundImage:(struct CGImage *)arg2 symbolImage:(struct CGImage *)arg3 destinationRect:(struct CGRect)arg4 disableColorFill:(_Bool)arg5 outputScale:(double)arg6;	// IMP=0x000000000001e2a4
- (struct CGRect)_scaledContentRectForBackgroundSize:(struct CGSize)arg1 safeContentArea:(struct CGRect)arg2;	// IMP=0x000000000001dcd5
- (struct CGRect)_safeContentAreaBoundsForBackgroundSize:(struct CGSize)arg1;	// IMP=0x000000000001dbe2
- (long long)_effectiveCenteringStyle;	// IMP=0x000000000001db94
- (struct CGRect)_safeContentAreaBounds;	// IMP=0x000000000001db4a
- (struct CGSize)_sizeOfBackgroundShape;	// IMP=0x000000000001da96
- (void)drawInContext:(struct CGContext *)arg1 withPaletteColors:(id)arg2;	// IMP=0x000000000001d9ae
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withPaletteColors:(id)arg3;	// IMP=0x000000000001d748
- (struct CGImage *)imageWithPaletteColors:(id)arg1;	// IMP=0x000000000001d6e8
- (void)drawPaletteLayerAtIndex:(unsigned long long)arg1 inContext:(struct CGContext *)arg2 withColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d600
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withPaletteColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d465
- (struct CGImage *)imageWithPaletteColorResolver:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d405
- (void)drawHierarchyLayerAtIndex:(unsigned long long)arg1 inContext:(struct CGContext *)arg2 withColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d31d
- (unsigned long long)numberOfHierarchyLayers;	// IMP=0x000000000001d312
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withHierarchyColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d17a
- (struct CGImage *)imageWithHierarchyColorResolver:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d11a
- (void)drawMulticolorLayerAtIndex:(unsigned long long)arg1 inContext:(struct CGContext *)arg2 withColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d032
- (unsigned long long)numberOfMulticolorLayers;	// IMP=0x000000000001d027
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ce8c
- (struct CGImage *)imageWithColorResolver:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ce2c
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000000001cd4f
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2;	// IMP=0x000000000001cbc8
- (struct CGImage *)image;	// IMP=0x000000000001cb69
- (const struct CGPath *)CGPath;	// IMP=0x000000000001c85d
- (_Bool)_containsWideGamutColor;	// IMP=0x000000000001c72e
- (struct CGRect)interiorAlignmentRectForTargetSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000001c63b
- (struct CGRect)interiorAlignmentRectUnrounded;	// IMP=0x000000000001c5e9
- (struct CGRect)interiorAlignmentRect;	// IMP=0x000000000001c507
- (struct CGRect)contentBounds;	// IMP=0x000000000001c46a
- (struct CGRect)contentBoundsUnrounded;	// IMP=0x000000000001c42d
- (struct CGRect)alignmentRectForTargetSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000001c383
- (struct CGRect)alignmentRectUnrounded;	// IMP=0x000000000001c331
- (struct CGRect)alignmentRect;	// IMP=0x000000000001c24f
- (double)baselineOffset;	// IMP=0x000000000001c1f9
- (double)baselineOffsetUnrounded;	// IMP=0x000000000001c178
- (id)graphicVariantWithOptions:(id)arg1;	// IMP=0x000000000001c0f9
- (void)dealloc;	// IMP=0x000000000001c0b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c046
- (id)_initWithBaseGlyph:(id)arg1 options:(id)arg2;	// IMP=0x000000000001bdfc

@end

