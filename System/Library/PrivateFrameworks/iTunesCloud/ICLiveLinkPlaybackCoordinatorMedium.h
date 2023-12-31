//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICLiveLink, NSMutableArray, NSUUID;

__attribute__((visibility("hidden")))
@interface ICLiveLinkPlaybackCoordinatorMedium : NSObject
{
    struct os_unfair_lock_s _fetchServerStateLock;	// 8 = 0x8
    ICLiveLink *_liveLink;	// 16 = 0x10
    NSUUID *_localParticipantUUID;	// 24 = 0x18
    long long _fetchServerStateInProgressCount;	// 32 = 0x20
    NSMutableArray *_fetchServerStateCompletions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009257e
@property(readonly, nonatomic) NSMutableArray *fetchServerStateCompletions; // @synthesize fetchServerStateCompletions=_fetchServerStateCompletions;
@property(readonly, nonatomic) long long fetchServerStateInProgressCount; // @synthesize fetchServerStateInProgressCount=_fetchServerStateInProgressCount;
@property(readonly, nonatomic) struct os_unfair_lock_s fetchServerStateLock; // @synthesize fetchServerStateLock=_fetchServerStateLock;
@property(readonly, copy, nonatomic) NSUUID *localParticipantUUID; // @synthesize localParticipantUUID=_localParticipantUUID;
@property(readonly, nonatomic) __weak ICLiveLink *liveLink; // @synthesize liveLink=_liveLink;
- (void)_reloadTransportControlStateForItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000922f2
- (void)_broadcastTransportControlStateDictionary:(id)arg1 forItemWithIdentifier:(id)arg2;	// IMP=0x0000000000092199
- (void)_broadcastLocalParticipantStateDictionary:(id)arg1;	// IMP=0x00000000000920c9
- (void)clearCoordinationMediumDelegate;	// IMP=0x0000000000091fb9
- (void)synchronizePlaybackStateForReason:(id)arg1;	// IMP=0x0000000000091ee5
- (void)handleNewTransportControlStateDictionary:(id)arg1;	// IMP=0x0000000000091dd5
- (void)handleNewParticipantStateDictionary:(id)arg1;	// IMP=0x0000000000091cc5
- (void)removeParticipant:(id)arg1;	// IMP=0x0000000000091bb5
- (void)handlePlaybackSyncPayload:(id)arg1;	// IMP=0x00000000000919a2
- (_Bool)isCoordinatorSuspended;	// IMP=0x000000000009199a
- (id)initWithLiveLink:(id)arg1;	// IMP=0x00000000000917f6

@end

