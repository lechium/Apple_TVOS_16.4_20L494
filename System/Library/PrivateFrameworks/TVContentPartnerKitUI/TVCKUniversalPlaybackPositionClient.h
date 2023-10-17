//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATVUPPClientState, NSLock, NSString, SBKUniversalPlaybackPositionStore;

__attribute__((visibility("hidden")))
@interface TVCKUniversalPlaybackPositionClient : NSObject
{
    SBKUniversalPlaybackPositionStore *_uppStore;	// 8 = 0x8
    id _activeAccountOrNull;	// 16 = 0x10
    double _lastSyncTimestamp;	// 24 = 0x18
    _Bool _needsSync;	// 32 = 0x20
    NSLock *_stateLock;	// 40 = 0x28
    ATVUPPClientState *_state;	// 48 = 0x30
}

+ (id)defaultClient;	// IMP=0x001000000009a100
- (void).cxx_destruct;	// IMP=0x000000000009aeee
@property(retain) ATVUPPClientState *state; // @synthesize state=_state;
- (id)allRecords;	// IMP=0x000000000009ae0b
- (void)_updateBoundActiveStoreAccount;	// IMP=0x000000000009abf4
- (void)tvs_bindActiveStoreAccountBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000000009aafb
- (id)ActiveStoreAccountBinding;	// IMP=0x000000000009aaab
- (id)recordForBookmarkKey:(id)arg1;	// IMP=0x000000000009a804
- (id)recordForItemIdentifier:(id)arg1 mediaType:(id)arg2 podcastURL:(id)arg3 podcastGUID:(id)arg4;	// IMP=0x000000000009a6e4
- (void)writeItems:(id)arg1;	// IMP=0x000000000009a4ed
- (void)synchronize:(CDUnknownBlockType)arg1;	// IMP=0x000000000009a34b
- (void)_setNeedsSync;	// IMP=0x000000000009a2ea
- (void)dealloc;	// IMP=0x000000000009a275
- (id)init;	// IMP=0x000000000009a155
- (void)cancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x000000000009b685
- (void)commitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009b097
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009af2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
