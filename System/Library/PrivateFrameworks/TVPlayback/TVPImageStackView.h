//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, TVPImageStack, TVPUINamedLayerStack, UIColor, _UIStackedImageConfiguration, _UIStackedImageContainerLayer;

__attribute__((visibility("hidden")))
@interface TVPImageStackView : UIView
{
    _UIStackedImageContainerLayer *_imageStackLayer;	// 8 = 0x8
    _UIStackedImageConfiguration *_imageStackConfig;	// 16 = 0x10
    TVPImageStack *_imageStack;	// 24 = 0x18
    struct CGSize _imageStackSize;	// 32 = 0x20
    TVPUINamedLayerStack *_uiLayerStack;	// 48 = 0x30
    double _layerSelectionDuration;	// 56 = 0x38
    double _layerUnselectionDuration;	// 64 = 0x40
    double _shadowSelectionDuration;	// 72 = 0x48
    double _shadowUnselectionDuration;	// 80 = 0x50
    double _repositionUnselectionDuration;	// 88 = 0x58
    _Bool _imageLoaded;	// 96 = 0x60
    UIView *_overlayView;	// 104 = 0x68
    UIView *_unmaskedOverlayView;	// 112 = 0x70
}

+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;	// IMP=0x006000000010149d
+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 selectionStyle:(long long)arg2;	// IMP=0x006000000010140f
+ (id)imageStackViewWithSize:(struct CGSize)arg1;	// IMP=0x00600000000fefe4
+ (id)imageStackViewWithImageStack:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00600000000fef73
- (void).cxx_destruct;	// IMP=0x0000000000101515
@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(retain, nonatomic) UIView *unmaskedOverlayView; // @synthesize unmaskedOverlayView=_unmaskedOverlayView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000000001014b6
- (void)_updateStackedImageConfiguration;	// IMP=0x0000000000101222
- (double)_unpressedDuration;	// IMP=0x0000000000101205
- (void)_setUnpressedDuration:(double)arg1;	// IMP=0x00000000001011e8
- (void)_setSelectionStyle:(long long)arg1;	// IMP=0x00000000001011cb
- (void)_setPressedScaleAdjustment:(double)arg1;	// IMP=0x00000000001011ae
- (void)_setPressedDuration:(double)arg1;	// IMP=0x0000000000101191
- (void)_setImageStackContentsGravity:(id)arg1;	// IMP=0x0000000000101174
- (void)_setIdleModeFocusSizeOffset:(double)arg1;	// IMP=0x0000000000101157
- (void)_setFocusDirection:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x000000000010113a
- (long long)_selectionStyle;	// IMP=0x000000000010111d
- (id)_layeredImageContainerLayer;	// IMP=0x0000000000101108
- (id)_shadowLayer;	// IMP=0x00000000001010eb
- (double)_pressedScaleAdjustment;	// IMP=0x00000000001010ce
- (double)_pressedDuration;	// IMP=0x00000000001010b1
- (void)_resetShadowSettings;	// IMP=0x0000000000100f60
- (void)_setShadowVerticalOffset:(double)arg1;	// IMP=0x0000000000100f00
- (void)_setShadowRadius:(double)arg1;	// IMP=0x0000000000100ea0
- (void)_setShadowOpacity:(double)arg1;	// IMP=0x0000000000100e40
- (id)_newImageConfiguration;	// IMP=0x0000000000100e04
- (id)_flatLayer;	// IMP=0x0000000000100de7
- (id)_layerBelowTitles;	// IMP=0x0000000000100dca
- (id)_imageStackContentsGravity;	// IMP=0x0000000000100dad
- (id)_imageConfiguration;	// IMP=0x0000000000100d90
- (double)_idleModeFocusSizeOffset;	// IMP=0x0000000000100d73
@property(nonatomic) double focusSizeIncrease;
@property(readonly, nonatomic) unsigned long long primaryControlState;
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x0000000000100ce3
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000100cc6
@property(nonatomic) unsigned long long controlState;
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000100b5d
@property(nonatomic) struct CGPoint focusDirection;
- (void)setPressed:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000100946
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000100929
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000010090c
@property(nonatomic, getter=isPressed) _Bool pressed;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x0000000000100853
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000001007d4
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000100777
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic) double layerUnselectionDuration;
@property(nonatomic) double layerSelectionDuration;
@property(nonatomic, getter=isHueShiftEnabled) _Bool hueShiftEnabled;
@property(nonatomic, getter=isBrightnessBoostEnabled) _Bool brightnessBoostEnabled;
@property(nonatomic) double radiosityAmount;
@property(nonatomic) double specularHighlightVerticalPositionSensitivity;
@property(nonatomic) double specularHighlightVerticalPosition;
@property(nonatomic) double specularHighlightHorizontalPositionSensitivity;
@property(retain, nonatomic) UIColor *specularHighlightColor;
@property(nonatomic) double rotationAmount;
@property(nonatomic) double cornerRadius;
@property(nonatomic) double perspectiveZDepth;
@property(copy, nonatomic) NSArray *parallaxImageDepths;
@property(nonatomic) double maxParallaxImageDepth;
- (void)_loadImage;	// IMP=0x00000000000ff775
@property(retain, nonatomic) TVPImageStack *imageStack;
- (void)setImageStack:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x00000000000ff568
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000000ff4db
- (void)layoutSubviews;	// IMP=0x00000000000ff45f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ff3fe
- (void)dealloc;	// IMP=0x00000000000ff372
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x00000000000ff271
- (id)initWithImageStack:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000ff069
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ff02a

@end
