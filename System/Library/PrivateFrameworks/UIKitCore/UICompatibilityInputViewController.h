//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIInputViewController.h"

@class NSArray, NSString, UIKeyboard, UIKeyboardInputMode, UILayoutGuide, UIViewController;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UICompatibilityInputViewController : UIInputViewController
{
    UIKeyboardInputMode *_inputMode;	// 464 = 0x1d0
    UIKeyboard *_deferredSystemView;	// 472 = 0x1d8
    UIKeyboardInputMode *_incomingExtensionInputMode;	// 480 = 0x1e0
    double _incomingExtensionInputModeTime;	// 488 = 0x1e8
    double _lastSuspendedTime;	// 496 = 0x1f0
    double _currentResumeTime;	// 504 = 0x1f8
    _Bool _shouldRegenerateSizingConstraints;	// 512 = 0x200
    _Bool _shouldSuppressRemoteInputController;	// 513 = 0x201
    _Bool _tearingDownInputController;	// 514 = 0x202
    double _resetInputModeTime;	// 520 = 0x208
    unsigned long long _latestDelayTime;	// 528 = 0x210
    UILayoutGuide *_focusSafeAreaLayoutGuide;	// 536 = 0x218
    UIViewController *_inputController;	// 544 = 0x220
    NSArray *_internalEdgeMatchConstraints;	// 552 = 0x228
    id <UITextCursorAssertion> _blinkAssertion;	// 560 = 0x230
}

+ (id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2;	// IMP=0x001000000087b0db
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;	// IMP=0x001000000087b0c2
+ (_Bool)_requiresProxyInterface;	// IMP=0x001000000087a776
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;	// IMP=0x001000000087a285
+ (id)inputViewControllerWithView:(id)arg1;	// IMP=0x001000000087a03e
- (void).cxx_destruct;	// IMP=0x000000000087ec22
@property(retain, nonatomic) id <UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property(retain, nonatomic) NSArray *internalEdgeMatchConstraints; // @synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints;
@property(retain, nonatomic) UIViewController *inputController; // @synthesize inputController=_inputController;
@property(readonly, nonatomic) UILayoutGuide *focusSafeAreaLayoutGuide;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;	// IMP=0x000000000087e6c9
- (void)viewDidLayoutSubviews;	// IMP=0x000000000087e61f
- (void)didFinishTranslation;	// IMP=0x000000000087e4ed
- (void)finishSplitTransition:(_Bool)arg1;	// IMP=0x000000000087e33e
- (void)willBeginTranslation;	// IMP=0x000000000087e044
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x000000000087dee3
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000087de2c
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000087dc4d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000087dba2
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000087daf3
- (id)_keyboardForThisViewController;	// IMP=0x000000000087da76
- (id)_keyboard;	// IMP=0x000000000087d8ca
- (id)childCompatibilityController;	// IMP=0x000000000087d850
- (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;	// IMP=0x000000000087d78a
- (id)preferredFocusedView;	// IMP=0x000000000087d73a
- (void)setInputMode:(id)arg1;	// IMP=0x000000000087c35d
- (void)setTearingDownInputController;	// IMP=0x000000000087c34c
- (void)validateInputModeIsDisplayed;	// IMP=0x000000000087c304
- (void)assertCurrentInputModeIfNecessary;	// IMP=0x000000000087c232
- (void)resetInputMode;	// IMP=0x000000000087c145
- (void)resetInputModeInMainThread;	// IMP=0x000000000087bdf0
- (id)_systemViewControllerForInputMode:(id)arg1;	// IMP=0x000000000087bbe1
- (void)shouldUpdateInputMode:(id)arg1;	// IMP=0x000000000087ba39
- (void)tearDownInputController;	// IMP=0x000000000087b875
- (void)removeSnapshotView;	// IMP=0x000000000087b71b
- (void)addSnapshotViewForInputMode:(id)arg1;	// IMP=0x000000000087b44a
- (void)takeSnapshotView;	// IMP=0x000000000087b17b
- (void)rebuildChildConstraints;	// IMP=0x000000000087abfe
- (void)generateCompatibleSizeConstraintsIfNecessary;	// IMP=0x000000000087aa7f
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x000000000087aa07
- (void)willResume:(id)arg1;	// IMP=0x000000000087a91b
- (void)isHosted:(id)arg1;	// IMP=0x000000000087a8fa
- (void)didSuspend:(id)arg1;	// IMP=0x000000000087a7eb
- (void)killIncomingExtension;	// IMP=0x000000000087a77e
- (id)_compatView;	// IMP=0x000000000087a6fc
- (id)_compatibilityController;	// IMP=0x000000000087a68f
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x000000000087a687
- (_Bool)shouldAutomaticallyForwardRotationMethods;	// IMP=0x000000000087a67f
- (void)dealloc;	// IMP=0x000000000087a5d0
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000087a5c8
- (void)loadView;	// IMP=0x000000000087a524
- (id)_initAsDeferredController;	// IMP=0x000000000087a39f
- (void)setDeferredSystemView:(id)arg1;	// IMP=0x000000000087a346

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

