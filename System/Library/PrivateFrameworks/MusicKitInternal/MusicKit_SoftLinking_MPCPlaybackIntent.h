//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackIntent, NSData, NSString;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPCPlaybackIntent : NSObject
{
    MPCPlaybackIntent *_underlyingPlaybackIntent;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000cc42
@property(nonatomic, setter=setShuffleMode:) long long shuffleMode;
@property(nonatomic, setter=setRepeatMode:) long long repeatMode;
@property(copy, nonatomic, setter=setPlayActivityRecommendationData:) NSData *playActivityRecommendationData;
@property(copy, nonatomic, setter=setPlayActivityFeatureName:) NSString *playActivityFeatureName;
- (id)_underlyingPlaybackIntent;	// IMP=0x000000000000cb2e
@property(readonly, nonatomic) id rawPlaybackIntent;
- (id)initWithLegacyModelStationSeeding:(id)arg1;	// IMP=0x000000000000c799
- (id)initWithLegacyLibraryRequest:(id)arg1 startLegacyModelObject:(id)arg2 onlyLibraryContent:(_Bool)arg3;	// IMP=0x000000000000c60e
- (id)initWithStoreIDs:(id)arg1 startLegacyModelObject:(id)arg2;	// IMP=0x000000000000c2b3

@end

