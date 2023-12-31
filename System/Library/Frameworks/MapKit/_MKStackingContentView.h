//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_MKUIViewControllerRootView.h"

@class NSLayoutConstraint, UIView;

__attribute__((visibility("hidden")))
@interface _MKStackingContentView : _MKUIViewControllerRootView
{
    NSLayoutConstraint *_topConstraint;	// 8 = 0x8
    NSLayoutConstraint *_middleConstraint;	// 16 = 0x10
    NSLayoutConstraint *_bottomConstraint;	// 24 = 0x18
    UIView *_topView;	// 32 = 0x20
    UIView *_bottomView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000cbf65
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (id)vibrancyGroupName;	// IMP=0x00000000000cbf0a
- (void)updateConstraints;	// IMP=0x00000000000cb727
@property(readonly, nonatomic) NSLayoutConstraint *bottomConstraint;
- (id)initWithViewController:(id)arg1;	// IMP=0x00000000000cb6e3

@end

