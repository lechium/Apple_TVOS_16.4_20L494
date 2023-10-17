//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIResponder.h"

@class NSDictionary, NSString, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;
@protocol UITextInput, UITextInputDelegate, UITextInputTokenizer;

__attribute__((visibility("hidden")))
@interface UITextInteractionSelectableInputDelegate : UIResponder
{
    UIResponder<UITextInput> *_textInput;	// 8 = 0x8
}

+ (id)selectableInputDelegateWithTextInput:(id)arg1;	// IMP=0x0010000000bb986f
- (void).cxx_destruct;	// IMP=0x0000000000bbaae2
- (id)_moveToEndOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba9eb
- (id)_moveToEndOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba8f4
- (id)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba7fd
- (id)_moveToEndOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba706
- (id)_moveToStartOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba60f
- (id)_moveToStartOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba518
- (id)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba421
- (id)_moveToStartOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba32a
- (id)_moveRight:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba233
- (id)_moveLeft:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba13c
- (id)_moveDown:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba045
- (id)_moveUp:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bb9f4e
- (void)_unmarkText;	// IMP=0x0000000000bb9f15
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000bb9edc
- (void)_moveCurrentSelection:(int)arg1;	// IMP=0x0000000000bb9ea3
- (void)_deleteForwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000bb9e6a
- (void)_deleteBackwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000bb9e31
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000bb9e14
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x0000000000bb9df7
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000bb9dda
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x0000000000bb9dbd
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x0000000000bb9d7f
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x0000000000bb9d41
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x0000000000bb9d08
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000bb9ceb
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000bb9cce
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x0000000000bb9cb1
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000bb9c3d
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000bb9c20
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x0000000000bb9c03
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x0000000000bb9be6
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000bb9bc9
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;	// IMP=0x0000000000bb9b56
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000bb9b1d
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x0000000000bb9a37
- (id)textInRange:(id)arg1;	// IMP=0x0000000000bb9a1a
- (void)deleteBackward;	// IMP=0x0000000000bb99e1
- (void)insertText:(id)arg1;	// IMP=0x0000000000bb99a8
@property(readonly, nonatomic) _Bool hasText;
- (id)nextResponder;	// IMP=0x0000000000bb9976
- (void)updateSelectionRects;	// IMP=0x0000000000bb98c6
@property(readonly, nonatomic) UIResponder<UITextInput> *textInput;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;

@end
