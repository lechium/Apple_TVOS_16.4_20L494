//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDAccessorySettingsLegacyMessageReceiver, HMDAccessorySettingsLocalMessageHandler, HMDAccessorySettingsMessenger, HMFMessageDispatcher, NSUUID;
@protocol HMDMessageRouter, HMMLogEventSubmitting;

@protocol HMDAccessorySettingsMessengerFactory <NSObject>
- (HMDAccessorySettingsMessenger *)createAccessorySettingsMessengerWithMessageTargetUUID:(NSUUID *)arg1 messageDispatcher:(HMFMessageDispatcher *)arg2 messageRouter:(id <HMDMessageRouter>)arg3 messageHandler:(HMDAccessorySettingsLocalMessageHandler *)arg4 logEventSubmitter:(id <HMMLogEventSubmitting>)arg5 legacyMessageReceiver:(HMDAccessorySettingsLegacyMessageReceiver *)arg6;
@end

