//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, UIImageView, UILabel, UIView, UIVisualEffectView, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _TVCaptionButtonContentView
{
    _UIFloatingContentView *_floatingContentView;	// 8 = 0x8
    UIVisualEffectView *_backdropView;	// 16 = 0x10
    UIView *_overlayView;	// 24 = 0x18
    UIImageView *_contentImageView;	// 32 = 0x20
    CALayer *_contentImageMask;	// 40 = 0x28
    UILabel *_contentTextLabel;	// 48 = 0x30
    UILabel *_contentTextMask;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002a423
@property(retain, nonatomic) UILabel *contentTextMask; // @synthesize contentTextMask=_contentTextMask;
@property(retain, nonatomic) UILabel *contentTextLabel; // @synthesize contentTextLabel=_contentTextLabel;
@property(retain, nonatomic) CALayer *contentImageMask; // @synthesize contentImageMask=_contentImageMask;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
- (struct CGSize)_label:(id)arg1 textSizeForWidth:(double)arg2;	// IMP=0x000000000002a223
- (struct CGRect)_centeredFrameForSize:(struct CGSize)arg1 inView:(id)arg2;	// IMP=0x000000000002a19d
- (void)_createComponentViews;	// IMP=0x000000000002973c
- (void)updateAppearanceForLockupViewState:(unsigned long long)arg1;	// IMP=0x000000000002962f
- (_Bool)isHighlighted;	// IMP=0x00000000000295eb
- (void)updateControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002959a
- (void)updateControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000029522
- (void)updateMotionDirection:(long long)arg1;	// IMP=0x00000000000293df
- (void)updateEnabled:(_Bool)arg1;	// IMP=0x000000000002937f
- (void)updateContentText:(id)arg1;	// IMP=0x0000000000028e6f
- (void)updateContentImage:(id)arg1;	// IMP=0x0000000000028971
- (void)_populateArchivedSubviews:(id)arg1;	// IMP=0x00000000000288c4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000028895
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000002883e
- (void)layoutSubviews;	// IMP=0x0000000000028547
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028518
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000284cc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002846f

@end

