//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSLayoutDimension
{
}

- (_Bool)isCompatibleWithAnchor:(id)arg1;	// IMP=0x0000000000031209
- (_Bool)validateOtherAttribute:(long long)arg1;	// IMP=0x00000000000311ef
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000031194
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x000000000003113b
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x00000000000310e5
- (id)constraintLessThanOrEqualToConstant:(double)arg1;	// IMP=0x00000000000310b1
- (id)constraintGreaterThanOrEqualToConstant:(double)arg1;	// IMP=0x000000000003107f
- (id)constraintEqualToConstant:(double)arg1;	// IMP=0x0000000000031050
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000030ffc
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000030faa
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000030f5b
- (id)ruleLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x000000000000505f
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x0000000000005047
- (id)ruleEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x000000000000502f
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000005013
- (id)ruleLessThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000004ff7
- (id)ruleEqualToConstant:(double)arg1;	// IMP=0x0000000000004fdb
- (id)minusDimension:(id)arg1;	// IMP=0x0000000000022d8a
- (id)plusDimension:(id)arg1;	// IMP=0x0000000000022d78
- (id)plus:(double)arg1;	// IMP=0x0000000000022d66
- (id)times:(double)arg1;	// IMP=0x0000000000022d54
- (id)anchorBySubtractingDimension:(id)arg1;	// IMP=0x0000000000022d11
- (id)anchorByAddingDimension:(id)arg1;	// IMP=0x0000000000022cd6
- (id)anchorByAddingConstant:(double)arg1;	// IMP=0x0000000000022c8e
- (id)anchorByMultiplyingByConstant:(double)arg1;	// IMP=0x0000000000022c4b

@end

