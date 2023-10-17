//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol _GCHIDEventSource;

__attribute__((visibility("hidden")))
@interface _GCKeyboardEventHIDAdapter : NSObject
{
    id <_GCHIDEventSource> _HIDEventSource;	// 8 = 0x8
    id _HIDEventObservation;	// 16 = 0x10
    NSArray *_observers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000021f08
@property(copy) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id HIDEventObservation; // @synthesize HIDEventObservation=_HIDEventObservation;
@property(retain, nonatomic) id <_GCHIDEventSource> HIDEventSource; // @synthesize HIDEventSource=_HIDEventSource;
- (id)observeKeyboardEvents:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021b6b
- (void)dealloc;	// IMP=0x0000000000021b12
- (id)init;	// IMP=0x0000000000021ae7
- (id)initWithSource:(id)arg1 service:(id)arg2;	// IMP=0x00000000000217b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

