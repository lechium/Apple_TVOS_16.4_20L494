//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController, _UISheetPresentationController;
@protocol SRCompactEditableUtterancePresenterDelegate, SiriSharedUIUserUtteranceEditingDataManaging;

@interface SRCompactEditableUtterancePresenter : NSObject
{
    id <SiriSharedUIUserUtteranceEditingDataManaging> _userUtteranceEditingDataManager;	// 8 = 0x8
    UIViewController *_editableUtteranceViewController;	// 16 = 0x10
    id <SRCompactEditableUtterancePresenterDelegate> _delegate;	// 24 = 0x18
    _Bool _shouldStartNewRequest;	// 32 = 0x20
    _Bool _editableUtteranceViewControllerIsPresented;	// 33 = 0x21
    _Bool _previousShouldScaleDownBehindDescendantSheetsValue;	// 34 = 0x22
    _UISheetPresentationController *_sheetPresentationController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000066c01
- (void)_editableUtteranceViewControllerDidDismiss:(id)arg1;	// IMP=0x0010000000066b95
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0010000000066b7f
- (void)presentationControllerWillDismiss:(id)arg1;	// IMP=0x0010000000066b16
- (void)_editableUtteranceViewControllerWillBePresentedWithSheetPresentationController:(id)arg1;	// IMP=0x0010000000066a7e
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 animateAlongsideTransition:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006687d
- (void)editableUtteranceViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x0010000000066821
- (void)editableUtteranceViewController:(id)arg1 didFinishEditingWithText:(id)arg2;	// IMP=0x001000000006675a
- (void)editableUtteranceViewController:(id)arg1 alternativeSelectedAtIndex:(long long)arg2;	// IMP=0x0010000000066663
- (void)willBeginEditingFromUtteranceViewController:(id)arg1;	// IMP=0x001000000006662d
- (void)editableUtteranceViewController:(id)arg1 requestsKeyboardWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000665d1
- (void)didResignFirstResponderFromUtteranceViewController:(id)arg1;	// IMP=0x001000000006659b
- (long long)numberOfAlternativeUtterances;	// IMP=0x0010000000066585
- (id)attributedStringAtIndex:(long long)arg1;	// IMP=0x001000000006656f
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000066557
- (void)dismissEditableUtteranceViewControllerAndShouldStartNewRequest:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066362
- (void)presentUtteranceViewControllerFromViewController:(id)arg1 animateAlongsideTransition:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000066267
- (id)initWithUserEditingDataManager:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000006616f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

