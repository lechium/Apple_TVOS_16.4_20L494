//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ACAccount, ASDAppEvent, NSNumber;

@protocol ASDOcelotServiceProtocol <NSObject>
- (void)topAppsForAccount:(ACAccount *)arg1 completionBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)subscriptionStateWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)subscriptionDetailsWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)sbsyncWithDuration:(NSNumber *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)sbsyncWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)sbsyncIfSubscribedWithAccount:(ACAccount *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)sendSummaryMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)sendPayoutMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)resetPayoutWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)resetMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)reportAppEvent:(ASDAppEvent *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)recordMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)recordLaunchesWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)getAppSummaryEventsWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)getAppPayoutEventsWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)flushMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
@end

