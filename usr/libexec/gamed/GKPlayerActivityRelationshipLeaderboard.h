//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKLeaderboardInternal, NSArray;

@interface GKPlayerActivityRelationshipLeaderboard
{
    NSArray *_scores;	// 32 = 0x20
    long long _leaderboardType;	// 40 = 0x28
    GKLeaderboardInternal *_leaderboardInternal;	// 48 = 0x30
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00400000001422ea
- (void).cxx_destruct;	// IMP=0x0020000000142b01
@property(retain, nonatomic) GKLeaderboardInternal *leaderboardInternal; // @synthesize leaderboardInternal=_leaderboardInternal;
@property(nonatomic) long long leaderboardType; // @synthesize leaderboardType=_leaderboardType;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
- (id)description;	// IMP=0x001000000014296a
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000001424b4

@end
