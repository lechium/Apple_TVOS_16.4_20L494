//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MKFirstPartyPhotoBigAttributionView
{
    UIImageView *_glyphView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000fc3e9
- (void)didEndAnimatingActivityIndicatorView;	// IMP=0x00000000000fc3c4
- (void)willStartAnimatingActivityIndicatorView;	// IMP=0x00000000000fc3a4
- (void)didUpdateMapItem;	// IMP=0x00000000000fc39e
- (void)didUpdateAttributionViewType;	// IMP=0x00000000000fc30c
@property(readonly, nonatomic) UIImage *glyphImage;
@property(readonly, nonatomic) NSString *titleText;
- (void)_setupConstraints;	// IMP=0x00000000000fbc15
- (void)_setupSubviews;	// IMP=0x00000000000fba02
- (id)initWithContext:(long long)arg1;	// IMP=0x00000000000fb994

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
