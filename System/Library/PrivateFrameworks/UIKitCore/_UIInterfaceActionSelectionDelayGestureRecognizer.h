//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer
{
    UIDelayedAction *_delayedAction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003b834
@property(readonly, nonatomic) UIDelayedAction *delayedAction; // @synthesize delayedAction=_delayedAction;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003b80c
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003b7f5
- (void)_timerSatisfied;	// IMP=0x000000000003b7de
- (void)reset;	// IMP=0x000000000003b77f
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003b72a

@end
