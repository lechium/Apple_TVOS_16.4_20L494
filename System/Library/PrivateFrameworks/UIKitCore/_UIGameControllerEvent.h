//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIEvent.h"

__attribute__((visibility("hidden")))
@interface _UIGameControllerEvent : UIEvent
{
    CDStruct_a7a14e3b _previousState;	// 32 = 0x20
    unsigned long long _activeComponent;	// 264 = 0x108
}

- (_Bool)_processShoulder:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cf8edf
- (_Bool)_processRightStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cf8e7d
- (_Bool)_processLeftStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cf8e1b
- (_Bool)_processDPad:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cf8dc0
- (_Bool)_processStandardButtons:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cf8ac2
- (_Bool)_determineInputTypeAndProcess:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000cf829d
- (struct CGPoint)_leftStickPosition;	// IMP=0x0000000000cf8284
- (void)_maybeConvertAndSendAsPressesEvent;	// IMP=0x0000000000cf7f02
- (void)_reset;	// IMP=0x0000000000cf7e86
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x0000000000cf7e6b
- (long long)subtype;	// IMP=0x0000000000cf7e63
- (long long)type;	// IMP=0x0000000000cf7e58

@end

