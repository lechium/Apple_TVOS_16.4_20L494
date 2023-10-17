//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PGButtonView, PGControlsViewModel, PGDisplayLink, UILabel;

__attribute__((visibility("hidden")))
@interface PGPrerollIndicatorView : UIView
{
    PGControlsViewModel *_viewModel;	// 8 = 0x8
    UILabel *_contentTypeLabel;	// 16 = 0x10
    PGButtonView *_skipPrerollButtonView;	// 24 = 0x18
    PGDisplayLink *_displayLink;	// 32 = 0x20
    struct CGSize _labelSize;	// 40 = 0x28
}

+ (double)preferredHeight;	// IMP=0x001000000000cfde
- (void).cxx_destruct;	// IMP=0x000000000000e338
@property(readonly, nonatomic) PGDisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) struct CGSize labelSize; // @synthesize labelSize=_labelSize;
@property(readonly, nonatomic) PGButtonView *skipPrerollButtonView; // @synthesize skipPrerollButtonView=_skipPrerollButtonView;
@property(readonly, nonatomic) UILabel *contentTypeLabel; // @synthesize contentTypeLabel=_contentTypeLabel;
@property(readonly, nonatomic) PGControlsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_layoutSkipPrerollButton;	// IMP=0x000000000000e0ad
- (void)_layoutContentTypeLabel;	// IMP=0x000000000000df41
- (struct CGAffineTransform)_subviewTransform;	// IMP=0x000000000000de8d
- (struct UIEdgeInsets)buttonView:(id)arg1 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets)arg2;	// IMP=0x000000000000de0f
- (struct CGRect)buttonView:(id)arg1 titleRectForContentRect:(struct CGRect)arg2 proposedRect:(struct CGRect)arg3;	// IMP=0x000000000000dde1
- (struct CGRect)buttonView:(id)arg1 imageRectForContentRect:(struct CGRect)arg2 proposedRect:(struct CGRect)arg3;	// IMP=0x000000000000dd7b
- (void)buttonViewDidReceiveTouchUpInside:(id)arg1;	// IMP=0x000000000000dd3e
- (double)labelWidth;	// IMP=0x000000000000dced
- (void)layoutSubviews;	// IMP=0x000000000000dc97
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000000dc3a
@property(copy, nonatomic) NSString *timeRemainingText;
@property(copy, nonatomic) NSString *labelText;
- (void)updateValues;	// IMP=0x000000000000d12a
- (void)dealloc;	// IMP=0x000000000000d0e1
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;	// IMP=0x000000000000cfec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
