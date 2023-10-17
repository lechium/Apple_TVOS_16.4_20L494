//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSArray, NSString, _UIVectorTextLayout;

__attribute__((visibility("hidden")))
@interface _UIVectorLabelLayer : CALayer
{
    NSArray *_currentLayers;	// 8 = 0x8
    _UIVectorTextLayout *_currentTextLayout;	// 16 = 0x10
    unsigned long long _maxRenderedMoveDistance;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0010000001104999
- (void).cxx_destruct;	// IMP=0x0000000001107260
@property(nonatomic) unsigned long long maxRenderedMoveDistance; // @synthesize maxRenderedMoveDistance=_maxRenderedMoveDistance;
- (id)_layersForTextLayout:(id)arg1;	// IMP=0x0000000001106b32
- (id)_findSimilarLayer:(id)arg1 inLayers:(id)arg2;	// IMP=0x00000000011064c5
- (_Bool)_isPathCompatible:(struct CGPath *)arg1 with:(struct CGPath *)arg2;	// IMP=0x000000000110634c
- (void)_transitionWithSetup:(CDUnknownBlockType)arg1 target:(CDUnknownBlockType)arg2;	// IMP=0x000000000110624d
- (void)_applyTextLayoutChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000001104ee0
- (void)_cleanupUnusedLayers;	// IMP=0x0000000001104ce4
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000001104b99
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x0000000001104ac0
- (void)willChangeValueForKey:(id)arg1;	// IMP=0x0000000001104a17
- (id)init;	// IMP=0x00000000011049c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) _UIVectorTextLayout *textLayout; // @dynamic textLayout;

@end
