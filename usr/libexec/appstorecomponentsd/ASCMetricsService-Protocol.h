//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ASCLockup, ASCMetricsActivity, ASCMetricsData, ASCSignpostPredicate, NSArray, NSDictionary, NSString;

@protocol ASCMetricsService <NSObject>
- (void)logErrorMessage:(NSArray *)arg1;
- (void)recordQToken:(NSString *)arg1 campaignToken:(NSString *)arg2 advertisementID:(NSString *)arg3 withLockup:(ASCLockup *)arg4 withReplyHandler:(void (^)(NSError *))arg5;
- (void)recordCampaignToken:(NSString *)arg1 providerToken:(NSString *)arg2 withLockup:(ASCLockup *)arg3 withReplyHandler:(void (^)(NSError *))arg4;
- (void)processViewRenderWithPredicate:(ASCSignpostPredicate *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)processMetricsData:(ASCMetricsData *)arg1 pageFields:(NSDictionary *)arg2 activity:(ASCMetricsActivity *)arg3 withReplyHandler:(void (^)(NSError *))arg4;
@end

