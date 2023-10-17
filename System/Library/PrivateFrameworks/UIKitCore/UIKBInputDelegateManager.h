//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIResponder, UITextInputPasswordRules, UITextInputTraits, UITextInteractionAssistant, UITextInteractionSelectableInputDelegate;
@protocol UIKeyInput, UIKeyboardImplStateProtocol, UIKeyboardInput;

__attribute__((visibility("hidden")))
@interface UIKBInputDelegateManager : NSObject
{
    unsigned long long m_delegateConformanceType;	// 8 = 0x8
    unsigned long long m_originalDelegateConformanceType;	// 16 = 0x10
    _Bool _forwardingInputDelegateConformsToWKInteraction;	// 24 = 0x18
    _Bool m_firstResponderAdoptsTextInput;	// 25 = 0x19
    _Bool _shouldRespectForwardingInputDelegate;	// 26 = 0x1a
    _Bool _insideKeyInputDelegateCall;	// 27 = 0x1b
    _Bool _analyticsSkipDidKeyPress;	// 28 = 0x1c
    id <UIKeyboardImplStateProtocol> _keyboardStateDelegate;	// 32 = 0x20
    UIResponder<UIKeyInput> *_keyInputDelegate;	// 40 = 0x28
    UITextInteractionSelectableInputDelegate *_selectableDelegate;	// 48 = 0x30
    UIResponder<UIKeyInput> *_forwardingInputDelegate;	// 56 = 0x38
    unsigned long long _analyticsCandidateSource;	// 64 = 0x40
    NSString *_analyticsRemovedText;	// 72 = 0x48
    NSString *_analyticsInsertedText;	// 80 = 0x50
    NSString *_analyticsAppendedAfterInsertionText;	// 88 = 0x58
}

