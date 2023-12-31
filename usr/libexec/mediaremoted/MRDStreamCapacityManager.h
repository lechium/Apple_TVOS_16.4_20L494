//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDNowPlayingPlayerClient;

@interface MRDStreamCapacityManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x00400000000149e9
- (void)_handlePlaybackStateDidChange:(id)arg1;	// IMP=0x0020000000017f8d
- (id)streamsActivelyUsingSlot;	// IMP=0x0010000000017f21
- (id)streamsThatCountTowardsCapacity;	// IMP=0x0010000000017ca8
- (id)allStreamsExcludingLocal;	// IMP=0x0010000000017c0b
- (id)allStreams;	// IMP=0x0010000000017b15
@property(readonly, nonatomic) long long remainingStreamCapacity;
@property(readonly, nonatomic) long long maxStreamCapacity;
@property(readonly, nonatomic) long long activeStreamCount;
- (_Bool)willStartingPlaybackToOutputDevicesInterrupt:(id)arg1;	// IMP=0x00100000000173d3
- (id)_willStartingPlaybackToOutputDevicesInterrupt:(id)arg1;	// IMP=0x0010000000016f46
@property(readonly, nonatomic) MRDNowPlayingPlayerClient *bestStreamToInterrupt;
- (void)interruptBestStreamIfNecessaryToActivateStreamWithPlayerPath:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000160ce
- (id)canActivateStreamWithPlayerPath:(id)arg1;	// IMP=0x001000000001506f
- (id)description;	// IMP=0x0010000000014ad2
- (id)init;	// IMP=0x0010000000014a3e

@end

