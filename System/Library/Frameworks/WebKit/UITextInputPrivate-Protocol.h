//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/UITextInput-Protocol.h>
#import <WebKit/UITextInputTokenizer-Protocol.h>
#import <WebKit/UITextInputTraits_Private-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString, NSTextAlternatives, RTIInputSystemSourceSession, UIColor, UIDictationSerializableResults, UIFont, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UITextSuggestion, UIView, WebEvent, _UISupplementalItem;
@protocol UISelectionInteractionAssistant, UITextInputSuggestionDelegate;

@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private>
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (_Bool)hasSelection;
- (void)selectAll;
- (_Bool)hasContent;
- (struct _NSRange)selectionRange;
- (UITextInputTraits *)textInputTraits;

@optional
@property(readonly, nonatomic) _Bool supportsImagePaste;
@property(readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property(nonatomic) long long _textInputSource;
@property(readonly, nonatomic) id <UITextInputSuggestionDelegate> textInputSuggestionDelegate;
@property(nonatomic) long long selectionGranularity;
- (_Bool)explicitAlignment;
- (void)removeAnnotation:(NSString *)arg1 forRange:(UITextRange *)arg2;
- (void)replaceRange:(UITextRange *)arg1 withAnnotatedString:(NSAttributedString *)arg2 relativeReplacementRange:(struct _NSRange)arg3;
- (NSAttributedString *)annotatedSubstringForRange:(UITextRange *)arg1;
- (_Bool)_isInteractiveDespiteResponderStatus;
- (SEL)_sendCurrentLocationAction;
- (_Bool)_shouldSuppressSelectionCommands;
- (void)_didHideCorrections;
- (void)_willShowCorrections;
- (void)_insertAttributedTextWithoutClosingTyping:(NSAttributedString *)arg1;
- (UIFont *)fontForCaretSelection;
- (UIColor *)textColorForCaretSelection;
- (void)replaceRangeWithTextWithoutClosingTyping:(UITextRange *)arg1 replacementText:(NSString *)arg2;
- (_Bool)_shouldRepeatInsertText:(NSString *)arg1;
- (double)_delayUntilRepeatInsertText:(NSString *)arg1;
- (NSDictionary *)_autofillContext;
- (_Bool)isAutoFillMode;
- (void)acceptedAutoFillWord:(NSString *)arg1;
- (_Bool)_canSuggestSupplementalItemsForCurrentSelection;
- (void)_insertionPointExitedRangeWithSupplementalItems;
- (void)_insertionPointEnteredRange:(UITextRange *)arg1 string:(NSString *)arg2 supplementalItems:(NSArray *)arg3;
- (void)_cancelChooseSupplementalItemToInsert;
- (void)_chooseSupplementalItemToInsert:(NSArray *)arg1 replacementRange:(UITextRange *)arg2 completionHandler:(void (^)(_UISupplementalItem *))arg3;
- (_Bool)_insertsSpaceAfterAcceptingPredictionForSupplementalItem:(_UISupplementalItem *)arg1;
- (void)_insertSupplementalItem:(_UISupplementalItem *)arg1 forString:(NSString *)arg2 replacementRange:(UITextRange *)arg3;
- (void)insertTextSuggestion:(UITextSuggestion *)arg1;
- (void)removeEmojiAlternatives;
- (void)addTextAlternatives:(NSTextAlternatives *)arg1;
- (UITextRange *)rangeWithTextAlternatives:(id *)arg1 atPosition:(UITextPosition *)arg2;
- (NSArray *)metadataDictionariesForDictationResults;
- (void)insertDictationResult:(UIDictationSerializableResults *)arg1 withCorrectionIdentifier:(id)arg2;
- (void)streamingDictationDidEnd;
- (void)streamingDictationDidBegin;
- (struct CGRect)visibleRect;
- (struct CGRect)_selectionClipRect;
- (UIView *)selectionContainerView;
- (UIView *)automaticallySelectedOverlay;
- (void)setBottomBufferHeight:(double)arg1;
- (void)modifierFlagsDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (id <UISelectionInteractionAssistant>)selectionInteractionAssistant;
- (void)handleKeyWebEvent:(WebEvent *)arg1 withCompletionHandler:(void (^)(WebEvent *, _Bool))arg2;
- (void)handleKeyWebEvent:(WebEvent *)arg1;
- (_Bool)requiresKeyEvents;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)insertText:(NSString *)arg1 style:(long long)arg2 alternatives:(NSArray *)arg3;
- (void)replaceRange:(UITextRange *)arg1 withAttributedText:(NSAttributedString *)arg2;
- (NSAttributedString *)attributedTextInRange:(UITextRange *)arg1;
- (void)insertAttributedText:(NSAttributedString *)arg1;
@end

