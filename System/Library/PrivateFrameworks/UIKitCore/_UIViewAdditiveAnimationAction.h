//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAAnimation, UIView, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface _UIViewAdditiveAnimationAction : NSObject
{
    CAAnimation *_pendingAnimation;	// 8 = 0x8
    UIViewPropertyAnimator *_animationObject;	// 16 = 0x10
    UIView *_view;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000117e704
@property(readonly, retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, retain, nonatomic) UIViewPropertyAnimator *animationObject; // @synthesize animationObject=_animationObject;
@property(readonly, retain, nonatomic) CAAnimation *pendingAnimation; // @synthesize pendingAnimation=_pendingAnimation;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;	// IMP=0x000000000117d1de
- (id)initWithPendingAnimation:(id)arg1 withAnimationObject:(id)arg2 forView:(id)arg3;	// IMP=0x000000000117d115

@end

