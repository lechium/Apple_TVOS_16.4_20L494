//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalDevice.h>

@class MRDeviceInfo, MRExternalClientConnection, MRExternalDeviceTransport, MROSTransaction, MROrigin, NSArray, NSDate, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDTransportExternalDevice : MRExternalDevice
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 16 = 0x10
    _Bool _wantsNowPlayingNotifications;	// 24 = 0x18
    _Bool _wantsNowPlayingArtworkNotifications;	// 25 = 0x19
    _Bool _wantsVolumeNotifications;	// 26 = 0x1a
    _Bool _wantsOutputDeviceNotifications;	// 27 = 0x1b
    _Bool _wantsSystemEndpointNotifications;	// 28 = 0x1c
    _Bool _wantsEndpointChangeNotifications;	// 29 = 0x1d
    _Bool _usingSystemPairing;	// 30 = 0x1e
    NSDate *_connectionStateTimestamp;	// 32 = 0x20
    unsigned int _connectionState;	// 40 = 0x28
    unsigned int _connectionOptions;	// 44 = 0x2c
    unsigned long long _reconnectionAttemptCount;	// 48 = 0x30
    _Bool _forceReconnectOnConnectionFailure;	// 56 = 0x38
    _Bool _disconnecting;	// 57 = 0x39
    _Bool _isClientSyncActive;	// 58 = 0x3a
    MROSTransaction *_transaction;	// 64 = 0x40
    NSArray *_subscribedPlayerPaths;	// 72 = 0x48
    NSDate *_originalConnectionStartDate;	// 80 = 0x50
    NSString *_connectionUID;	// 88 = 0x58
    _Bool _isCallingClientCallback;	// 96 = 0x60
    MRExternalClientConnection *_clientConnection;	// 104 = 0x68
    MROrigin *_customOrigin;	// 112 = 0x70
    MRDeviceInfo *_deviceInfo;	// 120 = 0x78
    long long _connectionRecoveryBehavior;	// 128 = 0x80
    MRExternalDeviceTransport *_transport;	// 136 = 0x88
    CDUnknownBlockType _pairingCallback;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_pairingCallbackQueue;	// 152 = 0x98
    CDUnknownBlockType _connectionStateCallback;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;	// 168 = 0xa8
    CDUnknownBlockType _nameCallback;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_nameCallbackQueue;	// 184 = 0xb8
    CDUnknownBlockType _pairingAllowedCallback;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_pairingAllowedCallbackQueue;	// 200 = 0xc8
    CDUnknownBlockType _customDataCallback;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_customDataCallbackQueue;	// 216 = 0xd8
    CDUnknownBlockType _outputDevicesUpdatedCallback;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_outputDevicesUpdatedCallbackQueue;	// 232 = 0xe8
    CDUnknownBlockType _outputDevicesRemovedCallback;	// 240 = 0xf0
    NSObject<OS_dispatch_queue> *_outputDevicesRemovedCallbackQueue;	// 248 = 0xf8
    CDUnknownBlockType _volumeCallback;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_volumeCallbackQueue;	// 264 = 0x108
    CDUnknownBlockType _volumeControlCapabilitiesCallback;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_volumeControlCapabilitiesCallbackQueue;	// 280 = 0x118
    NSObject<OS_dispatch_queue> *_outputContextCallbackQueue;	// 288 = 0x120
    NSObject<OS_dispatch_queue> *_workerQueue;	// 296 = 0x128
    NSMutableArray *_pendingConnectCompletionHandlers;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x0020000000065f3a
