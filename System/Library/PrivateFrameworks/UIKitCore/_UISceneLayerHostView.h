//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIDirectionalRotationView.h"

@class FBSceneLayer, UIScenePresentationContext, UITransformer;

__attribute__((visibility("hidden")))
@interface _UISceneLayerHostView : _UIDirectionalRotationView
{
    FBSceneLayer *_sceneLayer;	// 8 = 0x8
    UITransformer *_transformer;	// 16 = 0x10
    UIScenePresentationContext *_presentationContext;	// 24 = 0x18
    _Bool _inheritsSecurity;	// 32 = 0x20
    _Bool _resizesHostedContext;	// 33 = 0x21
    _Bool _stopsHitTestTransformAccumulation;	// 34 = 0x22
    UIScenePresentationContext *_currentPresentationContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000006a1521
@property(nonatomic) _Bool stopsHitTestTransformAccumulation; // @synthesize stopsHitTestTransformAccumulation=_stopsHitTestTransformAccumulation;
@property(nonatomic) _Bool resizesHostedContext; // @synthesize resizesHostedContext=_resizesHostedContext;
@property(nonatomic) _Bool inheritsSecurity; // @synthesize inheritsSecurity=_inheritsSecurity;
@property(readonly, nonatomic) FBSceneLayer *sceneLayer; // @synthesize sceneLayer=_sceneLayer;
@property(retain, nonatomic) UITransformer *transformer; // @synthesize transformer=_transformer;
@property(retain, nonatomic) UIScenePresentationContext *currentPresentationContext; // @synthesize currentPresentationContext=_currentPresentationContext;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000006a1409
- (id)initWithSceneLayer:(id)arg1;	// IMP=0x00000000006a12ba
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006a1233

@end

