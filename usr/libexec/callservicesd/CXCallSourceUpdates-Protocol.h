//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CXCallFailureContext, CXCallSource, CXCallUpdate, CXProviderConfiguration, CXTransaction, NSData, NSDate, NSString, NSUUID;

@protocol CXCallSourceUpdates <NSObject>
- (void)callSource:(CXCallSource *)arg1 requestedTransaction:(CXTransaction *)arg2 completion:(void (^)(NSError *))arg3;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 crossDeviceIdentifier:(NSString *)arg3 changedBytesOfDataUsed:(long long)arg4;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 changedMeterLevel:(float)arg3 forDirection:(long long)arg4;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 changedFrequencyData:(NSData *)arg3 forDirection:(long long)arg4;
- (void)callSource:(CXCallSource *)arg1 reportedAudioFinishedForCallWithUUID:(NSUUID *)arg2;
- (void)callSource:(CXCallSource *)arg1 reportedNewOutgoingCallWithUUID:(NSUUID *)arg2 update:(CXCallUpdate *)arg3;
- (void)callSource:(CXCallSource *)arg1 reportedOutgoingCallWithUUID:(NSUUID *)arg2 connectedAtDate:(NSDate *)arg3;
- (void)callSource:(CXCallSource *)arg1 reportedOutgoingCallWithUUID:(NSUUID *)arg2 sentInvitationAtDate:(NSDate *)arg3;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 endedAtDate:(NSDate *)arg3 privateReason:(long long)arg4 failureContext:(CXCallFailureContext *)arg5;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 updated:(CXCallUpdate *)arg3;
- (void)callSource:(CXCallSource *)arg1 reportedNewIncomingCallWithUUID:(NSUUID *)arg2 update:(CXCallUpdate *)arg3 completion:(void (^)(NSError *))arg4;
- (void)callSource:(CXCallSource *)arg1 registeredWithConfiguration:(CXProviderConfiguration *)arg2;
@end
