//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueue, AXAccessQueueTimer, AXDialectMap, AXIndexMap, AXMOutputManager, NSArray, NSDate, NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCRCThreadKey, VOTOutputRequest, VOTOutputRequestRunner;
@protocol OS_dispatch_queue;

@interface VOTOutputManager : NSObject
{
    NSMutableArray *_queuedOutputRequests;	// 8 = 0x8
    NSMutableArray *_requestRunners;	// 16 = 0x10
    AXIndexMap *_components;	// 24 = 0x18
    VOTOutputRequest *_currentlyRunningUninterruptableRequest;	// 32 = 0x20
    NSMutableArray *_currentlyRunningRequests;	// 40 = 0x28
    unsigned int _numberOfRequestSinceLastUninterruptable;	// 48 = 0x30
    double _cachedRate;	// 56 = 0x38
    _Bool _shutdown;	// 64 = 0x40
    VOTOutputRequestRunner *_onHoldRunner;	// 72 = 0x48
    AXDialectMap *_supportedLanguageMap;	// 80 = 0x50
    struct VOTExternalRoutingInfo _currentExternalRoutingInfo;	// 88 = 0x58
    _Bool _externalRoutesAvailable;	// 104 = 0x68
    _Bool _externalRoutesContainHDMIRoute;	// 105 = 0x69
    _Bool _externalAudioRouteIsHearingAid;	// 106 = 0x6a
    _Bool _selectedRouteIsHDMI;	// 107 = 0x6b
    AXAccessQueueTimer *_inactivateAudioTimer;	// 112 = 0x70
    AXAccessQueue *_audioSessionQueue;	// 120 = 0x78
    NSMutableSet *_audioSessionUsers;	// 128 = 0x80
    SCRCThreadKey *_threadKey;	// 136 = 0x88
    NSHashTable *_outputManagerObservers;	// 144 = 0x90
    NSLock *_outputManagerObserversLock;	// 152 = 0x98
    AXMOutputManager *_axmOutputManager;	// 160 = 0xa0
    NSMutableDictionary *_vosEventHandlers;	// 168 = 0xa8
    NSMutableDictionary *_vosEventStartedHandlers;	// 176 = 0xb0
    struct os_unfair_lock_s _queueLock;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_avAccessQueue;	// 192 = 0xc0
    _Bool _audioSessionActive;	// 200 = 0xc8
    CDUnknownBlockType _airTunesRouteIsAirPlayingTestingBlock;	// 208 = 0xd0
    NSDate *_dateToResumeRequests;	// 216 = 0xd8
    NSDate *_dateToResumeSounds;	// 224 = 0xe0
    NSString *_currentRouteName;	// 232 = 0xe8
}

