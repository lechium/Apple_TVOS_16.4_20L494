//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDRapportDeviceClientWrapper, RPCompanionLinkClient;

@protocol HMDRapportMessagingClientFactory <NSObject>
- (HMDRapportDeviceClientWrapper *)newRapportDeviceClientWrapperWithClient:(RPCompanionLinkClient *)arg1;
- (RPCompanionLinkClient *)newCompanionLinkClient;
@end

