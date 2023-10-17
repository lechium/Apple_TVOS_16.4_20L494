//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface XCPointerEvent : NSObject
{
    _Bool _mergeModifierFlagsWithCurrentFlags;	// 8 = 0x8
    _Bool _shouldRedact;	// 9 = 0x9
    unsigned long long _eventType;	// 16 = 0x10
    unsigned long long _buttonType;	// 24 = 0x18
    double _pressure;	// 32 = 0x20
    unsigned long long _gestureStage;	// 40 = 0x28
    double _offset;	// 48 = 0x30
    double _duration;	// 56 = 0x38
    long long _verticalLineScroll;	// 64 = 0x40
    unsigned long long _clickCount;	// 72 = 0x48
    unsigned long long _keyModifierFlags;	// 80 = 0x50
    NSString *_key;	// 88 = 0x58
    NSString *_string;	// 96 = 0x60
    unsigned long long _typingSpeed;	// 104 = 0x68
    unsigned long long _keyCode;	// 112 = 0x70
    unsigned long long _keyPhase;	// 120 = 0x78
    unsigned long long _gesturePhase;	// 128 = 0x80
    unsigned long long _deviceID;	// 136 = 0x88
    struct CGPoint _coordinate;	// 144 = 0x90
    struct CGPoint _destination;	// 160 = 0xa0
    struct CGVector _deltaVector;	// 176 = 0xb0
}

+ (CDUnknownBlockType)offsetComparator;	// IMP=0x0020000000006d32
+ (id)keyboardEventForKeyCode:(unsigned long long)arg1 keyPhase:(unsigned long long)arg2 modifierFlags:(unsigned long long)arg3 offset:(double)arg4 shouldRedact:(_Bool)arg5;	// IMP=0x0010000000006c7f
+ (id)keyboardEventForKeyCode:(unsigned long long)arg1 keyPhase:(unsigned long long)arg2 modifierFlags:(unsigned long long)arg3 offset:(double)arg4;	// IMP=0x0010000000006c67
+ (id)textEventForString:(id)arg1 offset:(double)arg2 typingSpeed:(unsigned long long)arg3 shouldRedact:(_Bool)arg4;	// IMP=0x0010000000006ad9
+ (id)textEventForString:(id)arg1 offset:(double)arg2 typingSpeed:(unsigned long long)arg3;	// IMP=0x0010000000006ac4
+ (id)textEventForKey:(id)arg1 withModifierFlags:(unsigned long long)arg2 offset:(double)arg3;	// IMP=0x0010000000006a27
+ (id)textEventForModifierFlags:(unsigned long long)arg1 mergeWithCurrent:(_Bool)arg2 offset:(double)arg3;	// IMP=0x001000000000699f
+ (id)moveEventWithStartPoint:(struct CGPoint)arg1 destination:(struct CGPoint)arg2 offset:(double)arg3 duration:(double)arg4;	// IMP=0x00100000000068ec
+ (id)dragEventWithCoordinate:(struct CGPoint)arg1 destination:(struct CGPoint)arg2 offset:(double)arg3 duration:(double)arg4;	// IMP=0x0010000000006839
+ (id)scrollEventAtPoint:(struct CGPoint)arg1 lines:(long long)arg2 offset:(double)arg3;	// IMP=0x00100000000067a7
+ (id)gestureSwipeEventWithDeltaVector:(struct CGVector)arg1 offset:(double)arg2 duration:(double)arg3 phase:(unsigned long long)arg4;	// IMP=0x00100000000066fe
+ (id)scrollEventWithDeltaVector:(struct CGVector)arg1 offset:(double)arg2 duration:(double)arg3;	// IMP=0x001000000000666c
+ (id)eventWithType:(unsigned long long)arg1 buttonType:(unsigned long long)arg2 coordinate:(struct CGPoint)arg3 pressure:(double)arg4 gestureStage:(double)arg5 offset:(double)arg6 duration:(double)arg7 clickCount:(unsigned long long)arg8 gesturePhase:(unsigned long long)arg9;	// IMP=0x0010000000006434
+ (id)eventWithType:(unsigned long long)arg1 buttonType:(unsigned long long)arg2 coordinate:(struct CGPoint)arg3 pressure:(double)arg4 offset:(double)arg5 duration:(double)arg6 clickCount:(unsigned long long)arg7;	// IMP=0x00100000000063ba
+ (id)eventWithType:(unsigned long long)arg1 buttonType:(unsigned long long)arg2 coordinate:(struct CGPoint)arg3 offset:(double)arg4 duration:(double)arg5 clickCount:(unsigned long long)arg6;	// IMP=0x001000000000634d
+ (id)eventWithType:(unsigned long long)arg1 buttonType:(unsigned long long)arg2 coordinate:(struct CGPoint)arg3 offset:(double)arg4 clickCount:(unsigned long long)arg5;	// IMP=0x00100000000062e7
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000062df
- (void).cxx_destruct;	// IMP=0x0020000000008697
@property unsigned long long deviceID; // @synthesize deviceID=_deviceID;
@property unsigned long long gesturePhase; // @synthesize gesturePhase=_gesturePhase;
@property unsigned long long keyPhase; // @synthesize keyPhase=_keyPhase;
@property unsigned long long keyCode; // @synthesize keyCode=_keyCode;
@property _Bool shouldRedact; // @synthesize shouldRedact=_shouldRedact;
@property unsigned long long typingSpeed; // @synthesize typingSpeed=_typingSpeed;
@property(copy) NSString *string; // @synthesize string=_string;
@property(copy) NSString *key; // @synthesize key=_key;
@property _Bool mergeModifierFlagsWithCurrentFlags; // @synthesize mergeModifierFlagsWithCurrentFlags=_mergeModifierFlagsWithCurrentFlags;
@property unsigned long long keyModifierFlags; // @synthesize keyModifierFlags=_keyModifierFlags;
@property unsigned long long clickCount; // @synthesize clickCount=_clickCount;
@property long long verticalLineScroll; // @synthesize verticalLineScroll=_verticalLineScroll;
@property double duration; // @synthesize duration=_duration;
@property struct CGVector deltaVector; // @synthesize deltaVector=_deltaVector;
@property double offset; // @synthesize offset=_offset;
@property unsigned long long gestureStage; // @synthesize gestureStage=_gestureStage;
@property double pressure; // @synthesize pressure=_pressure;
@property struct CGPoint destination; // @synthesize destination=_destination;
@property struct CGPoint coordinate; // @synthesize coordinate=_coordinate;
@property unsigned long long buttonType; // @synthesize buttonType=_buttonType;
@property unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)description;	// IMP=0x0010000000008017
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000007cd8
- (unsigned long long)hash;	// IMP=0x0010000000007c61
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000767f
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000006e15
- (id)init;	// IMP=0x0010000000006de6

@end
