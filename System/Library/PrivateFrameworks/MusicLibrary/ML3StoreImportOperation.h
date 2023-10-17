//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ML3ImportOperation.h"

@class ML3StoreItemArtistData, ML3StoreItemPlaylistData, ML3StoreItemTrackData;

__attribute__((visibility("hidden")))
@interface ML3StoreImportOperation : ML3ImportOperation
{
    ML3StoreItemTrackData *_trackData;	// 8 = 0x8
    ML3StoreItemPlaylistData *_playlistData;	// 16 = 0x10
    ML3StoreItemArtistData *_artistData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012694b
- (_Bool)_importArtistsUsingImportSession:(void *)arg1;	// IMP=0x000000000012653e
- (_Bool)_importPlaylistsUsingImportSession:(void *)arg1;	// IMP=0x0000000000125e67
- (_Bool)_importTracksUsingImportSession:(void *)arg1;	// IMP=0x000000000012579a
- (_Bool)_performImportWithTransaction:(id)arg1;	// IMP=0x0000000000124db0
- (void)main;	// IMP=0x0000000000124baa
- (unsigned long long)importSource;	// IMP=0x0000000000124b9f

@end

