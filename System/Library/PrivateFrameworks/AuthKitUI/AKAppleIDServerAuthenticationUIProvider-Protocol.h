//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class AKServerRequestConfiguration;

@protocol AKAppleIDServerAuthenticationUIProvider <NSObject>
- (void)dismissServerProvidedUIWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)presentServerProvidedUIWithConfiguration:(AKServerRequestConfiguration *)arg1 completion:(void (^)(NSHTTPURLResponse *, NSDictionary *, NSError *))arg2;
@end

