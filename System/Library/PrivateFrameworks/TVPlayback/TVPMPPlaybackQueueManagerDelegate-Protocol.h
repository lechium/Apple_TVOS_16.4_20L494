//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/NSObject-Protocol.h>

@class NSObject, TVPMPPlaybackQueueManager;
@protocol MPNowPlayingContentItemLyricsDataSource, TVPMediaItem;

@protocol TVPMPPlaybackQueueManagerDelegate <NSObject>

@optional
- (id <MPNowPlayingContentItemLyricsDataSource>)manager:(TVPMPPlaybackQueueManager *)arg1 lyricsDataSourceForMediaItem:(NSObject<TVPMediaItem> *)arg2;
- (long long)manager:(TVPMPPlaybackQueueManager *)arg1 editingStyleFlagsForMediaItem:(NSObject<TVPMediaItem> *)arg2;
@end
