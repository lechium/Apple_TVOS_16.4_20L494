//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBScene, NSArray, NSString, NSTimer, NSUUID, NSXPCConnection, PGInterruptionAssistant, PGPictureInPictureApplication, PGPictureInPictureViewController, PGPlaybackState, PGProcessAssertion;
@protocol BSInvalidatable, OS_dispatch_queue, PGPictureInPictureAnalyticsDelegate, PGPictureInPictureRemoteObjectDelegate;

__attribute__((visibility("hidden")))
@interface PGPictureInPictureRemoteObject : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    long long _queue_outstandingRotationAnimationsCount;	// 24 = 0x18
    long long _controlsStyle;	// 32 = 0x20
    long long _currentState;	// 40 = 0x28
    PGProcessAssertion *_processAssertion;	// 48 = 0x30
    PGProcessAssertion *_startBackgroundPIPAssertion;	// 56 = 0x38
    PGProcessAssertion *_interruptionBeganFinishTaskAssertion;	// 64 = 0x40
    PGProcessAssertion *_cancelPictureInPictureFinishTaskAssertion;	// 72 = 0x48
    NSUUID *_finishTaskInvalidationUUID;	// 80 = 0x50
    NSTimer *_timerForInvalidatingIfStopOrCancelFails;	// 88 = 0x58
    NSUUID *_analyticsSourceUUID;	// 96 = 0x60
    _Bool _pictureInPictureStartedAutomatically;	// 104 = 0x68
    _Bool _isPictureInPicturePossible;	// 105 = 0x69
    _Bool _hasPendingCancellationRequest;	// 106 = 0x6a
    _Bool _hasPendingStopRequest;	// 107 = 0x6b
    _Bool _pictureInPictureShouldStartWhenEnteringBackground;	// 108 = 0x6c
    _Bool _shouldShowAlternateActionButtonImage;	// 109 = 0x6d
    _Bool _shouldShowLoadingIndicator;	// 110 = 0x6e
    NSArray *_menuItems;	// 112 = 0x70
    NSString *_activitySessionIdentifier;	// 120 = 0x78
    PGPlaybackState *_playbackState;	// 128 = 0x80
    PGInterruptionAssistant *_interruptionAssistant;	// 136 = 0x88
    _Bool _hasBegunTwoStageStop;	// 144 = 0x90
    _Bool _stashed;	// 145 = 0x91
    unsigned long long _resourcesUsageReductionReasons;	// 152 = 0x98
    unsigned long long _UILockedResourcesUsageReductionReasons;	// 160 = 0xa0
    unsigned long long _externalResourcesUsageReductionReasons;	// 168 = 0xa8
    NSTimer *_considerStashedPlaybackAsBackgroundAudioTimer;	// 176 = 0xb0
    id <BSInvalidatable> _stateCaptureInvalidatable;	// 184 = 0xb8
    FBScene *_sourceScene;	// 192 = 0xc0
    NSString *_activitySessionIdentifierForLastActivePIPSession;	// 200 = 0xc8
    id <PGPictureInPictureRemoteObjectDelegate> _delegate;	// 208 = 0xd0
    PGPictureInPictureApplication *_pictureInPictureApplication;	// 216 = 0xd8
    PGPictureInPictureViewController *_pictureInPictureViewController;	// 224 = 0xe0
    id <PGPictureInPictureAnalyticsDelegate> _analyticsDelegate;	// 232 = 0xe8
    PGPictureInPictureRemoteObject *_tetheredRemoteObject;	// 240 = 0xf0
    PGPictureInPictureRemoteObject *_tetheringRemoteObject;	// 248 = 0xf8
    NSString *_sourceSceneSessionPersistentIdentifier;	// 256 = 0x100
    NSString *_exemptAttribution;	// 264 = 0x108
    struct CGSize _preferredContentSize;	// 272 = 0x110
    struct CGRect _initialLayerFrameForInteractiveTransitionAnimationUponBackgrounding;	// 288 = 0x120
}

