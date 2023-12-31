//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSArray, NSString, NSTimer, NSUUID, SASRequestOptions, SRStarkView, _TtC4Siri40SRCarPlayLaspedMusicExperimentController;
@protocol SRStarkItemController, SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SRCarDisplayViewController : UIViewController
{
    _Bool _siriIsIdleAndQuiet;	// 8 = 0x8
    _Bool _autoDismissScheduled;	// 9 = 0x9
    _Bool;	// 10 = 0xa
    _Bool _hidingHeaderForNewRequest;	// 11 = 0xb
    id <SiriUIPresentationDataSource> _dataSource;	// 16 = 0x10
    id <SiriUIPresentationDelegate> _delegate;	// 24 = 0x18
    UIViewController<SRStarkItemController> *_currentSnippetController;	// 32 = 0x20
    SASRequestOptions *_requestOptions;	// 40 = 0x28
    double _selectButtonTimeInterval;	// 48 = 0x30
    NSTimer *_selectButtonHoldToTalkTimer;	// 56 = 0x38
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;	// 64 = 0x40
    NSArray *_delayedAceCommands;	// 72 = 0x48
    NSUUID *_delayedAceCommandsTurnIdentifier;	// 80 = 0x50
    _TtC4Siri40SRCarPlayLaspedMusicExperimentController *_experimentController;	// 88 = 0x58
}

