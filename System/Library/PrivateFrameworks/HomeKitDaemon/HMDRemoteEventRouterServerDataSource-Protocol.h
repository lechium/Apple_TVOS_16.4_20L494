//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDevice, HMDRemoteEventRouterServer, HMFMessage, NSArray, NSString, NSUUID;
@protocol HMDRemoteEventAccessControlProvider, HMDRemoteEventRouterUserAccessControlProvider;

@protocol HMDRemoteEventRouterServerDataSource <NSObject>
- (NSArray *)expandedTopicsWithTopics:(NSArray *)arg1;
- (HMDDevice *)messageTargetForDeviceIdentifier:(NSUUID *)arg1;
- (_Bool)isDeviceIdentifierPrimaryResident:(NSUUID *)arg1;
- (_Bool)isCurrentDevicePrimaryResident;
- (_Bool)canTopicBeForwardedToPrimaryFromResident:(NSString *)arg1;
- (_Bool)shouldAllowTopic:(NSString *)arg1 forDeviceWithMessageIdentifier:(NSUUID *)arg2;
- (id <HMDRemoteEventAccessControlProvider>)remoteEventAccessControlProvider;
- (id <HMDRemoteEventRouterUserAccessControlProvider>)routerServerUserAccessControlProviderForIdentifier:(NSUUID *)arg1;
- (NSUUID *)routerServerUserAccessControlProviderIdentifierForMessage:(HMFMessage *)arg1;
- (id)primaryResidentChangeMonitorForRouterServer:(HMDRemoteEventRouterServer *)arg1;
@end

