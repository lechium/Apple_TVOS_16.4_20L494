//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class NSDate, NSDictionary, NSString, NSUUID;

@protocol CLMicroLocationNotifierProtocol <CLNotifierServiceProtocol>
- (void)purgeMicroLocationSemiSupervisedDataForClient:(NSString *)arg1;
- (void)donateTruthTagLabelForClient:(NSString *)arg1 truthLabelUUID:(NSUUID *)arg2 betweenDate:(NSDate *)arg3 andDate:(NSDate *)arg4 withReply:(void (^)(NSError *))arg5;
- (void)donateTruthTagLabelForClient:(NSString *)arg1 truthLabelUUID:(NSUUID *)arg2 recordingTriggerUUID:(NSUUID *)arg3 withReply:(void (^)(NSError *))arg4;
- (void)requestAnchorValueStatisticsWithReply:(void (^)(NSError *, NSDictionary *))arg1;
- (_Bool)syncgetMicroLocationInternalVersion:(id *)arg1;
- (void)requestMicroLocationRecordingScanForClient:(NSString *)arg1 withAdditionalInformation:(NSDictionary *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)requestCurrentMicroLocationForClient:(NSString *)arg1 withAdditionalInformation:(NSDictionary *)arg2;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end

