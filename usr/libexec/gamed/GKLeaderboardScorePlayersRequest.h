//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface GKLeaderboardScorePlayersRequest
{
    NSArray *_playerInternals;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000222c28
- (void).cxx_destruct;	// IMP=0x0020000000222ea5
@property(copy, nonatomic) NSArray *playerInternals; // @synthesize playerInternals=_playerInternals;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000222de5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000222d22
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000222c30
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c6395
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000c5c66
- (id)resourceIdentifier;	// IMP=0x00100000000c5a1c
- (id)serverRequestWithService:(id)arg1;	// IMP=0x00100000000c569d
- (id)bagKey;	// IMP=0x00100000000c5690

@end

