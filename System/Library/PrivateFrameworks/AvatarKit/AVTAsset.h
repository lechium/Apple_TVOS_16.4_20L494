//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVTAsset : NSObject
{
    NSString *_uid;	// 8 = 0x8
    NSString *_resourcePath;	// 16 = 0x10
    long long _componentType;	// 24 = 0x18
    unsigned char _resourceType;	// 32 = 0x20
    NSDictionary *_morphVariantDependencies;	// 40 = 0x28
    NSDictionary *_imageVariantDependencies;	// 48 = 0x30
    NSDictionary *_materialVariantDependencies;	// 56 = 0x38
    unsigned long long _editableColorCount;	// 64 = 0x40
    NSString *_ambientOcclusion;	// 72 = 0x48
    NSDictionary *_highlights;	// 80 = 0x50
    unsigned long long _refCount;	// 88 = 0x58
    id _cachedResource;	// 96 = 0x60
    _Bool _forceHighTessellation;	// 104 = 0x68
    NSDictionary *_specializationSettings;	// 112 = 0x70
    NSDictionary *_layers;	// 120 = 0x78
    NSDictionary *_perAssetMain;	// 128 = 0x80
    CDStruct_10883d13 _uvRemappingInfo;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000014164
@property(readonly) NSString *ambientOcclusion; // @synthesize ambientOcclusion=_ambientOcclusion;
@property(readonly) unsigned long long editableColorCount; // @synthesize editableColorCount=_editableColorCount;
@property(readonly) CDStruct_10883d13 uvRemappingInfo; // @synthesize uvRemappingInfo=_uvRemappingInfo;
@property(readonly) NSDictionary *layers; // @synthesize layers=_layers;
@property(readonly) NSDictionary *specializationSettings; // @synthesize specializationSettings=_specializationSettings;
@property(readonly) NSString *uid; // @synthesize uid=_uid;
@property(readonly) long long componentType; // @synthesize componentType=_componentType;
- (id)assetImageForAsset:(id)arg1;	// IMP=0x000000000001406e
- (id)resourceByCachingIfNeeded:(_Bool)arg1;	// IMP=0x0000000000013fa6
- (id)instantiateResource;	// IMP=0x0000000000013d27
@property(readonly) _Bool is3DAsset;
@property(readonly) _Bool is2DAsset;
- (void)decrUseCount;	// IMP=0x0000000000013c72
- (void)freeCache;	// IMP=0x0000000000013c58
- (void)incrUseCount;	// IMP=0x0000000000013c26
- (id)description;	// IMP=0x0000000000013bfd
- (void)enumerateVariantDependenciesOfKind:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013a1c
- (id)initWithType:(long long)arg1 path:(id)arg2 packID:(id)arg3;	// IMP=0x00000000000130da

@end

