//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <JetEngine/NSObject-Protocol.h>

@class NSArray;
@protocol JEMediaPlaylistItem;

@protocol JEMediaPlaylist <NSObject>
- (NSArray *)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2;
- (id <JEMediaPlaylistItem>)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2;

@optional
@property(readonly, nonatomic) NSArray *eventData;
@end

