//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPTextViewStyle, NSAttributedString, NSRegularExpression, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface LPTextView
{
    UILabel *_textView;	// 8 = 0x8
    struct UIEdgeInsets _contentInset;	// 16 = 0x10
    LPTextViewStyle *_style;	// 48 = 0x30
    NSAttributedString *_attributedString;	// 56 = 0x38
    double _ascender;	// 64 = 0x40
    double _descender;	// 72 = 0x48
    long long _overrideMaximumNumberOfLines;	// 80 = 0x50
    NSRegularExpression *_emphasizedTextExpression;	// 88 = 0x58
}

+ (id)attributedStringHidingNonColoredRanges:(id)arg1;	// IMP=0x001000000003e137
+ (id)attributedString:(id)arg1 resolvedAgainstStyle:(id)arg2 withEmphasizedTextExpression:(id)arg3 tintColor:(id)arg4 lineBreakMode:(long long)arg5 usesVibrancy:(_Bool)arg6 forLTR:(_Bool)arg7 withFont:(id)arg8;	// IMP=0x001000000003d4d9
- (void).cxx_destruct;	// IMP=0x000000000003eba1
@property(copy, nonatomic) NSRegularExpression *emphasizedTextExpression; // @synthesize emphasizedTextExpression=_emphasizedTextExpression;
@property(nonatomic) long long overrideMaximumNumberOfLines; // @synthesize overrideMaximumNumberOfLines=_overrideMaximumNumberOfLines;
- (id)subtitleButton;	// IMP=0x000000000003eb77
- (id)lastBaselineAnchor;	// IMP=0x000000000003eb41
- (id)firstBaselineAnchor;	// IMP=0x000000000003eb0b
- (void)applyAttributedString:(id)arg1;	// IMP=0x000000000003eaee
- (void)_createTextViewWithAttributedString:(id)arg1;	// IMP=0x000000000003ea62
- (id)_createLabel;	// IMP=0x000000000003e9e4
- (void)tintColorDidChange;	// IMP=0x000000000003e998
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003e84e
- (void)layoutComponentView;	// IMP=0x000000000003e7e5
- (long long)effectiveMaximumNumberOfLines;	// IMP=0x000000000003e7b5
- (struct CGRect)textRect;	// IMP=0x000000000003e732
- (struct UIEdgeInsets)effectiveInsets;	// IMP=0x000000000003e666
- (long long)computedNumberOfLines;	// IMP=0x000000000003e5ec
- (double)descender;	// IMP=0x000000000003e5da
- (double)ascender;	// IMP=0x000000000003e5c8
- (double)lastLineDescent;	// IMP=0x000000000003e56d
- (double)firstLineLeading;	// IMP=0x000000000003e512
@property(readonly, retain, nonatomic) LPTextViewStyle *style;
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000003e4b3
@property(readonly, retain, nonatomic) NSAttributedString *attributedString;
- (id)effectiveAttributedString;	// IMP=0x000000000003d3e9
- (_Bool)_lp_isLTR;	// IMP=0x000000000003d301
- (void)_buildSubviewsIfNeeded;	// IMP=0x000000000003d0b4
- (id)initWithHost:(id)arg1 text:(id)arg2 style:(id)arg3;	// IMP=0x000000000003cfcd
- (id)initWithHost:(id)arg1;	// IMP=0x000000000003cfbf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

