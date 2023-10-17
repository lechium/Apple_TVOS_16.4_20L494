//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPQueueFeeder.h>

@class MPCModelGenericAVItemUserIdentityPropertySet, MPCModelPlaybackContext, MPCPlaybackRequestEnvironment, MPIdentifierSet, MPModelGenericObject, MPModelRequest, MPModelResponse, MPPropertySet, MPRequestResponseController, NSDictionary, NSHashTable, NSLock, NSObject, NSString;
@protocol MPCModelPlaybackRequest, MPCModelPlaybackResponse, MPMutableIdentifierListSection, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCModelQueueFeeder : MPQueueFeeder
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_diffQueue;	// 16 = 0x10
    NSLock *_diffLock;	// 24 = 0x18
    NSHashTable *_activeModelGenericAVItems;	// 32 = 0x20
    NSDictionary *_assetStoreFronts;	// 40 = 0x28
    NSDictionary *_endTimeModifications;	// 48 = 0x30
    CDUnknownBlockType _loadingCompletionHandler;	// 56 = 0x38
    MPRequestResponseController *_requestController;	// 64 = 0x40
    MPModelRequest<MPCModelPlaybackRequest> *_request;	// 72 = 0x48
    NSString *_rtcReportingPlayQueueSourceIdentifier;	// 80 = 0x50
    _Bool _isSiriInitiated;	// 88 = 0x58
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;	// 96 = 0x60
    MPIdentifierSet *_startItemIdentifiers;	// 104 = 0x68
    NSDictionary *_startTimeModifications;	// 112 = 0x70
    id <MPMutableIdentifierListSection> _section;	// 120 = 0x78
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;	// 128 = 0x80
    MPCModelPlaybackContext *_playbackContext;	// 136 = 0x88
    MPPropertySet *_representativeMetadataPropertySet;	// 144 = 0x90
    unsigned long long _backgroundTaskIdentifier;	// 152 = 0x98
    unsigned long long _backgroundTasks;	// 160 = 0xa0
    MPModelGenericObject *_fallbackSectionRepresentation;	// 168 = 0xa8
    MPModelResponse<MPCModelPlaybackResponse> *_response;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000246f99
@property(readonly, nonatomic) MPModelResponse<MPCModelPlaybackResponse> *response; // @synthesize response=_response;
@property(copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation; // @synthesize fallbackSectionRepresentation=_fallbackSectionRepresentation;
- (id)_supplementalLibraryRequest;	// IMP=0x0000000000246479
- (id)_sectionedModelObjectsRepresentationForSectionedCollection:(id)arg1;	// IMP=0x00000000002463a7
- (id)_equivalencySourceAdamIDForIdentifierSet:(id)arg1;	// IMP=0x0000000000246289
- (void)_endBackgroundTaskAssertion;	// IMP=0x00000000002461e8
- (void)_beginBackgroundTaskAssertion;	// IMP=0x0000000000245fef
- (_Bool)section:(id)arg1 shouldShuffleExcludeItem:(id)arg2;	// IMP=0x0000000000245f37
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;	// IMP=0x0000000000245f2a
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000245e4d
- (_Bool)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000245d95
- (id)itemForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000245568
- (id)identifiersForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000002454c8
- (void)loadPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000024452c
- (id)firstItemIntersectingIdentifierSet:(id)arg1;	// IMP=0x00000000002443f9
- (_Bool)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000002441e2
- (_Bool)containsTransportableContentWithReason:(id *)arg1;	// IMP=0x00000000002441da
@property(readonly, nonatomic) _Bool containsLiveStream;
- (_Bool)canJumpToItem:(id)arg1 reason:(id *)arg2;	// IMP=0x00000000002440cc
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (void)didFinishLoadingRequestForController:(id)arg1;	// IMP=0x00000000002440a5
- (void)willBeginLoadingRequestForController:(id)arg1;	// IMP=0x0000000000244093
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;	// IMP=0x0000000000243f01
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;	// IMP=0x0000000000243e27
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000243d2c
- (id)modelPlayEventForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000243b25
- (id)firstModelPlayEvent;	// IMP=0x0000000000243a51
- (id)uniqueIdentifier;	// IMP=0x0000000000243a34
- (id)updatedPlaybackContext;	// IMP=0x0000000000243a1f
- (id)supplementalPlaybackContextWithReason:(long long)arg1;	// IMP=0x0000000000243538
- (long long)supplementalPlaybackContextBehavior;	// IMP=0x0000000000243503
- (id)playbackInfoForItem:(id)arg1;	// IMP=0x0000000000242f93
- (void)applyVolumeNormalizationForItem:(id)arg1;	// IMP=0x0000000000242d6c
- (void)dealloc;	// IMP=0x0000000000242cef
- (id)init;	// IMP=0x0000000000242bb5

// Remaining properties
@property(readonly, nonatomic) _Bool containsRadioContent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property(readonly) Class superclass;

@end
