//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, _UIStatusBarCycleLayerAnimation;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCycleAnimation : NSObject
{
    _Bool _stopsAfterReversing;	// 8 = 0x8
    _Bool _visible;	// 9 = 0x9
    NSArray *_layerAnimations;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    NSArray *_stoppingLayerAnimations;	// 32 = 0x20
    NSMutableArray *_completionHandlers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000dadda7
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSArray *stoppingLayerAnimations; // @synthesize stoppingLayerAnimations=_stoppingLayerAnimations;
@property(nonatomic) _Bool stopsAfterReversing; // @synthesize stopsAfterReversing=_stopsAfterReversing;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSArray *layerAnimations; // @synthesize layerAnimations=_layerAnimations;
@property(readonly, copy) NSString *description;
- (void)_sendCompletionsWithFinished:(_Bool)arg1;	// IMP=0x0000000000dadb12
- (void)_stopStoppingAnimations;	// IMP=0x0000000000dad937
- (void)_stopAnimations;	// IMP=0x0000000000dad763
- (void)_startAnimations;	// IMP=0x0000000000dad538
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000dad4f1
- (void)resumePersistentAnimation;	// IMP=0x0000000000dad4d2
- (void)pausePersistentAnimation;	// IMP=0x0000000000dad4bc
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000dacc66
- (void)start;	// IMP=0x0000000000dacb42
@property(readonly, nonatomic) _UIStatusBarCycleLayerAnimation *mainLayerAnimation;
- (void)dealloc;	// IMP=0x0000000000dacaee
- (id)initWithLayerAnimations:(id)arg1;	// IMP=0x0000000000dac9d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

