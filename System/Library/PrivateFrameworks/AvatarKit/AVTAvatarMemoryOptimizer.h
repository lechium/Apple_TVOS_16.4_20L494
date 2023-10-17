//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTMemoji, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface AVTAvatarMemoryOptimizer : NSObject
{
    AVTMemoji *_memoji;	// 8 = 0x8
    NSMapTable *_requiredVariantsPerMorpher;	// 16 = 0x10
    NSMutableArray *_requiredMorphVariantComponents;	// 24 = 0x18
    NSMutableSet *_presetVariantPrefixes;	// 32 = 0x20
    NSArray *_oldWeights;	// 40 = 0x28
    NSArray *_oldMainTargets;	// 48 = 0x30
    _Bool _hasInBetweens;	// 56 = 0x38
    NSMutableArray *_newWeights;	// 64 = 0x40
    NSMutableArray *_newTargetsAndInBetweens;	// 72 = 0x48
    NSMutableArray *_newInBetweenCounts;	// 80 = 0x50
    NSMutableArray *_newInBetweenWeights;	// 88 = 0x58
    NSMutableArray *_indicesOfTargetsToFlattenInBaseGeometry;	// 96 = 0x60
    NSMutableDictionary *_indicesOfTargetsToFlattenInOtherTarget;	// 104 = 0x68
    NSMutableDictionary *_nonOneWeightsOfTargetsToFlatten;	// 112 = 0x70
    NSArray *_oldCorrectives;	// 120 = 0x78
    NSArray *_oldCorrectiveDriverCounts;	// 128 = 0x80
    NSArray *_oldCorrectiveDriverIndices;	// 136 = 0x88
    _Bool _hasCorrectives;	// 144 = 0x90
    _Bool _hasCorrectiveInBetweens;	// 145 = 0x91
    NSMutableArray *_newCorrectivesAndInBetweens;	// 152 = 0x98
    NSMutableArray *_newCorrectiveDriverCounts;	// 160 = 0xa0
    NSMutableArray *_newCorrectiveDriverIndices;	// 168 = 0xa8
    NSMutableArray *_newCorrectiveInBetweenCounts;	// 176 = 0xb0
    NSMutableArray *_newCorrectiveInBetweenWeights;	// 184 = 0xb8
    NSMutableArray *_indicesOfCorrectivesToFlattenInBaseGeometry;	// 192 = 0xc0
    NSMutableDictionary *_indicesOfCorrectivesToFlattenInMainTarget;	// 200 = 0xc8
    NSMutableDictionary *_indicesOfCorrectivesToFlattenInOtherCorrective;	// 208 = 0xd0
    NSMutableDictionary *_nonOneWeightsOfCorrectivesToFlatten;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000008886
- (void)applyMorphTarget:(id)arg1 weight:(float)arg2 toMorphTargetBuffer:(CDStruct_869f9c67 *)arg3 vertexCount:(unsigned long long)arg4;	// IMP=0x0000000000008740
- (void)applyMorphTarget:(id)arg1 weight:(float)arg2 toBaseGeometryBuffer:(void *)arg3 vertexCount:(unsigned long long)arg4;	// IMP=0x00000000000083df
- (id)flattenTarget0:(id)arg1 weight0:(float)arg2 target1:(id)arg3 weight1:(float)arg4 inMorphTarget:(id)arg5 originalMorphTarget:(id)arg6;	// IMP=0x00000000000080b6
- (void)resolveInBetweensForTarget:(id)arg1 weight:(float)arg2 inBetweenWeights:(id)arg3 inBetweenTargets:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0000000000007e55
- (void)flattenCorrectivesAtIndices:(id)arg1 inCorrective:(id)arg2 weight:(float)arg3 morpher:(id)arg4;	// IMP=0x0000000000007946
- (void)flattenCorrectivesAtIndices:(id)arg1 inCorrectiveAtIndex:(unsigned long long)arg2 morpher:(id)arg3;	// IMP=0x000000000000778d
- (void)flattenTargetsAtIndices:(id)arg1 correctivesAtIndices:(id)arg2 inTarget:(id)arg3 weight:(float)arg4 morpher:(id)arg5;	// IMP=0x0000000000006e66
- (void)flattenTargetsAtIndices:(id)arg1 correctivesAtIndices:(id)arg2 inTargetAtIndex:(unsigned long long)arg3 morpher:(id)arg4;	// IMP=0x0000000000006ca8
- (void)flattenRelevantTargetsInOtherTargetsOfMorpher:(id)arg1;	// IMP=0x00000000000068d8
- (void)flattenRelevantTargetsOfMorpher:(id)arg1 inBaseGeometryOfNode:(id)arg2;	// IMP=0x0000000000005c4e
- (void)flattenCorrectiveAtIndex:(unsigned long long)arg1 inCorrectiveAtIndex:(unsigned long long)arg2 weight:(float)arg3;	// IMP=0x0000000000005a9c
- (void)flattenCorrectiveAtIndex:(unsigned long long)arg1 inTargetAtIndex:(unsigned long long)arg2 weight:(float)arg3;	// IMP=0x00000000000058ea
- (void)flattenCorrectiveAtIndex:(unsigned long long)arg1 inBaseGeometryUsingWeight:(float)arg2;	// IMP=0x00000000000057de
- (void)flattenTargetAtIndex:(unsigned long long)arg1 inTargetAtIndex:(unsigned long long)arg2 weight:(float)arg3;	// IMP=0x0000000000005635
- (void)flattenTargetAtIndex:(unsigned long long)arg1 inBaseGeometryUsingWeight:(float)arg2;	// IMP=0x000000000000552f
- (void)keepCorrectiveAtIndex:(unsigned long long)arg1 withDriverIndices:(id)arg2 morpher:(id)arg3;	// IMP=0x0000000000005308
- (void)keepCorrectiveAtIndex:(unsigned long long)arg1 morpher:(id)arg2;	// IMP=0x00000000000050ed
- (void)keepTargetAtIndex:(unsigned long long)arg1 morpher:(id)arg2;	// IMP=0x0000000000004f13
- (void)flattenTargetsOfMorpher:(id)arg1 node:(id)arg2;	// IMP=0x0000000000004d99
- (void)classifyTargetsOfMorpher:(id)arg1 node:(id)arg2;	// IMP=0x0000000000003373
- (void)optimizeNode:(id)arg1;	// IMP=0x0000000000002eab
- (void)optimizeNodeHierarchy:(id)arg1;	// IMP=0x0000000000002e13
- (void)optimizeMemoji;	// IMP=0x0000000000002aa3
- (void)preprocessMemoji;	// IMP=0x0000000000001d4f
- (void)registerRequiredVariant:(id)arg1 weight:(float)arg2 inHierarchy:(id)arg3;	// IMP=0x0000000000001b83
- (_Bool)shouldClearCPUDataAfterUpload;	// IMP=0x0000000000001b65
- (_Bool)shouldKeepCreasesAndCorners;	// IMP=0x0000000000001b47
- (id)initWithMemoji:(id)arg1;	// IMP=0x0000000000001adc

@end

