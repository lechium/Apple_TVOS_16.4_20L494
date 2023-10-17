//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVFocusRedirectView.h"

@class NSArray, NSDictionary, NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _TVOrganizerView : _TVFocusRedirectView
{
    UIView *_lastFocusedView;	// 8 = 0x8
    UIView *_rightColumnDivider;	// 16 = 0x10
    UIView *_leftColumnDivider;	// 24 = 0x18
    double _showcaseFactor;	// 32 = 0x20
    _Bool _columnDividersEnabled;	// 40 = 0x28
    _Bool _remembersLastFocusedItem;	// 41 = 0x29
    UIView *_backgroundImageView;	// 48 = 0x30
    double _columnDividerPadding;	// 56 = 0x38
    UIColor *_columnDividerColor;	// 64 = 0x40
    NSArray *_components;	// 72 = 0x48
    NSDictionary *_divsByPosition;	// 80 = 0x50
    NSDictionary *_divSizesByPosition;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000078123
@property(copy, nonatomic) NSDictionary *divSizesByPosition; // @synthesize divSizesByPosition=_divSizesByPosition;
@property(copy, nonatomic) NSDictionary *divsByPosition; // @synthesize divsByPosition=_divsByPosition;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(nonatomic) _Bool remembersLastFocusedItem; // @synthesize remembersLastFocusedItem=_remembersLastFocusedItem;
@property(retain, nonatomic) UIColor *columnDividerColor; // @synthesize columnDividerColor=_columnDividerColor;
@property(nonatomic) _Bool columnDividersEnabled; // @synthesize columnDividersEnabled=_columnDividersEnabled;
@property(nonatomic) double columnDividerPadding; // @synthesize columnDividerPadding=_columnDividerPadding;
@property(retain, nonatomic) UIView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (id)impressionableElementsContainedInDocument:(id)arg1;	// IMP=0x0000000000077dd6
- (long long)_positionFromView:(id)arg1;	// IMP=0x0000000000077db4
- (struct CGSize)_contentSizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000077896
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000777aa
- (id)preferredFocusEnvironments;	// IMP=0x0000000000077554
- (_Bool)canBecomeFocused;	// IMP=0x000000000007754c
- (void)tv_setShowcaseFactor:(double)arg1;	// IMP=0x000000000007730e
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000772f9
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000076e40
- (void)layoutSubviews;	// IMP=0x00000000000759b0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000757f4
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;	// IMP=0x00000000000742af
@property(nonatomic) double cornerRadius;
- (void)setComponentsNeedUpdate;	// IMP=0x0000000000072e4b
@property(nonatomic) __weak UIView *preferredFocusedComponent;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000072d3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

