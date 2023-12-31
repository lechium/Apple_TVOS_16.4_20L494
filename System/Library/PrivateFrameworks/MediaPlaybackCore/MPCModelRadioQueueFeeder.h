//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPQueueFeeder.h>

@class ICStoreRequestContext, ICUserIdentityStore, MPAVItem, MPCModelRadioPersonalizationResponse, MPCModelRadioPlaybackContext, MPCModelRadioPlaybackQueue, MPCPlaybackRequestEnvironment, NSDictionary, NSString;
@protocol MPMutableIdentifierListSection;

__attribute__((visibility("hidden")))
@interface MPCModelRadioQueueFeeder : MPQueueFeeder
{
    id <MPMutableIdentifierListSection> _section;	// 8 = 0x8
    MPCModelRadioPlaybackQueue *_playbackQueue;	// 16 = 0x10
    MPCModelRadioPlaybackContext *_playbackContext;	// 24 = 0x18
    _Bool _needsSectionUpdate;	// 32 = 0x20
    unsigned long long _backgroundTaskIdentifier;	// 40 = 0x28
    unsigned long long _backgroundTasks;	// 48 = 0x30
    MPAVItem *_currentItem;	// 56 = 0x38
    _Bool _hasReachedTracklistEnd;	// 64 = 0x40
    _Bool _supportsLoadingAdditionalItems;	// 65 = 0x41
    NSString *_lastCleanPlayedIdentifier;	// 72 = 0x48
    NSString *_lastPlayedIdentifier;	// 80 = 0x50
    MPCModelRadioPersonalizationResponse *_lastResponse;	// 88 = 0x58
    _Bool _mayHaveRestrictedContent;	// 96 = 0x60
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;	// 104 = 0x68
    long long _queueGeneration;	// 112 = 0x70
    NSString *_siriAssetInfo;	// 120 = 0x78
    ICUserIdentityStore *_observedIdentityStore;	// 128 = 0x80
    ICStoreRequestContext *_storeRequestContext;	// 136 = 0x88
    _Bool _hasSignedOut;	// 144 = 0x90
}

+ (id)sharedQueue;	// IMP=0x001000000033944b
- (void).cxx_destruct;	// IMP=0x0000000000336fe8
- (void)_repersonalizeCurrentTracks;	// IMP=0x0000000000336e45
- (void)_responseDidInvalidate;	// IMP=0x0000000000336de6
- (void)_removeRestrictedTracks;	// IMP=0x00000000003367f6
- (void)_removeAllTracks;	// IMP=0x000000000033651a
- (void)_observePersonalizationResponse:(id)arg1;	// IMP=0x000000000033639b
- (void)_loadTracksWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003360f3
- (_Bool)_isTransientLoadingError:(id)arg1;	// IMP=0x0000000000336058
- (void)_handlePersonalizationResponse:(id)arg1 personalizationError:(id)arg2 fromRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003352db
- (void)_handleGetTracksResponse:(id)arg1 getTracksError:(id)arg2 fromRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000334cc5
- (id)_errorForRequest:(id)arg1 withError:(id)arg2;	// IMP=0x00000000003343b6
- (void)_endObservingIdentityStoreForSignOut;	// IMP=0x000000000033432b
- (void)_endBackgroundTaskAssertion;	// IMP=0x000000000033428a
- (void)_detectSignOutForIdentityStore:(id)arg1;	// IMP=0x000000000033409f
- (id)_defaultGetTracksRequestWithContext:(id)arg1 radioStation:(id)arg2;	// IMP=0x0000000000333c27
- (void)_beginObservingIdentityStoreForSignOut;	// IMP=0x0000000000333b30
- (void)_beginBackgroundTaskAssertion;	// IMP=0x0000000000333962
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x0000000000333903
- (void)_responseDidInvalidateNotification:(id)arg1;	// IMP=0x0000000000333866
- (void)_detectSignOutForIdentityStoreChangeNotification:(id)arg1;	// IMP=0x00000000003337c9
- (void)_allowCellularStreamingDidChangeNotification:(id)arg1;	// IMP=0x000000000033376a
- (void)_updateAdditionalLoadingSupport;	// IMP=0x0000000000333626
@property(readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (id)modelPlayEventForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000003334e8
- (id)firstModelPlayEvent;	// IMP=0x0000000000333453
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000033300d
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;	// IMP=0x0000000000333001
- (id)updatedPlaybackContext;	// IMP=0x0000000000332fec
- (id)placeholderItemForLoadingAdditionalItemsInSection:(id)arg1;	// IMP=0x0000000000332ece
- (void)loadAdditionalItemsWithCount:(long long)arg1 forSection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000332c22
- (long long)prefetchThresholdForSection:(id)arg1;	// IMP=0x0000000000332bd2
- (_Bool)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)arg1;	// IMP=0x0000000000332b79
- (id)itemForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000033280c
- (id)identifiersForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000033276c
- (void)loadPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003316a2
- (_Bool)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000033169a
- (_Bool)containsTransportableContentWithReason:(id *)arg1;	// IMP=0x000000000033150f
@property(readonly, nonatomic) _Bool containsRadioContent;
@property(readonly, nonatomic) _Bool containsLiveStream;
- (id)supplementalPlaybackContextWithReason:(long long)arg1;	// IMP=0x0000000000330d6b
- (long long)supplementalPlaybackContextBehavior;	// IMP=0x0000000000330d60
- (_Bool)canSkipItem:(id)arg1 reason:(id *)arg2;	// IMP=0x0000000000330b97
- (_Bool)canJumpToItem:(id)arg1 reason:(id *)arg2;	// IMP=0x0000000000330b42
- (void)itemDidBeginPlayback:(id)arg1;	// IMP=0x0000000000330a02
- (long long)itemCount;	// IMP=0x00000000003309e5
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000330949
- (void)dealloc;	// IMP=0x00000000003307f1
- (id)init;	// IMP=0x000000000033067f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

