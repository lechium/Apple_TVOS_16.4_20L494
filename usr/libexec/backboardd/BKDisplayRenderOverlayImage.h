//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAContext, NSString;

@interface BKDisplayRenderOverlayImage
{
    CAContext *_context;	// 8 = 0x8
    struct CGImage *_imageRef;	// 16 = 0x10
    _Bool _frozen;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000186eb
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
- (_Bool)_applyProgressIndicatorPropertiesToKernelIfNecessary;	// IMP=0x0010000000018360
- (id)_animationForKeyPath:(id)arg1 withSettings:(id)arg2;	// IMP=0x00100000000182af
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000181cd
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00100000000181bb
- (void)_cleanup;	// IMP=0x001000000001810a
- (id)_persistenceData;	// IMP=0x0010000000018087
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x0010000000017ef4
- (void)_freeze;	// IMP=0x0010000000017e7d
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x0010000000017008
- (_Bool)disablesDisplayUpdates;	// IMP=0x0010000000016fc6
@property(readonly, nonatomic) struct CGImage *image;
- (void)dealloc;	// IMP=0x0010000000016e12
- (id)_initWithPersistenceData:(id)arg1;	// IMP=0x0010000000016d4c
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x0010000000016cfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

