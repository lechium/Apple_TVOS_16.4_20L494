//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKCustomSeparatorCell.h"

@class MKButtonWithTargetArgument, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface MKTransitDeparturesSectionFooterView : MKCustomSeparatorCell
{
    NSLayoutConstraint *_topConstraint;	// 8 = 0x8
    NSLayoutConstraint *_bottomConstraint;	// 16 = 0x10
    MKButtonWithTargetArgument *_button;	// 24 = 0x18
}

+ (double)defaultHeight;	// IMP=0x00600000001cb98f
+ (id)_font;	// IMP=0x00600000001cb96c
- (void).cxx_destruct;	// IMP=0x00000000001cbbd7
@property(readonly, nonatomic) MKButtonWithTargetArgument *button; // @synthesize button=_button;
- (void)_updateConstraintValues;	// IMP=0x00000000001cbb28
- (void)_contentSizeCategoryDidChange;	// IMP=0x00000000001cba93
- (void)tintColorDidChange;	// IMP=0x00000000001cb9ef
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001cb4d0

@end
