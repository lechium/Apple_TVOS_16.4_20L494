//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, UITextField, _UIAlertControllerTextField;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldView : UIView
{
    UIView *_containerView;	// 144 = 0x90
    _UIAlertControllerTextField *_textField;	// 152 = 0x98
    NSArray *_containerViewConstraints;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000004ccaa
@property(retain, nonatomic) UIView *containerView;
@property(readonly) UITextField *textField;
- (id)_textFieldFont;	// IMP=0x000000000004cb73
- (double)_borderWidth;	// IMP=0x000000000004cb3f
- (void)_loadConstraints;	// IMP=0x000000000004c977
- (void)dealloc;	// IMP=0x000000000004c92c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004c83f

@end
