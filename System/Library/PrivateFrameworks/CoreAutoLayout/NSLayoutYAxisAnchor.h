//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSLayoutYAxisAnchor
{
}

- (_Bool)isCompatibleWithAnchor:(id)arg1;	// IMP=0x0000000000030f44
- (_Bool)validateOtherAttribute:(long long)arg1;	// IMP=0x0000000000030f0b
- (id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000030eed
- (id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000030ed1
- (id)constraintEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000030eb8
- (id)offsetBy:(double)arg1;	// IMP=0x0000000000022ebc
- (id)offsetByDimension:(id)arg1;	// IMP=0x0000000000022eaa
- (id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3;	// IMP=0x0000000000022e98
- (id)distanceTo:(id)arg1;	// IMP=0x0000000000022e86
- (id)offsetTo:(id)arg1;	// IMP=0x0000000000022e74
- (id)anchorByOffsettingWithConstant:(double)arg1;	// IMP=0x0000000000022e2f
- (id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000022dd8
- (id)anchorByOffsettingWithDimension:(id)arg1;	// IMP=0x0000000000022dbb
- (id)anchorWithOffsetToAnchor:(id)arg1;	// IMP=0x0000000000022d9c

@end

