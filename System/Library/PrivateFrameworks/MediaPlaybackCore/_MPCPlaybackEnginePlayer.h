//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController, MPAVItem, MPCAVItemTrace, MPCExternalPlaybackController, MPCItemBookmarker, MPCLeaseController, MPCMediaFoundationTranslator, MPCPlaybackEngine, MPCPlaybackErrorController, MPCPlayerItemConfigurator, NSDictionary, NSNumber, NSString, _MPCAudioSessionController;
@protocol MFAssetLoading, MFPlaybackStackController><MFQueueManagement, MPCPlaybackEngineEventStreamDeferralAssertion;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEnginePlayer : NSObject
{
    _Bool _autoPlayWhenLikelyToKeepUp;	// 8 = 0x8
    _Bool _reloadingPlaybackContext;	// 9 = 0x9
    _Bool _lastReportedVocalAttenuationEnabledState;	// 10 = 0xa
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
    long long _jumpIdentifier;	// 24 = 0x18
    id <MFPlaybackStackController><MFQueueManagement> _playbackStackController;	// 32 = 0x20
    MPCItemBookmarker *_bookmarker;	// 40 = 0x28
    MPCMediaFoundationTranslator *_translator;	// 48 = 0x30
    MPCPlaybackErrorController *_errorController;	// 56 = 0x38
    MPCExternalPlaybackController *_externalPlaybackController;	// 64 = 0x40
    id <MFAssetLoading> _assetLoader;	// 72 = 0x48
    MPCLeaseController *_leaseController;	// 80 = 0x50
    MPCPlayerItemConfigurator *_configurator;	// 88 = 0x58
    unsigned long long _stateHandle;	// 96 = 0x60
    MPCAVItemTrace *_playbackStartTrace;	// 104 = 0x68
    _MPCAudioSessionController *_transientAudioSessionController;	// 112 = 0x70
    id <MPCPlaybackEngineEventStreamDeferralAssertion> _evsDeferralAssertionForFirstAudioFrame;	// 120 = 0x78
    NSNumber *_currentRelativeVolume;	// 128 = 0x80
}

