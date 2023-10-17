//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderCore/SCRCGestureEvent.h>

@class AXEventRepresentation;

@interface VOTGestureEvent : SCRCGestureEvent
{
    AXEventRepresentation *_eventRepresentation;	// 8 = 0x8
}

+ (id)gestureEventWithEventRepresentation:(id)arg1;	// IMP=0x0040000000061b77
- (void).cxx_destruct;	// IMP=0x00200000000624a9
@property(retain, nonatomic) AXEventRepresentation *eventRepresentation; // @synthesize eventRepresentation=_eventRepresentation;
- (_Bool)didFallThruToDevice;	// IMP=0x0010000000062474
- (void)_addFingerInformation;	// IMP=0x0010000000062160
- (_Bool)isStylusEvent;	// IMP=0x0010000000062111
- (_Bool)isMovedEvent;	// IMP=0x00100000000620a3
- (_Bool)isDownEvent;	// IMP=0x0010000000062030
- (_Bool)isNonLiftingInRangeEvent;	// IMP=0x0010000000061fbc
- (_Bool)_isBogusTouchEvent;	// IMP=0x0010000000061f37
- (_Bool)_eventMaskHasTouch;	// IMP=0x0010000000061e72
- (_Bool)isLiftEvent;	// IMP=0x0010000000061df0
- (_Bool)isCancelEvent;	// IMP=0x0010000000061d9d
- (void);	// IMP=0x0010000000061d45
- (id)description;	// IMP=0x0010000000061c96
- (void)dealloc;	// IMP=0x0010000000061c56
- (id)_initWithDeviceIdentifier:(unsigned long long)arg1 andEventRepresentation:(id)arg2;	// IMP=0x0010000000061be2

@end
