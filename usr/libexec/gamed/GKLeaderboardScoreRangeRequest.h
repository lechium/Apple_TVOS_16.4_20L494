//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKLeaderboardScoreRangeRequest
{
    struct _NSRange _range;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000222a3c
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000222b83
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000222ae6
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000222a44
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c4fc7
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000c49e1
- (id)resourceIdentifier;	// IMP=0x00100000000c477b
- (id)serverRequestWithService:(id)arg1;	// IMP=0x00100000000c44b1
- (id)bagKey;	// IMP=0x00100000000c44a4
- (void)sanitizeRange;	// IMP=0x00100000000c446f

@end

