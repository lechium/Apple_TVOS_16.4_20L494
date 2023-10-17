//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject
{
    id <UIViewControllerContextTransitioning> _transitionContext;	// 8 = 0x8
    _Bool _removeFromView;	// 16 = 0x10
    int _transition;	// 20 = 0x14
    id _delegate;	// 24 = 0x18
    UIView *_toView;	// 32 = 0x20
    UIView *_fromView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000005006da
@property(nonatomic) int transition; // @synthesize transition=_transition;
@property(nonatomic) _Bool removeFromView; // @synthesize removeFromView=_removeFromView;
@property(nonatomic) __weak UIView *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) __weak UIView *toView; // @synthesize toView=_toView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (_Bool)transitionViewShouldUseViewControllerCallbacks;	// IMP=0x0000000000500639
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(_Bool)arg4;	// IMP=0x0000000000500602
- (struct CGPoint)transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;	// IMP=0x00000000005004b2
- (struct CGPoint)transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;	// IMP=0x000000000050034d
- (struct CGPoint)transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;	// IMP=0x0000000000500238
- (struct CGPoint)_adjustOrigin:(struct CGPoint)arg1 givenOtherOrigin:(struct CGPoint)arg2 forTransition:(int)arg3;	// IMP=0x000000000050020b
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;	// IMP=0x0000000000500190
- (void)transitionViewDidStart:(id)arg1;	// IMP=0x00000000005000ff
- (double)durationForTransition:(int)arg1;	// IMP=0x0000000000500088
- (void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2;	// IMP=0x00000000004ffecd
- (void)animateTransition:(id)arg1;	// IMP=0x00000000004fe77e
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000004fe769
- (id)initWithTransition:(int)arg1;	// IMP=0x00000000004fe708

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
