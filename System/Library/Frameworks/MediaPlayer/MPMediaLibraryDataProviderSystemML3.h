//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPMediaLibraryDataProviderML3.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3
{
    long long _currentRevision;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)_localizedGeniusErrorForError:(id)arg1 geniusEnabled:(_Bool)arg2;	// IMP=0x0060000000176a7c
+ (id)_localizedCloudGeniusErrorForError:(id)arg1;	// IMP=0x00600000001764fe
- (void).cxx_destruct;	// IMP=0x0000000000175681
- (_Bool)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class *)arg3;	// IMP=0x0000000000175650
- (void)updateEntitesToCurrentRevision;	// IMP=0x00000000001755d0
- (id)errorResolverForItem:(id)arg1;	// IMP=0x0000000000175545
- (void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001752c0
- (void)geniusItemsForSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000175024
- (void)releaseGeniusClusterPlaylist:(void *)arg1;	// IMP=0x0000000000175016
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg1 count:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000174f2e
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000174dec
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000174bdc
- (_Bool)isGeniusEnabled;	// IMP=0x0000000000174b42
- (long long)_currentRevision;	// IMP=0x0000000000174ae1
- (void)_initInstanceVariableOnce;	// IMP=0x0000000000174a72
- (id)initWithLibrary:(id)arg1;	// IMP=0x0000000000174a26

@end

