//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDeviceBattery, GCDeviceLight, GCHapticCapabilityGraph, NSArray, NSSet, NSString, _GCHIDServiceInfo;
@protocol GCAdaptiveTriggersServiceServerInterface, GCBatteryServiceServerInterface, GCGameIntentServiceServerInterface, GCLightServiceServerInterface, GCMotionServiceServerInterface, NSObject><NSCopying><NSSecureCoding, _GCDefaultPhysicalDeviceDelegate, _GCDeviceDriverConnection, _GCDeviceManager, _GCGamepadEventSourceDescription, _GCMotionEventSourceDescription;

__attribute__((visibility("hidden")))
@interface _GCDefaultPhysicalDevice : NSObject
{
    id <_GCDeviceDriverConnection> _driverConnection;	// 8 = 0x8
    id _driverConnectionInvalidationRegistration;	// 16 = 0x10
    id <_GCDeviceDriverConnection> _filterConnection;	// 24 = 0x18
    id _filterConnectionInvalidationRegistration;	// 32 = 0x20
    CDUnknownBlockType _lightComponentServiceConnectedHandler;	// 40 = 0x28
    CDUnknownBlockType _adaptiveTriggersComponentServiceConnectedHandler;	// 48 = 0x30
    CDUnknownBlockType _adaptiveTriggersComponentStatusUpdatedHandler;	// 56 = 0x38
    CDUnknownBlockType _motionComponentServiceConnectedHandler;	// 64 = 0x40
    CDUnknownBlockType _batteryComponentServiceConnectedHandler;	// 72 = 0x48
    CDUnknownBlockType _batteryComponentBatteryUpdatedHandler;	// 80 = 0x50
    long long _cachedIntentEvent;	// 88 = 0x58
    CDUnknownBlockType _gameIntentComponentGameIntentTriggeredHandler;	// 96 = 0x60
    unsigned long long _cachedGlyphFlags;	// 104 = 0x68
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 112 = 0x70
    id <_GCDeviceManager> _manager;	// 120 = 0x78
    id <_GCDefaultPhysicalDeviceDelegate> _delegate;	// 128 = 0x80
    id <GCAdaptiveTriggersServiceServerInterface> _adaptiveTriggersServiceServer;	// 136 = 0x88
    id <GCLightServiceServerInterface> _lightServiceServer;	// 144 = 0x90
    id <GCMotionServiceServerInterface> _motionServiceServer;	// 152 = 0x98
    id <GCBatteryServiceServerInterface> _batteryServiceServer;	// 160 = 0xa0
    id <GCGameIntentServiceServerInterface> _gameIntentServiceServer;	// 168 = 0xa8
    _GCHIDServiceInfo *_serviceInfo;	// 176 = 0xb0
}