@property(retain, nonatomic) NSMutableArray *pendingConnectCompletionHandlers; // @synthesize pendingConnectCompletionHandlers=_pendingConnectCompletionHandlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputContextCallbackQueue; // @synthesize outputContextCallbackQueue=_outputContextCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeControlCapabilitiesCallbackQueue; // @synthesize volumeControlCapabilitiesCallbackQueue=_volumeControlCapabilitiesCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeControlCapabilitiesCallback; // @synthesize volumeControlCapabilitiesCallback=_volumeControlCapabilitiesCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue; // @synthesize volumeCallbackQueue=_volumeCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeCallback; // @synthesize volumeCallback=_volumeCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesRemovedCallbackQueue; // @synthesize outputDevicesRemovedCallbackQueue=_outputDevicesRemovedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesRemovedCallback; // @synthesize outputDevicesRemovedCallback=_outputDevicesRemovedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesUpdatedCallbackQueue; // @synthesize outputDevicesUpdatedCallbackQueue=_outputDevicesUpdatedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesUpdatedCallback; // @synthesize outputDevicesUpdatedCallback=_outputDevicesUpdatedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *customDataCallbackQueue; // @synthesize customDataCallbackQueue=_customDataCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType customDataCallback; // @synthesize customDataCallback=_customDataCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingAllowedCallbackQueue; // @synthesize pairingAllowedCallbackQueue=_pairingAllowedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType pairingAllowedCallback; // @synthesize pairingAllowedCallback=_pairingAllowedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nameCallbackQueue; // @synthesize nameCallbackQueue=_nameCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType nameCallback; // @synthesize nameCallback=_nameCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // @synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionStateCallback; // @synthesize connectionStateCallback=_connectionStateCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingCallbackQueue; // @synthesize pairingCallbackQueue=_pairingCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType pairingCallback; // @synthesize pairingCallback=_pairingCallback;
@property(nonatomic) _Bool isCallingClientCallback; // @synthesize isCallingClientCallback=_isCallingClientCallback;
@property(readonly, nonatomic) MRExternalDeviceTransport *transport; // @synthesize transport=_transport;
- (void)setConnectionRecoveryBehavior:(long long)arg1;	// IMP=0x0010000000065c0a
- (long long)connectionRecoveryBehavior;	// IMP=0x0010000000065bf9
- (void)_sendClientMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065ab6
- (void)_handleSetOriginClientPropertiesMessage:(id)arg1;	// IMP=0x0010000000065a49
- (void)_handleSetPlayerClientPropertiesMessage:(id)arg1;	// IMP=0x001000000006599f
- (void)_handleUpdateActiveSystemEndpoint:(id)arg1;	// IMP=0x00100000000657a8
- (void)_handleSetDefaultSupportedCommandsMessage:(id)arg1;	// IMP=0x00100000000656c8
- (void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1;	// IMP=0x00100000000655d4
- (void)_handlePromptForRouteAuthorizationMessage:(id)arg1;	// IMP=0x00100000000654e0
- (void)_handleGenericMessage:(id)arg1;	// IMP=0x001000000006544b
- (void)_handleSetConnectionStateMessage:(id)arg1;	// IMP=0x00100000000653d3
- (void)_handleDeviceInfoChange:(id)arg1 oldDevice:(id)arg2;	// IMP=0x00100000000650f4
- (void)_handleDeviceInfoUpdateMessage:(id)arg1;	// IMP=0x001000000006504d
- (void)_handleLegacyVolumeControlCapabilitiesDidChangeMessage:(id)arg1;	// IMP=0x0010000000064fd5
- (void)_handleVolumeControlCapabilitiesDidChangeMessage:(id)arg1;	// IMP=0x0010000000064f4e
- (void)_handleVolumeDidChangeMessage:(id)arg1;	// IMP=0x0010000000064ec5
- (void)_handleOutputDevicesRemovedMessage:(id)arg1;	// IMP=0x0010000000064e76
- (void)_handleOutputDevicesUpdatedMessage:(id)arg1;	// IMP=0x0010000000064e27
- (void)_handleNotificationMessage:(id)arg1;	// IMP=0x0010000000064c13
- (void)_handleUpdateContentItemsMessage:(id)arg1;	// IMP=0x00100000000649fd
- (void)_handleUpdatePlayerMessage:(id)arg1;	// IMP=0x001000000006495f
- (void)_handleUpdateClientMessage:(id)arg1;	// IMP=0x00100000000648db
- (void)_handleRemovePlayerMessage:(id)arg1;	// IMP=0x001000000006483d
- (void)_handleRemoveClientMessage:(id)arg1;	// IMP=0x00100000000647b9
- (void)_handleSetNowPlayingPlayerMessage:(id)arg1;	// IMP=0x001000000006471b
- (void)_handleSetNowPlayingClientMessage:(id)arg1;	// IMP=0x0010000000064697
- (void)_handleSetStateMessage:(id)arg1;	// IMP=0x0010000000064229
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 playerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000063a2d
- (void)_callVolumeControlCapabilitiesCallback:(unsigned int)arg1 outputDeviceUID:(id)arg2;	// IMP=0x0010000000063870
- (void)_callVolumeCallback:(float)arg1 outputDeviceUID:(id)arg2;	// IMP=0x00100000000635d3
- (void)_callOutputDevicesRemovedCallbackWithOutputDeviceUIDs:(id)arg1;	// IMP=0x0010000000063420
- (void)_callOutputDevicesUpdatedCallbackWithOutputDevices:(id)arg1;	// IMP=0x001000000006326d
- (void)_callClientCustomDataCallback:(id)arg1 name:(id)arg2;	// IMP=0x001000000006301a
- (void)_callClientAllowsPairingCallback;	// IMP=0x0010000000062e02
- (void)_callClientNameCallback;	// IMP=0x0010000000062bd7
- (void)_callClientPairingCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000000627a9
- (void)_callClientConnectionStateCallback:(unsigned int)arg1 previousConnectionState:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0010000000062475
- (void)_handlePlaybackSessionMigrateEndRequest:(id)arg1 error:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000622c6
- (void)_handlePlaybackSessionMigrateBeginRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006212c
- (void)_handlePlaybackSessionMigrateRequest:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000061ef3
- (void)_handlePlaybackSessionRequest:(void *)arg1 forPlayerPath:(void *)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061d06
- (void)_handlePlaybackQueueRequest:(void *)arg1 forPlayer:(void *)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061721
- (void)_onSerialQueue_registerOriginCallbacks;	// IMP=0x001000000006098d
- (void)_cleanUpWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x00100000000608da
- (void)_cleanUpStreamsWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x0010000000060763
- (id)_onWorkerQueue_syncClientStateWithUserInfo:(id)arg1;	// IMP=0x0010000000060328
- (id)_onWorkerQueue_reRegisterCustomOriginWithUserInfo:(id)arg1;	// IMP=0x001000000005ff93
- (id)_onWorkerQueue_registerCustomOriginWithUserInfo:(id)arg1;	// IMP=0x001000000005fc58
- (id)_onWorkerQueue_loadDeviceInfoWithUserInfo:(id)arg1;	// IMP=0x001000000005f3e4
- (id)_onWorkerQueue_initializeConnectionWithOptions:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x001000000005ed65
- (id)_onWorkerQueue_createClientConnectionWithTransport:(id)arg1;	// IMP=0x001000000005ed18
- (void)_activeSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x001000000005ea7c
- (void)_transportDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x001000000005e90c
- (void)_localDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x001000000005e7d4
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;	// IMP=0x001000000005e7bf
- (void)_handleDiscoveryUpdateOutputDevicesMessage:(id)arg1;	// IMP=0x001000000005e72a
- (void)setDiscoveryMode:(unsigned int)arg1 forConfiguration:(id)arg2;	// IMP=0x001000000005e63c
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x001000000005e2d1
- (void)removeFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005df37
- (void)createHostedEndpointWithOutputDeviceUIDs:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005dc26
- (void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterAwareDeviceUIDs:(id)arg4 removingClusterAwareDeviceUIDs:(id)arg5 settingClusterAwareDeviceUIDs:(id)arg6 withReplyQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000005d8be
- (void)setListeningMode:(id)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005d558
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005d069
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005cca6
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005c8f9
- (void)sendClientUpdatesConfigMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c4e1
- (void)sendClientUpdatesConfigMessage;	// IMP=0x001000000005c4cd
- (id)currentClientUpdatesConfigMessage;	// IMP=0x001000000005c391
- (id)errorForCurrentState;	// IMP=0x001000000005c13c
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;	// IMP=0x001000000005bd6a
- (void)sendCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x001000000005bc47
- (void)unpair;	// IMP=0x001000000005bb6d
- (void)verifyConnectionStatusAndMaybeDisconnect:(id)arg1;	// IMP=0x001000000005b97e
- (void)disconnect:(id)arg1;	// IMP=0x001000000005b8ca
- (void)_onSerialQueue_prepareToDisconnect:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005aafa
- (void)_onWorkerQueue_disconnect:(id)arg1;	// IMP=0x001000000005aa0c
- (void)connectWithOptions:(unsigned int)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000059a6d
- (void)_onSerialQueue_prepareToConnectWithRequestName:(id)arg1 options:(unsigned int)arg2 userInfo:(id)arg3 connectionAttemptDetails:(id)arg4 connectionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000059433
- (void)_onWorkerQueue_connectWithOptions:(unsigned int)arg1 isRetry:(_Bool)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005768a
- (_Bool)supportsIdleDisconnection;	// IMP=0x001000000005766d
- (id)personalOutputDevices;	// IMP=0x0010000000057665
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;	// IMP=0x00100000000575be
- (void)setVolumeControlCapabilitiesCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000057493
- (void)setVolumeChangedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000057368
- (void)setOutputDevicesRemovedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x001000000005723d
- (void)setOutputDevicesUpdatedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000057112
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000056fe7
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000056ebc
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000056d91
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000056c66
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000056af7
- (void)setConnectionState:(unsigned int)arg1 error:(id)arg2;	// IMP=0x0010000000056857
- (unsigned int)connectionState;	// IMP=0x0010000000056793
- (id)supportedMessages;	// IMP=0x0010000000056743
@property(retain, nonatomic) MRDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) MROrigin *customOrigin; // @synthesize customOrigin=_customOrigin;
@property(retain, nonatomic) MRExternalClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
- (void)setName:(id)arg1;	// IMP=0x0010000000055ead
- (void)setSubscribedPlayerPaths:(id)arg1;	// IMP=0x0010000000055e2f
- (id)subscribedPlayerPaths;	// IMP=0x0010000000055e0a
- (void)setWantsSystemEndpointNotifications:(_Bool)arg1;	// IMP=0x0010000000055de7
- (_Bool)wantsSystemEndpointNotifications;	// IMP=0x0010000000055dd7
- (void)setWantsEndpointChangeNotifications:(_Bool)arg1;	// IMP=0x0010000000055db4
- (_Bool)wantsEndpointChangeNotifications;	// IMP=0x0010000000055da4
- (void)setWantsOutputDeviceNotifications:(_Bool)arg1;	// IMP=0x0010000000055d81
- (_Bool)wantsOutputDeviceNotifications;	// IMP=0x0010000000055d71
- (void)setWantsVolumeNotifications:(_Bool)arg1;	// IMP=0x0010000000055d34
- (_Bool)wantsVolumeNotifications;	// IMP=0x0010000000055d24
- (void)setWantsNowPlayingArtworkNotifications:(_Bool)arg1;	// IMP=0x0010000000055d01
- (_Bool)wantsNowPlayingArtworkNotifications;	// IMP=0x0010000000055cf1
- (void)setWantsNowPlayingNotifications:(_Bool)arg1;	// IMP=0x0010000000055cce
- (_Bool)wantsNowPlayingNotifications;	// IMP=0x0010000000055cbe
- (void)setUsingSystemPairing:(_Bool)arg1;	// IMP=0x0010000000055cae
- (_Bool)isUsingSystemPairing;	// IMP=0x0010000000055c9e
- (_Bool)isPaired;	// IMP=0x0010000000055c96
- (_Bool)isValid;	// IMP=0x0010000000055c81
- (id)uid;	// IMP=0x0010000000055c64
- (long long)port;	// IMP=0x0010000000055c47
- (id)hostName;	// IMP=0x0010000000055c2a
- (id)name;	// IMP=0x0010000000055bae
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0010000000055942
- (id)initWithTransport:(id)arg1;	// IMP=0x00100000000556b4

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
