//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVCKBookmark.h"

__attribute__((visibility("hidden")))
@interface TVCKMutableBookmark : TVCKBookmark
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0080000000047c7e
- (void)setIsMarkedAsUnwatched:(_Bool)arg1;	// IMP=0x0000000000047d5d
- (void)setHasBeenRented:(_Bool)arg1;	// IMP=0x0000000000047d4b
- (void)setHasBeenPlayed:(_Bool)arg1;	// IMP=0x0000000000047d39
- (void)setPlayCount:(unsigned long long)arg1;	// IMP=0x0000000000047d27
- (void)setBookmarkTimestamp:(id)arg1;	// IMP=0x0000000000047cf7
- (void)setBookmarkTime:(double)arg1;	// IMP=0x0000000000047c86

@end