+ (void)logSoundPlayed:(id)arg1;	// IMP=0x0020000000010ce1
+ (void)clearPreviousSoundsPlayed;	// IMP=0x0010000000010906
+ (id)previousSoundsPlayed;	// IMP=0x00100000000108b6
+ (id)outputManager;	// IMP=0x001000000000c461
+ (id)outputManagerIfExists;	// IMP=0x001000000000c450
+ (void)initialize;	// IMP=0x001000000000bd02
- (void).cxx_destruct;	// IMP=0x0020000000011959
@property(readonly, nonatomic) _Bool audioSessionActive; // @synthesize audioSessionActive=_audioSessionActive;
@property(retain) NSString *currentRouteName; // @synthesize currentRouteName=_currentRouteName;
@property(retain, nonatomic) NSDate *dateToResumeSounds; // @synthesize dateToResumeSounds=_dateToResumeSounds;
@property(retain, nonatomic) NSDate *dateToResumeRequests; // @synthesize dateToResumeRequests=_dateToResumeRequests;
@property(copy, nonatomic) CDUnknownBlockType airTunesRouteIsAirPlayingTestingBlock; // @synthesize airTunesRouteIsAirPlayingTestingBlock=_airTunesRouteIsAirPlayingTestingBlock;
@property(readonly, nonatomic) AXAccessQueue *audioSessionQueue; // @synthesize audioSessionQueue=_audioSessionQueue;
- (void)_notifyObserversOutputManagerWillProcessNextRequest:(id)arg1;	// IMP=0x001000000001171c
- (void)_notifyObserversOutputManagerDidFinishProcessingQueuedRequests;	// IMP=0x00100000000115a0
- (void)removeAllOutputManagerObservers;	// IMP=0x0010000000011556
- (void)removeOutputManagerObserver:(id)arg1;	// IMP=0x00100000000114d7
- (void)addOutputManagerObserver:(id)arg1;	// IMP=0x0010000000011458
- (void)dispatcher:(id)arg1 handleEvent:(id)arg2 soundPack:(id)arg3 hapticPack:(id)arg4;	// IMP=0x001000000001102c
- (void)removeVOSEventStartedHandler:(id)arg1;	// IMP=0x0010000000011013
- (void)removeVOSEventFinishedHandler:(id)arg1;	// IMP=0x0010000000010ffa
- (void)addVOSEventStartedHandler:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;	// IMP=0x0010000000010f4c
- (void)addVOSEventFinishedHandler:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;	// IMP=0x0010000000010e9e
- (void)sendEvent:(id)arg1;	// IMP=0x0010000000010dea
- (_Bool)replacesCharacterAsPunctuation:(unsigned short)arg1;	// IMP=0x0010000000010d97
- (void)playSoundFast:(id)arg1;	// IMP=0x0010000000010d83
- (void)playSoundFast:(id)arg1 startedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010963
- (void)playSoundFast:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001094c
- (void)speakSimpleString:(id)arg1 braille:(_Bool)arg2 language:(id)arg3;	// IMP=0x00100000000107ee
- (void)speakSimpleString:(id)arg1;	// IMP=0x00100000000107d4
- (void)disableAudioSession:(id)arg1 userDelay:(double)arg2;	// IMP=0x001000000001008f
- (void)disableAudioSession:(id)arg1;	// IMP=0x0010000000010075
- (void)removeAllAudioSessionEnablers;	// IMP=0x001000000000fe45
- (void)enableAudioSession:(id)arg1;	// IMP=0x001000000000fc2f
- (void)toggleAudioSessionActive:(_Bool)arg1;	// IMP=0x001000000000faa6
- (void)silenceOutputForTimeInterval:(double)arg1;	// IMP=0x001000000000f9c7
- (void)_silenceRequestsForTimeInterval:(id)arg1;	// IMP=0x001000000000f919
- (void)_resumeCurrentRequest;	// IMP=0x001000000000f8c6
- (void)resumeCurrentRequest;	// IMP=0x001000000000f847
- (void)_holdCurrentRequest;	// IMP=0x001000000000f795
- (void)holdCurrentRequest;	// IMP=0x001000000000f754
- (_Bool)isSpeaking;	// IMP=0x001000000000f710
- (_Bool)isPaused;	// IMP=0x001000000000f6cc
- (void)stopSpeakingAtBoundary:(int)arg1 allRequests:(_Bool)arg2 sessionDeactivationDelay:(id)arg3;	// IMP=0x001000000000f64f
- (void)stopSpeakingAtBoundary:(int)arg1;	// IMP=0x001000000000f638
- (void)continueSpeaking;	// IMP=0x001000000000f5fb
- (void)pauseSpeakingAtBoundary:(int)arg1;	// IMP=0x001000000000f5af
- (void)setRate:(float)arg1;	// IMP=0x001000000000f560
- (float)speechRate;	// IMP=0x001000000000f555
- (void)resetSpeechRate;	// IMP=0x001000000000f519
- (float)defaultSpeechRate;	// IMP=0x001000000000f451
- (float)speechRateForLanguage:(id)arg1;	// IMP=0x001000000000f1d6
- (void)setSpeechRate:(float)arg1 forLanguage:(id)arg2;	// IMP=0x001000000000f0c9
- (void)setVolume:(float)arg1;	// IMP=0x001000000000f0a0
- (void)_setVolume:(float)arg1;	// IMP=0x001000000000ee02
- (void)updateAudioSessionProperties;	// IMP=0x001000000000edc3
- (void)updateWithCurrentRoute;	// IMP=0x001000000000ed43
- (void)selectAudioRoute:(_Bool)arg1;	// IMP=0x001000000000e724
- (void)selectLocalAudioRoute;	// IMP=0x001000000000e70d
- (void)selectExternalAudioRoute;	// IMP=0x001000000000e6f9
- (_Bool)externalAudioRouteSelected;	// IMP=0x001000000000e2a2
- (_Bool)isRouteAirplayMirroring;	// IMP=0x001000000000e27e
- (_Bool)selectedRouteIsHDMI;	// IMP=0x001000000000e275
- (_Bool)externalAudioRouteIsHearingAid;	// IMP=0x001000000000e26c
- (_Bool)externalAudioRoutesContainHDMIRoute;	// IMP=0x001000000000e263
- (_Bool)externalAudioRoutesAvailable;	// IMP=0x001000000000e25a
- (void)_updateExternalRoutesAvailable;	// IMP=0x001000000000df07
- (void)_updateActiveRoutes;	// IMP=0x001000000000db1e
- (void)_activeRouteChanged:(id)arg1;	// IMP=0x001000000000daba
- (void)callStatusChanged;	// IMP=0x001000000000da1f
- (_Bool)isWirelessRoutePicked:(id)arg1;	// IMP=0x001000000000d9c6
- (_Bool)isRouteWireless:(id)arg1;	// IMP=0x001000000000d96b
- (_Bool)isRoutePicked:(id)arg1;	// IMP=0x001000000000d8b5
- (_Bool)_isHeadsetRoute:(id)arg1;	// IMP=0x001000000000d85d
- (_Bool)_isHeadphoneRoute:(id)arg1;	// IMP=0x001000000000d805
- (_Bool)isCurrentRouteConsideredExternal:(id)arg1;	// IMP=0x001000000000d7fd
- (_Bool)_isRouteExternalHDMIRoute:(id)arg1;	// IMP=0x001000000000d7a5
- (_Bool)airTunesRouteIsAirPlaying;	// IMP=0x001000000000d6ce
- (id)speechComponent;	// IMP=0x001000000000d6ba
- (double)volume;	// IMP=0x001000000000d666
- (_Bool)isSystemMuted;	// IMP=0x001000000000d5e7
- (void)toggleSystemMute;	// IMP=0x001000000000d550
- (void)synchVolumeWithSystem;	// IMP=0x001000000000d53e
- (void)_systemVolumeDidChange:(id)arg1;	// IMP=0x001000000000d538
- (float)systemVolume;	// IMP=0x001000000000d4c6
- (void)setSystemVolume:(float)arg1;	// IMP=0x001000000000d43e
- (id)componentForType:(int)arg1;	// IMP=0x001000000000d426
- (void)finishedOutputRequest:(id)arg1;	// IMP=0x001000000000d348
- (void)_dispatchNextQueuedRequest;	// IMP=0x001000000000d021
- (void)_handleProcessRequest:(id)arg1;	// IMP=0x001000000000ca8d
- (void)shutdown;	// IMP=0x001000000000ca28
- (void)_handleRequestFinished:(id)arg1;	// IMP=0x001000000000c79e
- (void)clearQueue;	// IMP=0x001000000000c71e
- (id)currentLanguageMap;	// IMP=0x001000000000c710
- (void)updateSupportedLanguageMap;	// IMP=0x001000000000c651
- (void)handleEvent:(id)arg1;	// IMP=0x001000000000c508
@property(readonly, nonatomic) NSArray *queuedRequests;
- (void)_voiceOverVolumeChanged:(id)arg1;	// IMP=0x001000000000c4c6
- (void)dealloc;	// IMP=0x001000000000c3a1
- (id)init;	// IMP=0x001000000000bd74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

