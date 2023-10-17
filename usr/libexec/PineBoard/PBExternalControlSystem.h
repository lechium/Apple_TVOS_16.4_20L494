//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSExternalControlSystem, PBSystemGestureHandle, PBVolumeController, TVSStateMachine;

@interface PBExternalControlSystem : NSObject
{
    PBSExternalControlSystem *_externalControlSystem;	// 8 = 0x8
    PBVolumeController *_volumeController;	// 16 = 0x10
    TVSStateMachine *_volumeBehaviorStateMachine;	// 24 = 0x18
    PBSystemGestureHandle *_volumeMuteButtonGesture;	// 32 = 0x20
    PBSystemGestureHandle *_volumeIncrementGesture;	// 40 = 0x28
    PBSystemGestureHandle *_volumeDecrementGesture;	// 48 = 0x30
    PBSystemGestureHandle *_switchToATVGesture;	// 56 = 0x38
}

+ (void)performVolumeDownWithGestureRecognizerState:(long long)arg1;	// IMP=0x00200000001cbd64
+ (void)performVolumeUpWithGestureRecognizerState:(long long)arg1;	// IMP=0x00100000001cbd10
+ (void)sendActionOrShowUnconfiguredAlertForAction:(long long)arg1;	// IMP=0x00100000001cbcbc
+ (id)volumeController;	// IMP=0x00100000001cbc64
+ (_Bool)isAppleIRRemotePaired;	// IMP=0x00100000001cbc18
+ (void)unpairAppleIRRemote;	// IMP=0x00100000001cbbc6
+ (void)pairAppleIRRemote;	// IMP=0x00100000001cbb74
+ (_Bool)volumeControlNeedsConfiguring;	// IMP=0x00100000001cb92d
+ (id)sharedSystem;	// IMP=0x00100000001cb8d5
+ (id)_sharedInstance;	// IMP=0x00100000001cda94
- (void).cxx_destruct;	// IMP=0x00100000001cda34
@property(readonly, nonatomic) PBSystemGestureHandle *switchToATVGesture; // @synthesize switchToATVGesture=_switchToATVGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *volumeDecrementGesture; // @synthesize volumeDecrementGesture=_volumeDecrementGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *volumeIncrementGesture; // @synthesize volumeIncrementGesture=_volumeIncrementGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *volumeMuteButtonGesture; // @synthesize volumeMuteButtonGesture=_volumeMuteButtonGesture;
@property(retain, nonatomic) TVSStateMachine *volumeBehaviorStateMachine; // @synthesize volumeBehaviorStateMachine=_volumeBehaviorStateMachine;
@property(retain, nonatomic) PBVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) PBSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_externalControlSystem;
- (void)_initializeVolumeBehaviorStateMachine;	// IMP=0x00100000001cce3c
- (void)_listenForNowPlayingAppNotifications;	// IMP=0x00100000001ccdb8
- (void)_listenForVolumeButtonOverrideUpdates;	// IMP=0x00100000001ccd53
- (void)_sendAction:(long long)arg1 orShowUnconfiguredAlert:(_Bool)arg2;	// IMP=0x00100000001cc9b4
- (void)_sendActionOrShowUnconfiguredAlertForAction:(long long)arg1;	// IMP=0x00100000001cc99c
- (void)_performVolumeDownWithGestureRecognizerState:(long long)arg1;	// IMP=0x00100000001cc850
- (void)_performVolumeUpWithGestureRecognizerState:(long long)arg1;	// IMP=0x00100000001cc704
- (void)_initializeVolumeButtonGestures;	// IMP=0x00100000001cc252
- (void)volumeSupportedChanged:(id)arg1 forOutputContext:(unsigned long long)arg2;	// IMP=0x00100000001cc20d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001cc053
- (void)dealloc;	// IMP=0x00100000001cbfe4
- (id)init;	// IMP=0x00100000001cbefd
- (void)tvs_bindDisplayModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x00100000001cbe0a
- (id)DisplayModeBinding;	// IMP=0x00100000001cbdb8
- (_Bool)_displayHasNonZeroSize;	// IMP=0x00100000001cdde6
- (void)_pauseOnResignedActiveSource;	// IMP=0x00100000001cdc64
- (_Bool)_shouldSuppressWakeForRemoteControlButton:(long long)arg1;	// IMP=0x00100000001cdc54
- (void)_handleDisplayModeDidChange;	// IMP=0x00100000001cdaeb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
