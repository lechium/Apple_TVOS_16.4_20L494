//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCRCMathTableExpression
{
}

- (_Bool)canBeWrappedInLatexMathIndicators;	// IMP=0x000000000001c650
- (id)latexDescriptionInMathMode:(_Bool)arg1;	// IMP=0x000000000001c581
- (unsigned long long)numberOfTables;	// IMP=0x000000000001c546
- (unsigned long long)_numberOfColumns;	// IMP=0x000000000001c3bc
- (id)mathMLTag;	// IMP=0x000000000001c3af
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6;	// IMP=0x000000000001c04f
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x000000000001c027
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x000000000001bfab
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x000000000001bef2
- (_Bool)isMultiRowTable;	// IMP=0x000000000001bea9

@end

