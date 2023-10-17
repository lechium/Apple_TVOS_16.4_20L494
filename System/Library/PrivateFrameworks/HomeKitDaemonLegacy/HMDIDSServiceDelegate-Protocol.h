//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class IDSAccount, IDSMessageContext, NSArray, NSDictionary, NSError, NSSet, NSString, NSURL;
@protocol HMDIDSService;

@protocol HMDIDSServiceDelegate <NSObject>

@optional
- (void)service:(id <HMDIDSService>)arg1 account:(IDSAccount *)arg2 incomingResourceAtURL:(NSURL *)arg3 metadata:(NSDictionary *)arg4 fromID:(NSString *)arg5 context:(IDSMessageContext *)arg6;
- (void)service:(id <HMDIDSService>)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 didSendWithSuccess:(_Bool)arg4 error:(NSError *)arg5 context:(IDSMessageContext *)arg6;
- (void)service:(id <HMDIDSService>)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 didSendWithSuccess:(_Bool)arg4 error:(NSError *)arg5;
- (void)service:(id <HMDIDSService>)arg1 devicesChanged:(NSArray *)arg2;
- (void)service:(id <HMDIDSService>)arg1 activeAccountsChanged:(NSSet *)arg2;
- (void)service:(id <HMDIDSService>)arg1 account:(IDSAccount *)arg2 incomingMessage:(NSDictionary *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
@end

