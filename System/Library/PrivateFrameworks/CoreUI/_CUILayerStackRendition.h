//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIRenditionMetrics, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUILayerStackRendition
{
    CUIRenditionMetrics *_renditionMetrics;	// 224 = 0xe0
    NSMutableArray *_layers;	// 232 = 0xe8
}

- (id)metrics;	// IMP=0x000000000006ed63
- (id)layerReferences;	// IMP=0x000000000006ed52
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000006e681
- (void)dealloc;	// IMP=0x000000000006e629
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000006e617

@end

