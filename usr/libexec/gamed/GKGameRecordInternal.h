//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKScoreInternal, NSDate;

@interface GKGameRecordInternal
{
    GKScoreInternal *_score;	// 112 = 0x70
    NSDate *_lastPlayedDate;	// 120 = 0x78
    NSDate *_purchaseDate;	// 128 = 0x80
    unsigned short _achievements;	// 136 = 0x88
    short _achievementPoints;	// 138 = 0x8a
    unsigned short _friendRank;	// 140 = 0x8c
    unsigned short _maxFriendRank;	// 142 = 0x8e
    unsigned int _rank;	// 144 = 0x90
    unsigned int _maxRank;	// 148 = 0x94
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00200000001d3805
+ (id)gameRecordForGame:(id)arg1;	// IMP=0x00100000001d35c6
+ (id)_gameProperties;	// IMP=0x00100000001bb719
+ (id)propertiesToFetch;	// IMP=0x00100000001bb371
- (void).cxx_destruct;	// IMP=0x00200000001d3b87
@property(nonatomic) unsigned int maxRank; // @synthesize maxRank=_maxRank;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(nonatomic) unsigned short maxFriendRank; // @synthesize maxFriendRank=_maxFriendRank;
// Error: Property attributes should begin with the type ('T') attribute, property name: friendRank
// Property attributes: (null)

@property(nonatomic) short achievementPoints; // @synthesize achievementPoints=_achievementPoints;
@property(nonatomic) unsigned short achievements; // @synthesize achievements=_achievements;
@property(retain, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(retain, nonatomic) NSDate *lastPlayedDate; // @synthesize lastPlayedDate=_lastPlayedDate;
@property(retain, nonatomic) GKScoreInternal *score; // @synthesize score=_score;
- (void)updateWithGame:(id)arg1;	// IMP=0x00100000001d3638
- (void)updateWithProperties:(id)arg1;	// IMP=0x00100000001bb816
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x00100000001bb03d

@end

