//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class MDLSubmesh;

__attribute__((visibility("hidden")))
@interface _CUIThemeModelSubmeshRendition : CUIThemeRendition
{
    MDLSubmesh *_submesh;	// 216 = 0xd8
}

- (void)dealloc;	// IMP=0x0000000000021dbc
- (unsigned long long)writeToData:(id)arg1;	// IMP=0x0000000000021161
- (id)modelSubmesh;	// IMP=0x0000000000021150
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000002092d
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000002091b
- (id)initForArchiving:(id)arg1;	// IMP=0x00000000000208c4

@end

