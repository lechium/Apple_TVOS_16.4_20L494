//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class NSDate, UITextReplacement, _UICalloutBarVisualStyle, _UISlotView;

__attribute__((visibility("hidden")))
@interface UICalloutBarButton : UIButton
{
    SEL m_action;	// 288 = 0x120
    int m_position;	// 296 = 0x128
    int m_type;	// 300 = 0x12c
    UITextReplacement *m_textReplacement;	// 304 = 0x130
    double m_contentWidth;	// 312 = 0x138
    double m_contentScale;	// 320 = 0x140
    double m_additionalContentHeight;	// 328 = 0x148
    double m_dividerOffset;	// 336 = 0x150
    double m_imageVerticalAdjust;	// 344 = 0x158
    long long m_page;	// 352 = 0x160
    _Bool m_isText;	// 360 = 0x168
    _Bool m_single;	// 361 = 0x169
    _Bool m_padLeft;	// 362 = 0x16a
    _Bool m_padRight;	// 363 = 0x16b
    _Bool m_dontDismiss;	// 364 = 0x16c
    NSDate *m_appearanceDate;	// 368 = 0x170
    _UISlotView *m_securePasteButtonSlotView;	// 376 = 0x178
    _Bool forceFlash;	// 384 = 0x180
    _UICalloutBarVisualStyle *m_visualStyle;	// 392 = 0x188
}

+ (id)symbolConfigurationForScale:(double)arg1;	// IMP=0x00600000006d4ad0
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 type:(int)arg4 inView:(id)arg5 visualStyle:(id)arg6;	// IMP=0x00600000006d3be6
+ (id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4 visualStyle:(id)arg5;	// IMP=0x00600000006d3b1a
+ (id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4 visualStyle:(id)arg5;	// IMP=0x00600000006d3a4e
+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 inView:(id)arg6 visualStyle:(id)arg7;	// IMP=0x00600000006d395a
+ (Class)_visualProviderClass;	// IMP=0x00600000006d3949
- (void).cxx_destruct;	// IMP=0x00000000006d5d71
@property(nonatomic) _Bool dontDismiss; // @synthesize dontDismiss=m_dontDismiss;
@property(nonatomic) double imageVerticalAdjust; // @synthesize imageVerticalAdjust=m_imageVerticalAdjust;
@property(nonatomic) double dividerOffset; // @synthesize dividerOffset=m_dividerOffset;
@property(nonatomic) long long page; // @synthesize page=m_page;
@property(nonatomic) _Bool forceFlash; // @synthesize forceFlash;
@property(retain, nonatomic) UITextReplacement *textReplacement; // @synthesize textReplacement=m_textReplacement;
@property(retain, nonatomic) _UICalloutBarVisualStyle *visualStyle; // @synthesize visualStyle=m_visualStyle;
@property(readonly, nonatomic) int type; // @synthesize type=m_type;
@property(readonly, nonatomic) double additionalContentHeight; // @synthesize additionalContentHeight=m_additionalContentHeight;
@property(readonly, nonatomic) double contentScale; // @synthesize contentScale=m_contentScale;
@property(readonly, nonatomic) double contentWidth; // @synthesize contentWidth=m_contentWidth;
@property(readonly, nonatomic) SEL action; // @synthesize action=m_action;
- (void)touchDown;	// IMP=0x00000000006d5bf1
- (void)flash:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000006d5a84
- (void)cancelFlash;	// IMP=0x00000000006d5a07
- (void)fadeAndSendActionWithAuthenticationMessage:(id)arg1;	// IMP=0x00000000006d5875
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000006d57d5
- (void)setContentScale:(double)arg1;	// IMP=0x00000000006d567c
@property(readonly, nonatomic) _Bool isSecurePasteButton;
- (void)configureForVerticalPosition:(int)arg1;	// IMP=0x00000000006d5630
- (void)configureForRightPosition:(int)arg1;	// IMP=0x00000000006d55ec
- (void)configureForMiddlePosition;	// IMP=0x00000000006d55ac
- (void)configureForLeftPosition:(int)arg1;	// IMP=0x00000000006d5568
- (void)configureForSingle:(int)arg1;	// IMP=0x00000000006d5521
- (unsigned int)_secureName;	// IMP=0x00000000006d54bf
- (void)configureSecurePasteButtonWithWidth:(double)arg1 height:(double)arg2;	// IMP=0x00000000006d54b9
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000000006d5427
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000000006d5318
- (struct CGRect)adjustRectForPosition:(struct CGRect)arg1;	// IMP=0x00000000006d5265
- (double)cornerRadius;	// IMP=0x00000000006d520a
- (double)buttonHorizontalPadding;	// IMP=0x00000000006d51af
- (void)removeFromSuperview;	// IMP=0x00000000006d515a
- (void)dealloc;	// IMP=0x00000000006d511c
- (void)setupWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 type:(int)arg4 visualStyle:(id)arg5;	// IMP=0x00000000006d4dee
- (void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 visualStyle:(id)arg4;	// IMP=0x00000000006d4b9b
- (void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 visualStyle:(id)arg4;	// IMP=0x00000000006d48e8
- (void)setupWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 visualStyle:(id)arg6;	// IMP=0x00000000006d3e46
- (void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2 visualStyle:(id)arg3;	// IMP=0x00000000006d3cd0
- (double)_scaleFactorForImage;	// IMP=0x00000000006d5dc2

@end

