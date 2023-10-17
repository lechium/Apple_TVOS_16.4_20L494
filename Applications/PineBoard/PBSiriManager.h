//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, BSTransaction, NSHashTable, NSString, PBCoordinatedTransitionToken, PBSceneDeferralTargetAssertion, PBSiriContentPresentingViewController, PBSiriScreenActionContextProvider, PBSiriScreenActionManager, PBSystemGestureHandle, PBSystemOverlayController, SiriBluetoothKeyboardActivationSource, SiriPresentationPineBoardMainScreenViewController, SiriTVActivationSource, SiriTestingSource, UIApplicationSceneDeactivationAssertion;
@protocol SiriAssertion;

@interface PBSiriManager : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    _Bool _siriEnabled;	// 9 = 0x9
    _Bool _shouldPreferDictation;	// 10 = 0xa
    long long _visibleState;	// 16 = 0x10
    PBSiriScreenActionManager *_screenActionManager;	// 24 = 0x18
    SiriPresentationPineBoardMainScreenViewController *_mainScreenSiriPresentation;	// 32 = 0x20
    PBSiriScreenActionContextProvider *_onScreenActionContextProvider;	// 40 = 0x28
    PBSystemOverlayController *_overlayController;	// 48 = 0x30
    PBSiriContentPresentingViewController *_siriContainerViewController;	// 56 = 0x38
    NSString *_unhideBundleIdentifier;	// 64 = 0x40
    UIApplicationSceneDeactivationAssertion *_fullscreenSiriSceneDeactivationAssertion;	// 72 = 0x48
    PBSystemGestureHandle *_presentUIGesture;	// 80 = 0x50
    PBSystemGestureHandle *_preheatGesture;	// 88 = 0x58
    PBSystemGestureHandle *_listenGesture;	// 96 = 0x60
    PBSystemGestureHandle *_dismissGesture;	// 104 = 0x68
    SiriTVActivationSource *_siriActivationSource;	// 112 = 0x70
    SiriBluetoothKeyboardActivationSource *_keyboardActivationSource;	// 120 = 0x78
    id <SiriAssertion> _siriPreheatAssertion;	// 128 = 0x80
    id <SiriAssertion> _siriButtonDownAssertion;	// 136 = 0x88
    id <SiriAssertion> _siriActivationAssertion;	// 144 = 0x90
    SiriTestingSource *_testingSource;	// 152 = 0x98
    PBSceneDeferralTargetAssertion *_deferralTargetAssertion;	// 160 = 0xa0
    BSCompoundAssertion *_siriSuppressionAssertion;	// 168 = 0xa8
    PBCoordinatedTransitionToken *_coordinatedTransitionToken;	// 176 = 0xb0
    BSTransaction *_dismissalTransaction;	// 184 = 0xb8
    NSHashTable *_observers;	// 192 = 0xc0
}

