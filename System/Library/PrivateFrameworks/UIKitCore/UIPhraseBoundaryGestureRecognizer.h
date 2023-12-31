//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILongPressGestureRecognizer.h"

@class UIDelayedAction, UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer
{
    UIDelayedAction *_secondDelayTimer;	// 16 = 0x10
    _Bool _secondDelayElapsed;	// 24 = 0x18
    UIResponder<UITextInput> *_textInput;	// 32 = 0x20
    double _secondDelay;	// 40 = 0x28
    id _userData;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000072e7a8
@property(nonatomic) __weak id userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) _Bool secondDelayElapsed; // @synthesize secondDelayElapsed=_secondDelayElapsed;
@property(nonatomic) double secondDelay; // @synthesize secondDelay=_secondDelay;
@property(nonatomic) __weak UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
- (void)clearTimer;	// IMP=0x000000000072e6b6
- (void)startTimer;	// IMP=0x000000000072e3c1
- (void)secondDelayElapsed:(id)arg1;	// IMP=0x000000000072e366
- (void)setState:(long long)arg1;	// IMP=0x000000000072e2ba
- (void)_resetGestureRecognizer;	// IMP=0x000000000072e26d
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000072e21c

@end

