//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, UIGestureRecognizer;

@interface _PBSystemGestureActivationContext : NSObject
{
    UIGestureRecognizer *_gestureRecognizer;	// 8 = 0x8
    struct __IOHIDEvent *_HIDEvent;	// 16 = 0x10
    unsigned long long _gestureRecognizerType;	// 24 = 0x18
    long long _state;	// 32 = 0x20
}

+ (id)contextWithGestureRecognizer:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x002000000008e84e
+ (id)indirectActivationContext;	// IMP=0x001000000008e821
+ (id)cancellationContext;	// IMP=0x001000000008e7f4
- (void).cxx_destruct;	// IMP=0x002000000008ece3
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long gestureRecognizerType; // @synthesize gestureRecognizerType=_gestureRecognizerType;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000008ebd7
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000008eb86
- (id)succinctDescriptionBuilder;	// IMP=0x001000000008ead0
- (id)succinctDescription;	// IMP=0x001000000008ea7f
- (void)invalidate;	// IMP=0x001000000008ea47
@property(readonly, nonatomic) NSNumber *timestamp;
@property(readonly, nonatomic) unsigned long long senderID;
@property(readonly, nonatomic, getter=isSystemGestureCancellation) _Bool systemGestureCancellation;
@property(readonly, nonatomic) struct __IOHIDEvent *HIDEvent; // @synthesize HIDEvent=_HIDEvent;
- (void)dealloc;	// IMP=0x001000000008e93e
- (id)initWithGestureRecognizer:(id)arg1 state:(long long)arg2 type:(unsigned long long)arg3;	// IMP=0x001000000008e8bd

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
