//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class UIColor, UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellReorderControl : UIControl
{
    UITableViewCell *_cell;	// 144 = 0x90
    struct CGPoint _downPoint;	// 152 = 0x98
    double _focalY;	// 168 = 0xa8
    double _focalHeight;	// 176 = 0xb0
    UIImageView *_imageView;	// 184 = 0xb8
    UIColor *_accessoryTintColor;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000e3843f
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
- (id)_imageView;	// IMP=0x0000000000e38419
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000000e383cd
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e38378
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e382ea
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e3824b
- (_Bool)shouldTrack;	// IMP=0x0000000000e381f6
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000e3814a
@property(readonly, nonatomic) _Bool wantsMaskingWhileAnimatingDisabled;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000e380f0
- (void)_updateImageView;	// IMP=0x0000000000e3809c
- (void)layoutSubviews;	// IMP=0x0000000000e37f9e
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;	// IMP=0x0000000000e37f1d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000e37ee8
- (id)initWithTableViewCell:(id)arg1;	// IMP=0x0000000000e37c2f
- (id)grabberImage;	// IMP=0x0000000000e37a5a

@end

