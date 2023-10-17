//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSISEngine;

@interface NSISLinearExpression : NSObject
{
    NSISEngine *engine;	// 8 = 0x8
    CDStruct_9ac54d62 linExp;	// 16 = 0x10
}

+ (id)acquireFromPoolForUseCase:(long long)arg1 engine:(id)arg2;	// IMP=0x001000000001f906
+ (id)acquireFromPoolForUseCase:(long long)arg1;	// IMP=0x001000000001f8a4
+ (id)newExpressionWithCapacity:(unsigned long long)arg1 engine:(id)arg2;	// IMP=0x001000000001f5c0
+ (id)newExpressionWithCapacity:(unsigned long long)arg1;	// IMP=0x001000000001f55e
+ (void)initialize;	// IMP=0x001000000001babd
- (id)copyContentsAndReturnToPool;	// IMP=0x000000000001f722
- (void)returnToPool;	// IMP=0x000000000001f690
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000001f64b
- (void)verifyInternalIntegrity;	// IMP=0x000000000001f268
- (void)scaleBy:(double)arg1;	// IMP=0x000000000001f253
- (id)variablesArray;	// IMP=0x000000000001f022
- (unsigned long long)variableCount;	// IMP=0x000000000001f019
- (_Bool)enumerateVariablesAndCoefficientsUntil:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ef87
- (void)enumerateVariables:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ede8
- (void)enumerateVariablesAndCoefficients:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ed5f
- (id)description;	// IMP=0x000000000001ecdc
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001e8db
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(CDUnknownBlockType)arg4 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg5;	// IMP=0x000000000001e5b0
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;	// IMP=0x000000000001e45a
- (_Bool)isConstant;	// IMP=0x000000000001e427
@property double constant;
- (double)incrementConstant:(double)arg1;	// IMP=0x000000000001e3f6
- (void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001e186
- (void)addVariable:(id)arg1 coefficient:(double)arg2;	// IMP=0x000000000001ddd2
- (void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001d97d
- (void)addExpression:(id)arg1 times:(double)arg2;	// IMP=0x000000000001d883
- (void)dealloc;	// IMP=0x000000000001cde1
- (void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3;	// IMP=0x000000000001cbce
- (void)setCoefficient:(double)arg1 forVariable:(id)arg2;	// IMP=0x000000000001c83f
- (double)coefficientForVariable:(id)arg1;	// IMP=0x000000000001c40e
- (void)removeVariable:(id)arg1;	// IMP=0x000000000001c218
@property(readonly) NSISEngine *engine;
- (unsigned long long)hash;	// IMP=0x000000000001be2f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001bd1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001bccd
- (id)initWithEngine:(id)arg1;	// IMP=0x000000000001bbbb
- (id)init;	// IMP=0x000000000001bb59

@end
