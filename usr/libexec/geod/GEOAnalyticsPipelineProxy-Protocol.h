//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOLogMsgEventPeriodicSettingsSummary, GEOLogMsgState, NSData, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GEOAnalyticsPipelineProxy <NSObject>
- (void)processMapsDeletionWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(NSError *))arg2;
- (void)reportRRLogMessage:(NSData *)arg1;
- (void)runAggregationTasks;
- (void)showEvalDataWithVisitorBlock:(_Bool (^)(unsigned long long, NSData *))arg1;
- (void)flushEvalData;
- (void)setEvalMode:(_Bool)arg1;
- (void)updateSharedStateType:(int)arg1 state:(GEOLogMsgState *)arg2 completion:(void (^)(void))arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)reportDailySettings:(GEOLogMsgEventPeriodicSettingsSummary *)arg1 completion:(void (^)(void))arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(void (^)(void))arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)reportMonthlyUsageCountType:(int)arg1 usageString:(NSString *)arg2 usageBool:(NSNumber *)arg3 appId:(NSString *)arg4 completion:(void (^)(void))arg5 completionQueue:(NSObject<OS_dispatch_queue> *)arg6;
- (void)reportDailyUsageCountType:(int)arg1 usageString:(NSString *)arg2 usageBool:(NSNumber *)arg3 appId:(NSString *)arg4 completion:(void (^)(void))arg5 completionQueue:(NSObject<OS_dispatch_queue> *)arg6;
- (void)reportLogMsg:(NSData *)arg1 uploadBatchId:(unsigned long long)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(void))arg4;
@end

