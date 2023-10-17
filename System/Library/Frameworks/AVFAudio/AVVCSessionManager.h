//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession, NSString;

__attribute__((visibility("hidden")))
@interface AVVCSessionManager : NSObject
{
    _Bool mShouldDuckOthers;	// 8 = 0x8
    _Bool mIsMiniDuckingEnabled;	// 9 = 0x9
    _Bool mShouldEnableMiniDucking;	// 10 = 0xa
    _Bool mShouldDisableMiniDucking;	// 11 = 0xb
    _Bool mSessionNeedsVolumeControl;	// 12 = 0xc
    _Bool mSessionNeedsRoutingControl;	// 13 = 0xd
    _Bool mSessionOutputIsWirelessSplitter;	// 14 = 0xe
    _Bool mIsOtherAudioPlaying;	// 15 = 0xf
    _Bool mRouteHasDoAPSupport;	// 16 = 0x10
    _Bool mOutputSupportsSWVolume;	// 17 = 0x11
    _Bool mDeviceIsIOSAccessory;	// 18 = 0x12
    _Bool mDeviceIsOlderWatch;	// 19 = 0x13
    unsigned int mSessionActivationOptions;	// 20 = 0x14
    long long mPreviousActivationMode;	// 24 = 0x18
    struct recursive_mutex mSessionManagerLock;	// 32 = 0x20
    _Bool _isPrimary;	// 96 = 0x60
    _Bool _clientRequestsRecording;	// 97 = 0x61
    _Bool _forceGetSessionProperties;	// 98 = 0x62
    int _sessionState;	// 100 = 0x64
    float _deviceGain;	// 104 = 0x68
    long long _reporterID;	// 112 = 0x70
    double _inputSafetyOffset;	// 120 = 0x78
    double _outputSafetyOffset;	// 128 = 0x80
    AVAudioSession *_audioSession;	// 136 = 0x88
    NSString *_playbackRoute;	// 144 = 0x90
    double _inputLatency;	// 152 = 0x98
    double _outputLatency;	// 160 = 0xa0
}

