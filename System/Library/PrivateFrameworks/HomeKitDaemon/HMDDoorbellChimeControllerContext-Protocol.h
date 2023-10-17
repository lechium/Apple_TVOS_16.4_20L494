//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class CULiveAction, HMDAppleMediaAccessory, HMDCharacteristicsAvailabilityListener, HMDHAPAccessory, NAFuture, NSArray, NSDictionary, NSNotificationCenter, NSObject, NSSet, NSUUID;
@protocol HMDDoorbellChimeCOKeyPath, HMMLogEventSubmitting, OS_dispatch_queue;

@protocol HMDDoorbellChimeControllerContext <NSObject>
@property(readonly) id <HMMLogEventSubmitting> logEventDispatcher;
@property(readonly, getter=isCoordinationPathEnabled) _Bool coordinationPathEnabled;
@property(readonly, copy) NSUUID *currentAccessoryUUID;
@property(readonly) double doorbellChimeMaximumAnnounceDelay;
@property(readonly) Class doorbellBulletinUtilitiesClass;
@property(readonly, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
@property(readonly, getter=isFeatureEnabled) _Bool featureEnabled;
@property(readonly) HMDCharacteristicsAvailabilityListener *listener;
@property(readonly) NSNotificationCenter *notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue;
@property __weak HMDHAPAccessory *accessory;
- (_Bool)accessorySupportsCoordinationDoorbellChime:(HMDAppleMediaAccessory *)arg1;
- (NAFuture *)fetchDoorbellDelay;
- (NAFuture *)clearCoordinationStateForKeyPaths:(NSSet *)arg1;
- (id <HMDDoorbellChimeCOKeyPath>)keyPathFromComponents:(NSArray *)arg1;
- (NAFuture *)postCoordinationState:(NSDictionary *)arg1;
- (NAFuture *)postCULiveAction:(CULiveAction *)arg1;
@end
