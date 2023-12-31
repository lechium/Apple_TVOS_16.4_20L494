//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class MDLMesh, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeModelMeshRendition : CUIThemeRendition
{
    MDLMesh *_mesh;	// 216 = 0xd8
    NSMutableArray *_submeshKeys;	// 224 = 0xe0
}

- (unsigned long long)writeToData:(id)arg1;	// IMP=0x000000000005c2f7
- (id)modelMesh;	// IMP=0x000000000005c2e6
@property(readonly) NSArray *submeshKeys;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000005bcc8
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000005bcb6
- (void)dealloc;	// IMP=0x000000000005bc5e
- (id)initForArchiving:(id)arg1 withSubmeshRenditionKeys:(id)arg2;	// IMP=0x000000000005bbd6

@end

