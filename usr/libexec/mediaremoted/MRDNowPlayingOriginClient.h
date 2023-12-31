//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDDeviceInfoDataSource, MRDMediaRemoteClient, MRDNowPlayingClient, MRDNowPlayingDataSource, MRDeviceInfo, MRMutableApplicationActivity, MRNowPlayingAudioFormatContentInfo, MROSTransaction, MROrigin, MRPlayerPath, MSVPersistentTimer, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol MRDNowPlayingOriginClientDelegate, OS_dispatch_queue;

@interface MRDNowPlayingOriginClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_nowPlayingClients;	// 16 = 0x10
    unsigned int _volumeControlCapabilities;	// 24 = 0x18
    float _volume;	// 28 = 0x1c
    _Bool _isMuted;	// 32 = 0x20
    MRDeviceInfo *_deviceInfo;	// 40 = 0x28
    MRDNowPlayingClient *_explicitNowPlayingClient;	// 48 = 0x30
    MRDNowPlayingClient *_activeNowPlayingClient;	// 56 = 0x38
    MROSTransaction *_activeNowPlayingClientTransaction;	// 64 = 0x40
    NSMutableDictionary *_defaultSupportedCommandsData;	// 72 = 0x48
    MSVPersistentTimer *_playbackTimer;	// 80 = 0x50
    NSDate *_lastPlayingDate;	// 88 = 0x58
    MROrigin *_origin;	// 96 = 0x60
    MRPlayerPath *_playerPath;	// 104 = 0x68
    NSData *_deviceInfoData;	// 112 = 0x70
    MRMutableApplicationActivity *_activity;	// 120 = 0x78
    MRDMediaRemoteClient *_overrideClient;	// 128 = 0x80
    MRDNowPlayingDataSource *_nowPlayingDataSource;	// 136 = 0x88
    MRDDeviceInfoDataSource *_deviceInfoDataSource;	// 144 = 0x90
    NSDate *_registrationDate;	// 152 = 0x98
    NSArray *_activePlayerClients;	// 160 = 0xa0
    id <MRDNowPlayingOriginClientDelegate> _delegate;	// 168 = 0xa8
    MRDNowPlayingClient *_computedNowPlayingClient;	// 176 = 0xb0
    MRDNowPlayingClient *_inferredNowPlayingClient;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0010000000073cd3
