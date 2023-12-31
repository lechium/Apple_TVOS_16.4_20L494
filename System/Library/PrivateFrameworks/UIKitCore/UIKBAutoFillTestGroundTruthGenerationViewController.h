//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSLayoutConstraint, NSString, UIBarButtonItem, UIKBAutoFillTestExpectedResult, UIKBAutoFillTestTaggerView, UIKBAutoFillTestViewController, UIScrollView, UIView;
@protocol UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestGroundTruthGenerationViewController : UIViewController
{
    UIKBAutoFillTestViewController *_testViewController;	// 8 = 0x8
    UIKBAutoFillTestExpectedResult *_expectedResult;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    UIKBAutoFillTestTaggerView *_taggerView;	// 32 = 0x20
    NSLayoutConstraint *_scrollViewBottomConstraint;	// 40 = 0x28
    UIView *_highlightView;	// 48 = 0x30
    UIView *_highlightBox;	// 56 = 0x38
    UIBarButtonItem *_doneBarButtonItem;	// 64 = 0x40
    id <UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000080f6c0
@property(readonly, nonatomic) UIKBAutoFillTestViewController *testViewController; // @synthesize testViewController=_testViewController;
@property(nonatomic) __weak id <UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)taggerView:(id)arg1 didTagTextFieldRequest:(id)arg2 withSelectedType:(long long)arg3;	// IMP=0x000000000080f619
- (void)taggerView:(id)arg1 didTagFormRequest:(id)arg2 withSelectedType:(long long)arg3;	// IMP=0x000000000080f5f9
- (long long)taggerView:(id)arg1 selectedTypeForTextFieldRequest:(id)arg2;	// IMP=0x000000000080f58e
- (long long)taggerView:(id)arg1 selectedTypeForFormRequest:(id)arg2;	// IMP=0x000000000080f571
- (void)taggerView:(id)arg1 willTagRequest:(id)arg2;	// IMP=0x000000000080f515
- (void)taggerViewDidFinish:(id)arg1;	// IMP=0x000000000080f4b3
- (void)_removeTaggerHighlightView;	// IMP=0x000000000080f3e3
- (void)_moveTaggerHighlightViewOverView:(id)arg1;	// IMP=0x000000000080ee87
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000080e889
- (void)_cancelBarButtonItemAction:(id)arg1;	// IMP=0x000000000080e830
- (void)viewDidLoad;	// IMP=0x000000000080dfdc
- (void)_enumerateSubviewsOfRootView:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000080de52
- (id)initWithAutoFillTestViewController:(id)arg1;	// IMP=0x000000000080ddb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

