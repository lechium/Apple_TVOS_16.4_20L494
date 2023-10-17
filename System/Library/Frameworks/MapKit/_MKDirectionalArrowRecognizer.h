//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MKDirectionalArrowRecognizer : NSObject
{
    id _target;	// 8 = 0x8
    SEL _action;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    long long _arrows;	// 32 = 0x20
    long long _lastArrows;	// 40 = 0x28
    long long _modifierFlags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009e53e
@property(nonatomic) long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(readonly, nonatomic) long long lastArrows; // @synthesize lastArrows=_lastArrows;
@property(readonly, nonatomic) long long arrows; // @synthesize arrows=_arrows;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)keyUp:(id)arg1;	// IMP=0x000000000009e440
- (void)keyDown:(id)arg1;	// IMP=0x000000000009e340
- (void)handleArrowMask:(long long)arg1;	// IMP=0x000000000009e283
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000009e19b

@end

