//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SHServerLyricsResponse : NSObject
{
    NSDictionary *_lyricsDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000013366
@property(retain, nonatomic) NSDictionary *lyricsDictionary; // @synthesize lyricsDictionary=_lyricsDictionary;
- (id);	// IMP=0x001000000001334b
- (id)itemForIdentifiers:(id)arg1;	// IMP=0x0010000000013103
- (id)initWithLyricsDictionary:(id)arg1;	// IMP=0x0010000000013098

@end

