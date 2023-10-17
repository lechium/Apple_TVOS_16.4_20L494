//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKFriendRecommendationInternal
{
    NSString *_reason;	// 280 = 0x118
    NSString *_reason2;	// 288 = 0x120
    unsigned int _rid;	// 296 = 0x128
    int _source;	// 300 = 0x12c
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0020000000117af1
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000117ae9
+ (int)familiarity;	// IMP=0x00100000001bd631
- (void).cxx_destruct;	// IMP=0x0020000000117d3e
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) unsigned int rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSString *reason2; // @synthesize reason2=_reason2;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (int)defaultFamiliarity;	// IMP=0x0010000000117ca9

@end
