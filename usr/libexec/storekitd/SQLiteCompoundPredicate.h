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

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x002000000006989f
+ (id)predicateMatchingAnyPredicates:(id)arg1;	// IMP=0x0010000000069817
+ (id)predicateMatchingAllPredicates:(id)arg1;	// IMP=0x001000000006978f
- (void).cxx_destruct;	// IMP=0x002000000006a227
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x001000000006a046
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0010000000069dbe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000069cb8
- (unsigned long long)hash;	// IMP=0x0010000000069c23
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x0010000000069ac1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000069ab6

@end

