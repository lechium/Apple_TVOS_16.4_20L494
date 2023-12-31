//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class NSArray, NSDictionary, NSValue, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UISimplePressGestureRecognizer : UIGestureRecognizer
{
    UIDelayedAction *_delayedAction;	// 8 = 0x8
    NSValue *_activeTrigger;	// 16 = 0x10
    NSArray *_triggers;	// 24 = 0x18
    NSDictionary *_triggersByPressType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000e05961
@property(retain, nonatomic) NSDictionary *triggersByPressType; // @synthesize triggersByPressType=_triggersByPressType;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(readonly, nonatomic) NSValue *activeTrigger; // @synthesize activeTrigger=_activeTrigger;
@property(retain, nonatomic) UIDelayedAction *delayedAction; // @synthesize delayedAction=_delayedAction;
- (void)_endOrFail;	// IMP=0x0000000000e05882
- (void)_begin;	// IMP=0x0000000000e0586b
- (void)reset;	// IMP=0x0000000000e05813
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e05801
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e057ef
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e055e9
- (void)dealloc;	// IMP=0x0000000000e0558a
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000e0525f

@end

