//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBCoordinatedTransitionToken, PBDialogHiddenAssertion, PBProcessLaunchAgent, PBSceneHandle, PBSystemOverlayController;

@interface PBAirPlayManager : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    PBCoordinatedTransitionToken *_coordinatedTransitionToken;	// 16 = 0x10
    PBSystemOverlayController *_overlayController;	// 24 = 0x18
    PBDialogHiddenAssertion *_hideDialogAssertion;	// 32 = 0x20
    PBSceneHandle *_sceneHandle;	// 40 = 0x28
    PBProcessLaunchAgent *_processLaunchAgent;	// 48 = 0x30
}

+ (id)_airPlayProcessIdentity;	// IMP=0x002000000005159c
+ (id)sharedInstance;	// IMP=0x0010000000051515
+ (id)dependencyDescription;	// IMP=0x0010000000051359
- (void).cxx_destruct;	// IMP=0x00200000000532db
@property(readonly, nonatomic) PBProcessLaunchAgent *processLaunchAgent; // @synthesize processLaunchAgent=_processLaunchAgent;
@property(readonly, nonatomic) PBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(readonly, nonatomic) PBDialogHiddenAssertion *hideDialogAssertion; // @synthesize hideDialogAssertion=_hideDialogAssertion;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(readonly, nonatomic) PBCoordinatedTransitionToken *coordinatedTransitionToken; // @synthesize coordinatedTransitionToken=_coordinatedTransitionToken;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)pictureInPictureManager:(id)arg1 didCancelPictureInPictureForApplication:(id)arg2;	// IMP=0x0010000000053222
- (void)pictureInPictureManager:(id)arg1 didStopPictureInPictureForApplication:(id)arg2;	// IMP=0x001000000005312d
- (void)pictureInPictureManager:(id)arg1 didUpdateState:(id)arg2;	// IMP=0x0010000000053061
- (void)dismissAuxiliaryScene:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053000
- (void)_presentAuxiliaryScene:(id)arg1;	// IMP=0x0010000000052e8a
- (void)presentAuxiliaryScene:(id)arg1;	// IMP=0x0010000000052d69
- (id)sceneIdentifierForActivity:(id)arg1 withProcess:(id)arg2;	// IMP=0x0010000000052cc6
@property(readonly, nonatomic) long long presentingLayoutLevel;
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x0010000000052c6f
- (void)appTransitioner:(id)arg1 willBeginAppTransition:(id)arg2;	// IMP=0x0010000000052b20
- (id)transitionCoordinator:(id)arg1 willDismissTransitionWithToken:(id)arg2 withContext:(id)arg3;	// IMP=0x001000000005293c
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x0010000000052719
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000526fe
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x0010000000052662
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x0010000000052565
- (void)_dismissWithReason:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052271
- (void)_updateAirPlayUIForActiveState:(_Bool)arg1;	// IMP=0x0010000000052164
- (void)_updateHideDialogAssertion;	// IMP=0x00100000000520e6
- (void)_updateAirPlayPresenting;	// IMP=0x0010000000051fb4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000051f6d
- (id)launchAirPlayProcessForReason:(id)arg1;	// IMP=0x0010000000051dc0
- (_Bool)dismissAirPlay;	// IMP=0x0010000000051d7d
- (void)presentUIProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051b80
- (_Bool)isActivePiP;	// IMP=0x0010000000051b01
- (void)dealloc;	// IMP=0x00100000000519e2
- (id)init;	// IMP=0x001000000005168b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
