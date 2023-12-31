//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKUtilityServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000008e25
+ (Class)interfaceClass;	// IMP=0x0010000000008e14
- (oneway void)getWidgetStoreBagValueWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0020000000009f09
- (oneway void)getArcadeSubscription:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009e85
- (oneway void)checkAndUpdateArcadeSubscriberStatusWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000975f
- (oneway void)cancelNetworkManagerTasks;	// IMP=0x001000000000971b
- (oneway void)loadDataForURL:(id)arg1 postBody:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009597
- (oneway void)refreshPreferencesWithDataType:(unsigned int)arg1;	// IMP=0x0010000000009466
- (oneway void)refreshPreferences;	// IMP=0x001000000000944f
- (oneway void)updateNotificationTopics;	// IMP=0x001000000000940b
- (oneway void)pingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000093f9
- (oneway void)clearCaches;	// IMP=0x00100000000090bd
- (oneway void)terminate;	// IMP=0x0010000000008efc
- (oneway void)openGameCenterSettings;	// IMP=0x0010000000008eb8
- (oneway void)openICloudSettings;	// IMP=0x0010000000008e74
- (oneway void)openSettings;	// IMP=0x0010000000008e30
- (oneway void)getCredentialInfoAndStoreBagValuesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000088cd
- (oneway void)getHostGameWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000086a6
- (oneway void)invokeASCAppLaunchTrampolineWithURL:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000079af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

