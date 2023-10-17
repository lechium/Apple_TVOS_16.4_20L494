//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint, UIDatePicker, _UIDatePickerStyle, _UIRoundedRectShadowView;

__attribute__((visibility("hidden")))
@interface _UIDatePickerOverlayPlatterView : UIView
{
    _Bool _accessoryViewIgnoresDefaultInsets;	// 144 = 0x90
    UIDatePicker *_datePicker;	// 152 = 0x98
    _UIRoundedRectShadowView *_shadowView;	// 160 = 0xa0
    UIView *_backgroundView;	// 168 = 0xa8
    UIView *_accessoryView;	// 176 = 0xb0
    UIView *_previousContentView;	// 184 = 0xb8
    UIView *_contentView;	// 192 = 0xc0
    NSLayoutConstraint *_contentWidthConstraint;	// 200 = 0xc8
    NSLayoutConstraint *_contentHeightConstraint;	// 208 = 0xd0
    _UIDatePickerStyle *_datePickerStyle;	// 216 = 0xd8
    struct CGRect _contentBounds;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000000108d362
@property(readonly, nonatomic) _UIDatePickerStyle *datePickerStyle; // @synthesize datePickerStyle=_datePickerStyle;
@property(readonly, nonatomic) NSLayoutConstraint *contentHeightConstraint; // @synthesize contentHeightConstraint=_contentHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentWidthConstraint; // @synthesize contentWidthConstraint=_contentWidthConstraint;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *previousContentView; // @synthesize previousContentView=_previousContentView;
@property(readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) _UIRoundedRectShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(nonatomic) _Bool accessoryViewIgnoresDefaultInsets; // @synthesize accessoryViewIgnoresDefaultInsets=_accessoryViewIgnoresDefaultInsets;
@property(readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)datePickerTransitionCompletion;	// IMP=0x000000000108d1f4
- (void)datePickerTransitionAnimation;	// IMP=0x000000000108d131
- (void)prepareDatePickerTransitionWithDatePicker:(id)arg1;	// IMP=0x000000000108d06d
- (struct CGSize)preferredPlatterSize;	// IMP=0x000000000108cd58
- (struct CGSize)preferredContentSize;	// IMP=0x000000000108cb15
- (void)layoutSubviews;	// IMP=0x000000000108ca25
- (void)replaceDatePicker:(id)arg1;	// IMP=0x000000000108c493
- (id)initWithDatePicker:(id)arg1 accessoryView:(id)arg2;	// IMP=0x000000000108c287

@end

