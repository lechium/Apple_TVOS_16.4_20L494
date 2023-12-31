//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessPredicateImpl.h"

__attribute__((visibility("hidden")))
@interface RBSProcessPlatformPredicate : RBSProcessPredicateImpl
{
    int _platform;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0060000000024475
@property(readonly, nonatomic) int platform; // @synthesize platform=_platform;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000244a7
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000002447d
- (id)description;	// IMP=0x00000000000243f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024388
- (unsigned long long)hash;	// IMP=0x0000000000024349
- (id)processPredicate;	// IMP=0x000000000002432d
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x0000000000024300
- (id)initWithPlatform:(int)arg1;	// IMP=0x000000000002429e

@end

