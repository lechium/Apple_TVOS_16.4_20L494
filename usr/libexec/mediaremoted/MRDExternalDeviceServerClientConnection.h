//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalClientConnection.h>

@class MRAVEndpoint, MRCoreUtilsPairingSessionPeer, MRPasscodeCredentials, MRPlaybackQueueClient, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol MRDExternalDeviceServerClientConnectionDelegate, OS_dispatch_queue;

@interface MRDExternalDeviceServerClientConnection : MRExternalClientConnection
{
    NSMutableArray *_virtualTouchDevices;	// 8 = 0x8
    NSMutableArray *_registeredVirtualVoiceInputDevices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    NSMutableDictionary *_packedDeviceIDToDeviceIDMapping;	// 32 = 0x20
    short _deviceIDCounter;	// 40 = 0x28
    NSMutableDictionary *_gameControllers;	// 48 = 0x30
    short _gameControllerDeviceIDCounter;	// 56 = 0x38
    NSMutableArray *_lyricsEvents;	// 64 = 0x40
    struct _MRHIDButtonEvent _lastVolumeIncrementEvent;	// 72 = 0x48
    struct _MRHIDButtonEvent _lastVolumeDecrementEvent;	// 84 = 0x54
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;	// 96 = 0x60
    MRAVEndpoint *_destinationEndpoint;	// 104 = 0x68
    NSMutableDictionary *_discoveryModes;	// 112 = 0x70
    unsigned int _options;	// 120 = 0x78
    MRPasscodeCredentials *_credentials;	// 128 = 0x80
    MRPlaybackQueueClient *_playbackQueueRequests;	// 136 = 0x88
    MRCoreUtilsPairingSessionPeer *_sessionPeer;	// 144 = 0x90
    id _pinPairingToken;	// 152 = 0x98
    NSString *_destinationOutputDeviceUID;	// 160 = 0xa0
    NSString *_destinationGroupUID;	// 168 = 0xa8
    id <MRDExternalDeviceServerClientConnectionDelegate> _serverDelegate;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x002000000003f02a
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(nonatomic) __weak id <MRDExternalDeviceServerClientConnectionDelegate> serverDelegate; // @synthesize serverDelegate=_serverDelegate;
@property(copy, nonatomic) NSString *destinationGroupUID; // @synthesize destinationGroupUID=_destinationGroupUID;
@property(copy, nonatomic) NSString *destinationOutputDeviceUID; // @synthesize destinationOutputDeviceUID=_destinationOutputDeviceUID;
@property(retain, nonatomic) id pinPairingToken; // @synthesize pinPairingToken=_pinPairingToken;
@property(readonly, nonatomic) MRCoreUtilsPairingSessionPeer *sessionPeer; // @synthesize sessionPeer=_sessionPeer;
@property(readonly, nonatomic) MRPlaybackQueueClient *playbackQueueRequests; // @synthesize playbackQueueRequests=_playbackQueueRequests;
@property(retain, nonatomic) MRPasscodeCredentials *credentials; // @synthesize credentials=_credentials;
- (void)gameController:(id)arg1 propertiesDidChange:(id)arg2;	// IMP=0x001000000003ece8
- (void)_handleEndpointDidDisconnect:(id)arg1;	// IMP=0x001000000003ec54
- (id)outputDevicesForEndpoint:(id)arg1;	// IMP=0x001000000003ea4a
@property(readonly, nonatomic) NSArray *discoverySessionConfigurations;
- (void)setDiscoveryMode:(unsigned int)arg1 forConfiguration:(id)arg2;	// IMP=0x001000000003e92f
- (unsigned int)discoveryModeForConfiguration:(id)arg1;	// IMP=0x001000000003e87e
- (id)exportContentItemArtworkUpdates:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x001000000003e77a
- (id)exportContentItems:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x001000000003e4fc
- (id)exportPlaybackQueue:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x001000000003e24e
- (id)exportSupportedCommands:(id)arg1;	// IMP=0x001000000003e125
- (id)exportNowPlayingState:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x001000000003dfef
- (_Bool)_wantsLibraryCommands;	// IMP=0x001000000003df35
@property(retain, nonatomic) MRAVEndpoint *destinationEndpoint;
@property(readonly, nonatomic, getter=isDestinationLocal) _Bool destinationLocal;
- (void)requestDestinationEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000003d941
- (void)requestConnectedDestinationEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000003d753
- (void)localizeDestinationOrigin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d634
- (void)localizeDestinationPlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d477
- (void)flushPendingPlaybackSessionMigrateEvents:(CDUnknownBlockType)arg1;	// IMP=0x001000000003d17d
- (_Bool)removePendingPlaybackSessionMigrateEvent:(id)arg1;	// IMP=0x001000000003cfd5
- (void)addPendingPlaybackSessionMigrateEvent:(id)arg1 playerPath:(id)arg2;	// IMP=0x001000000003ce5c
- (void)flushVolumeEvents:(CDUnknownBlockType)arg1;	// IMP=0x001000000003cce6
- (void)addVolumeEvent:(struct _MRHIDButtonEvent)arg1;	// IMP=0x001000000003cc36
- (void)flushLyricsEvents:(CDUnknownBlockType)arg1;	// IMP=0x001000000003c9ec
- (void)removeLyricsEvent:(id)arg1;	// IMP=0x001000000003c753
- (void)addLyricsEvent:(id)arg1;	// IMP=0x001000000003c69a
- (unsigned long long)virtualTouchIDWithPackedID:(unsigned long long)arg1;	// IMP=0x001000000003c617
- (void)unregisterAllVirtualVoiceInputDevices;	// IMP=0x001000000003c3ad
- (void)addRegisteredVirtualVoiceInputDevice:(unsigned int)arg1;	// IMP=0x001000000003c0f8
- (void)removeAllVirtualTouchDevices;	// IMP=0x001000000003c055
- (id)virtualTouchDeviceWithID:(unsigned long long)arg1;	// IMP=0x001000000003bdb3
- (unsigned long long)addVirtualTouchDevice:(id)arg1;	// IMP=0x001000000003bc36
- (void)removeGameController:(unsigned long long)arg1;	// IMP=0x001000000003bb7d
- (id)gameControllerWithID:(unsigned long long)arg1;	// IMP=0x001000000003ba34
- (unsigned long long)addGameController:(id)arg1;	// IMP=0x001000000003b87f
@property(readonly, nonatomic) NSArray *registeredVirtualVoiceInputDevices;
@property(readonly, nonatomic) NSArray *virtualTouchDevices;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000003b1b5
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000003afee

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

