//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AWAttentionEvent;

@interface SleepSM
{
    unsigned long long _suppressWakeForHIDEventsTimeRangeStart;	// 40 = 0x28
    unsigned long long _suppressTimeInTicks;	// 48 = 0x30
    _Bool _sleepAllowed;	// 56 = 0x38
    AWAttentionEvent *_attentionalEvent;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000000d8f3
@property(retain, nonatomic) AWAttentionEvent *attentionalEvent; // @synthesize attentionalEvent=_attentionalEvent;
- (void)_temporarilySuppressWakeForHIDEvents;	// IMP=0x001000000000d8ad
- (void)_enterOffStateForced;	// IMP=0x001000000000d898
- (void)_enterOnStateForced;	// IMP=0x001000000000d7ff
- (void)_enterOffStateAutomatically;	// IMP=0x001000000000d6c3
- (void)_enterOnStateAutomatically;	// IMP=0x001000000000d580
- (void)_cancelAutomaticOnStateChangeConfirmation;	// IMP=0x001000000000d53b
- (void)_confirmAutomaticOnStateChangeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d453
- (_Bool)_canEnterOffStateAutomatically;	// IMP=0x001000000000d422
- (_Bool)_canBeInOnStateAutomatically;	// IMP=0x001000000000d113
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000cf62
- (id)init;	// IMP=0x001000000000cc5b

@end
