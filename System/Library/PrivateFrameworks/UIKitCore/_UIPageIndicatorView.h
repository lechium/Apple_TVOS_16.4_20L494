//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorView : UIImageView
{
    struct CGSize _cachedSize;	// 8 = 0x8
    long long _page;	// 24 = 0x18
}

@property(nonatomic) long long page; // @synthesize page=_page;
- (id)debugDescription;	// IMP=0x000000000061e7a8
- (_Bool)isInvalidated;	// IMP=0x000000000061e793
- (void)invalidate;	// IMP=0x000000000061e77e
- (struct CGSize)sizeForImage:(id)arg1 withTraitCollection:(id)arg2;	// IMP=0x000000000061e417
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000061e38c
- (void)setImage:(id)arg1;	// IMP=0x000000000061e14e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000061e06f
- (void)updateSymbolConfigurationForTraitCollection;	// IMP=0x000000000061df8f
- (void)prepare;	// IMP=0x000000000061df31
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000061dee5
- (id)initWithImage:(id)arg1;	// IMP=0x000000000061de99
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000061de3c

@end
