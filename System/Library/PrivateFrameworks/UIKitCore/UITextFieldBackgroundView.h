//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITextFieldBackgroundView : UIView
{
    _Bool _active;	// 144 = 0x90
    _Bool _enabled;	// 145 = 0x91
    float _progress;	// 148 = 0x94
    UIColor *_fillColor;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000fb41d2
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)setProgress:(float)arg1;	// IMP=0x0000000000fb40fe
- (void)setActive:(_Bool)arg1;	// IMP=0x0000000000fb40bc
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000fb4020
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000fb3f84
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;	// IMP=0x0000000000fb3edc
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000fb3ecc
- (void)_updateImages;	// IMP=0x0000000000fb3ec6

@end
