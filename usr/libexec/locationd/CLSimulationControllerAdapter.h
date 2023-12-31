//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString, NSXPCConnection, NSXPCListener;

@interface CLSimulationControllerAdapter : CLIntersiloService
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    void *_controller;	// 24 = 0x18
}

+ (id)getSilo;	// IMP=0x002000000056c3ed
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000056c3d4
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000056c377
@property(nonatomic) void *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000056d9f2
- (void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4;	// IMP=0x001000000056d897
- (void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4;	// IMP=0x001000000056d725
- (void)getFencesForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000056d5c2
- (void)simulateSignificantLocationChange:(id)arg1;	// IMP=0x001000000056d48e
- (void)simulateVisit:(id)arg1;	// IMP=0x001000000056d389
- (void)setLocationTravellingSpeed:(double)arg1;	// IMP=0x001000000056d289
- (void)setLocationInterval:(double)arg1;	// IMP=0x001000000056d18f
- (void)setIntermediateLocationDistance:(double)arg1;	// IMP=0x001000000056d095
- (void)setLocationRepeatBehavior:(unsigned char)arg1;	// IMP=0x001000000056cfb0
- (void)setLocationDeliveryBehavior:(unsigned char)arg1;	// IMP=0x001000000056cebb
- (void)clearSimulatedLocations;	// IMP=0x001000000056ce91
- (void)appendSimulatedLocations:(id)arg1;	// IMP=0x001000000056cbd5
- (void)setSimulationScenario:(id)arg1;	// IMP=0x001000000056cb70
- (void)startLocationSimulation;	// IMP=0x001000000056c9b1
- (void)stopLocationSimulation;	// IMP=0x001000000056c807
- (void)isInEmegencyState:(_Bool)arg1;	// IMP=0x001000000056c6f6
- (void)shutdown;	// IMP=0x001000000056c6ea
- (void)endService;	// IMP=0x001000000056c6ac
- (void)beginService;	// IMP=0x001000000056c486
- (id)init;	// IMP=0x001000000056c449

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

