//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLEntity, NSSQLLimitIntermediate, NSSQLOrderIntermediate, NSSQLWhereIntermediate, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLStatementIntermediate
{
    NSSQLEntity *_governingEntity;	// 16 = 0x10
    NSString *_governingAlias;	// 24 = 0x18
    NSString *_correlationToken;	// 32 = 0x20
    NSSQLWhereIntermediate *_whereClause;	// 40 = 0x28
    NSSQLLimitIntermediate *_limitClause;	// 48 = 0x30
    NSSQLOrderIntermediate *_orderIntermediate;	// 56 = 0x38
}

- (_Bool)keypathExpressionIsSafeLHSForIn:(id)arg1;	// IMP=0x0000000000291965
- (id)governingEntityForKeypathExpression:(id)arg1;	// IMP=0x0000000000291918
- (id)governingAliasForKeypathExpression:(id)arg1;	// IMP=0x00000000002918cb
- (void)setGoverningEntity:(id)arg1;	// IMP=0x00000000002918ba
- (id)governingEntity;	// IMP=0x00000000002918a9
- (void)setGoverningAlias:(id)arg1;	// IMP=0x000000000029186a
- (id)governingAlias;	// IMP=0x0000000000291859
- (void)dealloc;	// IMP=0x0000000000291694
- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;	// IMP=0x000000000029163f

@end

