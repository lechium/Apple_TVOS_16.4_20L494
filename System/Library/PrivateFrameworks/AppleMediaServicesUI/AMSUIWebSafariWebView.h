//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WKWebView.h>

@class NSString;
@protocol WKNavigationDelegate><WKScriptMessageHandlerWithReply><WKURLSchemeHandler><AMSUIWebSafariWebDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIWebSafariWebView : WKWebView
{
    NSString *_logKey;	// 8 = 0x8
    id <WKNavigationDelegate><WKScriptMessageHandlerWithReply><WKURLSchemeHandler><AMSUIWebSafariWebDelegate> _safariDelegate;	// 16 = 0x10
    NSString *_scheme;	// 24 = 0x18
}

+ (id)_createContentControllerWithScheme:(id)arg1 data:(id)arg2 messageHandler:(id)arg3;	// IMP=0x00100000000979d1
- (void).cxx_destruct;	// IMP=0x000000000009804d
@property(nonatomic) __weak NSString *scheme; // @synthesize scheme=_scheme;
@property(nonatomic) __weak id <WKNavigationDelegate><WKScriptMessageHandlerWithReply><WKURLSchemeHandler><AMSUIWebSafariWebDelegate> safariDelegate; // @synthesize safariDelegate=_safariDelegate;
@property(nonatomic) __weak NSString *logKey; // @synthesize logKey=_logKey;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;	// IMP=0x0000000000097813
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;	// IMP=0x000000000009730f
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000096ff6
@property(nonatomic) double topInset;
- (id)initWithAppearance:(id)arg1 scheme:(id)arg2 data:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000096c71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

