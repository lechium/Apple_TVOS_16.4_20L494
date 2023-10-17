//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSURL;

@protocol WFContentPermissionRequestor
- (void)allowNetworkAccessWithoutPromptingWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)allowNetworkAccessAfterPromptingForURLs:(NSArray *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)requestUserConsentToLoadWebContentAtURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)allowContactsAccessWithCompletionHandler:(void (^)(WFContactStore *, NSError *))arg1;
@end

