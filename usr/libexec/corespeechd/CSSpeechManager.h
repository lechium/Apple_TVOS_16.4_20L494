//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecorder, CSAudioTapProvider, CSFallbackAudioSessionReleaseProvider, CSOpportuneSpeakListnerTestService, CSPostBuildInstallService, CSSmartSiriVolumeManager, NSMutableDictionary, NSString;
@protocol CSSpeechManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSSpeechManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_assetQueryQueue;	// 16 = 0x10
    CSAudioRecorder *_audioRecorder;	// 24 = 0x18
    NSMutableDictionary *_audioProviders;	// 32 = 0x20
    CSAudioTapProvider *_audioTapProvider;	// 40 = 0x28
    CSFallbackAudioSessionReleaseProvider *_fallbackAudioSessionReleaseProvider;	// 48 = 0x30
    id <CSSpeechManagerDelegate> _clientController;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_clearLoggingFileTimer;	// 64 = 0x40
    long long _clearLoggingFileTimerCount;	// 72 = 0x48
    CSOpportuneSpeakListnerTestService *_opportuneSpeakListnerTestService;	// 80 = 0x50
    CSPostBuildInstallService *_postBuildInstallService;	// 88 = 0x58
    CSSmartSiriVolumeManager *_ssvManager;	// 96 = 0x60
}

+ (id)sharedManagerForCoreSpeechDaemon;	// IMP=0x00200000000cdbfb
+ (id)sharedManager;	// IMP=0x00100000000cdbf3
- (void).cxx_destruct;	// IMP=0x00200000000cfe10
@property(retain, nonatomic) CSSmartSiriVolumeManager *ssvManager; // @synthesize ssvManager=_ssvManager;
@property(retain, nonatomic) CSPostBuildInstallService *postBuildInstallService; // @synthesize postBuildInstallService=_postBuildInstallService;
@property(retain, nonatomic) CSOpportuneSpeakListnerTestService *opportuneSpeakListnerTestService; // @synthesize opportuneSpeakListnerTestService=_opportuneSpeakListnerTestService;
@property(nonatomic) long long clearLoggingFileTimerCount; // @synthesize clearLoggingFileTimerCount=_clearLoggingFileTimerCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *clearLoggingFileTimer; // @synthesize clearLoggingFileTimer=_clearLoggingFileTimer;
@property(nonatomic) __weak id <CSSpeechManagerDelegate> clientController; // @synthesize clientController=_clientController;
@property(retain, nonatomic) CSFallbackAudioSessionReleaseProvider *fallbackAudioSessionReleaseProvider; // @synthesize fallbackAudioSessionReleaseProvider=_fallbackAudioSessionReleaseProvider;
@property(retain, nonatomic) CSAudioTapProvider *audioTapProvider; // @synthesize audioTapProvider=_audioTapProvider;
@property(retain, nonatomic) NSMutableDictionary *audioProviders; // @synthesize audioProviders=_audioProviders;
@property(retain, nonatomic) CSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // @synthesize assetQueryQueue=_assetQueryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)opportuneSpeakEventMonitor:(id)arg1 didStreamStateChanged:(_Bool)arg2;	// IMP=0x00100000000cfccb
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x00100000000cfcb2
- (void)_startClearLoggingFilesTimer;	// IMP=0x00100000000cfbeb
- (void)_createClearLoggingFileTimer;	// IMP=0x00100000000cfaca
- (void)_handleClearLoggingFileTimer;	// IMP=0x00100000000cf9c5
- (void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1;	// IMP=0x00100000000cf9a8
- (void)voiceTriggerAssetHandler:(id)arg1 endpointId:(id)arg2 didChangeCachedAsset:(id)arg3;	// IMP=0x00100000000cf929
- (void)audioRecorderWillBeDestroyed:(id)arg1;	// IMP=0x00100000000cf801
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;	// IMP=0x00100000000cf7fb
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 numberOfChannels:(int)arg7;	// IMP=0x00100000000cf7f5
- (void)audioProviderInvalidated:(id)arg1 streamHandleId:(unsigned long long)arg2;	// IMP=0x00100000000cf523
- (id)_getAudioRecorderWithError:(id *)arg1;	// IMP=0x00100000000cf1c3
- (id)fetchFallbackAudioSessionReleaseProvider;	// IMP=0x00100000000cf0ac
- (id)audioProviderWithStreamID:(unsigned long long)arg1;	// IMP=0x00000000000ced75
- (id)audioProviderWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ce59a
- (id)audioProviderWithUUID:(id)arg1;	// IMP=0x00100000000ce35f
- (void)registerSiriClientProxy:(id)arg1;	// IMP=0x00100000000ce2bc
- (void)registerSpeechController:(id)arg1;	// IMP=0x00100000000ce203
- (void)_getVoiceTriggerAssetIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ce15a
- (id)audioFingerprintProvider;	// IMP=0x00100000000ce144
- (void)startManager;	// IMP=0x00100000000cde75
- (void)dealloc;	// IMP=0x00100000000cde00
- (id)init;	// IMP=0x00100000000cdc64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

