//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/NSObject-Protocol.h>

@class DNDRequestDetails, NSString;

@protocol DNDRemoteAppConfigurationServiceServerProtocol <NSObject>
- (void)invalidateAppContextForActionIdentifier:(NSString *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
- (void)getCurrentAppConfigurationForActionIdentifier:(NSString *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(LNAction *, NSError *))arg3;
@end

