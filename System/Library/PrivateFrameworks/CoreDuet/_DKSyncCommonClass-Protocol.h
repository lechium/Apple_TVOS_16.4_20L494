//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/_DKSyncRemoteStorage-Protocol.h>

@class NSDictionary, NSError, NSString, RPCompanionLinkClient, _DKSyncPeer;

@protocol _DKSyncCommonClass <_DKSyncRemoteStorage>
- (void)sendRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 peer:(_DKSyncPeer *)arg3 highPriority:(_Bool)arg4 options:(NSDictionary *)arg5 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg6;
- (void)handshakeWithDuetSyncPeer:(_DKSyncPeer *)arg1 orError:(NSError *)arg2;
- (NSError *)transformCaughtObject:(id)arg1 existingError:(NSError *)arg2;
- (NSError *)transformResponseError:(NSError *)arg1;
- (void)handleAvailabilityFailureWithPeer:(_DKSyncPeer *)arg1 completion:(void (^)(NSError *))arg2;
- (_Bool)isTransportActiveForPeer:(_DKSyncPeer *)arg1;
- (RPCompanionLinkClient *)client;
- (void)setDeviceID:(NSString *)arg1;
- (NSString *)myDeviceID;
@end