+ (_Bool)_areRequestOptions:(id)arg1 containingAnEqualSubsetOfPropertiesOfOtherRequestOptions:(id)arg2;	// IMP=0x002000000006c17e
+ (_Bool)_shouldClearScreenWhenTransitioningFromRequestOptions:(id)arg1 toRequestOptions:(id)arg2;	// IMP=0x001000000006c06f
- (void).cxx_destruct;	// IMP=0x0020000000072063
@property(retain, nonatomic) _TtC4Siri40SRCarPlayLaspedMusicExperimentController *experimentController; // @synthesize experimentController=_experimentController;
@property(retain, nonatomic) NSUUID *delayedAceCommandsTurnIdentifier; // @synthesize delayedAceCommandsTurnIdentifier=_delayedAceCommandsTurnIdentifier;
@property(retain, nonatomic) NSArray *delayedAceCommands; // @synthesize delayedAceCommands=_delayedAceCommands;
@property(nonatomic, getter=isHidingHeaderForNewRequest) _Bool hidingHeaderForNewRequest; // @synthesize hidingHeaderForNewRequest=_hidingHeaderForNewRequest;
@property(retain, nonatomic, getter=_currentTurnContext, setter=_setCurrentTurnContext:) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
@property(retain, nonatomic, getter=_selectButtonHoldToTalkTimer, setter=_setSelectButtonHoldToTalkTimer:) NSTimer *selectButtonHoldToTalkTimer; // @synthesize selectButtonHoldToTalkTimer=_selectButtonHoldToTalkTimer;
@property(nonatomic, getter=_selectButtonTimeInterval, setter=_setSelectButtonTimeInterval:) double selectButtonTimeInterval; // @synthesize selectButtonTimeInterval=_selectButtonTimeInterval;
@property(retain, nonatomic, getter=_requestOptions, setter=_setRequestOptions:) SASRequestOptions *requestOptions; // @synthesize requestOptions=_requestOptions;
@property(retain, nonatomic, getter=_currentSnippetController, setter=_setCurrentSnippetController:) UIViewController<SRStarkItemController> *currentSnippetController; // @synthesize currentSnippetController=_currentSnippetController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_performAceCommands:(id)arg1 turnIdentifier:(id)arg2;	// IMP=0x0010000000071d1c
- (void)_clearDelayedAceCommands;	// IMP=0x0010000000071cd5
- (void)_stopSpeakingAndPerformAceCommandsAfterSpeakingHasCompleted:(id)arg1 turnIdentifier:(id)arg2;	// IMP=0x0010000000071ae1
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000071ad7
- (_Bool)starkDisambiguationSnippetControllerIsRightHandDrive:(id)arg1;	// IMP=0x0010000000071ac7
- (void)confirmationSnippetControllerRequestsRestartSpeechSynthesis:(id)arg1;	// IMP=0x0010000000071a7b
- (void)confirmationSnippetControllerRequestsStopSpeechSynthesis:(id)arg1;	// IMP=0x00100000000719de
- (void)starkView:(id)arg1 requestsDismissalWithDismissalReason:(unsigned long long)arg2;	// IMP=0x0010000000071981
- (void)starkView:(id)arg1 didRemoveSnippetView:(id)arg2;	// IMP=0x001000000007176d
- (void)starkView:(id)arg1 didReceiveBackButtonTapGestureRecognizer:(id)arg2;	// IMP=0x0010000000071558
- (void)starkViewDidReceiveSelectSiriEvent:(id)arg1;	// IMP=0x0010000000071266
- (_Bool)_isEligibleForHoldToTalk;	// IMP=0x0010000000071211
- (void)_selectButtonHoldToTalkIntervalFired:(id)arg1;	// IMP=0x00100000000710ef
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000070f77
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000070dbb
- (_Bool)_buttons:(id)arg1 hasType:(long long)arg2;	// IMP=0x0010000000070c6a
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0010000000070bb0
- (void)_dismissForIdleIfNoDelayedAceCommands;	// IMP=0x0010000000070a39
- (void)_cancelAutoDismiss;	// IMP=0x0010000000070971
- (void)_scheduleAutoDismiss;	// IMP=0x0010000000070888
- (void)_rescheduleAutoDismiss;	// IMP=0x001000000007070c
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1;	// IMP=0x00100000000703dc
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x00100000000703d4
- (void)didReceiveUpdateVisualResponseCommand:(id)arg1;	// IMP=0x001000000007035a
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000070352
- (void)siriDidOpenURL:(id)arg1 bundleId:(id)arg2 inPlace:(_Bool)arg3;	// IMP=0x00100000000701d2
- (void)siriDidDeactivate;	// IMP=0x0010000000070185
- (void)siriDidUpdateASRWithRecognition:(id)arg1;	// IMP=0x001000000007012c
- (void)presentationStateUpdatedFromPresentationState:(long long)arg1 toPresentationState:(long long)arg2;	// IMP=0x0010000000070070
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x001000000006ffab
- (_Bool)shouldProceedToNextCommandAtSpeechSynthesisEnd;	// IMP=0x001000000006ff5c
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x001000000006ff54
- (void)startNewConversation;	// IMP=0x001000000006ff42
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x001000000006fcc5
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x001000000006fc6c
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000006fc57
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000006fc42
- (_Bool)_shouldIgnoreConversationItem:(id)arg1;	// IMP=0x001000000006fbe5
- (_Bool)_isStarkSupportedSnippetClass:(id)arg1;	// IMP=0x001000000006fb53
- (void)_updateItemsForConversation:(id)arg1 atIndexPaths:(id)arg2;	// IMP=0x001000000006e005
- (void)_updateItemsAtIndexPath:(id)arg1;	// IMP=0x001000000006df00
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x001000000006dd28
- (id)preferredFocusEnvironments;	// IMP=0x001000000006dc9d
- (id)viewController;	// IMP=0x001000000006dc94
- (long long)options;	// IMP=0x001000000006dc89
- (void)starkItemControllerRequestsRestartSpeechSynthesis:(id)arg1;	// IMP=0x001000000006dc3d
- (void)starkItemControllerRequestsCancelSpeechSynthesis:(id)arg1;	// IMP=0x001000000006dbf1
- (void)starkItemController:(id)arg1 performAceCommands:(id)arg2 turnIdentifier:(id)arg3 clearSnippetDisplay:(_Bool)arg4;	// IMP=0x001000000006dbb3
- (void)starkItemControllerItemViewDidAppear:(id)arg1 withAceObject:(id)arg2;	// IMP=0x001000000006daf7
- (void)starkItemControllerRequestsReschedulingAutoDismiss:(id)arg1;	// IMP=0x001000000006da0b
- (void)starkItemController:(id)arg1 requestsFullScreen:(_Bool)arg2;	// IMP=0x001000000006d96d
- (void)starkItemControllerRequestsDismissal:(id)arg1 withDismissalReason:(unsigned long long)arg2;	// IMP=0x001000000006d85a
- (void)starkItemController:(id)arg1 synthesizeSpeechWithText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006d7d1
- (void)_setTouchPassThroughEnabled:(_Bool)arg1;	// IMP=0x001000000006d743
- (void)_clearHeaderAndContactContainerView;	// IMP=0x001000000006d6be
- (void)_updateHeaderAndContactContainerViewForAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x001000000006d3af
- (void)_updateHeaderAndClearContactContainerViewForAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x001000000006d1e2
- (void)_notifyPresentationForAppBundleIdentifier:(id)arg1;	// IMP=0x001000000006d13f
- (void)_setCarDisplaySnippetMode:(long long)arg1;	// IMP=0x001000000006d01b
- (void)_setGatekeeperHeaderForRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x001000000006ce9b
- (_Bool)_shouldShowEmptyLinenForCurrentDialogPhase;	// IMP=0x001000000006cc5a
- (_Bool)_isSnippetControllerUsingSystemStyle:(id)arg1;	// IMP=0x001000000006cc03
- (_Bool)_shouldAnimateSnippetViewTransitionFrom:(id)arg1 to:(id)arg2;	// IMP=0x001000000006c83a
- (void)_clearSnippetDisplay;	// IMP=0x001000000006c826
- (void)_dismissWithReason:(unsigned long long)arg1;	// IMP=0x001000000006c713
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000006c6d2
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000006c62e
- (void)loadView;	// IMP=0x001000000006c5d8
- (void)siriRequestWillStartWithRequestOptions:(id)arg1;	// IMP=0x001000000006c442
- (void)_configureForRequestOptions:(id)arg1;	// IMP=0x001000000006bc01
- (void)configureForRequestOptions:(id)arg1;	// IMP=0x001000000006bbef
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x001000000006bb17
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x001000000006bafb
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000006bae3
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000006bac7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRStarkView *view; // @dynamic view;

@end

