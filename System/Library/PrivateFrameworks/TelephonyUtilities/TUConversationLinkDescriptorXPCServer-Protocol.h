//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSArray, NSDate, NSPredicate, NSSet, NSString;

@protocol TUConversationLinkDescriptorXPCServer <NSObject>
- (void)stringForKey:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)setString:(NSString *)arg1 forKey:(NSString *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)integerForKey:(NSString *)arg1 reply:(void (^)(long long, NSError *))arg2;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)setName:(NSString *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 reply:(void (^)(unsigned long long, NSError *))arg4;
- (void)setInvitedHandles:(NSSet *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 reply:(void (^)(unsigned long long, NSError *))arg4;
- (void)setExpirationDate:(NSDate *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 reply:(void (^)(unsigned long long, NSError *))arg4;
- (void)setActivated:(_Bool)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 reply:(void (^)(unsigned long long, NSError *))arg4;
- (void)removeConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg1 userInteraction:(_Bool)arg2 reply:(void (^)(unsigned long long, NSError *))arg3;
- (void)conversationLinkDescriptorsWithPredicate:(NSPredicate *)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)conversationLinkDescriptorCountWithPredicate:(NSPredicate *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)addOrUpdateConversationLinkDescriptors:(NSArray *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)addConversationLinkDescriptors:(NSArray *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end

