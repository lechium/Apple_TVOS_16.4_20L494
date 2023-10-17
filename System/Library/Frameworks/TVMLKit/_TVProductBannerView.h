//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVFocusRedirectView.h"

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVProductBannerView : _TVFocusRedirectView
{
    double _height;	// 8 = 0x8
    UIView *_backgroundImageView;	// 16 = 0x10
    UIView *_infoListView;	// 24 = 0x18
    UIView *_stackView;	// 32 = 0x20
    UIView *_heroImageView;	// 40 = 0x28
}

+ (id)productBannerViewWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x001000000009abc7
- (void).cxx_destruct;	// IMP=0x000000000009c1dc
@property(retain, nonatomic) UIView *heroImageView; // @synthesize heroImageView=_heroImageView;
@property(retain, nonatomic) UIView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIView *infoListView; // @synthesize infoListView=_infoListView;
@property(retain, nonatomic) UIView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (id)impressionableElementsContainedInDocument:(id)arg1;	// IMP=0x000000000009bfc3
- (void)layoutSubviews;	// IMP=0x000000000009b675
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000009b663
- (id)preferredFocusEnvironments;	// IMP=0x000000000009b396
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000009b33c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
