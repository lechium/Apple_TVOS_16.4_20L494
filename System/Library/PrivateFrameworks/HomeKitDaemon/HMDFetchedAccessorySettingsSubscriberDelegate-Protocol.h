//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMImmutableSetting, NSUUID;

@protocol HMDFetchedAccessorySettingsSubscriberDelegate <NSObject>
- (void)didReceiveAccessorySetting:(HMImmutableSetting *)arg1 accessoryUUID:(NSUUID *)arg2;
@end

