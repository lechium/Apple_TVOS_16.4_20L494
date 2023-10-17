//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SiriUIContentButton, UILabel;

@interface SRTapToEditView : UIView
{
    UILabel *_tapToEditLabel;	// 8 = 0x8
    SiriUIContentButton *_circleButton;	// 16 = 0x10
    SiriUIContentButton *_chevronButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003073f
- (double)_circleToLabelHeightDifference;	// IMP=0x0010000000030692
- (void)_setHighlighted:(_Bool)arg1;	// IMP=0x00100000000305e8
- (double)baselineOffsetFromBottom;	// IMP=0x0010000000030543
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x00100000000304a8
- (void)layoutSubviews;	// IMP=0x0010000000030226
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000301ab
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000030197
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000030183
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000003016c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000002fccf

@end

