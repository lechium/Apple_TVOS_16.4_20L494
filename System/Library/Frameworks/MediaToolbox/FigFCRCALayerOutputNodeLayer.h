//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FigBaseCALayer.h"

__attribute__((visibility("hidden")))
@interface FigFCRCALayerOutputNodeLayer : FigBaseCALayer
{
    struct OpaqueFigCaptionRendererCALayerOutputNodeLayerInternal *layerInternal;	// 16 = 0x10
}

- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000129b87
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;	// IMP=0x00000000001299fc
- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;	// IMP=0x00000000001296d4
- (void)setNodeSeparated:(_Bool)arg1;	// IMP=0x00000000001296ce
- (void)setNodeOptions:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000012963b
- (void)setWindowOpacity:(double)arg1;	// IMP=0x0000000000129625
- (void)dealloc;	// IMP=0x00000000001295c6
- (id)init;	// IMP=0x000000000012956d
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000129554

@end
