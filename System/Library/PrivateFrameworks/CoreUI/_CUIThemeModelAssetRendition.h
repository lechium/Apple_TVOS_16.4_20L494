//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class MDLAsset, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeModelAssetRendition : CUIThemeRendition
{
    MDLAsset *_asset;	// 216 = 0xd8
    NSMutableArray *_meshKeys;	// 224 = 0xe0
}

- (unsigned long long)writeToData:(id)arg1;	// IMP=0x0000000000064e7f
@property(readonly) NSArray *meshKeys;
- (id)modelAsset;	// IMP=0x0000000000064e49
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x0000000000064c24
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x0000000000064c12
- (void)dealloc;	// IMP=0x0000000000064bba
- (id)initForArchiving:(id)arg1 withMeshRenditionKeys:(id)arg2;	// IMP=0x0000000000064b32

@end

