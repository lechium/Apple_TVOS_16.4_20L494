//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKBRenderFactory;

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_Composite
{
    UIKBRenderFactory *_overlayFactory;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000091bdaf
- (_Bool)isTallPopup;	// IMP=0x000000000091bd76
- (double)popupFontSize;	// IMP=0x000000000091bd3d
- (struct CGPoint)popupSymbolTextOffset;	// IMP=0x000000000091bd04
- (struct CGPoint)variantAnnotationTextOffset;	// IMP=0x000000000091bccb
- (struct CGPoint)variantSymbolTextOffset;	// IMP=0x000000000091bc92
- (struct UIEdgeInsets)variantSymbolFrameInsets;	// IMP=0x000000000091bc43
- (struct UIEdgeInsets)variantPaddedFrameInsets;	// IMP=0x000000000091bbf4
- (struct UIEdgeInsets)wideShadowPopupMenuInsets;	// IMP=0x000000000091bba5
- (struct UIEdgeInsets)wideShadowPaddleInsets;	// IMP=0x000000000091bb56
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(_Bool)arg2;	// IMP=0x000000000091baa8
- (Class)_overlayFactoryClass;	// IMP=0x000000000091baa0

@end
