//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayerActivityRelationshipPlayer, NSString;

@interface GKPlayerActivityRelationshipLeaderboardScore
{
    _Bool _gained;	// 8 = 0x8
    GKPlayerActivityRelationshipPlayer *_player;	// 16 = 0x10
    NSString *_score;	// 24 = 0x18
    long long _rank;	// 32 = 0x20
    NSString *_message;	// 40 = 0x28
    NSString *_symbol;	// 48 = 0x30
}

+ (id)secureCodedPropertyKeys;	// IMP=0x004000000014180a
- (void).cxx_destruct;	// IMP=0x0020000000141d99
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) _Bool gained; // @synthesize gained=_gained;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *score; // @synthesize score=_score;
@property(retain, nonatomic) GKPlayerActivityRelationshipPlayer *player; // @synthesize player=_player;
- (id)description;	// IMP=0x0010000000141b53
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000141955

@end

