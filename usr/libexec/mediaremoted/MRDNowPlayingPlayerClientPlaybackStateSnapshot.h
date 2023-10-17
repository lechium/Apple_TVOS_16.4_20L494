//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDNowPlayingPlayerClientPlaybackState, NSDate, NSString;

@interface MRDNowPlayingPlayerClientPlaybackStateSnapshot : NSObject
{
    MRDNowPlayingPlayerClientPlaybackState *_playerPlaybackState;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001d8ea
@property(retain, nonatomic) MRDNowPlayingPlayerClientPlaybackState *playerPlaybackState; // @synthesize playerPlaybackState=_playerPlaybackState;
- (long long)compare:(id)arg1;	// IMP=0x001000000001d83e
- (id)description;	// IMP=0x001000000001d7fe
@property(readonly, nonatomic) NSString *playbackStateDescription;
@property(readonly, nonatomic) unsigned int playbackState;
@property(readonly, nonatomic) NSDate *date;

@end

