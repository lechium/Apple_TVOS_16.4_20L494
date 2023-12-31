//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class UIColor, UIImage, UIImageView, UIMenu;
@protocol UITableConstants;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListAccessoryDisclosure : UIControl
{
    UIImageView *_imageView;	// 144 = 0x90
    _Bool _rotated;	// 152 = 0x98
    id <UITableConstants> _constants;	// 160 = 0xa0
    UIColor *_accessoryTintColor;	// 168 = 0xa8
    CDUnknownBlockType _actionHandler;	// 176 = 0xb0
    double _rotationAngle;	// 184 = 0xb8
    UIMenu *_menu;	// 192 = 0xc0
    CDUnknownBlockType _selectedElementDidChangeHandler;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000812dbe
@property(copy, nonatomic) CDUnknownBlockType selectedElementDidChangeHandler; // @synthesize selectedElementDidChangeHandler=_selectedElementDidChangeHandler;
@property(retain, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) _Bool rotated; // @synthesize rotated=_rotated;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
@property(retain, nonatomic) id <UITableConstants> constants; // @synthesize constants=_constants;
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000812d0d
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000812cf8
- (void)layoutSubviews;	// IMP=0x0000000000812b69
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000812b10
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000812a0c
- (double)_enforcedWidthForWidth:(double)arg1;	// IMP=0x00000000008129e7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000812984
- (struct CGSize)_minimumSizeForHitTesting;	// IMP=0x0000000000812950
- (void)_updateRotation;	// IMP=0x00000000008128bd
@property(retain, nonatomic) UIImage *image;
- (void)_executeActionHandler;	// IMP=0x00000000008127dc
- (unsigned long long)_controlEventsForActionTriggered;	// IMP=0x0000000000812746
- (id)initWithConstants:(id)arg1;	// IMP=0x0000000000812675

@end

