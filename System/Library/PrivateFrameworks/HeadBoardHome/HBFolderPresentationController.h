//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface HBFolderPresentationController : UIPresentationController
{
    UIVisualEffectView *_visualEffectView;	// 8 = 0x8
    UIView *_dimmingView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000050fb0
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000050e7c
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000050e05
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000000050c95
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000050ba8
- (void)presentationTransitionWillBegin;	// IMP=0x0000000000050809

@end