+ (id)describePlayer:(id)arg1;	// IMP=0x001000000019ebce
- (void).cxx_destruct;	// IMP=0x000000000015813b
@property(nonatomic) _Bool lastReportedVocalAttenuationEnabledState; // @synthesize lastReportedVocalAttenuationEnabledState=_lastReportedVocalAttenuationEnabledState;
@property(copy, nonatomic) NSNumber *currentRelativeVolume; // @synthesize currentRelativeVolume=_currentRelativeVolume;
@property(retain, nonatomic) id <MPCPlaybackEngineEventStreamDeferralAssertion> evsDeferralAssertionForFirstAudioFrame; // @synthesize evsDeferralAssertionForFirstAudioFrame=_evsDeferralAssertionForFirstAudioFrame;
@property(retain, nonatomic) _MPCAudioSessionController *transientAudioSessionController; // @synthesize transientAudioSessionController=_transientAudioSessionController;
@property(retain, nonatomic) MPCAVItemTrace *playbackStartTrace; // @synthesize playbackStartTrace=_playbackStartTrace;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) MPCPlayerItemConfigurator *configurator; // @synthesize configurator=_configurator;
@property(retain, nonatomic) MPCLeaseController *leaseController; // @synthesize leaseController=_leaseController;
@property(retain, nonatomic) id <MFAssetLoading> assetLoader; // @synthesize assetLoader=_assetLoader;
@property(retain, nonatomic) MPCExternalPlaybackController *externalPlaybackController; // @synthesize externalPlaybackController=_externalPlaybackController;
@property(retain, nonatomic) MPCPlaybackErrorController *errorController; // @synthesize errorController=_errorController;
@property(retain, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(retain, nonatomic) MPCItemBookmarker *bookmarker; // @synthesize bookmarker=_bookmarker;
@property(retain, nonatomic) id <MFPlaybackStackController><MFQueueManagement> playbackStackController; // @synthesize playbackStackController=_playbackStackController;
@property(nonatomic) long long jumpIdentifier; // @synthesize jumpIdentifier=_jumpIdentifier;
@property(readonly, nonatomic, getter=isReloadingPlaybackContext) _Bool reloadingPlaybackContext; // @synthesize reloadingPlaybackContext=_reloadingPlaybackContext;
@property(nonatomic) _Bool autoPlayWhenLikelyToKeepUp; // @synthesize autoPlayWhenLikelyToKeepUp=_autoPlayWhenLikelyToKeepUp;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)invalidateEVSDeferralAssertionForFirstAudioFrame;	// IMP=0x0000000000157f31
- (void)takeEVSDeferralAssertionForFirstAudioFrame;	// IMP=0x0000000000157e4f
- (void)assetLoadingDidStartForItem:(id)arg1;	// IMP=0x0000000000157a36
- (void)assetLoadingDidCompleteForItem:(id)arg1 error:(id)arg2;	// IMP=0x0000000000156d72
- (void)stackControllerDidCreateTransitionFrom:(id)arg1 to:(id)arg2 type:(long long)arg3 parameters:(id)arg4;	// IMP=0x0000000000156b93
- (void)errorResolutionDidEndForItem:(id)arg1 error:(id)arg2 resolution:(long long)arg3;	// IMP=0x0000000000156a23
- (void)errorResolutionDidStartForItem:(id)arg1 error:(id)arg2;	// IMP=0x00000000001568f0
- (void)didReportSignpostWithType:(long long)arg1;	// IMP=0x000000000015687c
- (void)relativeVolumeDidChangeTo:(float)arg1 timeStamp:(id)arg2;	// IMP=0x000000000015668c
- (void)firstVideoFrameWasRenderedForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x00000000001560c5
- (void)playbackIsBlockedOnNonPlayableItem:(id)arg1;	// IMP=0x0000000000155f53
- (void)mediaServicesInterruptionDidEndWithTimeStamp:(id)arg1;	// IMP=0x0000000000155be0
- (void)mediaServicesInterruptionDidBeginWithItemAtDeath:(id)arg1 timeAtDeath:(double)arg2 timeStamp:(id)arg3;	// IMP=0x00000000001556c2
- (void)userActionDidEnd:(id)arg1 error:(id)arg2;	// IMP=0x0000000000155436
- (void)userActionDidBegin:(id)arg1;	// IMP=0x0000000000154ff2
- (void)didReachEndOfQueueWithReason:(id)arg1;	// IMP=0x0000000000154da4
- (void)screenRecordingDidChange:(_Bool)arg1 timeStamp:(id)arg2;	// IMP=0x0000000000154b92
- (void)tracksDidChangeForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x000000000015499e
- (void)playbackIsLikelyToKeepUp:(_Bool)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000001540e9
- (void)playbackBufferStateDidChangeToState:(long long)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000015384b
- (void)interruptionDidFinishForInterruptor:(id)arg1 shouldResume:(_Bool)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000153570
- (void)interruptionDidBeginWithInterruptor:(id)arg1 timeStamp:(id)arg2;	// IMP=0x00000000001532fc
- (void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000152dc5
- (void)routeDidChange:(_Bool)arg1 metadata:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000001528e5
- (void)playbackWaitingToPlayForItem:(id)arg1 reason:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000015268a
- (void)timeControlStatusDidChange:(long long)arg1 waitingReason:(id)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000152364
- (void)firstFrameWillRenderForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x0000000000151d04
- (void)playbackRateDidChangeNotifiedForItem:(id)arg1 newRate:(float)arg2 reason:(id)arg3 participantIdentifier:(id)arg4 timeStamp:(id)arg5;	// IMP=0x000000000015160d
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000015139f
- (void)playbackDidStopForItem:(id)arg1 source:(id)arg2 reason:(id)arg3 timeStamp:(id)arg4;	// IMP=0x00000000001510c6
- (void)playbackDidStartForItem:(id)arg1 rate:(float)arg2 fromStalling:(_Bool)arg3 timeStamp:(id)arg4;	// IMP=0x00000000001502ad
- (double)_adjustPlayerTimeForAudioTapProcessing:(double)arg1;	// IMP=0x000000000015016e
- (void)_logPlayerEventsForQueueItem:(id)arg1;	// IMP=0x000000000014fd78
- (void)_updateActiveFormatForQueueItem:(id)arg1;	// IMP=0x000000000014f99e
- (void)itemIsReadyToPlay:(id)arg1 timeStamp:(id)arg2;	// IMP=0x000000000014f455
- (void)itemDidPlayToEnd:(id)arg1 timeStamp:(id)arg2;	// IMP=0x000000000014f1c2
- (void)itemDidFailToPlayToEnd:(id)arg1 error:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000014ebb0
- (void)itemDidFailToLoad:(id)arg1 silently:(_Bool)arg2 error:(id)arg3 timeStamp:(id)arg4;	// IMP=0x000000000014e915
- (void)userSeekCompletedForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 timeStamp:(id)arg4;	// IMP=0x000000000014e5c8
- (void)playbackTimeDidChangeTo:(double)arg1 forItem:(id)arg2 reason:(long long)arg3 timeStamp:(id)arg4;	// IMP=0x000000000014da99
- (void)playbackDidReachQueueEndWithTimeStamp:(id)arg1;	// IMP=0x000000000014d906
- (void)itemDidResignCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x000000000014d527
- (void)itemDidBecomeCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x000000000014cc43
- (void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 source:(long long)arg3 timeStamp:(id)arg4;	// IMP=0x000000000014c6ce
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;	// IMP=0x000000000014c5d2
- (void)engine:(id)arg1 didChangeQueueController:(id)arg2;	// IMP=0x000000000014c18b
- (void)engine:(id)arg1 willRemoveQueueController:(id)arg2;	// IMP=0x000000000014c0fb
- (_Bool)_itemConfigurationIsIncompatibleWithVocalAttenuationState:(id)arg1;	// IMP=0x000000000014c0ab
- (void)_performSkipForUserAction:(id)arg1;	// IMP=0x000000000014be52
- (_Bool)_isAVKitSkipAction:(id)arg1;	// IMP=0x000000000014bdc7
- (void)_playbackDidStopForItem:(id)arg1 source:(id)arg2 reason:(id)arg3 time:(double)arg4;	// IMP=0x000000000014b995
- (id)_MPAVItemForMFQueuePlayerItem:(id)arg1;	// IMP=0x000000000014b87b
- (void)_logTimeJumpForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 userInitiated:(_Bool)arg4 timeStamp:(id)arg5;	// IMP=0x000000000014b16f
@property(readonly, nonatomic) NSDictionary *_stateDictionary;
- (void)_setupPlaybackStackWithPlaybackEngine:(id)arg1;	// IMP=0x000000000014a7ef
- (void)setRelativeVolume:(float)arg1;	// IMP=0x000000000014a75a
- (void)jumpToTime:(double)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000014a593
- (void)setRate:(float)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000014a368
- (void)endScanningWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014a1b8
- (void)togglePlaybackWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000149de9
- (void)pauseForLeasePreventionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000149c28
- (void)pauseWithFadeout:(double)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000149a5d
- (void)pauseWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014989c
- (void)playWithRate:(float)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001496d2
@property(readonly, nonatomic) _Bool hasPlayedSuccessfully;
@property(readonly, nonatomic) AVPlayerViewController *playerViewController;
@property(readonly, nonatomic) long long stateBeforeInterruption;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) float currentRate;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) MPAVItem *currentItem;
- (void)updateAudioSession;	// IMP=0x000000000014930d
- (void)becomeActiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000014915f
- (void)finalizeStateRestoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000149005
- (void)finalizeSetQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000148938
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1 allowReuse:(_Bool)arg2;	// IMP=0x00000000001488e7
- (void)setupPlaybackStackIfNeeded;	// IMP=0x0000000000148791
- (void)prewarm;	// IMP=0x0000000000148732
- (void)dealloc;	// IMP=0x00000000001486f8
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x00000000001485ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

