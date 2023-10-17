//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKitLegacy/NSObject-Protocol.h>

@class WebGeolocationPosition, WebView;
@protocol WebGeolocationProviderInitializationListener;

@protocol WebGeolocationProvider <NSObject>
- (void)stopTrackingWebView:(WebView *)arg1;
- (void)initializeGeolocationForWebView:(WebView *)arg1 listener:(id <WebGeolocationProviderInitializationListener>)arg2;
- (void)setEnableHighAccuracy:(_Bool)arg1;
- (WebGeolocationPosition *)lastPosition;
- (void)unregisterWebView:(WebView *)arg1;
- (void)registerWebView:(WebView *)arg1;
@end

