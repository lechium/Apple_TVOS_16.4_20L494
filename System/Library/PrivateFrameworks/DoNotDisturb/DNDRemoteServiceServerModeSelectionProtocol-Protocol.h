//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/NSObject-Protocol.h>

@class DNDModeAssertionDetails, DNDRequestDetails, NSUUID;

@protocol DNDRemoteServiceServerModeSelectionProtocol <NSObject>
- (void)invalidateModeAssertionWithUUID:(NSUUID *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
- (void)activeModeAssertionWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDModeAssertion *, NSError *))arg2;
- (void)activateModeWithDetails:(DNDModeAssertionDetails *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
@end