+ (_Bool)_isSiriEnabled;	// IMP=0x00200000001d4916
+ (id)sharedInstance;	// IMP=0x00100000001d0739
+ (id)dependencyDescription;	// IMP=0x00100000001d059c
- (void).cxx_destruct;	// IMP=0x00200000001d5e9a
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) BSTransaction *dismissalTransaction; // @synthesize dismissalTransaction=_dismissalTransaction;
@property(readonly, nonatomic) PBCoordinatedTransitionToken *coordinatedTransitionToken; // @synthesize coordinatedTransitionToken=_coordinatedTransitionToken;
@property(readonly, nonatomic) BSCompoundAssertion *siriSuppressionAssertion; // @synthesize siriSuppressionAssertion=_siriSuppressionAssertion;
@property(readonly, nonatomic) PBSceneDeferralTargetAssertion *deferralTargetAssertion; // @synthesize deferralTargetAssertion=_deferralTargetAssertion;
@property(retain, nonatomic) SiriTestingSource *testingSource; // @synthesize testingSource=_testingSource;
@property(retain, nonatomic) id <SiriAssertion> siriActivationAssertion; // @synthesize siriActivationAssertion=_siriActivationAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriButtonDownAssertion; // @synthesize siriButtonDownAssertion=_siriButtonDownAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriPreheatAssertion; // @synthesize siriPreheatAssertion=_siriPreheatAssertion;
@property(retain, nonatomic) SiriBluetoothKeyboardActivationSource *keyboardActivationSource; // @synthesize keyboardActivationSource=_keyboardActivationSource;
@property(retain, nonatomic) SiriTVActivationSource *siriActivationSource; // @synthesize siriActivationSource=_siriActivationSource;
@property(readonly, nonatomic) PBSystemGestureHandle *dismissGesture; // @synthesize dismissGesture=_dismissGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *listenGesture; // @synthesize listenGesture=_listenGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *preheatGesture; // @synthesize preheatGesture=_preheatGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *presentUIGesture; // @synthesize presentUIGesture=_presentUIGesture;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *fullscreenSiriSceneDeactivationAssertion; // @synthesize fullscreenSiriSceneDeactivationAssertion=_fullscreenSiriSceneDeactivationAssertion;
@property(retain, nonatomic) NSString *unhideBundleIdentifier; // @synthesize unhideBundleIdentifier=_unhideBundleIdentifier;
@property(readonly, nonatomic) PBSiriContentPresentingViewController *siriContainerViewController; // @synthesize siriContainerViewController=_siriContainerViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(nonatomic) _Bool shouldPreferDictation; // @synthesize shouldPreferDictation=_shouldPreferDictation;
@property(retain, nonatomic) PBSiriScreenActionContextProvider *onScreenActionContextProvider; // @synthesize onScreenActionContextProvider=_onScreenActionContextProvider;
@property(retain, nonatomic) SiriPresentationPineBoardMainScreenViewController *mainScreenSiriPresentation; // @synthesize mainScreenSiriPresentation=_mainScreenSiriPresentation;
@property(nonatomic, getter=isSiriEnabled) _Bool siriEnabled; // @synthesize siriEnabled=_siriEnabled;
@property(readonly, nonatomic) PBSiriScreenActionManager *screenActionManager; // @synthesize screenActionManager=_screenActionManager;
@property(nonatomic) long long visibleState; // @synthesize visibleState=_visibleState;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)_notifyObserversSiriWindowDidUnhide;	// IMP=0x00100000001d5b73
- (void)_notifyObserversSiriWindowDidHide;	// IMP=0x00100000001d5a24
- (void)_notifyObserversVisibleStateDidChange:(long long)arg1;	// IMP=0x00100000001d58c4
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001d58aa
- (void)addObserver:(id)arg1;	// IMP=0x00100000001d5890
- (void)_setupGesturesWithManager:(id)arg1;	// IMP=0x00100000001d54ec
- (void)_launchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOverSiri:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001d4eee
- (void)_stopProvidingScreenActionContext;	// IMP=0x00100000001d4e76
- (void)_startProvidingScreenActionContext;	// IMP=0x00100000001d4caa
- (void)_updateShouldPreferDictation;	// IMP=0x00100000001d4b01
- (id)_createOverlayDismissalTransactionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d44c4
- (id)transitionCoordinator:(id)arg1 willDismissTransitionWithToken:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000001d4358
- (void)appTransitioner:(id)arg1 willStartAnimationForAppTransition:(id)arg2;	// IMP=0x00100000001d424a
- (_Bool)siriScreenActionManagerIsSiriContentBeingDisplayed:(id)arg1;	// IMP=0x00000000001d423c
- (void)powerManagerDidWakeSystem:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000001d41c8
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x00100000001d41b5
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x00100000001d41a2
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001d408b
- (void)_handleAssistantPreferencesDidChangeNotification:(id)arg1;	// IMP=0x00100000001d4053
- (void)siriPresentationDidDeactivateScene:(id)arg1;	// IMP=0x00100000001d3f28
- (void)siriPresentation:(id)arg1 sceneDidActivateWithIdentifier:(id)arg2;	// IMP=0x00100000001d3d6f
- (void)siriPresentation:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;	// IMP=0x00100000001d3ca5
- (void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d3902
- (void)siriPresentation:(id)arg1 isEnabledDidChange:(_Bool)arg2;	// IMP=0x00100000001d3874
- (void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d34f6
- (void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d32f3
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d328b
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x00100000001d3274
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x00100000001d325d
- (unsigned long long)_remoteTypeFromContext:(id)arg1;	// IMP=0x00100000001d31b0
- (_Bool)showAssistantIfNecessaryAfterApplication:(id)arg1;	// IMP=0x00100000001d3164
- (void)hideAssistantViewForApplication:(id)arg1;	// IMP=0x00100000001d3121
- (_Bool)_dismissAssistantViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d3002
- (_Bool)dismissAssistant;	// IMP=0x00100000001d2f74
- (void)_unhideSiriWindow;	// IMP=0x00100000001d2eaf
- (void)_hideSiriWindow;	// IMP=0x00100000001d2d0e
- (void)_presentAssistantViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d2ab9
- (void)setNextAssistantRecognitionStrings:(id)arg1;	// IMP=0x00100000001d2aa2
- (void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;	// IMP=0x00100000001d2a8b
@property(readonly, nonatomic, getter=isListening) _Bool listening;
- (long long)stopSiriWithContext:(id)arg1;	// IMP=0x00100000001d2478
- (long long)startSiriWithContext:(id)arg1;	// IMP=0x00100000001d1e2b
- (void)_cancelSiriActivation;	// IMP=0x00100000001d1d8d
- (void)_stopSiriActivation;	// IMP=0x00100000001d1cdf
- (void)_cancelPreheating;	// IMP=0x00100000001d1c41
- (void)cancelActivation;	// IMP=0x00100000001d1c2e
- (id)suppressSiriWithReason:(id)arg1;	// IMP=0x00100000001d1c04
- (long long)presentSiriAccessibilityUI;	// IMP=0x00100000001d1a85
- (long long)prepareSiriWithContext:(id)arg1;	// IMP=0x00100000001d16b2
- (long long)activateSiriWithContext:(id)arg1;	// IMP=0x00100000001d121f
- (void)preheatIfNecessary;	// IMP=0x00100000001d0ffe
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
- (void)setup;	// IMP=0x00100000001d0cb1
- (void)dealloc;	// IMP=0x00100000001d0bcf
- (id)_init;	// IMP=0x00100000001d0811
- (id)init;	// IMP=0x00100000001d07d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
