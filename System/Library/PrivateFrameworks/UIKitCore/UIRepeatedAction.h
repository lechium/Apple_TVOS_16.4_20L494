//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInvocation, NSTimer;
@protocol UIRepeatedActionDelegate;

__attribute__((visibility("hidden")))
@interface UIRepeatedAction : NSObject
{
    _Bool _didCompletePreInvocationDelay;	// 8 = 0x8
    _Bool _didCompleteInvocationDelay;	// 9 = 0x9
    _Bool _disableRepeat;	// 10 = 0xa
    _Bool _skipInitialFire;	// 11 = 0xb
    double _preInvocationDelay;	// 16 = 0x10
    double _invocationDelay;	// 24 = 0x18
    double _repeatedDelay;	// 32 = 0x20
    NSInvocation *_invocation;	// 40 = 0x28
    id _invocationArgument;	// 48 = 0x30
    NSTimer *_timer;	// 56 = 0x38
    NSObject<UIRepeatedActionDelegate> *_delegate;	// 64 = 0x40
}

+ (id)actionWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x0060000001036b7a
+ (id)_invocationForTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x0060000001036a24
- (void).cxx_destruct;	// IMP=0x0000000001037726
@property(nonatomic) __weak NSObject<UIRepeatedActionDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id invocationArgument; // @synthesize invocationArgument=_invocationArgument;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property(nonatomic) _Bool skipInitialFire; // @synthesize skipInitialFire=_skipInitialFire;
@property(nonatomic) _Bool disableRepeat; // @synthesize disableRepeat=_disableRepeat;
@property(nonatomic) double repeatedDelay; // @synthesize repeatedDelay=_repeatedDelay;
@property(nonatomic) double invocationDelay; // @synthesize invocationDelay=_invocationDelay;
@property(nonatomic) double preInvocationDelay; // @synthesize preInvocationDelay=_preInvocationDelay;
- (void)dealloc;	// IMP=0x000000000103762b
- (void)reset;	// IMP=0x00000000010374ff
- (void)_resetInternalState;	// IMP=0x00000000010374dc
- (void)invalidate;	// IMP=0x0000000001037464
- (void)schedule;	// IMP=0x0000000001037292
- (void)_repeatedTimerFire;	// IMP=0x000000000103722f
- (void)_invocationTimerFire;	// IMP=0x00000000010371c4
- (void)_preInvocationTimerFire;	// IMP=0x0000000001037159
- (_Bool)_shouldInvokeRepeatedActionForPhase:(unsigned long long)arg1;	// IMP=0x00000000010370f7
- (void)_adjustInvocationForPhase:(unsigned long long)arg1;	// IMP=0x0000000001036f3e
- (_Bool)invoke;	// IMP=0x0000000001036e12
- (void)scheduleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x0000000001036d45
- (id)initWithInvocation:(id)arg1;	// IMP=0x0000000001036cbe
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x0000000001036bf5

@end

