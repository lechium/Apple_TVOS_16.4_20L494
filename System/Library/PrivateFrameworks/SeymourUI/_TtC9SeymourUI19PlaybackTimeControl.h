//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI19PlaybackTimeControl : UIControl
{
    MISSING_TYPE *elapsedTimeLabel;	// 8 = 0x8
    MISSING_TYPE *elapsedTrackView;	// 16 = 0x10
    MISSING_TYPE *remainingTimeLabel;	// 24 = 0x18
    MISSING_TYPE *remainingTrackView;	// 32 = 0x20
    MISSING_TYPE *elapsedTimeLabelBottomConstraint;	// 40 = 0x28
    MISSING_TYPE *elapsedTrackViewWidthConstraint;	// 48 = 0x30
    MISSING_TYPE *layout;	// 56 = 0x38
    MISSING_TYPE *style;	// 112 = 0x70
    MISSING_TYPE *trackContainer;	// 168 = 0xa8
    MISSING_TYPE *trackMask;	// 176 = 0xb0
    MISSING_TYPE *elapsedTimeFormatter;	// 184 = 0xb8
    MISSING_TYPE *remainingTimeFormatter;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000559790
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000559410
- (void)tintColorDidChange;	// IMP=0x0000000000559210
- (void)layoutSubviews;	// IMP=0x00000000005591e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000559000
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000558c60
- (id)viewForBaselineLayout;	// IMP=0x0000000000558c40

@end
