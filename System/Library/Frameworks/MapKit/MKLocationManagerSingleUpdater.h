//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKLocationManager, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface MKLocationManagerSingleUpdater : NSObject
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    _Bool _active;	// 16 = 0x10
    double _desiredAccuracy;	// 24 = 0x18
    double _timeout;	// 32 = 0x20
    MKLocationManagerSingleUpdater *_selfReference;	// 40 = 0x28
    MKLocationManager *_locationManager;	// 48 = 0x30
    NSTimer *_timeoutTimer;	// 56 = 0x38
    double _maxLocationAge;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000004e6e5
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x000000000004e6b0
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x000000000004e6aa
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x000000000004e6a4
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x000000000004e69e
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x000000000004e696
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x000000000004e690
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x000000000004e638
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x000000000004e54b
- (void)handleTimeout:(id)arg1;	// IMP=0x000000000004e4f2
- (void)cancel;	// IMP=0x000000000004e46f
- (void)start;	// IMP=0x000000000004e3ba
- (void)dealloc;	// IMP=0x000000000004e37c
- (id)initWithLocationManager:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004e35f
- (id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004e2cb
- (id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(CDUnknownBlockType)arg3 timeout:(double)arg4;	// IMP=0x000000000004e2ae
- (id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(CDUnknownBlockType)arg3 timeout:(double)arg4 maxLocationAge:(double)arg5;	// IMP=0x000000000004e1a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
