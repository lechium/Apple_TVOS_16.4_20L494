//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, TVHKDAAPShowMediaEntityCollection;

__attribute__((visibility("hidden")))
@interface TVHKDAAPSeasonMediaEntityCollectionBuilder : NSObject
{
    _Bool _allowSplitSeason;	// 8 = 0x8
    _Bool _haveDuplicateEpisodeNumbers;	// 9 = 0x9
    TVHKDAAPShowMediaEntityCollection *_show;	// 16 = 0x10
    NSMutableArray *_episodes;	// 24 = 0x18
    NSMutableDictionary *_episodesByAlbumMetadataSeasonIdentifier;	// 32 = 0x20
    NSMutableDictionary *_episodesByEpisodeNumber;	// 40 = 0x28
}

+ (id)new;	// IMP=0x0060000000097dd0
- (void).cxx_destruct;	// IMP=0x00000000000987aa
@property(retain, nonatomic) NSMutableDictionary *episodesByEpisodeNumber; // @synthesize episodesByEpisodeNumber=_episodesByEpisodeNumber;
@property(retain, nonatomic) NSMutableDictionary *episodesByAlbumMetadataSeasonIdentifier; // @synthesize episodesByAlbumMetadataSeasonIdentifier=_episodesByAlbumMetadataSeasonIdentifier;
@property(retain, nonatomic) NSMutableArray *episodes; // @synthesize episodes=_episodes;
@property(nonatomic) _Bool haveDuplicateEpisodeNumbers; // @synthesize haveDuplicateEpisodeNumbers=_haveDuplicateEpisodeNumbers;
@property(nonatomic) _Bool allowSplitSeason; // @synthesize allowSplitSeason=_allowSplitSeason;
@property(retain, nonatomic) TVHKDAAPShowMediaEntityCollection *show; // @synthesize show=_show;
@property(readonly, copy, nonatomic) NSArray *seasons;
- (void)addEpisode:(id)arg1;	// IMP=0x0000000000097f29
- (id)initWithShow:(id)arg1;	// IMP=0x0000000000097e6e
- (id)init;	// IMP=0x0000000000097dff

@end