@property(retain, nonatomic) MRDNowPlayingClient *inferredNowPlayingClient; // @synthesize inferredNowPlayingClient=_inferredNowPlayingClient;
@property(retain, nonatomic) MRDNowPlayingClient *computedNowPlayingClient; // @synthesize computedNowPlayingClient=_computedNowPlayingClient;
@property(nonatomic) __weak id <MRDNowPlayingOriginClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *activePlayerClients; // @synthesize activePlayerClients=_activePlayerClients;
@property(readonly, nonatomic) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property(retain, nonatomic) MRDDeviceInfoDataSource *deviceInfoDataSource; // @synthesize deviceInfoDataSource=_deviceInfoDataSource;
@property(retain, nonatomic) MRDNowPlayingDataSource *nowPlayingDataSource; // @synthesize nowPlayingDataSource=_nowPlayingDataSource;
@property(retain, nonatomic) MRDNowPlayingClient *explicitNowPlayingClient; // @synthesize explicitNowPlayingClient=_explicitNowPlayingClient;
@property(retain, nonatomic) MRDMediaRemoteClient *overrideClient; // @synthesize overrideClient=_overrideClient;
@property(retain, nonatomic) MRMutableApplicationActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSData *deviceInfoData; // @synthesize deviceInfoData=_deviceInfoData;
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) MROrigin *origin; // @synthesize origin=_origin;
- (id)_playerPathForNowPlayingClient:(id)arg1;	// IMP=0x0010000000073b5e
- (unsigned int)_stateFromDataSource:(id)arg1;	// IMP=0x0010000000073af9
- (void)_registerCallbacks;	// IMP=0x00100000000737a9
- (void)_onQueue_maybeSavePlaybackStateForNotification:(id)arg1;	// IMP=0x0010000000073547
- (void)_onQueue_maybeSetupPlaybackTimeoutTimerForNotification:(id)arg1;	// IMP=0x00100000000731ba
- (id)_onQueue_addNowPlayingClient:(id)arg1;	// IMP=0x0010000000072f37
- (void)_onQueue_updateActivityStatus:(int)arg1;	// IMP=0x0010000000072e92
- (void)_onQueue_reevaluateStateWithReason:(id)arg1;	// IMP=0x0010000000072880
- (id)_onQueue_calculateActiveNowPlayingPlayerClients;	// IMP=0x0010000000072508
- (unsigned int)_onQueue_calculateInferredPlaybackStateForPlayer:(id)arg1;	// IMP=0x0010000000072176
- (id)_onQueue_calculateInferredNowPlayingClient;	// IMP=0x0010000000071d14
- (id)_onQueue_calculateComputedNowPlayingClient;	// IMP=0x001000000007185c
- (id)_onQueue_calculateActiveNowPlayingClient;	// IMP=0x00100000000716a6
- (_Bool)_shouldHandleNotification:(id)arg1;	// IMP=0x00100000000715b3
- (void)_handlePlayerDidRegister:(id)arg1;	// IMP=0x00100000000713ed
- (void)_handleNowPlayingApplicationDidUnregisterCanBeNowPlaying:(id)arg1;	// IMP=0x001000000007131f
- (void)_handleActivePlayerDidChange:(id)arg1;	// IMP=0x0010000000071251
- (void)_handlePlayerPictureInPictureEnabledDidChange:(id)arg1;	// IMP=0x0010000000071183
- (void)_handlePlayerPropertiesDidChange:(id)arg1;	// IMP=0x001000000007101f
- (void)_handleOriginIsPlayingDidChange:(id)arg1;	// IMP=0x0010000000070f1d
- (void)_handlePlayerIsPlayingDidChange:(id)arg1;	// IMP=0x0010000000070dcf
- (void)_handleNowPlayingAppMaybeDidChange:(id)arg1;	// IMP=0x0010000000070c14
- (void)deviceInfoDataSource:(id)arg1 deviceInfoDidChange:(id)arg2;	// IMP=0x0010000000070bff
- (void)_onQueue_reloadInferredStateFromDataSource:(id)arg1 reason:(id)arg2;	// IMP=0x001000000007086c
- (void)nowPlayingDataSourceNowPlayingAudioFormatContentInfosDidChange:(id)arg1;	// IMP=0x00100000000707e5
- (void)nowPlayingDataSourceNowPlayingSessionsPlaybackStateDidChange:(id)arg1;	// IMP=0x0010000000070736
- (void)nowPlayingDataSourceNowPlayingApplicationsPlaybackStateDidChange:(id)arg1;	// IMP=0x0010000000070687
- (void)nowPlayingDataSourceNowPlayingApplicationPlaybackStateDidChange:(id)arg1;	// IMP=0x00100000000705d8
- (void)nowPlayingDataSourceNowPlayingApplicationDidChange:(id)arg1;	// IMP=0x0010000000070529
@property(readonly, nonatomic) MRNowPlayingAudioFormatContentInfo *nowPlayingAudioFormatContentInfo;
- (void)updateLastPlayingDate:(id)arg1;	// IMP=0x00100000000701d3
- (void)clearDefaultSupportedCommandsData;	// IMP=0x001000000007016e
@property(readonly, nonatomic) NSDictionary *defaultSupportedCommands;
- (id)defaultSupportedCommandsForClient:(id)arg1;	// IMP=0x001000000006fe07
- (id)defaultSupportedCommandsDataForClient:(id)arg1;	// IMP=0x001000000006fc38
- (void)updateDefaultSupportedCommandsData:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000006fabf
- (void)_onQueue_removeNowPlayingClient:(id)arg1;	// IMP=0x001000000006f6f7
- (void)removeNowPlayingClientForClient:(id)arg1;	// IMP=0x001000000006f5f8
- (void)removeAllClients;	// IMP=0x001000000006f446
- (id)existingNowPlayingClientForClient:(id)arg1;	// IMP=0x001000000006f0d4
- (id)existingNowPlayingClientForDisplayID:(id)arg1;	// IMP=0x001000000006f048
- (id)existingNowPlayingClientForPid:(int)arg1;	// IMP=0x001000000006efdc
- (id)existingNowPlayingClientForPlayerPath:(id)arg1;	// IMP=0x001000000006ef7a
- (id)nowPlayingClientForPlayerPath:(id)arg1;	// IMP=0x001000000006edb1
- (id)nowPlayingClientForClient:(id)arg1;	// IMP=0x001000000006ed16
@property(readonly, nonatomic) double timeSincePlaying;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) _Bool isActivityActive;
@property(readonly, nonatomic) MRDNowPlayingClient *activeNowPlayingClient;
@property(readonly, nonatomic) NSArray *mostRecentPlayers;
@property(readonly, nonatomic) NSArray *nowPlayingClients;
@property(nonatomic) _Bool isMuted;
@property(nonatomic) unsigned int volumeControlCapabilities;
@property(nonatomic) float volume;
@property(copy, nonatomic) MRDeviceInfo *deviceInfo;
@property(readonly, nonatomic) MRPlayerPath *activePlayerPath;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithOrigin:(id)arg1;	// IMP=0x001000000006b619
- (id)activeContent;	// IMP=0x00100000000181f2
- (_Bool)containsActiveStream;	// IMP=0x0010000000018184

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

