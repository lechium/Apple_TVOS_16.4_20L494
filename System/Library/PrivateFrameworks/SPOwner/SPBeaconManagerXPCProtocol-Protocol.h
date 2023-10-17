//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>
#import <SPOwner/SPLocalBeaconManagerXPCProtocol-Protocol.h>

@class NSArray, NSDate, NSDateInterval, NSError, NSSet, NSString, NSUUID, SPBeaconUpdates, SPCommandKeysCriteria, SPSimpleBeaconContext;

@protocol SPBeaconManagerXPCProtocol <NSObject, SPLocalBeaconManagerXPCProtocol>
- (void)removeDuplicateBeaconsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)createDuplicateBeaconsForBeacon:(NSUUID *)arg1 skipGroupIdentifier:(_Bool)arg2 count:(long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)updateObfuscatedIdentifierWithCompletion:(void (^)(NSError *))arg1;
- (void)repairDataStore:(void (^)(void))arg1;
- (void)setServiceState:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)primaryAccountModified;
- (void)removeLocalAccountDataWithCompletion:(void (^)(_Bool))arg1;
- (void)fetchFirmwareVersionForBeacon:(NSUUID *)arg1 completion:(void (^)(NSData *))arg2;
- (void)fetchUserStatsForBeacon:(NSUUID *)arg1 completion:(void (^)(SPTagUserStats *))arg2;
- (void)connectedToBeacon:(NSUUID *)arg1 withIndex:(unsigned long long)arg2 completion:(void (^)(_Bool))arg3;
- (void)setCurrentWildKeyIndex:(long long)arg1 forBeacon:(NSUUID *)arg2 completion:(void (^)(_Bool))arg3;
- (void)setKeyRollInterval:(unsigned long long)arg1 forBeacon:(NSUUID *)arg2 completion:(void (^)(_Bool))arg3;
- (void)setAlignmentUncertainty:(double)arg1 atIndex:(unsigned long long)arg2 date:(NSDate *)arg3 forBeacon:(NSUUID *)arg4 completion:(void (^)(_Bool))arg5;
- (void)setWildKeyBase:(unsigned long long)arg1 interval:(unsigned long long)arg2 fallback:(unsigned long long)arg3 forBeacon:(NSUUID *)arg4 completion:(void (^)(_Bool))arg5;
- (void)updateBeacon:(NSUUID *)arg1 updates:(SPBeaconUpdates *)arg2 completion:(void (^)(_Bool))arg3;
- (void)setRole:(long long)arg1 beaconId:(NSUUID *)arg2 completion:(void (^)(SPBeacon *))arg3;
- (void)firmwareUpdateStateForBeaconUUID:(NSUUID *)arg1 completion:(void (^)(SPFirmwareUpdateStateResult *))arg2;
- (void)beaconsInFirmwareUpdateState:(long long)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)initiateFirmwareUpdateForAllEligibleBeaconsWithCompletion:(void (^)(_Bool))arg1;
- (void)updateBeaconUUID:(NSUUID *)arg1 firmwareUpdateState:(long long)arg2 systemVersion:(NSString *)arg3 error:(NSError *)arg4 completion:(void (^)(_Bool))arg5;
- (void)firmwareUpdateCandidateBeaconsWithCompletion:(void (^)(NSArray *))arg1;
- (void)roleCategoriesWithCompletion:(void (^)(NSArray *))arg1;
- (void)nearOwnerCommandKeysWithCompletion:(void (^)(NSArray *))arg1;
- (void)allDuriansWithCompletion:(void (^)(NSSet *))arg1;
- (void)fetchAllKeyMapFileDescriptorsWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)allBeaconingKeysForUUID:(NSUUID *)arg1 dateInterval:(NSDateInterval *)arg2 forceGenerate:(_Bool)arg3 completion:(void (^)(NSArray *))arg4;
- (void)commandKeysForUUID:(NSUUID *)arg1 withCriteria:(SPCommandKeysCriteria *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)commandKeysForUUIDs:(NSArray *)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSDictionary *))arg3;
- (void)commandKeysForUUIDs:(NSArray *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)postedLocalNotifyWhenFoundNotificationForUUID:(NSUUID *)arg1 completion:(void (^)(_Bool))arg2;
- (void)beaconingKeysForUUID:(NSUUID *)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)unacceptedBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (void)startUpdatingSimpleBeaconsWithContext:(SPSimpleBeaconContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)allBeaconsOfTypes:(NSSet *)arg1 includeDupes:(_Bool)arg2 includeHidden:(_Bool)arg3 completion:(void (^)(NSSet *))arg4;
- (void)allBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (void)notificationBeaconForSubscriptionId:(NSUUID *)arg1 completion:(void (^)(SPBeacon *, SPBeaconGroup *))arg2;
- (void)createOwnedDeviceKeyRecordForUUID:(NSUUID *)arg1 completion:(void (^)(SPOwnedDeviceKeyRecord *, NSError *))arg2;
- (void)purgeOwnedDeviceKeyRecordsForUUID:(NSUUID *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)ownedDeviceKeyRecordsForUUID:(NSUUID *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)beaconForUUID:(NSUUID *)arg1 completion:(void (^)(SPBeacon *))arg2;
@end

