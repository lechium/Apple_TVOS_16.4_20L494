//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTPAFKit, MTPAFPlaylist;

__attribute__((visibility("hidden")))
@interface MTPAFPlaylistKitBinding : NSObject
{
    MTPAFPlaylist *_playlist;	// 8 = 0x8
    MTPAFKit *_pafKit;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002d498
@property(retain, nonatomic) MTPAFKit *pafKit; // @synthesize pafKit=_pafKit;
@property(retain, nonatomic) MTPAFPlaylist *playlist; // @synthesize playlist=_playlist;

@end

