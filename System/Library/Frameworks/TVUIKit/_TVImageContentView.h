//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _TVImageContentView
{
    UIImage *_image;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003a4a4
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)_imageViewForImage:(id)arg1;	// IMP=0x000000000003a174
- (void)updateAppearanceForLockupViewState:(unsigned long long)arg1;	// IMP=0x000000000003a0fe
- (void)_populateArchivedSubviews:(id)arg1;	// IMP=0x000000000003a091
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000039f69
- (struct NSDirectionalEdgeInsets)intrinsicFocusSizeIncrease;	// IMP=0x0000000000039e52

@end

