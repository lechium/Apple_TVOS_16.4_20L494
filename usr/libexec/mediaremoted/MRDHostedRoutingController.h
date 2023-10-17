//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRDHostedExternalDeviceManager, MRDRemoteControlDiscoverySession, MRDeviceInfo, NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MRDHostedRoutingController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;	// 16 = 0x10
    NSHashTable *_weakObservers;	// 24 = 0x18
    NSDictionary *_hostsByGroupID;	// 32 = 0x20
    NSDictionary *_availableOutputDevices;	// 40 = 0x28
    NSArray *_endpoints;	// 48 = 0x30
    NSArray *_distantOutputDevices;	// 56 = 0x38
    MRAVEndpoint *_localEndpoint;	// 64 = 0x40
    id _discoverySessionOutputDevicesToken;	// 72 = 0x48
    id _discoverySessionEndpointsToken;	// 80 = 0x50
    MRDHostedExternalDeviceManager *_externalDeviceManager;	// 88 = 0x58
    MRDRemoteControlDiscoverySession *_discoverySession;	// 96 = 0x60
    NSMutableDictionary *_virtualOutputDeviceDictionary;	// 104 = 0x68
    MRDeviceInfo *_deviceInfo;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000a19a3
@property(retain, nonatomic) MRDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) NSMutableDictionary *virtualOutputDeviceDictionary; // @synthesize virtualOutputDeviceDictionary=_virtualOutputDeviceDictionary;
@property(retain, nonatomic) MRDRemoteControlDiscoverySession *discoverySession; // @synthesize discoverySession=_discoverySession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (id)filterOutputDevices:(id)arg1 remoteControllableOnly:(_Bool)arg2;	// IMP=0x00100000000a11a0
- (id)resolveOutputDevices:(id)arg1;	// IMP=0x00100000000a0e7b
- (id)computeHostsByGroupIDForOutputDevices:(id)arg1 unclusteredDevices:(id)arg2;	// IMP=0x00100000000a06fb
- (void)hostedExternalDeviceManagerDidUpdateExternalDeviceMapping:(id)arg1;	// IMP=0x00100000000a067d
- (void)_processDiscoveryObserverChanges;	// IMP=0x00100000000a001d
- (void)_handleOutputContextManagerDidReset:(id)arg1;	// IMP=0x001000000009fd8e
- (void)_handleEndpointOutputDevicesDidChangeNotification:(id)arg1;	// IMP=0x001000000009fd2d
- (void)_handleObserverDiscoveryModeDidChangeNotification:(id)arg1;	// IMP=0x001000000009fd1b
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x001000000009fc3e
- (void)_onQueue_reloadWithOutputDevices:(id)arg1;	// IMP=0x001000000009f49d
- (id)_onQueue_determineGroupLeaderForOutputDevices:(id)arg1 availableOutputDevices:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x001000000009e3bf
- (void)_onQueue_reloadOutputDevices;	// IMP=0x001000000009e30a
- (void)removeVirtualOutputDevicesForClient:(id)arg1;	// IMP=0x001000000009e1f2
- (void)addVirtualOutputDevice:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000009dff9
@property(readonly, nonatomic) NSArray *virtualOutputDevices;
- (id)determineGroupLeaderForOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000009dc87
- (id)_onQueue_makeHostedExternalDeviceForEndpoint:(id)arg1 didCreate:(_Bool *)arg2;	// IMP=0x001000000009d8e1
- (id)externalDeviceForOutputDeviceUID:(id)arg1;	// IMP=0x001000000009d8d4
- (id)externalDeviceForEndpoint:(id)arg1;	// IMP=0x001000000009d6a6
- (void)removeObserver:(id)arg1;	// IMP=0x001000000009d5eb
- (void)addObserver:(id)arg1;	// IMP=0x001000000009d530
@property(readonly, nonatomic) NSArray *availableDistantAudioOutputDevices;
@property(readonly, nonatomic) NSArray *availableOutputDevices;
@property(readonly, nonatomic) NSArray *availableDistantOutputDevices;
@property(readonly, nonatomic) NSDictionary *availableExternalDevices;
@property(readonly, nonatomic) NSArray *availableEndpoints;
@property(readonly, nonatomic) unsigned int discoveryMode;
@property(readonly, nonatomic) _Bool devicePresenceDetected;
- (id)makeEndpointWithOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000009d0a1
- (id)_onQueue_makeExternalDeviceTransportForEndpoint:(id)arg1 designatedGroupLeader:(id)arg2;	// IMP=0x001000000009d002
- (void)_onQueue_reloadEndpoints;	// IMP=0x001000000009cf79
- (id)createDiscoverySession;	// IMP=0x001000000009cef0
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x001000000009cdd4
- (id)init;	// IMP=0x001000000009cdc0
- (id)initWithDiscoverySession:(id)arg1;	// IMP=0x001000000009c83b

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
