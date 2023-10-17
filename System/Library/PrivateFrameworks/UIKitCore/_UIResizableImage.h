//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImage.h"

__attribute__((visibility("hidden")))
@interface _UIResizableImage : UIImage
{
    struct UIEdgeInsets _capInsets;	// 96 = 0x60
    struct UIEdgeInsets _subimageInsets;	// 128 = 0x80
    struct {
        unsigned int alwaysStretches:1;
        unsigned int isSubimage:1;
    } _rImageFlags;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000794e7b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000079583f
- (id)_resizableImageWithCapMask:(int)arg1;	// IMP=0x000000000079550f
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;	// IMP=0x0000000000795478
- (void)_setAlwaysStretches:(_Bool)arg1;	// IMP=0x0000000000795460
- (_Bool)_isResizable;	// IMP=0x0000000000795458
- (_Bool)_isSubimage;	// IMP=0x0000000000795444
- (struct CGRect)_contentRectInPixels;	// IMP=0x00000000007953a0
- (struct CGRect)_contentStretchInPixels;	// IMP=0x00000000007952fc
- (struct CGRect)_contentRectInPixelsApplyingInsets:(struct UIEdgeInsets)arg1 emptySizeFallback:(CDUnknownBlockType)arg2;	// IMP=0x00000000007951ce
- (long long)resizingMode;	// IMP=0x00000000007951ba
- (struct UIEdgeInsets)_subimageInsets;	// IMP=0x000000000079519a
- (void)_setSubimageInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000795112
- (struct UIEdgeInsets)capInsets;	// IMP=0x00000000007950f2
- (void)_setCapInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000007950d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000795023
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000794e83
- (id)initWithImage:(id)arg1 capInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000794e2c
- (void)_configureImage:(id)arg1 assumePreconfigured:(_Bool)arg2;	// IMP=0x0000000000794d38
- (_Bool)_suppressesAccessibilityHairlineThickening;	// IMP=0x0000000000794d30

@end

