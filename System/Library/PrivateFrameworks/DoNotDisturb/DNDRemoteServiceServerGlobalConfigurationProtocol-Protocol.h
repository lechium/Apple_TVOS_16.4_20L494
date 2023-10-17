//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/NSObject-Protocol.h>

@class DNDRequestDetails, NSNumber, NSString;

@protocol DNDRemoteServiceServerGlobalConfigurationProtocol <NSObject>
- (void)getAccountFeatureSupportWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDAccountFeatureSupport *, NSError *))arg2;
- (oneway void)didChangeFocusStatusSharingSettingForApplicationIdentifier:(NSString *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
- (void)getStateDumpWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setPairSyncPreferenceEnabled:(NSNumber *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
- (void)getPairSyncStateWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)setCloudSyncPreferenceEnabled:(NSNumber *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
- (void)getCloudSyncStateWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)setModesCanImpactAvailability:(NSNumber *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
- (void)getModesCanImpactAvailabilityWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)setPreventAutoReply:(NSNumber *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
- (void)getPreventAutoReplyWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSNumber *, NSError *))arg2;
@end

