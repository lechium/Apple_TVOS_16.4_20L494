//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (GKCachingAdditions)
+ (id)stringForScoreAndPercentileWithRank:(float)arg1 totalScores:(float)arg2 formattedScore:(id)arg3;	// IMP=0x002000000020bbec
+ (id)stringForRankAndPercentileWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x001000000020ba4d
+ (id)stringForParanthenticalPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x001000000020b918
+ (id)stringForPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x001000000020b84c
+ (id)stringForPercentileWithRank:(float)arg1 totalScores:(float)arg2 asPercentile:(_Bool)arg3 isTop:(_Bool *)arg4;	// IMP=0x001000000020b794
+ (id)_gkUUIDString;	// IMP=0x001000000020b0a8
- (id)cacheKeyRepresentation;	// IMP=0x002000000012f2b1
- (id)_gkSHA256Hash;	// IMP=0x001000000020c072
- (id)_gkArrayByTokenizingString;	// IMP=0x001000000020bd39
- (id)_gkStringByUnescapingFromURLQuery;	// IMP=0x001000000020bcdb
- (id)_gkLocaleSensitiveUppercaseString;	// IMP=0x001000000020b73f
- (_Bool)_gkSearchMatchesItem:(id)arg1 withSearchTerms:(id)arg2;	// IMP=0x001000000020b3ec
- (_Bool)_gkIsMixedDirection;	// IMP=0x001000000020b2f4
- (_Bool)_gkIsNaturallyRTL;	// IMP=0x001000000020b1fe
- (void)processUTF16CharactersForBidi:(CDUnknownBlockType)arg1;	// IMP=0x001000000020b0ea
@end
