//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray;

@interface XCPointerEventPath : NSObject
{
    NSMutableArray *_pointerEvents;	// 8 = 0x8
    _Bool _immutable;	// 16 = 0x10
    unsigned long long _pathType;	// 24 = 0x18
    unsigned long long _index;	// 32 = 0x20
    unsigned long long _deviceID;	// 40 = 0x28
    NSData *_eventStream;	// 48 = 0x30
    double _speedFactor;	// 56 = 0x38
    struct CGPoint _initialMouseLocation;	// 64 = 0x40
    struct CGRect _targetFrame;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000431c
- (void).cxx_destruct;	// IMP=0x00200000000062b7
@property _Bool immutable; // @synthesize immutable=_immutable;
@property(readonly) double speedFactor; // @synthesize speedFactor=_speedFactor;
@property(readonly) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(readonly) NSData *eventStream; // @synthesize eventStream=_eventStream;
@property unsigned long long deviceID; // @synthesize deviceID=_deviceID;
@property unsigned long long index; // @synthesize index=_index;
@property(readonly) struct CGPoint initialMouseLocation; // @synthesize initialMouseLocation=_initialMouseLocation;
@property(readonly) unsigned long long pathType; // @synthesize pathType=_pathType;
- (id)description;	// IMP=0x0010000000006109
- (id)firstEventAfterOffset:(double)arg1;	// IMP=0x0010000000005fc3
- (id)lastEventBeforeOffset:(double)arg1;	// IMP=0x0010000000005e5b
- (id)firstEventAtOffset:(double)arg1;	// IMP=0x0010000000005cff
- (void)_addPointerEvent:(id)arg1;	// IMP=0x0010000000005c0d
- (void)setModifiers:(unsigned long long)arg1 mergeWithCurrentModifierFlags:(_Bool)arg2 atOffset:(double)arg3;	// IMP=0x0010000000005bba
- (void)typeKey:(id)arg1 modifiers:(unsigned long long)arg2 atOffset:(double)arg3;	// IMP=0x0010000000005b67
- (void)typeText:(id)arg1 atOffset:(double)arg2 typingSpeed:(unsigned long long)arg3 shouldRedact:(_Bool)arg4;	// IMP=0x0010000000005b14
- (void)scrollAtPoint:(struct CGPoint)arg1 byLines:(long long)arg2 atOffset:(double)arg3;	// IMP=0x0010000000005ac1
- (void)gestureSwipeWithDeltaVector:(struct CGVector)arg1 atOffset:(double)arg2 duration:(double)arg3;	// IMP=0x0010000000005a6c
- (void)scrollWithDeltaVector:(struct CGVector)arg1 atOffset:(double)arg2 duration:(double)arg3;	// IMP=0x0010000000005a19
- (void)releaseButton:(unsigned long long)arg1 atOffset:(double)arg2 clickCount:(unsigned long long)arg3;	// IMP=0x001000000000595a
- (void)dragWithButton:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2 atOffset:(double)arg3 duration:(double)arg4;	// IMP=0x00100000000056c2
- (void)pressButton:(unsigned long long)arg1 atOffset:(double)arg2 clickCount:(unsigned long long)arg3;	// IMP=0x0010000000005603
- (void)liftUpAtOffset:(double)arg1;	// IMP=0x001000000000554f
- (void)moveMouseToPoint:(struct CGPoint)arg1 atOffset:(double)arg2 duration:(double)arg3;	// IMP=0x001000000000528d
- (void)moveToPoint:(struct CGPoint)arg1 atOffset:(double)arg2;	// IMP=0x00100000000050f5
- (void)pressDownWithPressure:(double)arg1 stage:(unsigned long long)arg2 phase:(unsigned long long)arg3 atOffset:(double)arg4;	// IMP=0x001000000000500e
- (void)pressDownWithPressure:(double)arg1 atOffset:(double)arg2;	// IMP=0x0010000000004ff8
- (void)pressDownAtOffset:(double)arg1;	// IMP=0x0010000000004f44
@property(readonly) double maximumOffset;
@property(readonly) NSArray *pointerEvents;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000004db2
- (unsigned long long)hash;	// IMP=0x0010000000004d82
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000004b1e
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000004776
- (id)initForEventStream:(id)arg1 frame:(struct CGRect)arg2 speed:(double)arg3;	// IMP=0x00100000000046db
- (id)initForTouchBarAtPoint:(struct CGPoint)arg1 offset:(double)arg2;	// IMP=0x0010000000004589
- (id)initForTextInput;	// IMP=0x0010000000004530
- (id)initForMouseEventsWithDeviceID:(unsigned long long)arg1 atLocation:(struct CGPoint)arg2;	// IMP=0x00100000000044ae
- (id)initForMouseEventsAtLocation:(struct CGPoint)arg1;	// IMP=0x001000000000449a
- (id)initForMouseEvents;	// IMP=0x0010000000004476
- (id)initForTouchAtPoint:(struct CGPoint)arg1 offset:(double)arg2;	// IMP=0x0010000000004324

@end

