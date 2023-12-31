//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SQLiteCompoundPredicate
{
    NSString *_combinationOperation;	// 8 = 0x8
    NSArray *_predicates;	// 16 = 0x10
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x002000000013f555
+ (id)predicateMatchingAnyPredicates:(id)arg1;	// IMP=0x001000000013f4cd
+ (id)predicateMatchingAllPredicates:(id)arg1;	// IMP=0x001000000013f445
- (void).cxx_destruct;	// IMP=0x002000000013fedd
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x001000000013fcfc
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x001000000013fa74
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000013f96e
- (unsigned long long)hash;	// IMP=0x001000000013f8d9
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x001000000013f777
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000013f76c

@end

