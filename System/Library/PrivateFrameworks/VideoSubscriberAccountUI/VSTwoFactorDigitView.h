//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, NSDictionary, NSString, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;
@protocol UITextInputDelegate, UITextInputTokenizer, VSTwoFactorDigitViewDelegate;

__attribute__((visibility("hidden")))
@interface VSTwoFactorDigitView : UIControl
{
    _Bool _hasText;	// 8 = 0x8
    long long _keyboardType;	// 16 = 0x10
    long long _autocapitalizationType;	// 24 = 0x18
    long long _returnKeyType;	// 32 = 0x20
    NSString *_textContentType;	// 40 = 0x28
    id <UITextInputDelegate> _inputDelegate;	// 48 = 0x30
    id <UITextInputTokenizer> _tokenizer;	// 56 = 0x38
    NSDictionary *_markedTextStyle;	// 64 = 0x40
    id <VSTwoFactorDigitViewDelegate> _delegate;	// 72 = 0x48
    unsigned long long _digitCount;	// 80 = 0x50
    NSString *_codeText;	// 88 = 0x58
    NSArray *_digits;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000002e909
@property(retain, nonatomic) NSArray *digits; // @synthesize digits=_digits;
@property(retain, nonatomic) NSString *codeText; // @synthesize codeText=_codeText;
@property(readonly, nonatomic) unsigned long long digitCount; // @synthesize digitCount=_digitCount;
@property(nonatomic) __weak id <VSTwoFactorDigitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @synthesize markedTextStyle=_markedTextStyle;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer; // @synthesize tokenizer=_tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) _Bool hasText; // @synthesize hasText=_hasText;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000002e795
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x000000000002e78d
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x000000000002e785
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x000000000002e778
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x000000000002e75a
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x000000000002e73c
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000000002e72f
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000000002e727
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x000000000002e71f
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000002e717
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000002e70f
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x000000000002e707
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x000000000002e6ff
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000002e6f7
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (id)textInRange:(id)arg1;	// IMP=0x000000000002e6b5
@property(copy) UITextRange *selectedTextRange;
- (void)unmarkText;	// IMP=0x000000000002e6a7
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x000000000002e6a1
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x000000000002e69b
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x000000000002e695
- (void)setText:(id)arg1;	// IMP=0x000000000002e67d
- (void)insertText:(id)arg1;	// IMP=0x000000000002e390
- (void)deleteBackward;	// IMP=0x000000000002e278
- (void)setupDigitViews;	// IMP=0x000000000002dd18
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000002dcba
- (void)onTouchUpInside:(id)arg1;	// IMP=0x000000000002dca8
- (id)initWithDigitCount:(unsigned long long)arg1;	// IMP=0x000000000002d7d2

// Remaining properties
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *textInputView;

@end

