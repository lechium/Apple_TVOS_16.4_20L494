//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel, UIView, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _MKInteractionControlsButtonCell : UICollectionViewCell
{
    UIView *_backgroundView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    _UIFloatingContentView *_floatingView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005c01a
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000005bf9d
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000005bf20
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000005bdf2
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;	// IMP=0x000000000005bcb9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005b292

@end

