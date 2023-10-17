//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonViewController.h"

@class AMSUIWebAppearance, AMSUIWebClientContext, AMSUIWebSafariPageModel, AMSUIWebSafariWebView, NSString, NSURL, UIBarButtonItem, UIToolbar, UIViewController;

__attribute__((visibility("hidden")))
@interface AMSUIWebSafariViewController : AMSUICommonViewController
{
    _Bool _shouldDismissOnCallback;	// 8 = 0x8
    _Bool _shouldSetPresentationDelegate;	// 9 = 0x9
    _Bool _didHandleDismiss;	// 10 = 0xa
    _Bool _performingNavigation;	// 11 = 0xb
    CDUnknownBlockType _actionHandler;	// 16 = 0x10
    AMSUIWebAppearance *_appearance;	// 24 = 0x18
    AMSUIWebClientContext *_context;	// 32 = 0x20
    UIViewController *_placeholderPage;	// 40 = 0x28
    AMSUIWebSafariPageModel *_model;	// 48 = 0x30
    long long _pageState;	// 56 = 0x38
    UIToolbar *_toolbar;	// 64 = 0x40
    UIBarButtonItem *_toolbarLeft;	// 72 = 0x48
    UIBarButtonItem *_toolbarRight;	// 80 = 0x50
    AMSUIWebSafariWebView *_webView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000096ba2
@property(readonly, nonatomic) AMSUIWebSafariWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) UIBarButtonItem *toolbarRight; // @synthesize toolbarRight=_toolbarRight;
@property(readonly, nonatomic) UIBarButtonItem *toolbarLeft; // @synthesize toolbarLeft=_toolbarLeft;
@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) _Bool performingNavigation; // @synthesize performingNavigation=_performingNavigation;
@property(nonatomic) long long pageState; // @synthesize pageState=_pageState;
@property(readonly, nonatomic) AMSUIWebSafariPageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIViewController *placeholderPage; // @synthesize placeholderPage=_placeholderPage;
@property(nonatomic) _Bool didHandleDismiss; // @synthesize didHandleDismiss=_didHandleDismiss;
@property(readonly, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
@property(nonatomic) _Bool shouldSetPresentationDelegate; // @synthesize shouldSetPresentationDelegate=_shouldSetPresentationDelegate;
@property(nonatomic) _Bool shouldDismissOnCallback; // @synthesize shouldDismissOnCallback=_shouldDismissOnCallback;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)_updateButtons;	// IMP=0x0000000000096948
- (void)_setupSafariNavBarWithSpinner:(_Bool)arg1;	// IMP=0x000000000009638b
- (void)_transitionToWebView;	// IMP=0x00000000000962f1
- (void)_transitionToLoading;	// IMP=0x0000000000096221
- (void)_transitionToErrorViewWithError:(id)arg1;	// IMP=0x0000000000095d2e
- (void)_startErrorTimer;	// IMP=0x0000000000095be7
- (void)_share:(id)arg1;	// IMP=0x00000000000952af
- (void)_setupPageForWebView;	// IMP=0x0000000000095161
- (void)_startLoadingWebView;	// IMP=0x0000000000094d22
- (void)_refresh:(id)arg1;	// IMP=0x0000000000094cdd
- (void)_presentPlaceholderModel:(id)arg1;	// IMP=0x0000000000094be8
- (void)_presentActivityViewControllerWithActivityItems:(id)arg1;	// IMP=0x0000000000094b13
- (void)_pop;	// IMP=0x0000000000094ab9
- (_Bool)_callActionHandlerWithURL:(id)arg1 error:(id)arg2;	// IMP=0x00000000000949a3
- (void)_handleDismiss;	// IMP=0x000000000009493b
- (void)_forward:(id)arg1;	// IMP=0x00000000000948f6
- (void)_finishedLoadingWithSuccess:(_Bool)arg1;	// IMP=0x000000000009488f
- (void)_dismiss;	// IMP=0x000000000009485a
- (id)_createToolBar;	// IMP=0x000000000009458a
- (void)_cancel:(id)arg1;	// IMP=0x0000000000094421
- (void)_back:(id)arg1;	// IMP=0x00000000000943dc
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000093cf3
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;	// IMP=0x0000000000093ba1
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x0000000000093b6e
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x0000000000093b3e
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x0000000000093970
- (void)safariView:(id)arg1 didRedirectToSchemeWithURL:(id)arg2;	// IMP=0x000000000009395b
- (void)safariView:(id)arg1 didReceiveAction:(id)arg2 body:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000093246
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000092c14
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000092b61
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000929b1
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000092848
- (void)dealloc;	// IMP=0x00000000000926c2
- (void)loadView;	// IMP=0x0000000000092308
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;	// IMP=0x0000000000092259
- (void)receiveCallbackURL:(id)arg1;	// IMP=0x0000000000091fe5
- (void)loadActionURL:(id)arg1 data:(id)arg2 callbackScheme:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000091e8c
@property(readonly, nonatomic) NSURL *originalURL;
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000091dca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

