//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIInputViewController, UIKBRenderConfig, UIKeyboard, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject
{
    _Bool _isSplit;	// 8 = 0x8
    double _splitHeightDelta;	// 16 = 0x10
    UIResponder *_restorableResponder;	// 24 = 0x18
    UIKBRenderConfig *_restorableRenderConfig;	// 32 = 0x20
    UIResponder *_accessoryViewNextResponder;	// 40 = 0x28
    _Bool _restoreUsingBecomeFirstResponder;	// 48 = 0x30
    UIView *_inputView;	// 56 = 0x38
    UIView *_inputAccessoryView;	// 64 = 0x40
    UIView *_inputAssistantView;	// 72 = 0x48
    UIInputViewController *_inputViewController;	// 80 = 0x50
    UIInputViewController *_accessoryViewController;	// 88 = 0x58
    UIInputViewController *_assistantViewController;	// 96 = 0x60
    _Bool _isNullInputView;	// 104 = 0x68
    _Bool _isCustomInputView;	// 105 = 0x69
    _Bool _isRemoteKeyboard;	// 106 = 0x6a
    UIView *_hostedCustomInputView;	// 112 = 0x70
    struct CGRect _inputAssistantViewBounds;	// 120 = 0x78
}

+ (id)emptyInputSet;	// IMP=0x0060000000064143
+ (id)inputSetWithOriginalInputSet:(id)arg1 duplicateInputView:(_Bool)arg2 duplicateInputAccessoryView:(_Bool)arg3 duplicateInputAssistantView:(_Bool)arg4;	// IMP=0x0060000000063fc9
+ (id)inputSetWithPlaceholderAndCustomInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;	// IMP=0x0060000000063d61
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1 assistantView:(id)arg2;	// IMP=0x0060000000063d47
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;	// IMP=0x0060000000063d33
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;	// IMP=0x0060000000063d1f
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1 assistantView:(id)arg2;	// IMP=0x0060000000063c0a
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;	// IMP=0x0060000000063bf5
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;	// IMP=0x0060000000063b5d
- (void).cxx_destruct;	// IMP=0x000000000006790a
@property(nonatomic) _Bool isRemoteKeyboard; // @synthesize isRemoteKeyboard=_isRemoteKeyboard;
@property(nonatomic) _Bool isCustomInputView; // @synthesize isCustomInputView=_isCustomInputView;
@property(readonly, nonatomic) struct CGRect inputAssistantViewBounds; // @synthesize inputAssistantViewBounds=_inputAssistantViewBounds;
@property(retain, nonatomic) UIView *hostedCustomInputView; // @synthesize hostedCustomInputView=_hostedCustomInputView;
@property(readonly, nonatomic) _Bool isNullInputView; // @synthesize isNullInputView=_isNullInputView;
@property(nonatomic) __weak UIResponder *accessoryViewNextResponder; // @synthesize accessoryViewNextResponder=_accessoryViewNextResponder;
@property(retain, nonatomic) UIKBRenderConfig *restorableRenderConfig; // @synthesize restorableRenderConfig=_restorableRenderConfig;
@property(nonatomic) __weak UIResponder *restorableResponder; // @synthesize restorableResponder=_restorableResponder;
@property(nonatomic) double splitHeightDelta; // @synthesize splitHeightDelta=_splitHeightDelta;
@property(retain, nonatomic) UIInputViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property(retain, nonatomic) UIInputViewController *assistantViewController; // @synthesize assistantViewController=_assistantViewController;
@property(retain, nonatomic) UIInputViewController *inputViewController; // @synthesize inputViewController=_inputViewController;
@property(retain, nonatomic) UIView *inputAssistantView; // @synthesize inputAssistantView=_inputAssistantView;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void)_setSplitProgress:(double)arg1;	// IMP=0x00000000000676c3
- (void)_endSplitTransitionIfNeeded;	// IMP=0x00000000000675e2
- (void)_beginSplitTransitionIfNeeded;	// IMP=0x000000000006746a
- (_Bool)_accessorySuppressesShadow;	// IMP=0x000000000006739b
- (id)_splittableInputAccessoryView;	// IMP=0x0000000000067357
- (id)_themableInputAccessoryView;	// IMP=0x0000000000067314
- (_Bool)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;	// IMP=0x00000000000670eb
- (_Bool)hierarchyContainsView:(id)arg1;	// IMP=0x0000000000066f19
- (void)refreshPresentation;	// IMP=0x000000000006697b
- (struct CGRect)_rightInputViewSetFrame;	// IMP=0x000000000006664a
- (struct CGRect)_leftInputViewSetFrame;	// IMP=0x0000000000066372
- (double)inputViewSplitHeight;	// IMP=0x0000000000066295
@property(readonly, nonatomic) struct CGRect inputAccessoryViewBounds;
@property(readonly, nonatomic) struct CGRect inputViewBounds;
@property(readonly, nonatomic) _Bool _inputViewIsSplit;
@property(readonly, nonatomic) _Bool isSplit; // @synthesize isSplit=_isSplit;
@property(readonly, nonatomic) _Bool supportsSplit;
@property(readonly, nonatomic) _Bool isLocalMinimumHeightInputView;
@property(readonly, nonatomic) _Bool isInputAccessoryViewPlaceholder;
@property(readonly, nonatomic) _Bool isInputAssistantViewPlaceholder;
@property(readonly, nonatomic) _Bool isInputViewPlaceholder;
@property(readonly, nonatomic) _Bool inputViewKeyboardCanSplit;
- (_Bool)_inputViewSetSupportsSplit;	// IMP=0x0000000000065e96
- (_Bool)_actLikeInputAccessoryViewSupportsSplit;	// IMP=0x0000000000065e5f
- (_Bool)_inputAccessoryViewSupportsSplit;	// IMP=0x0000000000065dd1
- (_Bool)_inputViewSupportsSplit;	// IMP=0x0000000000065d46
- (_Bool)_isFullscreen;	// IMP=0x0000000000065bb3
- (_Bool)__isCKAccessoryView;	// IMP=0x0000000000065b27
- (_Bool)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2;	// IMP=0x0000000000065a35
- (long long)keyboardOrientation:(id)arg1;	// IMP=0x0000000000065990
- (id)description;	// IMP=0x000000000006569e
- (_Bool)isStrictSupersetOfViewSet:(id)arg1;	// IMP=0x000000000006553f
- (_Bool)containsResponder:(id)arg1;	// IMP=0x0000000000065496
@property(readonly, nonatomic) _Bool visible;
- (_Bool)_inputViewIsVisible;	// IMP=0x00000000000653c2
@property(readonly, nonatomic) _Bool usesKeyClicks;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000064ff0
- (_Bool)containsView:(id)arg1;	// IMP=0x0000000000064f35
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) _Bool hasNonPlaceholderViews;
@property(nonatomic) _Bool restoreUsingBecomeFirstResponder;
- (void)_forceRestoreUsingBecomeFirstResponder:(_Bool)arg1;	// IMP=0x0000000000064d70
@property(readonly, nonatomic) UIView *splitExemptSubview;
@property(readonly, nonatomic) UIView *layeringView;
- (void)_setRenderConfig:(id)arg1;	// IMP=0x0000000000064b9c
- (id)normalizePlaceholders;	// IMP=0x00000000000647b1
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1;	// IMP=0x000000000006466f
- (id)inputSetWithInputAccessoryViewOnly;	// IMP=0x000000000006460a
- (void)setKeyboardAssistantBar:(id)arg1;	// IMP=0x00000000000644fa
- (void)inheritNullState:(id)arg1;	// IMP=0x0000000000063b3a
- (void)dealloc;	// IMP=0x0000000000063ad6
- (id)initWithInputView:(id)arg1 customInputView:(id)arg2 accessoryView:(id)arg3 assistantView:(id)arg4 isKeyboard:(_Bool)arg5;	// IMP=0x00000000000638e7
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(_Bool)arg4;	// IMP=0x00000000000638bd
@property(readonly, nonatomic) UIKeyboard *keyboard;
- (_Bool)_isKeyboard;	// IMP=0x000000000006383a
- (_Bool)canAnimateToInputViewSet:(id)arg1;	// IMP=0x00000000000636f0

@end

