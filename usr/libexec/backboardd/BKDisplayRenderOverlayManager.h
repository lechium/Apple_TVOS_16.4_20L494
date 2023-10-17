//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayBrightnessController, BKOrientationManager, CAWindowServer, NSMutableIndexSet, NSMutableSet;

@interface BKDisplayRenderOverlayManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    CAWindowServer *_windowServer;	// 16 = 0x10
    BKOrientationManager *_orientationManager;	// 24 = 0x18
    BKDisplayBrightnessController *_backlightManager;	// 32 = 0x20
    NSMutableSet *_activeOverlays;	// 40 = 0x28
    NSMutableSet *_overlaysDisablingUpdates;	// 48 = 0x30
    long long _lockedOrientation;	// 56 = 0x38
    NSMutableIndexSet *_frozenDisplayIDs;	// 64 = 0x40
    _Bool _backlightLocked;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0040000000071813
- (void).cxx_destruct;	// IMP=0x00200000000717bf
@property(readonly, nonatomic) long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(readonly, nonatomic) _Bool backlightLocked; // @synthesize backlightLocked=_backlightLocked;
@property(readonly, nonatomic) NSMutableSet *overlaysDisablingUpdates; // @synthesize overlaysDisablingUpdates=_overlaysDisablingUpdates;
- (id)_updateWindowServerUpdatesForOverlays:(id)arg1;	// IMP=0x0010000000071167
- (void)_lock_setBacklightLocked:(_Bool)arg1;	// IMP=0x00100000000710f0
- (void)_lock_setLockedOrientation:(long long)arg1;	// IMP=0x0010000000071067
- (void)_lock_updateStateForActiveOverlayChange;	// IMP=0x0010000000070d99
- (void)_lock_freezeOverlay:(id)arg1;	// IMP=0x0010000000070ab4
- (void)_lock_setOverlaysDisablingUpdates:(id)arg1;	// IMP=0x0010000000070a67
- (_Bool)isShowingNonBootUIOverlays;	// IMP=0x00100000000708d2
- (void)prepareForRestart;	// IMP=0x0010000000070784
- (_Bool)freezeOverlay:(id)arg1;	// IMP=0x0010000000070713
- (_Bool)removeOverlay:(id)arg1 withAnimationSettings:(id)arg2;	// IMP=0x00100000000705f9
- (_Bool)applyOverlay:(id)arg1 withAnimationSettings:(id)arg2;	// IMP=0x0010000000070556
@property(readonly, nonatomic) NSMutableSet *activeOverlays; // @synthesize activeOverlays=_activeOverlays;
- (id)activeOverlayWithDescriptor:(id)arg1;	// IMP=0x0010000000070326
- (id)description;	// IMP=0x00100000000702a0
- (id)_initWithPersistenceCoordinator:(id)arg1 orientationManager:(id)arg2 backlightManager:(id)arg3 windowServer:(id)arg4;	// IMP=0x001000000006fb16

@end