+ (struct _NSRange)rangeForTextRange:(id)arg1 document:(id)arg2;	// IMP=0x0010000000688843
- (void).cxx_destruct;	// IMP=0x000000000068994a
@property(nonatomic) _Bool analyticsSkipDidKeyPress; // @synthesize analyticsSkipDidKeyPress=_analyticsSkipDidKeyPress;
@property(copy, nonatomic) NSString *analyticsAppendedAfterInsertionText; // @synthesize analyticsAppendedAfterInsertionText=_analyticsAppendedAfterInsertionText;
@property(copy, nonatomic) NSString *analyticsInsertedText; // @synthesize analyticsInsertedText=_analyticsInsertedText;
@property(copy, nonatomic) NSString *analyticsRemovedText; // @synthesize analyticsRemovedText=_analyticsRemovedText;
@property(nonatomic) unsigned long long analyticsCandidateSource; // @synthesize analyticsCandidateSource=_analyticsCandidateSource;
@property(nonatomic) _Bool insideKeyInputDelegateCall; // @synthesize insideKeyInputDelegateCall=_insideKeyInputDelegateCall;
@property(nonatomic) _Bool shouldRespectForwardingInputDelegate; // @synthesize shouldRespectForwardingInputDelegate=_shouldRespectForwardingInputDelegate;
@property(nonatomic) __weak UIResponder<UIKeyInput> *forwardingInputDelegate; // @synthesize forwardingInputDelegate=_forwardingInputDelegate;
@property(retain, nonatomic) UITextInteractionSelectableInputDelegate *selectableDelegate; // @synthesize selectableDelegate=_selectableDelegate;
@property(retain, nonatomic) UIResponder<UIKeyInput> *keyInputDelegate; // @synthesize keyInputDelegate=_keyInputDelegate;
@property(nonatomic) __weak id <UIKeyboardImplStateProtocol> keyboardStateDelegate; // @synthesize keyboardStateDelegate=_keyboardStateDelegate;
- (_Bool)selectionIsWord;	// IMP=0x00000000006895e5
- (void)moveSelectionToEndOfWord;	// IMP=0x0000000000689332
- (void)collapseSelectionAndAdjustByOffset:(long long)arg1;	// IMP=0x00000000006890b1
- (_Bool)selectionIsEndOfWord;	// IMP=0x0000000000688ece
- (void)changedSelection;	// IMP=0x0000000000688de0
- (_Bool)shouldDeleteForward;	// IMP=0x000000000068895e
- (_Bool)callShouldDeleteBackwardWithCount:(unsigned long long)arg1;	// IMP=0x00000000006883e0
- (_Bool)callShouldReplaceExtendedRange:(long long)arg1 withText:(id)arg2 includeMarkedText:(_Bool)arg3;	// IMP=0x0000000000687e84
- (void)handleClearWithInsertBeforeAdvance:(id)arg1;	// IMP=0x0000000000687cb5
- (void)unmarkText:(id)arg1;	// IMP=0x0000000000687ae9
- (void)insertTextAfterSelection:(id)arg1;	// IMP=0x00000000006878e2
- (void)insertText:(id)arg1 updateInputSource:(_Bool)arg2;	// IMP=0x0000000000687421
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;	// IMP=0x000000000068738a
- (_Bool)shouldSuppressUpdateCandidateView;	// IMP=0x00000000006872fb
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000687201
- (void)_setSelectionToPosition:(id)arg1;	// IMP=0x000000000068718f
- (id)_textRangeFromNSRange:(struct _NSRange)arg1;	// IMP=0x000000000068712b
- (unsigned int)_characterBeforeCaretSelection;	// IMP=0x00000000006870e7
- (id)__content;	// IMP=0x0000000000687097
- (_Bool)_deleteForwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000686f15
- (void)_deleteBackwardAndNotify:(_Bool)arg1 reinsertText:(_Bool)arg2;	// IMP=0x0000000000686883
- (void)_moveCurrentSelection:(int)arg1;	// IMP=0x00000000006867d3
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000686756
- (_Bool)_hasMarkedText;	// IMP=0x0000000000686634
- (void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000686506
- (void)handleKeyWebEvent:(id)arg1;	// IMP=0x000000000068645f
- (_Bool)requiresKeyEvents;	// IMP=0x00000000006863d0
- (void)insertDictationResult:(id)arg1;	// IMP=0x00000000006862ed
- (void)insertAttributedText:(id)arg1;	// IMP=0x0000000000685f83
- (void)insertTextSuggestion:(id)arg1;	// IMP=0x0000000000685cfa
- (_Bool)insertSupplementalItem:(id)arg1 candidate:(id)arg2 replacementRange:(id)arg3;	// IMP=0x0000000000685a5f
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x00000000006859e7
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000000068596a
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x00000000006858df
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000685848
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x00000000006857bf
- (id)endOfDocument;	// IMP=0x000000000068576f
- (id)beginningOfDocument;	// IMP=0x000000000068571f
- (id)attributedMarkedText;	// IMP=0x000000000068541b
- (id)markedText;	// IMP=0x00000000006852bb
- (void)unmarkText;	// IMP=0x000000000068517b
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x00000000006850fe
- (void)setSelectedTextRange:(id)arg1;	// IMP=0x000000000068508c
- (id)selectedTextRange;	// IMP=0x000000000068503c
- (id)markedTextRange;	// IMP=0x0000000000684fec
- (void)replaceRange:(id)arg1 oldText:(id)arg2 withText:(id)arg3 forReplaceAction:(int)arg4;	// IMP=0x00000000006846ce
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x0000000000684648
- (id)textInRange:(id)arg1;	// IMP=0x00000000006845c5
- (void)insertText:(id)arg1 alternatives:(id)arg2 style:(long long)arg3;	// IMP=0x000000000068442f
- (void)deleteBackward;	// IMP=0x0000000000684416
- (void)insertText:(id)arg1;	// IMP=0x000000000068438e
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic) _Bool continuousSpellCheckingEnabled;
@property(readonly, nonatomic) UITextInputTraits *textInputTraits;
- (void)updateSelectableInputDelegateIfNecessary;	// IMP=0x0000000000683f7c
- (void)_firstResponderDidChange:(id)arg1;	// IMP=0x0000000000683e85
- (id)inputSystemSourceSession;	// IMP=0x0000000000683df2
@property(readonly, nonatomic) UITextInteractionAssistant *textInteractionAssistant;
@property(readonly, nonatomic) id <UIKeyboardInput> legacyInputDelegate;
- (id)delegateAsResponder;	// IMP=0x0000000000683a4a
- (id)privateKeyInputDelegate;	// IMP=0x0000000000683a1d
- (id)asynchronousInputDelegate;	// IMP=0x00000000006839ac
- (id)textInputDelegate;	// IMP=0x000000000068397f
- (id)privateInputDelegate;	// IMP=0x0000000000683952
- (id)delegateRespectingForwardingDelegate:(_Bool)arg1;	// IMP=0x00000000006838f4
- (_Bool)delegateAdoptsWebTextInputPrivate;	// IMP=0x00000000006838e6
- (void)storeDelegateConformance;	// IMP=0x000000000068362f
- (void)updateDelegateConformanceForRemoteTraits;	// IMP=0x000000000068361d
@property(readonly, nonatomic) unsigned long long delegateConformanceType;
- (void)updateRespectForwardingInputDelegateFlagInDestination;	// IMP=0x000000000068350a
- (void)clearForwardingInputDelegateAndResign:(_Bool)arg1;	// IMP=0x0000000000683476
- (void)clearDelegate;	// IMP=0x00000000006832e7
- (void)setDelegate:(id)arg1;	// IMP=0x00000000006831aa
- (void)setupResponderChangeListeners;	// IMP=0x000000000068310f
- (id)init;	// IMP=0x00000000006830e0

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

