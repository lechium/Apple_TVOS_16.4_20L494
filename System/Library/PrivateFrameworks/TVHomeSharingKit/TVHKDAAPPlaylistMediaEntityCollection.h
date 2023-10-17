//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaEntityCollection.h"

@class NSString, TVHKDMAPPlaylistIdentifier, TVHKMediaEntityIdentifier, TVHKMediaEntityType;

__attribute__((visibility("hidden")))
@interface TVHKDAAPPlaylistMediaEntityCollection : TVHKMediaEntityCollection
{
    NSString *_imageIdentifier;	// 8 = 0x8
    TVHKMediaEntityType *_type;	// 16 = 0x10
    unsigned long long _playlistType;	// 24 = 0x18
    TVHKMediaEntityIdentifier *_parentPlaylistIdentifier;	// 32 = 0x20
    TVHKDMAPPlaylistIdentifier *_playlistIdentifier;	// 40 = 0x28
}

+ (unsigned long long)_playlistTypeFromDMAPEntity:(id)arg1;	// IMP=0x00600000000225c6
- (void).cxx_destruct;	// IMP=0x00000000000227ca
@property(copy, nonatomic) TVHKDMAPPlaylistIdentifier *playlistIdentifier; // @synthesize playlistIdentifier=_playlistIdentifier;
- (id)type;	// IMP=0x00000000000227a8
- (id)parentPlaylistIdentifier;	// IMP=0x00000000000222ec
- (unsigned long long)playlistType;	// IMP=0x000000000002223d
- (id)mediaItemCount;	// IMP=0x0000000000022184
- (id)isOrganizational;	// IMP=0x000000000002214c
- (id)isAutoGenerated;	// IMP=0x0000000000022102
- (id)imageIdentifier;	// IMP=0x000000000002204b
- (id)identifier;	// IMP=0x0000000000022039
- (id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3;	// IMP=0x0000000000021f4f
- (id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4;	// IMP=0x0000000000021ee0

@end

