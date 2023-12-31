//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, AXEventProcessor, AXEventRepresentation, NSArray, NSDictionary, NSMutableArray, NSRecursiveLock, NSString, SCRCGestureFactory, SCRCTargetSelectorTimer, SCRCThreadKey, VOTBrailleGestureManager, VOTClickAndHoldButtonInterceptor, VOTDirectInteractionKeyboardManager, VOTElement, VOTEvent, VOTGestureEvent, VOTMapsExplorationGestureManager, VOTSimpleClickButtonInterceptor;
@protocol VOTDirectTouchManagementProtocol, VOTElementManagementProtocol, VOTEventFactoryCallbackProtocol, VOTRotorManagementProtocol;

@interface VOTEventFactory : NSObject
{
    SCRCGestureFactory *_gestureFactory;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    unsigned long long _edgePanGestureState;	// 24 = 0x18
    struct CGPoint _edgePanGestureStartPoint;	// 32 = 0x20
    double _edgePanGestureStartTime;	// 48 = 0x30
    struct CGPoint _edgePanGesturePausePoint;	// 56 = 0x38
    SCRCTargetSelectorTimer *_edgePanGestureSpeakHintTimer;	// 72 = 0x48
    long long _direction;	// 80 = 0x50
    long long _rotorSoundZone;	// 88 = 0x58
    long long _continuityZone;	// 96 = 0x60
    double _startPinchDistance;	// 104 = 0x68
    long long _fingerCount;	// 112 = 0x70
    double _travelDistance;	// 120 = 0x78
    struct CGPoint _tapHoldOffset;	// 128 = 0x80
    struct CGPoint _audiographScrubbingPreviousLocation;	// 144 = 0x90
    _Bool _canPlayBoundaryFeedback;	// 160 = 0xa0
    VOTGestureEvent *_lastDownEvent;	// 168 = 0xa8
    SCRCThreadKey *_threadKey;	// 176 = 0xb0
    NSRecursiveLock *_currentElementLock;	// 184 = 0xb8
    VOTElement *_currentElement;	// 192 = 0xc0
    VOTElement *_firstResponder;	// 200 = 0xc8
    double _lastEdgePressTime;	// 208 = 0xd0
    double _lastEchoTime;	// 216 = 0xd8
    double _rotateStartTime;	// 224 = 0xe0
    long long _rotateDirection;	// 232 = 0xe8
    SCRCTargetSelectorTimer *_tapHoldTimer;	// 240 = 0xf0
    SCRCTargetSelectorTimer *_elementSummaryTimer;	// 248 = 0xf8
    SCRCTargetSelectorTimer *_twoFingerHoldTimer;	// 256 = 0x100
    SCRCTargetSelectorTimer *_threeFingerHoldTimer;	// 264 = 0x108
    SCRCTargetSelectorTimer *_memorizeSoundTimer;	// 272 = 0x110
    SCRCTargetSelectorTimer *_systemControlLocationTimer;	// 280 = 0x118
    double _currentTouchForce;	// 288 = 0x120
    double _previewFingerStartingForce;	// 296 = 0x128
    struct CGPoint _previewFingerLocation;	// 304 = 0x130
    NSMutableArray *_previewFingerContextId;	// 320 = 0x140
    _Bool _isInPreview;	// 328 = 0x148
    double _previewStartTime;	// 336 = 0x150
    double _previewPopDelayTime;	// 344 = 0x158
    _Bool _isPreviewPinned;	// 352 = 0x160
    long long _currentOrbGestureMode;	// 360 = 0x168
    struct CGPoint _nativeSlidingOffset;	// 368 = 0x170
    struct CGPoint _nativeSlidingCenter;	// 384 = 0x180
    double _lastTwoFingerSlideTime;	// 400 = 0x190
    double _oldVolumeChangeDistance;	// 408 = 0x198
    double _volumeChangeDistance;	// 416 = 0x1a0
    SCRCTargetSelectorTimer *_volumeChangeTimer;	// 424 = 0x1a8
    SCRCTargetSelectorTimer *_wakeTapTimer;	// 432 = 0x1b0
    unsigned long long _watchWakeTapCount;	// 440 = 0x1b8
    double _lastWatchWakeUpTime;	// 448 = 0x1c0
    NSMutableArray *_snarfedWatchWakeRecords;	// 456 = 0x1c8
    _Bool _aotEnabled;	// 464 = 0x1d0
    struct __AXObserver *_axEventObserver;	// 472 = 0x1d8
    VOTGestureEvent *_currentGestureEvent;	// 480 = 0x1e0
    NSArray *_directInteractionElements;	// 488 = 0x1e8
    NSString *_zoomListenerIdentifier;	// 496 = 0x1f0
    struct {
        long long direction;
        unsigned long long count;
        double continuityDistance;
        double distanceTraveled;
        struct CGPoint firstCountPoint;
    } _zigzag;	// 504 = 0x1f8
    double _lastNativeSlideCancel;	// 552 = 0x228
    struct os_unfair_lock_s _tapAndHoldLock;	// 560 = 0x230
    NSMutableArray *_tapAndHoldContextIds;	// 568 = 0x238
    long long _tapAndHoldFingerType;	// 576 = 0x240
    VOTElement *_tapAndHoldScribbleElement;	// 584 = 0x248
    struct CGPoint _systemControlStartPoint;	// 592 = 0x250
    int _systemControlPosition;	// 608 = 0x260
    _Bool _systemControlActivated;	// 612 = 0x264
    double _systemControlStartSwipeTime;	// 616 = 0x268
    double _systemControlFingerDownFollowupTime;	// 624 = 0x270
    double _lastScrollEventTime;	// 632 = 0x278
    long long _currentAccumulatedScroll;	// 640 = 0x280
    _Bool _scrollWheelIsActive;	// 648 = 0x288
    struct {
        _Bool tapAndHoldMode;
        _Bool tapAndHoldModeContextless;
        _Bool tapAndHoldOffsetNeedsUpdate;
        _Bool orbMode;
        _Bool firedElementSummaryTimer;
        _Bool rotating;
        _Bool memorizingData;
        _Bool twoFingerTapAndSlide;
        _Bool threeFingerTapAndSlide;
        _Bool splitSlide;
        _Bool handwritingOnly;
        _Bool didPlayStartLabelSound;
        _Bool sendingToDirectTouch;
        _Bool sendingToNativeSlide;
        _Bool gestureSawDownEvent;
        _Bool allowingSystemGesturePassthrough;
        _Bool hasSentFirstTrackingEventForGesture;
        _Bool audiographScrubbingMode;
    } _flags;	// 649 = 0x289
    double _gestureKeyboardShiftLockStartTime;	// 672 = 0x2a0
    VOTBrailleGestureManager *_brailleGestureManager;	// 680 = 0x2a8
    VOTMapsExplorationGestureManager *_mapsExplorationGestureManager;	// 688 = 0x2b0
    VOTClickAndHoldButtonInterceptor *_playButtonInterceptor;	// 696 = 0x2b8
    VOTSimpleClickButtonInterceptor *_selectButtonInterceptor;	// 704 = 0x2c0
    VOTSimpleClickButtonInterceptor *_menuButtonInterceptor;	// 712 = 0x2c8
    struct {
        _Bool tapDown;
        _Bool tapMoved;
        _Bool tapUp;
        _Bool heldDown;
        _Bool heldUp;
    } _audioAccButtonStates[3];	// 720 = 0x2d0
    unsigned long long _audioAccTapCount;	// 736 = 0x2e0
    double _audioAccLastDownTime;	// 744 = 0x2e8
    double _audioAccLastTapTime;	// 752 = 0x2f0
    _Bool _audioAccHoldSent;	// 760 = 0x2f8
    unsigned long long _currentSoundButton;	// 768 = 0x300
    unsigned long long _pendingSoundButton;	// 776 = 0x308
    unsigned long long _audioAccTouchGeneration;	// 784 = 0x310
    unsigned long long _audioAccPendingGeneration;	// 792 = 0x318
    SCRCTargetSelectorTimer *_audioAccTapTimer;	// 800 = 0x320
    struct __IOHIDEventSystemClient *_audioAccIOSystemPostBackClient;	// 808 = 0x328
    _Bool _nowPlayingState;	// 816 = 0x330
    unsigned long long _splitSlideFingerCount;	// 824 = 0x338
    NSDictionary *_handGestureCommandDict;	// 832 = 0x340
    id <VOTElementManagementProtocol> _elementManager;	// 840 = 0x348
    id <VOTRotorManagementProtocol> _rotorManager;	// 848 = 0x350
    id <VOTDirectTouchManagementProtocol> _directTouchManager;	// 856 = 0x358
    id <VOTEventFactoryCallbackProtocol> _delegate;	// 864 = 0x360
    AXDispatchTimer *_handwritingCaptureTimer;	// 872 = 0x368
    VOTDirectInteractionKeyboardManager *_directInteractionKeyboardManager;	// 880 = 0x370
    AXEventProcessor *_eventProcessor;	// 888 = 0x378
    VOTElement *_lastTouchedDirectTouchElement;	// 896 = 0x380
    VOTEvent *_lastGestureEvent;	// 904 = 0x388
    AXEventRepresentation *_audioAccTapDownEventForRepost;	// 912 = 0x390
    AXEventRepresentation *_audioAccHeldEventForRepost;	// 920 = 0x398
    AXEventRepresentation *_audioAccHeldUpEventForRepost;	// 928 = 0x3a0
    AXEventRepresentation *_audioAccTapUpEventForRepost;	// 936 = 0x3a8
}

