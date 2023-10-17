//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoutingController, MPCAudioAssetTypeSelector, MPCMediaFoundationTranslator, MPCModelGenericAVItem, MPCPlaybackEngine, MPCPlayerAudioRoute, MPPlaybackEQSetting, NSString;
@protocol MFPlaybackStackController><MFQueueManagement, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MPCPlayerItemConfigurator : NSObject
{
    MPCPlayerAudioRoute *_currentAudioRoute;	// 8 = 0x8
    MPAVRoutingController *_routingController;	// 16 = 0x10
    MPCAudioAssetTypeSelector *_audioAssetTypeSelector;	// 24 = 0x18
    MPPlaybackEQSetting *_eqSetting;	// 32 = 0x20
    MPCMediaFoundationTranslator *_translator;	// 40 = 0x28
    id <MFPlaybackStackController><MFQueueManagement> _stackController;	// 48 = 0x30
    MPCPlaybackEngine *_playbackEngine;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_userDefaultsDebouncer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000272d9e
@property(retain, nonatomic) NSObject<OS_dispatch_source> *userDefaultsDebouncer; // @synthesize userDefaultsDebouncer=_userDefaultsDebouncer;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(readonly, nonatomic) __weak id <MFPlaybackStackController><MFQueueManagement> stackController; // @synthesize stackController=_stackController;
@property(readonly, nonatomic) __weak MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(retain, nonatomic) MPPlaybackEQSetting *eqSetting; // @synthesize eqSetting=_eqSetting;
@property(readonly, nonatomic) MPCAudioAssetTypeSelector *audioAssetTypeSelector; // @synthesize audioAssetTypeSelector=_audioAssetTypeSelector;
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (void)_resetBufferedAudio;	// IMP=0x0000000000272bb2
- (void)engineDidChangeVocalAttenuationState:(id)arg1;	// IMP=0x0000000000272b56
- (void)engineDidChangeVocalAttenuationLevel:(id)arg1;	// IMP=0x0000000000272b44
- (void)_updatePreferredAudioFormatIfRequiredForItem:(id)arg1 route:(id)arg2;	// IMP=0x0000000000272527
- (void)_updateQueueItemsAndPlayerForFormatChangeIfRequired;	// IMP=0x00000000002723a1
- (_Bool)_shouldReloadEntireQueue;	// IMP=0x000000000027219f
- (id)_modeObjectForPlayerItem:(id)arg1;	// IMP=0x00000000002720dc
- (id)queuedItems;	// IMP=0x0000000000271e75
@property(readonly, nonatomic) __weak MPCModelGenericAVItem *currentItem;
- (void)updateCurrentAudioRouteWithPickedRoutes:(id)arg1;	// IMP=0x0000000000271d04
@property(readonly, nonatomic) MPCPlayerAudioRoute *currentAudioRoute; // @synthesize currentAudioRoute=_currentAudioRoute;
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x0000000000271ac1
- (id)_audioFormatsDictionaryWithHLSMetadata:(id)arg1;	// IMP=0x0000000000271897
- (id)_HLSMetadataForAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002716d0
- (id)_audioFormatsDictionaryWithHLSMetadataFromAsset:(id)arg1 metadataWaitTime:(double *)arg2 error:(id *)arg3;	// IMP=0x0000000000271602
- (void)_emitAudioFormatSelection:(id)arg1 item:(id)arg2;	// IMP=0x00000000002712fc
- (void)_setupQueueItemForLossyAudioPlayback:(id)arg1;	// IMP=0x0000000000270f9d
- (_Bool)_setupQueueItemForEnhancedAudioHLSPlayback:(id)arg1 metadataWaitTime:(double *)arg2 error:(id *)arg3;	// IMP=0x0000000000270589
- (void)_setupPlayer;	// IMP=0x00000000002703d7
- (void)processAudioQualityChanges;	// IMP=0x0000000000270128
- (void)tearDownDefaultsDebouncer;	// IMP=0x00000000002700a3
- (void)setupDefaultsDebouncer;	// IMP=0x000000000026fef7
- (void)_preferredResolutionDidChange:(id)arg1;	// IMP=0x000000000026fe7a
- (void)_soundCheckEnabledChangedNotification:(id)arg1;	// IMP=0x000000000026fcf2
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1;	// IMP=0x000000000026fc93
- (void)_highQualityMusicStreamingOnCellularDidChange:(id)arg1;	// IMP=0x000000000026fc34
- (void)_setupNotifications;	// IMP=0x000000000026fb33
- (void)_setupRoutingController;	// IMP=0x000000000026fa9e
- (void)updatePlayerConfiguration;	// IMP=0x000000000026fa8c
- (_Bool)configureQueuePlayerItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000026ee06
- (void)dealloc;	// IMP=0x000000000026ed91
- (id)initWithPlaybackEngine:(id)arg1 stackController:(id)arg2 translator:(id)arg3;	// IMP=0x000000000026ec1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

