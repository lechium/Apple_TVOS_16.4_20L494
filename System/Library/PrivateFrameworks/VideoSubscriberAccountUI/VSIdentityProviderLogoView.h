//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderLogoView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005d99f
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000005d952
- (void)layoutSubviews;	// IMP=0x000000000005d8b8
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000005d7eb
@property(readonly, nonatomic) struct CGSize preferredImageSize;
@property(readonly, nonatomic) double marginLength;
@property(retain, nonatomic) UIImage *logo;
- (double)_height;	// IMP=0x000000000005d6d0
- (struct CGRect)_imageViewFrame;	// IMP=0x000000000005d662
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005d61e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005d532

@end

