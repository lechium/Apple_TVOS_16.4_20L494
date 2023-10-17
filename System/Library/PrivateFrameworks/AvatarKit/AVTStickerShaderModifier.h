//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVTStickerShaderModifier : NSObject
{
    _Bool _isCropShaderModifier;	// 8 = 0x8
    _Bool _forceDoubleSided;	// 9 = 0x9
    NSString *_entryPoint;	// 16 = 0x10
    id _nodeNames;	// 24 = 0x18
    NSString *_data;	// 32 = 0x20
    NSArray *_properties;	// 40 = 0x28
    NSDictionary *_dictionary;	// 48 = 0x30
}

+ (id)encapsulateShaderData:(id)arg1;	// IMP=0x0060000000067c28
+ (id)entryPointForModifierName:(id)arg1;	// IMP=0x0060000000067b6b
+ (id)shaderModifierFromDictionary:(id)arg1 assetsPath:(id)arg2;	// IMP=0x00600000000674dc
+ (id)shaderModifierCache;	// IMP=0x0060000000067487
- (void).cxx_destruct;	// IMP=0x0000000000068749
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) _Bool forceDoubleSided; // @synthesize forceDoubleSided=_forceDoubleSided;
@property(readonly, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) NSString *data; // @synthesize data=_data;
@property(readonly, nonatomic) id nodeNames; // @synthesize nodeNames=_nodeNames;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
- (id)description;	// IMP=0x000000000006865e
- (id)dictionaryWithTargetPath:(id)arg1;	// IMP=0x0000000000068616
- (void)applyToMaterialsOfMatchedNodesInHierarchy:(id)arg1 options:(id)arg2 reversionContext:(id)arg3;	// IMP=0x0000000000068481
- (void)applyToAllMaterialsOfNode:(id)arg1 options:(id)arg2 reversionContext:(id)arg3;	// IMP=0x00000000000682d2
- (void)applyToMaterial:(id)arg1 options:(id)arg2 reversionContext:(id)arg3;	// IMP=0x0000000000067e8e
- (id)cloneWithProperties:(id)arg1;	// IMP=0x0000000000067da1
- (id)initWithEntryPoint:(id)arg1 nodeNames:(id)arg2 data:(id)arg3 properties:(id)arg4 forceDoubleSided:(_Bool)arg5;	// IMP=0x0000000000067cb8

@end

