//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSAttributedString, NSIndexSet, NSNumberFormatter, NSString, UIColor, UIFont, UIImage, UIInputContextHistory, UITextInputPasswordRules, UITextRange, _UIDatePickerCalendarTimeFormat, _UIDatePickerCalendarTimeLabelStateMachineContext, _UIDatePickerCalendarTimeValueStore, _UISupplementalLexicon;
@protocol _UIDatePickerCalendarTimeLabelDelegate;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeLabel : UIView
{
    UIView *_inputView;	// 8 = 0x8
    struct CGSize _lastSize;	// 16 = 0x10
    _Bool _roundsToMinuteInterval;	// 32 = 0x20
    _Bool _allowsTextInput;	// 33 = 0x21
    _UIDatePickerCalendarTimeFormat *_timeFormat;	// 40 = 0x28
    id <_UIDatePickerCalendarTimeLabelDelegate> _delegate;	// 48 = 0x30
    _UIDatePickerCalendarTimeValueStore *_inputValue;	// 56 = 0x38
    unsigned long long _insertedDigitCount;	// 64 = 0x40
    _UIDatePickerCalendarTimeLabelStateMachineContext *_stateContext;	// 72 = 0x48
    long long _inputScope;	// 80 = 0x50
    NSNumberFormatter *_inputFormatter;	// 88 = 0x58
    struct CGRect _timeOfDayRect;	// 96 = 0x60
}

