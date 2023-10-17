//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccountUI/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, NSHTTPURLResponse, NSMutableURLRequest, NSString, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, RUIElement, RUIObjectModel, RUIPage, RemoteUIController, UINavigationController;

@protocol RemoteUIControllerDelegate <NSObject>

@optional
- (void)remoteUIController:(RemoteUIController *)arg1 willLoadRequest:(NSMutableURLRequest *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveObjectModel:(RUIObjectModel *)arg2 actionSignal:(unsigned long long *)arg3;
- (RUIPage *)remoteUIController:(RemoteUIController *)arg1 createPageWithName:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)remoteUIControllerDidDismiss:(RemoteUIController *)arg1;
- (void)remoteUIController:(RemoteUIController *)arg1 didDismissModalNavigationWithObjectModels:(NSArray *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 willPresentModalNavigationController:(UINavigationController *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 loadResourcesForObjectModel:(RUIObjectModel *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didRemoveObjectModel:(RUIObjectModel *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didRefreshObjectModel:(RUIObjectModel *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didPresentObjectModel:(RUIObjectModel *)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 willPresentObjectModel:(RUIObjectModel *)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2 forRequest:(NSURLRequest *)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didFinishLoadWithError:(NSError *)arg2 forRequest:(NSURLRequest *)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didFinishLoadWithError:(NSError *)arg2;
- (_Bool)remoteUIController:(RemoteUIController *)arg1 objectModel:(RUIObjectModel *)arg2 shouldDisplayNamedElement:(RUIElement *)arg3 page:(RUIPage *)arg4;
- (void)remoteUIController:(RemoteUIController *)arg1 shouldLoadRequest:(NSMutableURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3 withCompletionHandler:(void (^)(_Bool, NSError *))arg4;
- (_Bool)remoteUIController:(RemoteUIController *)arg1 shouldLoadRequest:(NSMutableURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end

