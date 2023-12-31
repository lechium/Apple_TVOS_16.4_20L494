//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@protocol _UIPassthroughGestureDelegate;

__attribute__((visibility("hidden")))
@interface _UIPassthroughGateGestureRecognizer : UIGestureRecognizer
{
}

+ (_Bool)_supportsTouchContinuation;	// IMP=0x00600000008744fc
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000874544
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000874532
- (void)endClosed;	// IMP=0x000000000087451b
- (void)open;	// IMP=0x0000000000874504
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000874494

// Remaining properties
@property(nonatomic) __weak id <_UIPassthroughGestureDelegate> delegate; // @dynamic delegate;

@end