+ (void)tetherRemoteObject:(id)arg1 toRemoteObject:(id)arg2 mode:(long long)arg3;	// IMP=0x001000000001be31
- (void).cxx_destruct;	// IMP=0x0000000000023b83
@property(copy, nonatomic) NSString *exemptAttribution; // @synthesize exemptAttribution=_exemptAttribution;
@property(readonly, nonatomic) NSString *sourceSceneSessionPersistentIdentifier; // @synthesize sourceSceneSessionPersistentIdentifier=_sourceSceneSessionPersistentIdentifier;
@property(readonly, nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(readonly, nonatomic) struct CGRect initialLayerFrameForInteractiveTransitionAnimationUponBackgrounding; // @synthesize initialLayerFrameForInteractiveTransitionAnimationUponBackgrounding=_initialLayerFrameForInteractiveTransitionAnimationUponBackgrounding;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) PGPictureInPictureRemoteObject *tetheringRemoteObject; // @synthesize tetheringRemoteObject=_tetheringRemoteObject;
@property(retain, nonatomic) PGPictureInPictureRemoteObject *tetheredRemoteObject; // @synthesize tetheredRemoteObject=_tetheredRemoteObject;
@property(nonatomic) __weak id <PGPictureInPictureAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <PGPictureInPictureRemoteObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
@property(readonly, nonatomic) PGPictureInPictureApplication *pictureInPictureApplication; // @synthesize pictureInPictureApplication=_pictureInPictureApplication;
- (_Bool)isAssociatedWithRemoteObject:(id)arg1;	// IMP=0x0000000000023a77
- (_Bool)canPreventOrSuspendRemoteObject:(id)arg1;	// IMP=0x0000000000023a10
- (_Bool)pictureInPictureViewControllerShouldHideTetheredViewControllerAlongsideControls:(id)arg1;	// IMP=0x00000000000239e2
- (_Bool)pictureInPictureViewControllerWantsStashTabSuppression:(id)arg1;	// IMP=0x00000000000239d0
- (void)pictureInPictureViewController:(id)arg1 didTransitionToStashed:(_Bool)arg2;	// IMP=0x0000000000023714
- (void)pictureInPictureViewControllerDidRequestCancel:(id)arg1;	// IMP=0x00000000000235dd
- (void)pictureInPictureViewController:(id)arg1 didReceiveCommand:(id)arg2;	// IMP=0x000000000002328d
- (void)pictureInPictureViewControllerDidRequestStop:(id)arg1;	// IMP=0x00000000000230f9
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg1;	// IMP=0x0000000000022f7d
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg1;	// IMP=0x0000000000022e01
- (void)pictureInPictureViewController:(id)arg1 updateHostedWindowSize:(struct CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;	// IMP=0x0000000000022ba6
- (void)handleCommand:(id)arg1;	// IMP=0x0000000000022b8a
- (void)_queue_notifyProxyOfInterruptionEnded;	// IMP=0x00000000000229f9
- (void)_queue_notifyProxyOfInterruptionBegan;	// IMP=0x0000000000022895
- (void)_acquireOrInvalidateProcessAssertionIfNeeded;	// IMP=0x0000000000022581
- (_Bool)_wantsProcessAssertion;	// IMP=0x00000000000224f6
- (_Bool)_currentStateAllowsProcessAssertion;	// IMP=0x00000000000224b3
- (void)_updateActiveProxyAndViewControllerOfInterruptionIfNeeded;	// IMP=0x00000000000223b2
- (oneway void)stopPictureInPictureAndRestoreUserInterface;	// IMP=0x0000000000022142
- (oneway void)setActivitySessionIdentifier:(id)arg1;	// IMP=0x0000000000021db1
- (oneway void)updateMenuItems:(id)arg1;	// IMP=0x00000000000217ee
- (oneway void)updatePlaybackStateWithDiff:(id)arg1;	// IMP=0x000000000002148a
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000212b5
- (oneway void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020f58
- (oneway void)stopPictureInPictureAnimated:(_Bool)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000020981
- (oneway void)setupStopAnimated:(_Bool)arg1 needsApplicationActivation:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000201e3
- (oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001fde1
- (oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fb40
- (void)_updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f738
- (oneway void)updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f4f2
- (oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f257
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(struct CGRect)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ee79
- (oneway void)startPictureInPictureAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e873
- (oneway void)setupStartAnimated:(_Bool)arg1 hostedWindowHostingHandle:(id)arg2 sceneSessionPersistentIdentifier:(id)arg3 preferredContentSize:(struct CGSize)arg4 initialInterfaceOrientation:(long long)arg5 initialLayerFrame:(struct CGRect)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000001dead
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d945
- (void)_invalidateForFailureToStartStopOrCancel;	// IMP=0x000000000001d69c
- (_Bool)_isInActivitySession;	// IMP=0x000000000001d5c2
- (_Bool)_isAssociatedWithOtherObject:(id)arg1;	// IMP=0x000000000001cdde
- (_Bool)_isAppICS;	// IMP=0x000000000001cd8c
- (_Bool)_isICSVideoCall;	// IMP=0x000000000001cd53
- (id)_invalidationTimerWithTimeout:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001caf4
- (id)_invalidationTimerWithTimeout:(double)arg1;	// IMP=0x000000000001cae0
- (void)_finishCleanup;	// IMP=0x000000000001c9d3
- (void)_invalidateAllAssertions;	// IMP=0x000000000001c8c6
- (void)_invalidateInterruptionBeganFinishTaskAssertion;	// IMP=0x000000000001c86c
- (_Bool)_canTransitionToState:(long long)arg1;	// IMP=0x000000000001c725
- (void)_setCurrentState:(long long)arg1;	// IMP=0x000000000001c22c
- (_Bool)_isUnderLock;	// IMP=0x000000000001c20e
- (void)_stopTethering;	// IMP=0x000000000001c14b
- (_Bool)canActivateUntetheredAlongsideOtherObject:(id)arg1;	// IMP=0x000000000001bdd4
- (_Bool)canTetherRemoteObjectAsMicroPIP:(id)arg1;	// IMP=0x000000000001bb7f
- (_Bool)canStartMicroPIP;	// IMP=0x000000000001bae3
- (_Bool)supportsMicroPIP;	// IMP=0x000000000001baa3
@property(readonly, nonatomic) _Bool canStartBackgroundPIPForCurrentActivitySessionIdentifier;
@property(readonly, copy, nonatomic) NSString *activitySessionIdentifier;
- (void)_setResolvedResourcesUsageReductionReasons:(unsigned long long)arg1;	// IMP=0x000000000001b8c8
- (void)_setUILockedResourcesUsageReductionReasons:(unsigned long long)arg1;	// IMP=0x000000000001b7a7
- (void)setCurrentResourcesUsageReductionReasons:(unsigned long long)arg1;	// IMP=0x000000000001b686
- (void)invalidate;	// IMP=0x000000000001b3db
- (void)cancel;	// IMP=0x000000000001b17f
- (void)resume;	// IMP=0x000000000001ae9a
- (void)suspend;	// IMP=0x000000000001ab27
- (void)_notifyProxyOfStashedOrUnderLock:(_Bool)arg1;	// IMP=0x000000000001aa3a
- (void)pictureInPictureInterruptionEndedWithReason:(long long)arg1 attribution:(id)arg2;	// IMP=0x000000000001a83f
- (void)pictureInPictureInterruptionBeganWithReason:(long long)arg1 attribution:(id)arg2;	// IMP=0x000000000001a5e8
- (void)startPictureInPictureFromBackground;	// IMP=0x000000000001a1fe
- (void)sendStartPictureInPictureTestAction;	// IMP=0x0000000000019fe9
- (void)endTwoStageStopPictureInPictureWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019ca3
- (void)beginTwoStageStopPictureInPictureByRestoringUserInterfaceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000198e9
- (void)stopPictureInPictureAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001959d
- (void)startPictureInPictureEnteringBackgroundAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018fff
@property(readonly, nonatomic, getter=isVideoCall) _Bool videoCall;
@property(readonly, nonatomic) long long contentType;
- (void)setSourceSceneSessionPersistentIdentifier:(id)arg1;	// IMP=0x0000000000018d1b
@property(nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
@property(readonly, nonatomic, getter=isInterrupted) _Bool interrupted;
@property(readonly, nonatomic) _Bool canEndTwoStageStopPictureInPicture;
@property(readonly, nonatomic) _Bool isStartingStoppingOrCancellingPictureInPicture;
@property(readonly, nonatomic) _Bool isStoppingOrCancellingPictureInPicture;
- (_Bool)isStartingPictureInPicture;	// IMP=0x00000000000189a4
@property(readonly, nonatomic) _Bool canCancelPictureInPicture;
@property(readonly, nonatomic) _Bool canStopPictureInPicture;
@property(readonly, nonatomic) _Bool shouldStartPictureInPictureEnteringBackground;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(readonly, nonatomic) NSXPCConnection *connection;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001832a
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000182da
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000182be
- (id)succinctDescription;	// IMP=0x000000000001826e
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000001803a
- (id)init;	// IMP=0x0000000000017f8e
- (id)initWithConnection:(id)arg1 interruptionAssistant:(id)arg2;	// IMP=0x0000000000017c2b
- (_Bool)matchesSceneSessionIdentifier:(id)arg1;	// IMP=0x0000000000003c3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

