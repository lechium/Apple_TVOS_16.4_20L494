//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class UIView;

@interface _PBOpaqueAlertPresentationController : UIPresentationController
{
    UIView *_opaqueView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001fbd08
@property(readonly, nonatomic) UIView *opaqueView; // @synthesize opaqueView=_opaqueView;
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(_Bool)arg2;	// IMP=0x00100000001fbaf3
- (void)_configureSubviews;	// IMP=0x00100000001fba30
- (void)dismissalTransitionWillBegin;	// IMP=0x00100000001fb9b3
- (void)presentationTransitionWillBegin;	// IMP=0x00100000001fb933

@end

