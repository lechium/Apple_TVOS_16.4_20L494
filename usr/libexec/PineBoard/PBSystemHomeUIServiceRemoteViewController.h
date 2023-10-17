//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BSAction, BSWatchdog, FBSSceneDefinition, FBSceneWorkspace, NSArray, NSString, PBApplicationSceneViewController, PBSSystemHomeUIStreamState, PBSceneHandle, PBUISystemHomeServiceCameraSceneClientSettingsDiffInspector;
@protocol PBSystemHomeUIServiceRemoteViewControllerDelegate, PBSystemOverlayContentDelegate;

@interface PBSystemHomeUIServiceRemoteViewController : UIViewController
{
    _Bool _acceptsEventFocus;	// 8 = 0x8
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    id <PBSystemHomeUIServiceRemoteViewControllerDelegate> _delegate;	// 24 = 0x18
    NSArray *_transitionActions;	// 32 = 0x20
    FBSceneWorkspace *_sceneWorkspace;	// 40 = 0x28
    FBSSceneDefinition *_sceneDefinition;	// 48 = 0x30
    long long _layoutLevel;	// 56 = 0x38
    CDUnknownBlockType _cameraPreparedCompletionBlock;	// 64 = 0x40
    BSWatchdog *_cameraPreparedWatchdog;	// 72 = 0x48
    BSAction *_cameraPreparedAction;	// 80 = 0x50
    PBSceneHandle *_sceneHandle;	// 88 = 0x58
    PBApplicationSceneViewController *_sceneViewController;	// 96 = 0x60
    PBUISystemHomeServiceCameraSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;	// 104 = 0x68
}

+ (double)_transitionDuration;	// IMP=0x002000000001feff
- (void).cxx_destruct;	// IMP=0x0020000000020059
@property(readonly, nonatomic) PBUISystemHomeServiceCameraSceneClientSettingsDiffInspector *clientSettingsDiffInspector; // @synthesize clientSettingsDiffInspector=_clientSettingsDiffInspector;
@property(readonly, nonatomic) PBApplicationSceneViewController *sceneViewController; // @synthesize sceneViewController=_sceneViewController;
@property(readonly, nonatomic) PBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(readonly, nonatomic) BSAction *cameraPreparedAction; // @synthesize cameraPreparedAction=_cameraPreparedAction;
@property(readonly, nonatomic) BSWatchdog *cameraPreparedWatchdog; // @synthesize cameraPreparedWatchdog=_cameraPreparedWatchdog;
@property(copy, nonatomic) CDUnknownBlockType cameraPreparedCompletionBlock; // @synthesize cameraPreparedCompletionBlock=_cameraPreparedCompletionBlock;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) FBSSceneDefinition *sceneDefinition; // @synthesize sceneDefinition=_sceneDefinition;
@property(readonly, nonatomic) FBSceneWorkspace *sceneWorkspace; // @synthesize sceneWorkspace=_sceneWorkspace;
@property(copy, nonatomic) NSArray *transitionActions; // @synthesize transitionActions=_transitionActions;
@property(nonatomic) __weak id <PBSystemHomeUIServiceRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void)_updateStreamStateWithScene:(id)arg1;	// IMP=0x001000000001fca9
- (void)_updateRequestsVisibilityStateWithScene:(id)arg1;	// IMP=0x001000000001fb81
- (void)_transitionWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001fa9d
- (void)_dismissAnimated:(_Bool)arg1 withError:(id)arg2;	// IMP=0x001000000001f992
- (void)_receivedScenePreparedAction:(id)arg1 forScene:(id)arg2;	// IMP=0x001000000001f7fa
- (void)_updateSceneSettingsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001f6d3
- (void)_activateSceneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001eeca
@property(readonly, nonatomic) PBSSystemHomeUIStreamState *streamState;
@property(readonly, nonatomic) _Bool requestsVisibility;
@property(readonly, nonatomic) _Bool hasScene;
- (_Bool)sendActions:(id)arg1;	// IMP=0x001000000001ec85
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x001000000001ea4c
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;	// IMP=0x001000000001ea37
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x001000000001e684
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e277
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001dec7
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible;
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001dac5
- (id)preferredFocusEnvironments;	// IMP=0x001000000001da29
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000001d920
- (void)dealloc;	// IMP=0x001000000001d881
- (id)initWithSceneWorkspace:(id)arg1 sceneDefinition:(id)arg2 layoutLevel:(long long)arg3;	// IMP=0x001000000001d64e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

