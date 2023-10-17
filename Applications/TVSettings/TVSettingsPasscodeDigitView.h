//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, TVSettingsHighlightView, UIImageView, UILabel;
@protocol TVSettingsPasscodeDigitViewDelegate;

@interface TVSettingsPasscodeDigitView : UIView
{
    _Bool _showDigit;	// 8 = 0x8
    double _fontSize;	// 16 = 0x10
    unsigned long long _maxDigitValue;	// 24 = 0x18
    id <TVSettingsPasscodeDigitViewDelegate> _delegate;	// 32 = 0x20
    double _highlightProgress;	// 40 = 0x28
    UIView *_clippingView;	// 48 = 0x30
    UILabel *_label;	// 56 = 0x38
    TVSettingsHighlightView *_highlight;	// 64 = 0x40
    UIImageView *_bulletView;	// 72 = 0x48
    UIImageView *_upArrowView;	// 80 = 0x50
    UIImageView *_downArrowView;	// 88 = 0x58
    NSArray *_recognizers;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000c4a3b
@property(retain, nonatomic) NSArray *recognizers; // @synthesize recognizers=_recognizers;
@property(retain, nonatomic) UIImageView *downArrowView; // @synthesize downArrowView=_downArrowView;
@property(retain, nonatomic) UIImageView *upArrowView; // @synthesize upArrowView=_upArrowView;
@property(retain, nonatomic) UIImageView *bulletView; // @synthesize bulletView=_bulletView;
@property(retain, nonatomic) TVSettingsHighlightView *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) double highlightProgress; // @synthesize highlightProgress=_highlightProgress;
@property(nonatomic) __weak id <TVSettingsPasscodeDigitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showDigit; // @synthesize showDigit=_showDigit;
@property(nonatomic) unsigned long long maxDigitValue; // @synthesize maxDigitValue=_maxDigitValue;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (id)hiddenDigitImage;	// IMP=0x00100000000c45e1
- (id)arrowImage:(_Bool)arg1;	// IMP=0x00100000000c43a6
- (void)downGesture:(id)arg1;	// IMP=0x00100000000c429e
- (void)upGesture:(id)arg1;	// IMP=0x00100000000c41a8
@property(copy, nonatomic) NSString *text;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000c3f04
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000000c3dfb
- (_Bool)canBecomeFocused;	// IMP=0x00100000000c3df3
- (void)layoutSubviews;	// IMP=0x00100000000c3a26
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000c3332

@end

