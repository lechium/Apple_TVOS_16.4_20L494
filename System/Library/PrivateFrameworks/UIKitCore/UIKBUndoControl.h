//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSLayoutConstraint, UIImageView, UIKBUndoStyling, UILabel, UIView, _UISlotView;

__attribute__((visibility("hidden")))
@interface UIKBUndoControl : UIControl
{
    long long _type;	// 8 = 0x8
    UIKBUndoStyling *_style;	// 16 = 0x10
    UIView *_springCoverView;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
    UIImageView *_icon;	// 40 = 0x28
    _UISlotView *_securePasteButtonSlotView;	// 48 = 0x30
    NSLayoutConstraint *_coverConstraintLeftAnchor;	// 56 = 0x38
    NSLayoutConstraint *_coverConstraintRightAnchor;	// 64 = 0x40
    NSLayoutConstraint *_coverConstraintTopAnchor;	// 72 = 0x48
    NSLayoutConstraint *_coverConstraintBottomAnchor;	// 80 = 0x50
}

+ (id)controlLableTextByType:(long long)arg1 style:(id)arg2 available:(_Bool)arg3;	// IMP=0x0060000000b93acc
- (void).cxx_destruct;	// IMP=0x0000000000b94912
@property(retain, nonatomic) NSLayoutConstraint *coverConstraintBottomAnchor; // @synthesize coverConstraintBottomAnchor=_coverConstraintBottomAnchor;
@property(retain, nonatomic) NSLayoutConstraint *coverConstraintTopAnchor; // @synthesize coverConstraintTopAnchor=_coverConstraintTopAnchor;
@property(retain, nonatomic) NSLayoutConstraint *coverConstraintRightAnchor; // @synthesize coverConstraintRightAnchor=_coverConstraintRightAnchor;
@property(retain, nonatomic) NSLayoutConstraint *coverConstraintLeftAnchor; // @synthesize coverConstraintLeftAnchor=_coverConstraintLeftAnchor;
@property(nonatomic) __weak _UISlotView *securePasteButtonSlotView; // @synthesize securePasteButtonSlotView=_securePasteButtonSlotView;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *springCoverView; // @synthesize springCoverView=_springCoverView;
@property(retain, nonatomic) UIKBUndoStyling *style; // @synthesize style=_style;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000b94786
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000b94771
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b946fe
- (unsigned int)_secureName;	// IMP=0x0000000000b946e4
- (void)layoutControlForType:(long long)arg1 andStyling:(id)arg2;	// IMP=0x0000000000b93bc8
- (id)controlImageByType:(long long)arg1;	// IMP=0x0000000000b93a58
- (id)controlLabelImageNameByType:(long long)arg1 isRTL:(_Bool)arg2;	// IMP=0x0000000000b939d5
- (void)updateCoverWithTavelProcess:(double)arg1 isRTL:(_Bool)arg2;	// IMP=0x0000000000b93667
- (void)updateUndoControlStyle;	// IMP=0x0000000000b932bf
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000b932b9
- (id)initWithType:(long long)arg1 andStyling:(id)arg2;	// IMP=0x0000000000b92efd

@end

