//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SQLiteComparisonPredicate
{
    long long _comparisonType;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x002000000013e417
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;	// IMP=0x001000000013e3ff
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;	// IMP=0x001000000013e36f
- (void).cxx_destruct;	// IMP=0x002000000013e97e
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x001000000013e89a
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000013e75e
- (unsigned long long)hash;	// IMP=0x001000000013e6d1
- (id)description;	// IMP=0x001000000013e5ea
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x001000000013e515
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000013e50a

@end

