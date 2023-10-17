//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayRenderOverlayPersistenceCoordinator, BKSDisplayProgressIndicatorProperties, BKSDisplayRenderOverlayDescriptor, CADisplay, NSString;

@interface BKDisplayRenderOverlay : NSObject
{
    BKSDisplayRenderOverlayDescriptor *_descriptor;	// 8 = 0x8
    BKDisplayRenderOverlayPersistenceCoordinator *_persistenceCoordinator;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    float _level;	// 32 = 0x20
    _Bool _visible;	// 36 = 0x24
    _Bool _disablesDisplayUpdates;	// 37 = 0x25
    _Bool _animates;	// 38 = 0x26
    _Bool _frozen;	// 39 = 0x27
    double _scale;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001f22c
@property(nonatomic, getter=_scale, setter=_setScale:) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic, getter=_persistenceCoordinator, setter=_setPersistenceCoordinator:) BKDisplayRenderOverlayPersistenceCoordinator *persistenceCoordinator; // @synthesize persistenceCoordinator=_persistenceCoordinator;
@property(readonly, nonatomic) _Bool isFrozen; // @synthesize isFrozen=_frozen;
@property(nonatomic) _Bool animates; // @synthesize animates=_animates;
@property(readonly, nonatomic) _Bool disablesDisplayUpdates; // @synthesize disablesDisplayUpdates=_disablesDisplayUpdates;
@property(nonatomic, setter=_setType:) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) float level; // @synthesize level=_level;
@property(readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000001f0e1
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000001f091
- (id)succinctDescriptionBuilder;	// IMP=0x001000000001f029
- (id)succinctDescription;	// IMP=0x001000000001efd9
@property(readonly, copy) NSString *description;
- (void)_wrapInCATransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ef60
- (id)_persistenceData;	// IMP=0x001000000001eeea
- (void)_cleanup;	// IMP=0x001000000001eee4
- (void)_freeze;	// IMP=0x001000000001eede
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x001000000001eed8
- (void)_stopAnimating;	// IMP=0x001000000001eed2
- (void)_startAnimating;	// IMP=0x001000000001eecc
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x001000000001eec4
- (void)dismissWithAnimationSettings:(id)arg1;	// IMP=0x001000000001ed7a
- (void)freeze;	// IMP=0x001000000001eb40
- (_Bool)presentWithAnimationSettings:(id)arg1;	// IMP=0x001000000001e96c
@property(readonly, nonatomic, getter=isInterstitial) _Bool interstitial;
@property(readonly, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property(readonly, nonatomic) _Bool lockBacklight;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly, retain, nonatomic) CADisplay *display;
@property(readonly, copy, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x001000000001e710
- (id)_initWithPersistenceData:(id)arg1;	// IMP=0x001000000001e660
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x001000000001e183

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
