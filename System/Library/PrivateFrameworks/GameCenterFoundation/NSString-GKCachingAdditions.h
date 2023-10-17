//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (GKCachingAdditions)
+ (id)stringForScoreAndPercentileWithRank:(float)arg1 totalScores:(float)arg2 formattedScore:(id)arg3;	// IMP=0x005000000002680c
+ (id)stringForRankAndPercentileWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x0050000000026647
+ (id)stringForParanthenticalPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x00500000000264eb
+ (id)stringForPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x0050000000026413
+ (id)stringForPercentileWithRank:(float)arg1 totalScores:(float)arg2 asPercentile:(_Bool)arg3 isTop:(_Bool *)arg4;	// IMP=0x005000000002635b
+ (id)_gkUUIDString;	// IMP=0x0050000000025c5c
- (id)cacheKeyRepresentation;	// IMP=0x0010000000003f9b
- (id)_gkSHA256Hash;	// IMP=0x0010000000026c9e
- (id)_gkArrayByTokenizingString;	// IMP=0x0010000000026965
- (id)_gkStringByUnescapingFromURLQuery;	// IMP=0x0010000000026907
- (id)_gkLocaleSensitiveUppercaseString;	// IMP=0x0010000000026306
- (_Bool)_gkSearchMatchesItem:(id)arg1 withSearchTerms:(id)arg2;	// IMP=0x0010000000025fb3
- (_Bool)_gkIsMixedDirection;	// IMP=0x0010000000025ebb
- (_Bool)_gkIsNaturallyRTL;	// IMP=0x0010000000025db2
- (void)processUTF16CharactersForBidi:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025c9e
@end
