//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPImage, LPImagePresentationProperties, LPImageViewStyle, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPImageView
{
    LPImage *_image;	// 8 = 0x8
    LPImage *_filteredImage;	// 16 = 0x10
    LPImagePresentationProperties *_properties;	// 24 = 0x18
    LPImageViewStyle *_style;	// 32 = 0x20
    LPImageViewStyle *_originalStyle;	// 40 = 0x28
    long long _currentScalingMode;	// 48 = 0x30
    long long _platterReason;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    UIView *_overlayView;	// 72 = 0x48
    UIView *_backgroundView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000003cf28
- (void)_setImageViewScalingMode:(long long)arg1;	// IMP=0x000000000003ce4e
- (id)_createImageViewWithImage:(id)arg1;	// IMP=0x000000000003c9b8
- (void)_updateScalingMode;	// IMP=0x000000000003c94b
- (id)_createOverlayViewWithOpacity:(double)arg1;	// IMP=0x000000000003c853
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003c4fc
- (struct CGSize)imageSizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003c324
- (long long)scalingModeForSize:(struct CGSize)arg1;	// IMP=0x000000000003bf34
- (void)installDarkeningViewIfNeeded;	// IMP=0x000000000003be51
- (_Bool)shouldApplyBackground;	// IMP=0x000000000003bdd6
- (void)layoutComponentView;	// IMP=0x000000000003b99d
- (void)updateBorder;	// IMP=0x000000000003b654
- (void)updateShadowPath;	// IMP=0x000000000003b073
- (void)updateCornerRadius;	// IMP=0x000000000003ab9c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003a9e8
- (void)ensureImageView;	// IMP=0x0000000000039d2b
- (long long)_filter;	// IMP=0x0000000000039caa
- (id)initWithHost:(id)arg1 image:(id)arg2 properties:(id)arg3 style:(id)arg4;	// IMP=0x0000000000039aeb
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000039add

@end

