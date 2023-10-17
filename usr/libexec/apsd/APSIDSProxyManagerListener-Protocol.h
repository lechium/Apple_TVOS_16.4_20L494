//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class APSIDSProxyManager, APSOutgoingMessage, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol APSIDSProxyManagerListener <NSObject>
- (void)proxyManager:(APSIDSProxyManager *)arg1 isNearbyChanged:(_Bool)arg2;

@optional
- (void)proxyManager:(APSIDSProxyManager *)arg1 handlePubSubUpdateMessage:(NSDictionary *)arg2 interface:(long long)arg3 environmentName:(NSString *)arg4 guid:(NSString *)arg5;
- (void)proxyManager:(APSIDSProxyManager *)arg1 handlePubSubChannelListRequest:(long long)arg2 envName:(NSString *)arg3 guid:(NSString *)arg4;
- (void)proxyManager:(APSIDSProxyManager *)arg1 handlePubSubChannelListResponse:(NSDictionary *)arg2 environmentName:(NSString *)arg3 guid:(NSString *)arg4;
- (void)proxyManager:(APSIDSProxyManager *)arg1 sendPubSubChannelList:(NSData *)arg2 messageID:(unsigned int)arg3 token:(NSData *)arg4 interface:(long long)arg5 environmentName:(NSString *)arg6 guid:(NSString *)arg7;
- (void)proxyManager:(APSIDSProxyManager *)arg1 messageTracingWithStatus:(int)arg2 topic:(NSString *)arg3 tracingUUID:(NSData *)arg4 token:(NSData *)arg5 guid:(NSString *)arg6 environmentName:(NSString *)arg7;
- (void)proxyManager:(APSIDSProxyManager *)arg1 isConnected:(_Bool)arg2 guid:(NSString *)arg3 environmentName:(NSString *)arg4;
- (void)proxyManager:(APSIDSProxyManager *)arg1 appTokenGenerateResponse:(NSDictionary *)arg2 error:(NSNumber *)arg3 guid:(NSString *)arg4 environmentName:(NSString *)arg5;
- (void)proxyManager:(APSIDSProxyManager *)arg1 tokenGenerateWithTopicHash:(NSData *)arg2 baseToken:(NSData *)arg3 appId:(NSNumber *)arg4 expirationTTL:(NSNumber *)arg5 vapidPublicKeyHash:(NSData *)arg6 type:(NSNumber *)arg7 guid:(NSString *)arg8 environmentName:(NSString *)arg9;
- (void)proxyManager:(APSIDSProxyManager *)arg1 expiredNonceWithServerTime:(NSNumber *)arg2 guid:(NSString *)arg3 environmentName:(NSString *)arg4;
- (void)proxyManager:(APSIDSProxyManager *)arg1 reversePushResponse:(NSNumber *)arg2 messageGUID:(NSString *)arg3 messageId:(NSNumber *)arg4 guid:(NSString *)arg5 environmentName:(NSString *)arg6;
- (void)proxyManager:(APSIDSProxyManager *)arg1 sendReversePush:(APSOutgoingMessage *)arg2 guid:(NSString *)arg3 environmentName:(NSString *)arg4;
- (void)proxyManager:(APSIDSProxyManager *)arg1 receivedPushAckResponse:(NSNumber *)arg2 messageId:(NSData *)arg3 token:(NSData *)arg4 interface:(NSNumber *)arg5 generation:(NSNumber *)arg6 guid:(NSString *)arg7 environmentName:(NSString *)arg8;
- (void)proxyManager:(APSIDSProxyManager *)arg1 receivedPush:(NSDictionary *)arg2 interface:(NSNumber *)arg3 generation:(NSNumber *)arg4 guid:(NSString *)arg5 environmentName:(NSString *)arg6;
- (void)proxyManager:(APSIDSProxyManager *)arg1 inactiveReceivedForGuid:(NSString *)arg2 environmentName:(NSString *)arg3;
- (void)proxyManager:(APSIDSProxyManager *)arg1 incomingFilterForGuid:(NSString *)arg2 environmentName:(NSString *)arg3 enabledTopics:(NSArray *)arg4 ignoredTopics:(NSArray *)arg5 opportunisticTopics:(NSArray *)arg6 nonWakingTopics:(NSArray *)arg7 topicSalts:(NSDictionary *)arg8;
- (void)proxyManagerReceivedDaemonAliveNotification:(APSIDSProxyManager *)arg1;
- (void)proxyManager:(APSIDSProxyManager *)arg1 incomingPushToken:(NSData *)arg2 guid:(NSString *)arg3 environmentName:(NSString *)arg4;
@end