+ (void)_updateZoomFrame:(struct CGRect)arg1;	// IMP=0x00200000000dbacc
+ (void)initialize;	// IMP=0x00100000000d88f9
- (void).cxx_destruct;	// IMP=0x00200000000e9f49
@property(retain) AXEventRepresentation *audioAccTapUpEventForRepost; // @synthesize audioAccTapUpEventForRepost=_audioAccTapUpEventForRepost;
@property(retain) AXEventRepresentation *audioAccHeldUpEventForRepost; // @synthesize audioAccHeldUpEventForRepost=_audioAccHeldUpEventForRepost;
@property(retain) AXEventRepresentation *audioAccHeldEventForRepost; // @synthesize audioAccHeldEventForRepost=_audioAccHeldEventForRepost;
@property(retain) AXEventRepresentation *audioAccTapDownEventForRepost; // @synthesize audioAccTapDownEventForRepost=_audioAccTapDownEventForRepost;
@property(retain, nonatomic) VOTEvent *lastGestureEvent; // @synthesize lastGestureEvent=_lastGestureEvent;
// Error: Property attributes should begin with the type ('T') attribute, property name: lastTouchedDirectTouchElement
// Property attributes: (null)

@property(retain, nonatomic) AXEventProcessor *eventProcessor; // @synthesize eventProcessor=_eventProcessor;
@property(readonly, nonatomic) VOTDirectInteractionKeyboardManager *directInteractionKeyboardManager; // @synthesize directInteractionKeyboardManager=_directInteractionKeyboardManager;
@property(retain, nonatomic, setter=_setHandwritingCaptureTimer:) AXDispatchTimer *_handwritingCaptureTimer; // @synthesize _handwritingCaptureTimer;
@property(nonatomic) __weak id <VOTEventFactoryCallbackProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VOTDirectTouchManagementProtocol> directTouchManager; // @synthesize directTouchManager=_directTouchManager;
@property(nonatomic) __weak id <VOTRotorManagementProtocol> rotorManager; // @synthesize rotorManager=_rotorManager;
@property(nonatomic) __weak id <VOTElementManagementProtocol> elementManager; // @synthesize elementManager=_elementManager;
- (id)_mapAXEventToVOTEvent:(id)arg1;	// IMP=0x00100000000e9cb6
- (_Bool)_handleVoiceOverGreySupportAccessibilityEvent:(id)arg1;	// IMP=0x00100000000e9bfc
- (void)_updateVoiceOverHandGesturesActionCustomizations;	// IMP=0x00100000000e9b8d
- (_Bool)_handleAccessibilityEvent:(id)arg1;	// IMP=0x00100000000e9b85
- (void)brailleGestureManager:(id)arg1 unsetForcedOrientationAndAnnounce:(_Bool)arg2;	// IMP=0x00100000000e9b4c
- (void);	// IMP=0x00100000000e9b04
- (void)gesturedTextInputManager:(id)arg1 accessCurrentGesturedTextInputElement:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e9a94
- (void)gesturedTextInputManager:(id)arg1 moveToElementMatchingRotorType:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x00100000000e9a43
- (id)votActionForEdgePanGestureState:(unsigned long long)arg1;	// IMP=0x00100000000e9a06
- (double)_edgePanGestureStartThreshold;	// IMP=0x00100000000e99b9
- (void)_updateCurrentElementOrbGestureMode;	// IMP=0x00100000000e975e
- (_Bool)_shouldDismissPreviewOnLift;	// IMP=0x00100000000e972a
- (void)_liftPreviewFinger;	// IMP=0x00100000000e9553
- (void)_switchToTrackingMode;	// IMP=0x00100000000e929c
- (void)_simulatePeekAndSwitchToTapHoldMode;	// IMP=0x00100000000e8b87
- (void)_simulatePop;	// IMP=0x00100000000e88b2
- (void)_reducePreviewFingerStartingForce:(double)arg1;	// IMP=0x00100000000e8644
- (void)_simulatePreviewActionGesture;	// IMP=0x00100000000e83ae
- (_Bool)_isPreviewElementSelected;	// IMP=0x00100000000e8339
- (void)directInteractionModeStatus:(_Bool)arg1;	// IMP=0x00100000000e81fe
@property(readonly, nonatomic) _Bool tapAndHoldMode; // @dynamic tapAndHoldMode;
@property(readonly, nonatomic) unsigned long long fingerCount; // @dynamic fingerCount;
- (void)_setFingerCount:(unsigned long long)arg1;	// IMP=0x00100000000e81cb
@property(readonly, nonatomic) struct CGPoint fingerPosition; // @dynamic fingerPosition;
- (void)_handleEventWithData:(id)arg1;	// IMP=0x00100000000e7e5a
- (void)_convertZoomRecordToDeviceRecord:(id)arg1;	// IMP=0x00100000000e7c62
- (struct CGPoint)_convertZoomPointToDevicePoint:(struct CGPoint)arg1;	// IMP=0x00100000000e7bac
- (struct CGRect)_convertFrame:(struct CGRect)arg1 toPortraitFromOrientation:(long long)arg2;	// IMP=0x00100000000e7a58
- (struct CGPoint)convertDevicePointToZoomedPoint:(struct CGPoint)arg1;	// IMP=0x00100000000e7846
- (void)_handleKeyboardVisibilityChanged:(id)arg1;	// IMP=0x00100000000e77b6
- (void)_handleElementPreviewNotification:(id)arg1;	// IMP=0x00100000000e7743
- (void)_endAudiographScrubbingMode;	// IMP=0x00100000000e76a9
- (void)_handleAudiographScrubbingPositionChanged;	// IMP=0x00100000000e744a
- (void)_beginAudiographScrubbingMode;	// IMP=0x00100000000e731a
- (_Bool)_canScribbleWithElement:(id)arg1;	// IMP=0x00100000000e72ce
- (void)_liftFromTapAndHoldAndResetFingers:(_Bool)arg1;	// IMP=0x00100000000e71f5
- (void)_markTapAndHoldOffsetAsDirty;	// IMP=0x00100000000e7174
- (void)_scheduleUpdateScribbleTapAndHoldModeOffset;	// IMP=0x00100000000e70da
- (void)_cancelUpdateScribbleTapAndHoldModeOffset;	// IMP=0x00100000000e704d
- (void)_endScribbleTapAndHoldMode;	// IMP=0x00100000000e6f26
- (void)_startScribbleTapAndHoldModeTimeout;	// IMP=0x00100000000e6e8c
- (void)_cancelScribbleTapAndHoldModeTimeout;	// IMP=0x00100000000e6dff
- (void)_processTapAndHoldMode:(id)arg1;	// IMP=0x00100000000e69f8
- (void)_processIdle:(struct CGPoint)arg1;	// IMP=0x00100000000e68e2
- (void)_touchLiftAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000000e6658
- (id)tapAndHoldContextNumbers;	// IMP=0x00100000000e64eb
- (void)_touchDragAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;	// IMP=0x00100000000e61cf
- (void)_touchDownAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;	// IMP=0x00100000000e5eb3
- (void)_contextlessTouchWithHandType:(unsigned int)arg1 location:(struct CGPoint)arg2 force:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;	// IMP=0x00100000000e5b9b
- (void)_threeFingerHoldFired;	// IMP=0x00100000000e5b2e
- (void)_twoFingerHoldFired;	// IMP=0x00100000000e5b28
- (void)_startTouchDownForTapAndHoldActionWithCenter:(id)arg1 force:(id)arg2 altitude:(id)arg3 azimuth:(id)arg4;	// IMP=0x00100000000e59f4
- (struct CGPoint)_startPointForScribbleWithElement:(id)arg1 originalStartPoint:(struct CGPoint)arg2;	// IMP=0x00100000000e595a
- (struct CGPoint)_updateTapAndHoldLocationDataForElement:(id)arg1;	// IMP=0x00100000000e54cb
- (void)_tapHoldFired:(id)arg1;	// IMP=0x00100000000e4ac4
- (_Bool)_tapAndHoldModeIsForScribble;	// IMP=0x00100000000e4ab3
- (void)_edgePanGestureSpeakHintTimerFired;	// IMP=0x00100000000e4a3e
- (void)_stopMemorizingSession;	// IMP=0x00100000000e4959
- (void)_startLabelElementSoundPlay;	// IMP=0x00100000000e48a9
- (void)firstResponderDidUpdate:(id)arg1;	// IMP=0x00100000000e475d
- (void)currentElementDidUpdate:(id)arg1;	// IMP=0x00100000000e46f9
- (_Bool)directInteractionGestureInProgress;	// IMP=0x00100000000e46ed
- (void)directInteractionElementsUpdated:(id)arg1;	// IMP=0x00100000000e46ba
- (void)_cancelTapAndHold:(struct CGPoint)arg1 forScribble:(_Bool)arg2;	// IMP=0x00100000000e43a8
- (void)_cancelTapAndHold:(struct CGPoint)arg1;	// IMP=0x00100000000e4394
- (void)_cancelTapAndHoldWithValue:(id)arg1;	// IMP=0x00100000000e4363
- (void)cancelTapAndHold:(struct CGPoint)arg1;	// IMP=0x00100000000e42ec
- (void)_outputElementSummaryFired;	// IMP=0x00100000000e4285
@property(nonatomic) long long orientation; // @dynamic orientation;
- (void)_beginNativeSliding:(id)arg1;	// IMP=0x00100000000e40cb
- (void)startTapAndHoldMode:(_Bool)arg1;	// IMP=0x00100000000e4071
- (id)currentElement;	// IMP=0x00100000000e4057
- (void)_commitDeferredZoomInfoIfAppropriate;	// IMP=0x00100000000e4035
- (void)_commitDeferredZoomInfo;	// IMP=0x00100000000e3fb7
- (void)_processGestureEvent:(id)arg1;	// IMP=0x00100000000e1604
- (void)_playFeedbackForGestureState:(unsigned long long)arg1 gestureComplete:(_Bool)arg2;	// IMP=0x00100000000e15fe
- (void)_transitionToGestureState:(unsigned long long)arg1 playHaptic:(_Bool)arg2;	// IMP=0x00100000000e14e1
- (void)_transitionToGestureState:(unsigned long long)arg1;	// IMP=0x00100000000e14ca
- (id)_updateEdgePanGestureForState:(long long)arg1;	// IMP=0x00100000000e0ddc
- (double)_edgeGestureScaleFactor:(_Bool)arg1;	// IMP=0x00100000000e0d41
- (_Bool)_willStartEdgePanGestureForEvent:(id)arg1;	// IMP=0x00100000000e0a84
- (_Bool)_handleOrbEvent:(id)arg1;	// IMP=0x00100000000e0a7c
- (id)_touchLocationsForGestureEvent:(id)arg1;	// IMP=0x00100000000e0756
- (void)updateOrientation;	// IMP=0x00100000000e0719
- (_Bool)_gestureEventIsInvalid:(id)arg1;	// IMP=0x00100000000e0684
- (_Bool)directTouchElementsPresent;	// IMP=0x00100000000e0664
- (_Bool)_handleDirectInteractionEvent:(id)arg1;	// IMP=0x00100000000dfbdd
- (_Bool)_shouldUseGesturedTextInputManager;	// IMP=0x00100000000dfbaa
- (struct CGPoint)adjustedPointForFactoryPoint:(struct CGPoint)arg1 forOrientation:(long long)arg2;	// IMP=0x00100000000dfb48
- (void)gestureTappingCallbackWithFactory:(id)arg1;	// IMP=0x00100000000de8d2
- (_Bool)_isStylusGesture;	// IMP=0x00100000000de88f
- (id)_handleGestureKeyboardTappingCallback:(unsigned long long)arg1 fingerCount:(unsigned long long)arg2 isDown:(_Bool)arg3 originalLocation:(struct CGPoint)arg4 convertedLocation:(struct CGPoint)arg5;	// IMP=0x00100000000de69e
- (void)gestureFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x00100000000de611
- (void)gestureSplitTappingCallbackWithFactory:(id)arg1;	// IMP=0x00100000000de514
- (_Bool)shouldBlockSplitTapGestureWithFactory:(id)arg1;	// IMP=0x00100000000de50c
- (_Bool)_updateFingersInSystemControlLocation:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2 isLift:(_Bool)arg3;	// IMP=0x00100000000de060
- (struct CGPoint)_averagePointForLastDownEvent;	// IMP=0x00100000000dddfe
- (void)_resetSystemControlStatus;	// IMP=0x00100000000dddb4
- (void)_sendSystemControlEvent:(id)arg1;	// IMP=0x00100000000ddce3
- (int)_systemControlPosition:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2;	// IMP=0x00100000000ddaf2
- (void)_systemControlLocationTimer;	// IMP=0x00100000000dda2f
- (void)_volumeChangeTimer;	// IMP=0x00100000000dd8fe
- (void)_gestureTrackingCallbackWithFactory:(id)arg1 isHandlingSystemControlEvent:(_Bool)arg2;	// IMP=0x00100000000dd528
- (void)_updateFirstnessOfTrackingEvent:(id)arg1;	// IMP=0x00100000000dd4ce
- (_Bool)_isEdgePressSupportedAtPosition:(struct CGPoint)arg1;	// IMP=0x00100000000dd436
- (_Bool)_shouldAttemptTracking;	// IMP=0x00100000000dd3ba
- (_Bool)_isTapAndHoldPending;	// IMP=0x00100000000dd378
- (void)gestureTrackingCallbackWithFactory:(id)arg1;	// IMP=0x00100000000dd364
- (void)gestureGutterUpCallbackWithFactory:(id)arg1;	// IMP=0x00100000000dd35e
- (void)processEvent:(id)arg1;	// IMP=0x00100000000dd115
- (_Bool)processEventAsGesturedTextInput:(id)arg1;	// IMP=0x00100000000dd088
- (id)_currentGesturedTextInputManager;	// IMP=0x00100000000dd072
- (id)_currentGesturedTextInputManagerAndCommandResolver:(id)arg1 forCommandResolver:(_Bool)arg2;	// IMP=0x00100000000dcd54
- (id)_commandResolver;	// IMP=0x00100000000dcccb
- (void)_handleSOSMedicalIDShown;	// IMP=0x00100000000dcc4e
- (int)_registerForAXNotifications:(_Bool)arg1;	// IMP=0x00100000000dc9d6
- (id)_notificationsToRegister;	// IMP=0x00100000000dc9c9
- (_Bool)registerForEvents;	// IMP=0x00100000000dc35a
- (void)unregisterForEvents;	// IMP=0x00100000000dc2b5
- (void)resetEventFactory;	// IMP=0x00100000000dc29f
- (void)_handleRotorChangedNotification:(id)arg1;	// IMP=0x00100000000dc083
- (void)screenLockOccurred;	// IMP=0x00100000000dc068
- (void)dealloc;	// IMP=0x00100000000dbdd7
- (void)shutdown;	// IMP=0x00100000000dbd69
- (void)_registerForZoomListener;	// IMP=0x00100000000dbae8
- (void)_registerForIOHIDUsage;	// IMP=0x00100000000db76c
- (void)nowPlayingChanged:(id)arg1;	// IMP=0x00100000000db6ec
- (void)_audioAccProcessTapUpdates;	// IMP=0x00100000000dafe1
- (void)_audioAccAnnounceButton;	// IMP=0x00100000000dacdc
- (void)_audioAccPostEvent:(id)arg1 withButton:(unsigned long long)arg2 timeOffset:(double)arg3;	// IMP=0x00100000000dab57
- (void)_audioAccPostEvent:(id)arg1 withButton:(unsigned long long)arg2;	// IMP=0x00100000000dab42
- (_Bool)_audioAccessoryEventFilter:(id)arg1;	// IMP=0x00100000000da681
- (_Bool)_atvEventFilter:(id)arg1;	// IMP=0x00100000000da2fe
- (id)_preprocessEventForSimulator:(id)arg1;	// IMP=0x00100000000da14e
- (void)_handleIOHIDEvent:(id)arg1;	// IMP=0x00100000000d9921
- (id)_denormalizeEventRepresentation:(id)arg1;	// IMP=0x00100000000d9905
- (void)_wakeTapFired;	// IMP=0x00100000000d96ac
- (_Bool)shouldSnarfEventForTapWakeGesture:(id)arg1;	// IMP=0x00100000000d95e3
- (void)_updateTapSpeedFromPreferences;	// IMP=0x00100000000d94fa
- (id)init;	// IMP=0x00100000000d8956
- (_Bool)mapsExplorationInputActive;	// IMP=0x00100000000d88d7
- (id)_mapsExplorationGestureManager;	// IMP=0x00100000000d8879
@property(readonly, nonatomic) _Bool brailleInputActive;
- (id)_brailleGestureManager;	// IMP=0x00100000000d87eb
- (id)gestureFactory;	// IMP=0x00100000000d87dd
- (void)setGestureFactory:(id)arg1;	// IMP=0x00100000000d87cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

