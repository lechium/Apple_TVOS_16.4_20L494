//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSQLIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLSubqueryExpressionIntermediatePredicateVisitor : NSObject
{
    NSSQLIntermediate *_scope;	// 8 = 0x8
    _Bool _foundKeypath;	// 16 = 0x10
}

- (_Bool)checkPredicate:(id)arg1;	// IMP=0x00000000001f98f7
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x00000000001f9875
- (void)visitPredicate:(id)arg1;	// IMP=0x00000000001f986f
- (void)dealloc;	// IMP=0x00000000001f9834

@end

