//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FigBaseCALayer.h"

__attribute__((visibility("hidden")))
@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer
{
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal *layerInternal;	// 16 = 0x10
}

- (void)handleNeedsLayoutNotification;	// IMP=0x0000000000026e57
- (void)layoutSublayers;	// IMP=0x0000000000026920
- (void)setReLayout;	// IMP=0x0000000000026899
- (void)setNeedsDisplay;	// IMP=0x000000000002677e
- (void)setViewport:(struct CGRect)arg1;	// IMP=0x00000000000266ec
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;	// IMP=0x0000000000026679
- (void)setContent:(struct __CFDictionary *)arg1;	// IMP=0x0000000000026308
- (struct __CFString *)getContentID;	// IMP=0x000000000002628e
- (void)dealloc;	// IMP=0x00000000000261ab
- (id)init;	// IMP=0x000000000002600d

@end
