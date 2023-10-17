//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WKKeyboardScrollableInternal;

__attribute__((visibility("hidden")))
@interface WKKeyboardScrollingAnimator : NSObject
{
    id <WKKeyboardScrollableInternal> _scrollable;	// 8 = 0x8
    struct RetainPtr<CADisplayLink> _displayLink;	// 16 = 0x10
    optional_383df22c _currentScroll;	// 24 = 0x18
    _Bool _scrollTriggeringKeyIsPressed;	// 56 = 0x38
    struct FloatSize _velocity;	// 60 = 0x3c
    struct FloatPoint _idealPosition;	// 68 = 0x44
    struct FloatPoint _currentPosition;	// 76 = 0x4c
    struct FloatPoint _idealPositionForMinimumTravel;	// 84 = 0x54
}

- (id).cxx_construct;	// IMP=0x000000000036c809
- (void).cxx_destruct;	// IMP=0x000000000036c7e9
- (void)displayLinkFired:(id)arg1;	// IMP=0x000000000036c54d
- (void)stopDisplayLink;	// IMP=0x000000000036c514
- (void)startDisplayLinkIfNeeded;	// IMP=0x000000000036c483
- (void)willStartInteractiveScroll;	// IMP=0x000000000036c44d
- (_Bool)scrollTriggeringKeyIsPressed;	// IMP=0x000000000036c444
- (void)stopAnimatedScroll;	// IMP=0x000000000036c343
- (void)handleKeyEvent:(id)arg1;	// IMP=0x000000000036c2bf
- (_Bool)beginWithEvent:(id)arg1;	// IMP=0x000000000036c0f8
- (optional_383df22c)keyboardScrollForEvent:(id)arg1;	// IMP=0x000000000036be0e
- (void)invalidate;	// IMP=0x000000000036bdd9
- (id)initWithScrollable:(id)arg1;	// IMP=0x000000000036bd9c
- (id)init;	// IMP=0x000000000036bd94

@end

