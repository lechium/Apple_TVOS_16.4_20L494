//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessPredicateImpl.h"

@class RBSProcessIdentity;

__attribute__((visibility("hidden")))
@interface RBSProcessIdentityPredicate : RBSProcessPredicateImpl
{
    RBSProcessIdentity *_identity;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0060000000036622
- (void).cxx_destruct;	// IMP=0x00000000000366ec
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000036654
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000003662a
- (id)description;	// IMP=0x000000000003659e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000364e7
- (unsigned long long)hash;	// IMP=0x0000000000036491
- (id)processPredicate;	// IMP=0x0000000000036475
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x0000000000036458

@end
