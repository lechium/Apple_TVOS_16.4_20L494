//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIFloatingContentView.h>

@class UIImage, UIView;

__attribute__((visibility("hidden")))
@interface _SiriTVUIFloatingContentView : _UIFloatingContentView
{
    UIView *_unfocusedShadowView;	// 8 = 0x8
    UIImage *_unfocusedShadowImage;	// 16 = 0x10
    UIView *_focusedShadowView;	// 24 = 0x18
    UIImage *_focusedShadowImage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000aa89
- (void)updateShadowOpacityForFocus:(_Bool)arg1;	// IMP=0x000000000000aa16
- (struct CGRect)_shadowFrameForShadowImage:(id)arg1;	// IMP=0x000000000000a904
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000000a7c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000a4d1

@end
