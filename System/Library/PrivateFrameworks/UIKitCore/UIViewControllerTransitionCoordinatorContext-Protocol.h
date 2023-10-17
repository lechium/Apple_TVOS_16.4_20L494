//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIView, UIViewController;

@protocol UIViewControllerTransitionCoordinatorContext <NSObject>
@property(readonly, nonatomic) struct CGAffineTransform targetTransform;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionVelocity;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) _Bool isInterruptible;
@property(readonly, nonatomic) _Bool initiallyInteractive;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
- (UIView *)viewForKey:(NSString *)arg1;
- (UIViewController *)viewControllerForKey:(NSString *)arg1;
@end

