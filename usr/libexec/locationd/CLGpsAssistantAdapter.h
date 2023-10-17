//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGpsAssistantAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000009a2876
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009a285d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009a2800
- (void)setTunnelEndPointPositionAssistance:(struct TunnelEndPositionAssistance)arg1;	// IMP=0x00200000009a319f
- (void)setTunnelBridgeAssistance:(struct TunnelBridgeAssistance)arg1;	// IMP=0x00100000009a3107
- (void)setMapMatchedPositionAssistance:(struct MapMatchedPositionAssistance)arg1;	// IMP=0x00100000009a306f
- (void)setDirectionOfTravelAssistance:(struct DirectionOfTravelAssistance)arg1;	// IMP=0x00100000009a2fb7
- (void)setVehicleGyroAssistance:(double)arg1 vehicleGyro:(CDStruct_15521927)arg2;	// IMP=0x00100000009a2d3b
- (void)setVehicleSpeedAssistance:(double)arg1 vehicleSpeed:(CDStruct_5e97c62c)arg2;	// IMP=0x00100000009a2a8a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009a2a62
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000009a2a35
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009a2a0d
- (void *)adaptee;	// IMP=0x00100000009a29da
- (void)endService;	// IMP=0x00100000009a29bf
- (void)beginService;	// IMP=0x00100000009a290f
- (id)init;	// IMP=0x00100000009a28d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
