//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface _TVInlinePlayerPresentationAnimator : NSObject
{
    UIViewController *_playerViewController;	// 8 = 0x8
    struct CGRect _inlineFrame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000154bb2
@property(readonly, nonatomic) UIViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(readonly, nonatomic) struct CGRect inlineFrame; // @synthesize inlineFrame=_inlineFrame;
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000154670
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000015459e
- (id)initWithInlineFrame:(struct CGRect)arg1 playerViewController:(id)arg2;	// IMP=0x0000000000154520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

