//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol CTXPCServiceBaseInterface
- (void)registerForNotifications:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)ping:(void (^)(NSError *))arg1;
- (void)getEvolvedSubscriptionLabelID:(NSString *)arg1 withCallback:(void (^)(NSString *, NSError *))arg2;
- (void)getDescriptorsForDomain:(long long)arg1 completion:(void (^)(CTServiceDescriptorContainer *, NSError *))arg2;
- (void)getDualSimCapability:(void (^)(long long, NSError *))arg1;
- (void)getActiveContexts:(void (^)(CTXPCContexts *, NSError *))arg1;
- (void)getSubscriptionInfo:(void (^)(CTXPCServiceSubscriptionInfo *, NSError *))arg1;
@end
