//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIPanGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface _TVNonFocusSwipeUpCapture : NSObject
{
    UIView *_initiallyFocusedView;	// 8 = 0x8
    struct CGPoint _translation;	// 16 = 0x10
    struct CGPoint _velocity;	// 32 = 0x20
    UIPanGestureRecognizer *_gestureRecognizer;	// 48 = 0x30
    id _target;	// 56 = 0x38
    SEL _action;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000b2a07
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)_onPan:(id)arg1;	// IMP=0x00000000000b2642
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000b25b1
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000b24e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
