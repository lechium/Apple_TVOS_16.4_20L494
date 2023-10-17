//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriAnalytics/NSObject-Protocol.h>

@class NSArray, NSData, SiriAnalyticsXPCLargeMessageEnvelope;

@protocol SiriAnalyticsXPCService <NSObject>
- (oneway void)saveState:(NSData *)arg1 forPluginWithCompletion:(void (^)(void))arg2;
- (oneway void)fetchStateForPluginWithCompletion:(void (^)(NSData *))arg1;
- (oneway void)fetchLogicalClocksWithCompletion:(void (^)(_Bool, NSArray *, NSError *))arg1;
- (oneway void)vendSandboxExtensionWithResource:(long long)arg1 readonly:(_Bool)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (oneway void)resetLogicalClockWithCompletion:(void (^)(_Bool, NSUUID *, NSError *))arg1;
- (oneway void)sensitiveCondition:(int)arg1 endedAt:(unsigned long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (oneway void)sensitiveCondition:(int)arg1 startedAt:(unsigned long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (oneway void)publishUnorderedMessages:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (oneway void)publishLargeMessage:(SiriAnalyticsXPCLargeMessageEnvelope *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)resolveMessages:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (oneway void)publishMessages:(NSArray *)arg1 completion:(void (^)(void))arg2;
@end

