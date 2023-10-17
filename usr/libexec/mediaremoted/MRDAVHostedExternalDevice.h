//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVDistantEndpoint, MRAVRoutingDiscoverySession, MRDConnectionLifetimeController, MRExternalDevice, MRExternalOutputContextDataSource, MROrigin, NSArray, NSDate, NSError, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface MRDAVHostedExternalDevice : NSObject
{
    _Bool _useOutputDeviceCache;	// 8 = 0x8
    _Bool _tombstoned;	// 9 = 0x9
    NSArray *_subscribedPlayerPaths;	// 16 = 0x10
    MRExternalDevice *_externalDevice;	// 24 = 0x18
    MRAVDistantEndpoint *_endpoint;	// 32 = 0x20
    NSXPCListener *_xpcListener;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_externalDeviceCallbackQueue;	// 56 = 0x38
    NSMutableSet *_mutableExternalDeviceClients;	// 64 = 0x40
    MRExternalOutputContextDataSource *_externalOutputContext;	// 72 = 0x48
    MRAVRoutingDiscoverySession *_silentDiscoverySession;	// 80 = 0x50
    NSError *_canMigrateToLocalEndpointError;	// 88 = 0x58
    MRDConnectionLifetimeController *_lifetimeController;	// 96 = 0x60
    NSDate *_canMigrateEvaluationTimestamp;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000008820b
@property(retain, nonatomic) NSDate *canMigrateEvaluationTimestamp; // @synthesize canMigrateEvaluationTimestamp=_canMigrateEvaluationTimestamp;
@property(retain, nonatomic) MRDConnectionLifetimeController *lifetimeController; // @synthesize lifetimeController=_lifetimeController;
@property(retain, nonatomic) NSError *canMigrateToLocalEndpointError; // @synthesize canMigrateToLocalEndpointError=_canMigrateToLocalEndpointError;
@property(retain, nonatomic) MRAVRoutingDiscoverySession *silentDiscoverySession; // @synthesize silentDiscoverySession=_silentDiscoverySession;
@property(nonatomic) _Bool tombstoned; // @synthesize tombstoned=_tombstoned;
@property(nonatomic) _Bool useOutputDeviceCache; // @synthesize useOutputDeviceCache=_useOutputDeviceCache;
@property(readonly, nonatomic) MRExternalOutputContextDataSource *externalOutputContext; // @synthesize externalOutputContext=_externalOutputContext;
@property(retain, nonatomic) NSMutableSet *mutableExternalDeviceClients; // @synthesize mutableExternalDeviceClients=_mutableExternalDeviceClients;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceCallbackQueue; // @synthesize externalDeviceCallbackQueue=_externalDeviceCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(readonly, nonatomic) MRAVDistantEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSArray *subscribedPlayerPaths; // @synthesize subscribedPlayerPaths=_subscribedPlayerPaths;
- (_Bool)_onSerialQueue_isEndpointsDesignatedGroupLeader:(id)arg1;	// IMP=0x0010000000088079
- (_Bool)_endpointIsSolo:(id)arg1;	// IMP=0x001000000008805c
- (_Bool)_endpointSupportsVolumeControl:(id)arg1;	// IMP=0x0010000000087fad
- (_Bool)_endpointShouldNotifyClientsOfTopologyChanges:(id)arg1;	// IMP=0x0010000000087f90
- (_Bool)_endpointShouldPostVolumeNotifications:(id)arg1 outputDevice:(id)arg2;	// IMP=0x0010000000087e7d
- (void)_onSerialQueue_reevaluateVolumeControlCapabilitiesForEndpoint:(id)arg1;	// IMP=0x0010000000087899
- (void)_maybePostEndpointDidRemoveOutputDevice:(id)arg1;	// IMP=0x0010000000087776
- (void)_maybePostEndpointDidChangeOutputDevice:(id)arg1;	// IMP=0x0010000000087653
- (void)_maybePostVolumeDidChange:(float)arg1 outputDevice:(id)arg2;	// IMP=0x0010000000087523
- (void)_maybePostVolumeControlCapabilitiesDidChange:(unsigned int)arg1 outputDevice:(id)arg2;	// IMP=0x00100000000873f2
- (void)_maybePostEndpointDidAddOutputDevice:(id)arg1;	// IMP=0x00100000000872cf
- (void)_reloadHostedExternalDeviceSubscribedPlayerPaths;	// IMP=0x0010000000086fdf
- (void)_reloadHostedExternalDeviceNotifications;	// IMP=0x0010000000086d63
- (void)_reloadHostedExternalDeviceCallbacks;	// IMP=0x0010000000086959
- (void)_reloadEndpoint;	// IMP=0x0010000000086860
- (void)registerForOutputContextNotifications:(id)arg1;	// IMP=0x0010000000086750
- (void)_initializeExternalDevice:(id)arg1;	// IMP=0x0010000000085aa2
- (id)_connectingExternalDeviceClients;	// IMP=0x0010000000085a36
- (id)_connectedExternalDeviceClients;	// IMP=0x00100000000859ca
- (id)_mutableExternalDeviceClientsWithRegisteredNotification:(unsigned long long)arg1;	// IMP=0x0010000000085910
- (id)_mutableExternalDeviceClientsWithRegisteredCallbacks:(unsigned long long)arg1;	// IMP=0x0010000000085853
- (id)_allExternalDeviceClients;	// IMP=0x0010000000085730
- (id)_externalDeviceClientForConnection:(id)arg1;	// IMP=0x0010000000085482
- (void)_externalDeviceClientDidInvalidate:(id)arg1;	// IMP=0x00100000000851b7
- (void)discoveryOutputDevicesChanged:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x00100000000851b1
- (void)hostedExternalDeviceDidRemoveOutputDevice:(id)arg1;	// IMP=0x0010000000084fca
- (void)hostedExternalDeviceDidChangeOutputDevice:(id)arg1;	// IMP=0x0010000000084de3
- (void)hostedExternalDeviceDidAddOutputDevice:(id)arg1;	// IMP=0x0010000000084bfc
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forOutputDevice:(id)arg2;	// IMP=0x0010000000084a1e
- (void)hostedExternalDeviceVolumeCapabilitiesDidChange:(unsigned int)arg1 forOutputDevice:(id)arg2;	// IMP=0x0010000000084825
- (void)hostedExternalDeviceEndpointDidChange:(id)arg1;	// IMP=0x001000000008453a
- (void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x001000000008432e
- (void)hostedExternalDeviceNameDidChange:(id)arg1;	// IMP=0x0010000000084178
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(id)arg2;	// IMP=0x0010000000083f11
- (void)outputContextDataSourceDidRemoveOutputDevice:(id)arg1;	// IMP=0x0010000000083e6e
- (void)outputContextDataSourceDidChangeOutputDevice:(id)arg1;	// IMP=0x0010000000083dcb
- (void)outputContextDataSourceDidAddOutputDevice:(id)arg1;	// IMP=0x0010000000083d28
- (void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg1;	// IMP=0x0010000000083c27
- (void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg1;	// IMP=0x0010000000083b22
- (void)_processCanMigrateToLocalEndpointEvent:(id)arg1 timestamp:(id)arg2 error:(id)arg3;	// IMP=0x0010000000083713
- (void)_handleMaybeCanMigrateToLocalEndpointDidChange:(id)arg1;	// IMP=0x0010000000082dd5
- (void)_handleExternalDeviceConnectionDidChange:(id)arg1;	// IMP=0x0010000000082ade
- (void)disconnectOrigin:(id)arg1;	// IMP=0x0010000000082a68
@property(readonly, nonatomic) MROrigin *origin;
- (void)expanseManagerTelevisionDidLeaveSession:(id)arg1;	// IMP=0x0010000000082978
- (void)expanseManagerTelevisionDidJoinSession:(id)arg1;	// IMP=0x00100000000828d8
- (void)getExternalOutputContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000828c6
- (void)setDiscoveryMode:(unsigned int)arg1 forConfiguration:(id)arg2;	// IMP=0x00100000000826ac
- (void)getPersonalOutputDevices:(CDUnknownBlockType)arg1;	// IMP=0x0010000000082628
- (void)sendButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 down:(_Bool)arg3;	// IMP=0x00100000000825c5
- (void)pingWithTimeout:(double)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0010000000082363
- (void)sendCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000821e7
- (void)createHostedEndpointWithOutputDeviceUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081fd8
- (void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterDeviceUIDs:(id)arg4 removingClusterDeviceUIDs:(id)arg5 settingClusterDeviceUIDs:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000081cf0
- (void)setListeningMode:(id)arg1 outputDeviceUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000081c4f
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081972
- (void)outputDeviceVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081687
- (void)setOutputDeviceVolume:(float)arg1 forOutputDevice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000812d7
- (void)unpair;	// IMP=0x00100000000811b4
- (void)disconnect:(id)arg1;	// IMP=0x0010000000081072
- (void)connectWithOptions:(unsigned int)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000080694
- (void)setNotifications:(unsigned long long)arg1;	// IMP=0x001000000008041f
- (unsigned long long)notifications;	// IMP=0x00100000000803a4
- (void)setRegisteredCallbacks:(unsigned long long)arg1;	// IMP=0x0010000000080264
- (unsigned long long)registeredCallbacks;	// IMP=0x00100000000801e9
- (void)getConnectionStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000080172
- (void)getCustomOriginDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000800a4
- (void)getExternalDeviceIsPairedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000080033
- (void)getExternalDeviceMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007feba
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000007f787
@property(readonly, nonatomic) NSArray *personalOutputDevices;
- (void)tombstone;	// IMP=0x001000000007f354
@property(readonly, nonatomic) NSString *outputDeviceUID;
- (id)externalDeviceClients;	// IMP=0x001000000007f141
// Error: Property attributes should begin with the type ('T') attribute, property name: externalDeviceListenerEndpoint
// Property attributes: (null)

@property(readonly, nonatomic) MRExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000007eb26
- (id)initWithExternalDevice:(id)arg1;	// IMP=0x001000000007e99e

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
