//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISceneAsynchronousRenderingOptions;

__attribute__((visibility("hidden")))
@interface _UIContextLayerHostView
{
}

+ (Class)layerClass;	// IMP=0x006000000069fd20
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000006a022c
- (void)_prepareForWindowDealloc;	// IMP=0x00000000006a0187
- (void)setStopsHitTestTransformAccumulation:(_Bool)arg1;	// IMP=0x00000000006a0110
- (void)setResizesHostedContext:(_Bool)arg1;	// IMP=0x00000000006a0099
- (void)setInheritsSecurity:(_Bool)arg1;	// IMP=0x00000000006a0022
@property(copy, nonatomic) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;
@property(nonatomic) unsigned long long renderingMode;
- (id)layer;	// IMP=0x000000000069fe0c
- (id)initWithSceneLayer:(id)arg1;	// IMP=0x000000000069fd31

@end

