//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSNumber, NSString, SRSuggestionsViewController;
@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SiriEyesFreePresentation : UIViewController
{
    _Bool _hasReportedPresentation;	// 8 = 0x8
    unsigned long long _numberOfSpeechRequestsWaitingToFinishSynthesis;	// 16 = 0x10
    NSNumber *_delayDismissalMs;	// 24 = 0x18
    id <SiriUIPresentationDataSource> _dataSource;	// 32 = 0x20
    id <SiriUIPresentationDelegate> _delegate;	// 40 = 0x28
    SRSuggestionsViewController *_siriUnavailableViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000075518
@property(readonly, nonatomic, getter=_siriUnavailableViewController) SRSuggestionsViewController *siriUnavailableViewController; // @synthesize siriUnavailableViewController=_siriUnavailableViewController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_dismissSiriPresentationFromTimeout;	// IMP=0x001000000007545c
- (void)delayDismissalAfterIdleFires:(id)arg1;	// IMP=0x001000000007535e
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1;	// IMP=0x00100000000750f6
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x00100000000750ee
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000750e4
- (void)suggestionsViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000750de
- (id)siriEnabledAppListForSuggestionsController:(id)arg1;	// IMP=0x00100000000750d6
- (CDStruct_a82615c4)keyboardInfoForSuggestionsController:(id)arg1;	// IMP=0x00100000000750a6
- (double)contentWidthForSuggestionsViewController:(id)arg1;	// IMP=0x001000000007504f
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x0010000000074ff8
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x0010000000074f8e
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x0010000000074f88
- (void)viewDidLoad;	// IMP=0x0010000000074d67
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x0010000000074d5f
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x0010000000074d57
- (_Bool)supportsTextInput;	// IMP=0x0010000000074d4f
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000074d47
- (void)_didPresentItemsAtIndexPaths:(id)arg1;	// IMP=0x0010000000074a12
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x00100000000749fd
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x00100000000749e8
- (id)viewController;	// IMP=0x00100000000749df
- (void)_synthesizeSpeechWithText:(id)arg1;	// IMP=0x00100000000748c4
- (long long)options;	// IMP=0x00100000000748b9
- (void)configureForRequestOptions:(id)arg1;	// IMP=0x0010000000074752
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x0010000000074661
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0010000000074645
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000007462d
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000074611

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

