//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSExpression.h"

@class NSVariableExpression;

__attribute__((visibility("hidden")))
@interface NSVariableAssignmentExpression : NSExpression
{
    NSVariableExpression *_assignmentVariable;	// 24 = 0x18
    NSExpression *_subexpression;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000051b083
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x000000000051b854
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000051b7ab
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000051b6d6
- (unsigned long long)hash;	// IMP=0x000000000051b682
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000051b5d1
- (id)predicateFormat;	// IMP=0x000000000051b517
- (id)subexpression;	// IMP=0x000000000051b506
- (id)variable;	// IMP=0x000000000051b4e9
- (id)assignmentVariable;	// IMP=0x000000000051b4d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000051b44f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000051b212
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000051b113
- (void)allowEvaluation;	// IMP=0x000000000051b08b
- (unsigned long long)expressionType;	// IMP=0x000000000051b078
- (id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2;	// IMP=0x000000000051afde
- (id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2;	// IMP=0x000000000051af59
- (void)dealloc;	// IMP=0x000000000051aede

@end

