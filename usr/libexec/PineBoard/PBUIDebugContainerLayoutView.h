//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIStackView;

@interface PBUIDebugContainerLayoutView : UIView
{
    UIStackView *_topLeftHStack;	// 8 = 0x8
    UIStackView *_topRightVStack;	// 16 = 0x10
    UIStackView *_bottomRightHStack;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000201a45
@property(readonly, nonatomic) UIStackView *bottomRightHStack; // @synthesize bottomRightHStack=_bottomRightHStack;
@property(readonly, nonatomic) UIStackView *topRightVStack; // @synthesize topRightVStack=_topRightVStack;
@property(readonly, nonatomic) UIStackView *topLeftHStack; // @synthesize topLeftHStack=_topLeftHStack;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000020145f

@end
