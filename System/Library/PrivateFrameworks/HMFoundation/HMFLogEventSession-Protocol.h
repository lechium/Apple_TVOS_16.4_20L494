//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFActivityAssociating-Protocol.h>

@class HMFLogEventSessionVoucher, NSDictionary, NSString, NSUUID;

@protocol HMFLogEventSession <HMFActivityAssociating>
@property(readonly, nonatomic) HMFLogEventSessionVoucher *voucher;
@property(readonly, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) NSUUID *uuid;
- (void)submitEventWithName:(NSString *)arg1 payload:(NSDictionary *)arg2;
@end
