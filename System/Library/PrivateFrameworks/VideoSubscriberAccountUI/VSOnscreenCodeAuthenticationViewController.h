//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UITapGestureRecognizer, VSOnscreenCodeViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeAuthenticationViewController : UIViewController
{
    _Bool _cancellationAllowed;	// 8 = 0x8
    id <VSAuthenticationViewControllerDelegate> _delegate;	// 16 = 0x10
    VSOnscreenCodeViewModel *_viewModel;	// 24 = 0x18
    UITapGestureRecognizer *_menuRecognizer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000537b1
@property(nonatomic) __weak UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) VSOnscreenCodeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000536b5
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000005367c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000053643
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000005360a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000535d1
- (void)viewDidLoad;	// IMP=0x0000000000053473
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000532d6
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
- (void)buttonLockupPressed;	// IMP=0x000000000005319a
- (id)_webPageLocationForURL:(id)arg1;	// IMP=0x00000000000530e3
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x000000000005306a
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x0000000000052fe5
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x0000000000052f99
- (id)_onscreenCodeView;	// IMP=0x0000000000052eac
- (void)dealloc;	// IMP=0x0000000000052e63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

