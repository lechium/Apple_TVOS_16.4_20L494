//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSExpression, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLSimpleWhereIntermediate
{
    NSMutableArray *_comparisonPredicateScopedItem;	// 24 = 0x18
    NSExpression *_effectiveLeftExpression;	// 32 = 0x20
    NSExpression *_effectiveRightExpression;	// 40 = 0x28
}

- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x00000000001f3471
- (id)_lastScopedItem;	// IMP=0x00000000001ef48b
- (_Bool)isWhereScoped;	// IMP=0x00000000001ef483
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;	// IMP=0x00000000001ef28a
- (void)dealloc;	// IMP=0x00000000001ef218

@end

