//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerPlaybackCoordinator, MPCPlaybackEngine, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface MPCMediaFoundationTranslator : NSObject
{
    MPCPlaybackEngine *_playbackEngine;	// 8 = 0x8
    AVPlayerPlaybackCoordinator *_playbackCoordinator;	// 16 = 0x10
    NSMapTable *_mapping;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000031c43b
@property(readonly, copy, nonatomic) NSMapTable *mapping; // @synthesize mapping=_mapping;
@property(readonly, nonatomic) AVPlayerPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
@property(nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (id)_MPAVItemForContentItemID:(id)arg1 allowReuse:(_Bool)arg2;	// IMP=0x000000000031c21b
- (void)updatePlayerPlaybackCoordinator:(id)arg1;	// IMP=0x000000000031c02f
- (_Bool)canSkipInDirection:(long long)arg1 fromItem:(id)arg2;	// IMP=0x000000000031becc
- (id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 reason:(long long)arg4;	// IMP=0x000000000031b201
- (id)queueItemForPlayerItem:(id)arg1 allowReuse:(_Bool)arg2;	// IMP=0x000000000031b19a
- (id)queueItemForContentItemID:(id)arg1 allowReuse:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000031af92
- (id)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long *)arg3;	// IMP=0x000000000031ad87
@property(readonly, copy, nonatomic) NSString *targetContentItemID;
- (void)resetMapping;	// IMP=0x000000000031acd0
- (void)setMPAVItem:(id)arg1 forMFPlayerItem:(id)arg2;	// IMP=0x000000000031ac28
- (id)MPAVItemForMFPlayerItem:(id)arg1;	// IMP=0x000000000031abc1
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x000000000031ab33

@end

