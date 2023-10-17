//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessPredicateImpl.h"

@protocol RBSProcessIdentifier;

__attribute__((visibility("hidden")))
@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl
{
    id <RBSProcessIdentifier> _identifier;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x00600000000339d4
- (void).cxx_destruct;	// IMP=0x0000000000033aaf
@property(readonly, nonatomic) id <RBSProcessIdentifier> identifier; // @synthesize identifier=_identifier;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000033a06
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000339dc
- (id)description;	// IMP=0x0000000000033950
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000338cb
- (unsigned long long)hash;	// IMP=0x0000000000033875
- (id)processPredicate;	// IMP=0x0000000000033859
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x000000000003383c
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000033753

@end