- (id).cxx_construct;	// IMP=0x00000000000c1929
- (void).cxx_destruct;	// IMP=0x00000000000c18f2
@property(readonly, nonatomic) double outputLatency; // @synthesize outputLatency=_outputLatency;
@property(readonly, nonatomic) double inputLatency; // @synthesize inputLatency=_inputLatency;
@property(nonatomic) _Bool forceGetSessionProperties; // @synthesize forceGetSessionProperties=_forceGetSessionProperties;
@property(retain, nonatomic) NSString *playbackRoute; // @synthesize playbackRoute=_playbackRoute;
@property(nonatomic) float deviceGain; // @synthesize deviceGain=_deviceGain;
@property(nonatomic) _Bool clientRequestsRecording; // @synthesize clientRequestsRecording=_clientRequestsRecording;
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
- (_Bool)isSWVolumeSupportedOnPickedRoute;	// IMP=0x00000000000c16d4
- (_Bool)setDuckToLevelScalar:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c1563
- (_Bool)setDuckToLevelDB:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c13f2
- (long long)inputNumberOfChannels;	// IMP=0x00000000000c1247
- (_Bool)setRecordingFromRemoteInput:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000c0e6e
- (void)removeSessionNotifications:(id)arg1;	// IMP=0x00000000000c0c22
- (void)setupSessionNotifications:(id)arg1;	// IMP=0x00000000000c099a
- (id)getActiveSessionDisplayIDsAsString;	// IMP=0x00000000000c0870
- (unsigned int)getOpaqueSessionID;	// IMP=0x00000000000c06ca
- (_Bool)setActive:(_Bool)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000c04ed
- (_Bool)setActivationContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c0313
- (_Bool)getSiriInputSource:(unsigned long long *)arg1 withIdentifier:(id *)arg2;	// IMP=0x00000000000c01b2
- (id)siriRemoteInputIdentifier;	// IMP=0x00000000000c0094
- (unsigned long long)siriInputSource;	// IMP=0x00000000000bfeb2
- (id)sessionCurrentInputRoutes;	// IMP=0x00000000000bfd94
- (id)sessionCurrentOutputRoutes;	// IMP=0x00000000000bfc76
- (id)currentRoute;	// IMP=0x00000000000bfbaa
- (_Bool)setPreferredSampleRate:(double)arg1 error:(id *)arg2;	// IMP=0x00000000000bf9dc
- (_Bool)setIAmTheAssistant:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000bf821
@property(readonly) long long reporterID; // @synthesize reporterID=_reporterID;
- (_Bool)setAudioHardwareControlFlags:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000bf4af
- (_Bool)isSessionInSiriCategory;	// IMP=0x00000000000bf2c2
- (_Bool)isSessionInSiriCategoryModeAndOptions:(unsigned int)arg1;	// IMP=0x00000000000bef94
- (_Bool)clearInputPreferences:(id *)arg1;	// IMP=0x00000000000bede4
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000000000bebc3
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000be9aa
- (double)speechDetectionDeviceSampleRate;	// IMP=0x00000000000be7fc
@property(readonly, nonatomic) double inputSafetyOffset; // @synthesize inputSafetyOffset=_inputSafetyOffset;
@property(readonly, nonatomic) double outputSafetyOffset; // @synthesize outputSafetyOffset=_outputSafetyOffset;
- (double)getOutputLatency;	// IMP=0x00000000000be2e9
- (double)getInputLatency;	// IMP=0x00000000000be137
- (_Bool)setEnableBTTriangleMode:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000bdf7c
- (_Bool)getForceGetSessionProperties;	// IMP=0x00000000000bdf24
- (id)getPlaybackRoute;	// IMP=0x00000000000bde47
- (float)getDeviceGain;	// IMP=0x00000000000bdd37
- (_Bool)getClientRequestsRecording;	// IMP=0x00000000000bdc64
- (long long)getAVVCSessionState;	// IMP=0x00000000000bdb81
- (_Bool)isSessionActive;	// IMP=0x00000000000bdb25
@property(nonatomic) int sessionState; // @synthesize sessionState=_sessionState;
- (void)setSessionStateWithoutLock:(int)arg1;	// IMP=0x00000000000bd955
- (_Bool)deactivateAudioSessionWithOptions:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x00000000000bd266
- (_Bool)activateAudioSessionWithPrewarm:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000bcb63
- (_Bool)isAirplayOneOfTheOutputRoutes:(id)arg1;	// IMP=0x00000000000bc839
- (int)enableSmartRoutingConsideration:(_Bool)arg1;	// IMP=0x00000000000bc6d3
- (void)setSessionActivationOptions:(unsigned int)arg1;	// IMP=0x00000000000bc66a
- (unsigned int)getSessionActivationOptions;	// IMP=0x00000000000bc612
- (_Bool)isSessionOutputInWirelessSplitterMode;	// IMP=0x00000000000bc5b9
- (_Bool)setDuckingFadeOutDuration:(id)arg1 fadeInDuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bc21c
- (_Bool)setDuckOthers:(id)arg1 mixWithOthers:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bbbb1
- (void)changeDuckOthersOption:(_Bool)arg1;	// IMP=0x00000000000bbb48
- (int)setSessionBufferSize:(int)arg1;	// IMP=0x00000000000bb720
- (int)setSessionSampleRateForActivationMode:(long long)arg1;	// IMP=0x00000000000bb08a
- (int)setSessionAudioHWControlFlagsForActivationMode:(long long)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000000b9f3d
- (int)setSessionCategoryModeOptionsForActivationMode:(long long)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000000b8f43
- (void)getHypotheticalRouteAndUpdateStates;	// IMP=0x00000000000b8f1f
- (_Bool)isMiniDuckingEnabled;	// IMP=0x00000000000b8ec7
- (void)shouldEnableMiniDucking:(_Bool)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000000b8dca
- (int)setSessionActivationContext:(id)arg1;	// IMP=0x00000000000b89c3
- (int)setupOneTimeSessionSettingsForClient:(long long)arg1;	// IMP=0x00000000000b81ca
- (void)dealloc;	// IMP=0x00000000000b8165
- (id)initWithSession:(id)arg1;	// IMP=0x00000000000b7fd5

@end

