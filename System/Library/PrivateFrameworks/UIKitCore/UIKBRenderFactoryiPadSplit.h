//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPadSplit
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x0000000000909c84
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000909af4
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;	// IMP=0x0000000000909885
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000909775
- (double)_row4ControlSegmentWidthLeft;	// IMP=0x0000000000909767
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;	// IMP=0x0000000000909614
- (double)keyInsetBottom;	// IMP=0x00000000009095d3
- (double)symbolFrameInset;	// IMP=0x00000000009095c5
- (double)defaultPathWeight;	// IMP=0x00000000009095b7
- (id)backgroundTraitsForKeyplane:(id)arg1;	// IMP=0x0000000000909411
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;	// IMP=0x0000000000909409
- (double)dynamicBottomRowMultiplier;	// IMP=0x00000000009093fb
- (struct UIEdgeInsets)dynamicInsets;	// IMP=0x00000000009093e1
- (double)variantAnnotationTextFontSize;	// IMP=0x00000000009093d3
- (struct CGPoint)variantAnnotationTextOffset;	// IMP=0x00000000009093c2
- (double)skinnyKeyThreshold;	// IMP=0x00000000009093b4
- (double)symbolImageControlKeyFontSize;	// IMP=0x00000000009093a6
- (double)keyCornerRadius;	// IMP=0x0000000000909398
- (id)muttitapReverseKeyImageName;	// IMP=0x000000000090935f
- (id)multitapCompleteKeyImageName;	// IMP=0x0000000000909326
- (struct CGPoint)shiftKeyOffset;	// IMP=0x00000000009092f2
- (struct CGPoint)deleteKeyOffset;	// IMP=0x00000000009092be
- (struct CGPoint)dismissKeyOffset;	// IMP=0x0000000000909292
- (struct CGPoint)internationalKeyOffset;	// IMP=0x0000000000909266

@end
