//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BSAction, BSWatchdog, FBSSceneDefinition, FBSceneWorkspace, MISSING_TYPE, NSArray, NSString, PBApplicationSceneViewController, PBCoordinatedTransitionToken, PBSceneHandle, PBScreenSaverDismissalTransaction, PBScreenSaverPresentationTransaction, UIApplicationSceneDeactivationAssertion, UIImageView;
@protocol PBSystemOverlayContentDelegate;

@interface PBScreenSaverContentPresentingViewController : UIViewController
{
    _Bool _interruptible;	// 8 = 0x8
    _Bool _acceptsEventFocus;	// 9 = 0x9
    _Bool _allowsInteraction;	// 10 = 0xa
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    NSArray *_transitionActions;	// 24 = 0x18
    UIImageView *_snapshotImageView;	// 32 = 0x20
    UIApplicationSceneDeactivationAssertion *_screensaverSceneDeactivationAssertion;	// 40 = 0x28
    CDUnknownBlockType _screenSaverPreparedCompletionBlock;	// 48 = 0x30
    BSWatchdog *_screenSaverPreparedWatchdog;	// 56 = 0x38
    BSAction *_screenSaverPreparedAction;	// 64 = 0x40
    PBCoordinatedTransitionToken *_coordinatedTransitionToken;	// 72 = 0x48
    PBScreenSaverPresentationTransaction *_presentationTransaction;	// 80 = 0x50
    PBScreenSaverDismissalTransaction *_dismissalTransaction;	// 88 = 0x58
    PBApplicationSceneViewController *_sceneViewController;	// 96 = 0x60
    PBSceneHandle *_sceneHandle;	// 104 = 0x68
    FBSceneWorkspace *_sceneWorkspace;	// 112 = 0x70
    FBSSceneDefinition *_sceneDefinition;	// 120 = 0x78
    long long _layoutLevel;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000000d547f
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) FBSSceneDefinition *sceneDefinition; // @synthesize sceneDefinition=_sceneDefinition;
@property(readonly, nonatomic) FBSceneWorkspace *sceneWorkspace; // @synthesize sceneWorkspace=_sceneWorkspace;
@property(readonly, nonatomic) PBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(readonly, nonatomic) PBApplicationSceneViewController *sceneViewController; // @synthesize sceneViewController=_sceneViewController;
@property(readonly, nonatomic) PBScreenSaverDismissalTransaction *dismissalTransaction; // @synthesize dismissalTransaction=_dismissalTransaction;
@property(readonly, nonatomic) PBScreenSaverPresentationTransaction *presentationTransaction; // @synthesize presentationTransaction=_presentationTransaction;
@property(readonly, nonatomic) PBCoordinatedTransitionToken *coordinatedTransitionToken; // @synthesize coordinatedTransitionToken=_coordinatedTransitionToken;
@property(readonly, nonatomic) BSAction *screenSaverPreparedAction; // @synthesize screenSaverPreparedAction=_screenSaverPreparedAction;
@property(readonly, nonatomic) BSWatchdog *screenSaverPreparedWatchdog; // @synthesize screenSaverPreparedWatchdog=_screenSaverPreparedWatchdog;
@property(copy, nonatomic) CDUnknownBlockType screenSaverPreparedCompletionBlock; // @synthesize screenSaverPreparedCompletionBlock=_screenSaverPreparedCompletionBlock;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *screensaverSceneDeactivationAssertion; // @synthesize screensaverSceneDeactivationAssertion=_screensaverSceneDeactivationAssertion;
@property(readonly, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(readonly, nonatomic) _Bool allowsInteraction; // @synthesize allowsInteraction=_allowsInteraction;
@property(copy, nonatomic) NSArray *transitionActions; // @synthesize transitionActions=_transitionActions;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible; // @synthesize interruptible=_interruptible;
- (void)_createDismissalTransactionAnimated:(_Bool)arg1 shouldUpdateWallpaper:(_Bool)arg2 shouldApplyStartValues:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d4e9d
- (void)_receivedScenePreparedAction:(id)arg1 forScene:(id)arg2;	// IMP=0x00100000000d4d05
- (void)_updateSceneSettingsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d4bde
- (void)_activateSceneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d452b
- (id)transitionCoordinator:(id)arg1 willDismissTransitionWithToken:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000d41e6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000d40dd
- (MISSING_TYPE *)sceneDidDeactivate:withError: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000d3fa9
- (void)sceneWillDeactivate:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000d3f33
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x00100000000d3b8d
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d3753
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d330e
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d2f1c
- (void)screenSaverTransitionUpdatedAcceptEvents:(_Bool)arg1;	// IMP=0x00100000000d2cf1
- (void)screenSaverTransitionShowSnapshotImage:(id)arg1;	// IMP=0x00100000000d2b99
@property(readonly, nonatomic) UIViewController *childViewController;
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (void)dealloc;	// IMP=0x00100000000d2a38
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000d2a2a
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000d2a1c
- (id)initWithSceneWorkspace:(id)arg1 sceneDefinition:(id)arg2 layoutLevel:(long long)arg3;	// IMP=0x00100000000d2903

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