+ (_Bool)supportsScribbleInteraction;	// IMP=0x001000000007b006
- (void).cxx_destruct;	// IMP=0x000000000007b0fd
@property(readonly, nonatomic) struct CGRect timeOfDayRect; // @synthesize timeOfDayRect=_timeOfDayRect;
@property(retain, nonatomic) NSNumberFormatter *inputFormatter; // @synthesize inputFormatter=_inputFormatter;
@property(readonly, nonatomic) long long inputScope; // @synthesize inputScope=_inputScope;
@property(readonly, nonatomic) _UIDatePickerCalendarTimeLabelStateMachineContext *stateContext; // @synthesize stateContext=_stateContext;
@property(nonatomic) unsigned long long insertedDigitCount; // @synthesize insertedDigitCount=_insertedDigitCount;
@property(nonatomic) _Bool allowsTextInput; // @synthesize allowsTextInput=_allowsTextInput;
@property(readonly, nonatomic) _UIDatePickerCalendarTimeValueStore *inputValue; // @synthesize inputValue=_inputValue;
@property(nonatomic) __weak id <_UIDatePickerCalendarTimeLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool roundsToMinuteInterval; // @synthesize roundsToMinuteInterval=_roundsToMinuteInterval;
@property(retain, nonatomic) _UIDatePickerCalendarTimeFormat *timeFormat; // @synthesize timeFormat=_timeFormat;
@property(readonly, nonatomic) _Bool scribbleInteractionIsActive;
@property(nonatomic) _Bool isSingleLineDocument;
- (void)takeTraitsFrom:(id)arg1;	// IMP=0x000000000007aff8
- (void)deleteBackward;	// IMP=0x000000000007aea1
- (void)insertText:(id)arg1;	// IMP=0x000000000007ac29
@property(readonly, nonatomic) _Bool hasText;
- (id)inputView;	// IMP=0x000000000007ab62
- (_Bool)_suppressSoftwareKeyboard;	// IMP=0x000000000007aae7
@property(nonatomic) long long keyboardType;
- (void)didReceiveLeftArrowKey:(id)arg1;	// IMP=0x000000000007a968
- (void)didReceiveRightArrowKey:(id)arg1;	// IMP=0x000000000007a84c
- (void)didReceiveDownArrowKey:(id)arg1;	// IMP=0x000000000007a7d7
- (void)didReceiveUpArrowKey:(id)arg1;	// IMP=0x000000000007a762
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000007a6c0
- (id)keyCommands;	// IMP=0x000000000007a565
- (_Bool)_wantsPriorityOverFocusUpdates;	// IMP=0x000000000007a55d
- (_Bool)displaysTimeOfDayLabel;	// IMP=0x000000000007a555
- (void)_resetTextInput;	// IMP=0x000000000007a541
- (void)pushCurrentStateIntoUIAndNotify;	// IMP=0x000000000007a4c3
- (void)pushCurrentStateIntoUI;	// IMP=0x000000000007a4bd
@property(readonly, nonatomic) NSString *timeOfDayText;
@property(copy, nonatomic) NSString *minuteText;
@property(copy, nonatomic) NSString *hourText;
- (_Bool)_treatMinutesAsHoursForState:(unsigned long long)arg1;	// IMP=0x0000000000079d82
- (_Bool)_digits:(unsigned long long *)arg1 fromText:(id)arg2 count:(long long *)arg3;	// IMP=0x0000000000079b41
- (void)endEditingWheels;	// IMP=0x0000000000079b2a
- (void)wheelChanged;	// IMP=0x0000000000079b13
- (void)beginEditingWheels;	// IMP=0x0000000000079afc
- (void)_roundInputToClosestIntervalIfNeeded;	// IMP=0x0000000000079a47
- (void)stateMachineUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x00000000000796df
- (void)_stateMachineSendEvent:(unsigned long long)arg1;	// IMP=0x000000000007965b
- (_Bool)processTapOutside;	// IMP=0x00000000000795c6
- (void)setInputScope:(long long)arg1;	// IMP=0x0000000000079416
@property(readonly, nonatomic) long long decrementBehaviour;
@property(nonatomic) long long minuteInterval;
@property(readonly, nonatomic) NSAttributedString *attributedText;
- (id)attributedTextWithRanges:(CDStruct_a33ff3ce *)arg1;	// IMP=0x00000000000789ec
- (void)applyTextAttributesForState:(unsigned long long)arg1 inputScope:(long long)arg2 updater:(CDUnknownBlockType)arg3;	// IMP=0x00000000000787ef
@property(readonly, nonatomic) NSString *text;
@property(copy, nonatomic) UIFont *font;
- (void)didTapInputLabel:(id)arg1;	// IMP=0x0000000000078543
- (_Bool)_pointIsInsideHourSide:(struct CGPoint)arg1;	// IMP=0x00000000000783dc
- (void)tintColorDidChange;	// IMP=0x000000000007839b
@property(readonly, nonatomic) struct CGRect minuteRect;
@property(readonly, nonatomic) struct CGRect hourRect;
- (_Bool)resignFirstResponder;	// IMP=0x000000000007828b
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000078190
- (void)_uiTest_resignFirstResponder;	// IMP=0x0000000000078179
- (void)_uiTest_becomeFirstResponder;	// IMP=0x0000000000078162
- (void)layoutSubviews;	// IMP=0x00000000000780b6
- (id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2;	// IMP=0x0000000000077e7e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000077d9a

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(nonatomic) _Bool acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsInitialEmojiKeyboard;
@property(nonatomic) _Bool acceptsPayloads;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property(nonatomic) _Bool disableHandwritingKeyboard;
@property(nonatomic) _Bool disableInputBars;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property(nonatomic) _Bool forceDefaultDictationInfo;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) _Bool forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool forceFloatingKeyboard;
@property(nonatomic) _Bool forceSpellingDictation;
@property(nonatomic) _Bool hasDefaultContents;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidePrediction;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) _Bool preferOnlineDictation;
@property(nonatomic) long long preferredKeyboardStyle;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIColor *selectionBorderColor;
@property(nonatomic) double selectionBorderWidth;
@property(nonatomic) double selectionCornerRadius;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) struct UIEdgeInsets selectionEdgeInsets;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) _Bool showDictationButton;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property(retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType;
@property(nonatomic) int textLoupeVisibility;
@property(readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property(nonatomic) long long textScriptType;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) _Bool useAutomaticEndpointing;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;

@end