+ (id)identifierForService:(id)arg1;	// IMP=0x0010000000068540
- (void).cxx_destruct;	// IMP=0x0000000000068bb9
@property(readonly, nonatomic) _GCHIDServiceInfo *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(readonly, nonatomic) id <GCGameIntentServiceServerInterface> gameIntentServiceServer; // @synthesize gameIntentServiceServer=_gameIntentServiceServer;
@property(readonly, nonatomic) id <GCBatteryServiceServerInterface> batteryServiceServer; // @synthesize batteryServiceServer=_batteryServiceServer;
@property(readonly, nonatomic) id <GCMotionServiceServerInterface> motionServiceServer; // @synthesize motionServiceServer=_motionServiceServer;
@property(readonly, nonatomic) id <GCLightServiceServerInterface> lightServiceServer; // @synthesize lightServiceServer=_lightServiceServer;
@property(readonly, nonatomic) id <GCAdaptiveTriggersServiceServerInterface> adaptiveTriggersServiceServer; // @synthesize adaptiveTriggersServiceServer=_adaptiveTriggersServiceServer;
@property(nonatomic) __weak id <_GCDefaultPhysicalDeviceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak id <_GCDeviceManager> manager; // @synthesize manager=_manager;
@property(readonly, copy) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)updateGlyphFlags;	// IMP=0x00000000000686ca
- (void)eaAccessoriesDidChange;	// IMP=0x000000000006864a
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000000684c1
@property(readonly) NSSet *components;
- (id)driverConnection;	// IMP=0x0000000000068497
- (void)setDriverConnection:(id)arg1;	// IMP=0x0000000000067814
- (void)setFilterConnection:(id)arg1;	// IMP=0x000000000006748c
@property(readonly, copy) NSString *debugDescription;
- (id)redactedDescription;	// IMP=0x000000000006733e
@property(readonly, copy) NSString *description;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000067114
- (void)dealloc;	// IMP=0x000000000006707e
- (id)init;	// IMP=0x0000000000067053
- (void)_workaround_backbone_97462229:(id)arg1;	// IMP=0x0000000000066eb9
- (id)initWithHIDDevice:(id)arg1 manager:(id)arg2;	// IMP=0x0000000000066dc8
@property(readonly) id <_GCGamepadEventSourceDescription> gamepadEventSource;
- (_Bool)supportsGamepad;	// IMP=0x0000000000068cb8
@property(nonatomic) _Bool sensorsActive;
@property(readonly, nonatomic) id <_GCMotionEventSourceDescription> motionEventSource;
@property(copy, nonatomic) CDUnknownBlockType deviceMotionServiceConnectedHandler;
- (_Bool)supportsMotion;	// IMP=0x0000000000068fc2
@property long long indicatedPlayerIndex;
- (_Bool)supportsPlayerIndicator;	// IMP=0x0000000000069340
@property(retain, nonatomic) GCDeviceLight *light;
@property(copy, nonatomic) CDUnknownBlockType deviceLightServiceConnectedHandler;
- (_Bool)supportsLight;	// IMP=0x000000000006943e
@property(readonly, nonatomic) NSArray *triggerStatuses;
@property(copy, nonatomic) CDUnknownBlockType deviceAdaptiveTriggersComponentStatusUpdatedHandler;
- (void)setAdaptiveTriggersPayload:(id)arg1 forIndex:(int)arg2;	// IMP=0x000000000006990e
@property(copy, nonatomic) CDUnknownBlockType deviceAdaptiveTriggersServiceConnectedHandler;
- (_Bool)supportsAdaptiveTriggers;	// IMP=0x00000000000697bc
- (void)updateAdaptiveTriggerStatusWithLeftMode:(unsigned char)arg1 leftStatus:(unsigned char)arg2 leftArmPosition:(unsigned char)arg3 rightMode:(unsigned char)arg4 rightStatus:(unsigned char)arg5 rightArmPosition:(unsigned char)arg6;	// IMP=0x0000000000069b56
@property(readonly, nonatomic) GCDeviceBattery *battery;
@property(copy, nonatomic) CDUnknownBlockType deviceBatteryComponentBatteryUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceBatteryServiceConnectedHandler;
- (_Bool)supportsBattery;	// IMP=0x0000000000069d97
- (void)updateBattery:(unsigned char)arg1 isCharging:(_Bool)arg2;	// IMP=0x000000000006a09f
@property(readonly, nonatomic) GCHapticCapabilityGraph *hapticCapabilityGraph;
@property(readonly, nonatomic) NSArray *hapticEngines;
- (_Bool)supportsHapticCapabilities;	// IMP=0x000000000006a24a
@property(copy, nonatomic) CDUnknownBlockType deviceGameIntentComponentGameIntentTriggeredHandler;
- (void)setEnableGlobalGameControllerFunctionality:(_Bool)arg1;	// IMP=0x000000000006a3a2
- (void)triggerGameIntentWithEvent:(long long)arg1;	// IMP=0x000000000006a419
- (unsigned long long)getGlyphFlags;	// IMP=0x000000000006a617

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

