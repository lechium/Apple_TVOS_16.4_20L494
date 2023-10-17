//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDHome, HMFaceCrop, HMFaceprint, HMIExternalPersonManager, HMIHomePersonManager, HMPerson, HMPersonFaceCrop, NAFuture, NSData, NSUUID;
@protocol HMDPersonDataSource, HMDPersonManagerSettings;

@protocol HMDPersonDataInterface <NSObject>
- (void)configureWithDataSource:(id <HMDPersonDataSource>)arg1 home:(HMDHome *)arg2;

@optional
@property(readonly) HMIExternalPersonManager *photosPersonManager;
@property(readonly) HMIHomePersonManager *homePersonManager;
- (void)handleFaceMisclassificationForFaceCropData:(NSData *)arg1 personUUID:(NSUUID *)arg2;
- (void)handleUpdatedIsDataSyncInProgress:(_Bool)arg1;
- (void)handleUpdatedIsCurrentDeviceAvailableResident:(_Bool)arg1;
- (void)handleUpdatedSettings:(id <HMDPersonManagerSettings>)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleRemovedFaceprintWithUUID:(NSUUID *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleRemovedFaceCropWithUUID:(NSUUID *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleRemovedPersonWithUUID:(NSUUID *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleUpdatedFaceprint:(HMFaceprint *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleUpdatedPersonFaceCrop:(HMPersonFaceCrop *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleUpdatedUnassociatedFaceCrop:(HMFaceCrop *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleUpdatedPerson:(HMPerson *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
@end

