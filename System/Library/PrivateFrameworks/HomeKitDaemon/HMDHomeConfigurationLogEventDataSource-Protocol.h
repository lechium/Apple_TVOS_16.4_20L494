//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, NSArray, NSUUID;

@protocol HMDHomeConfigurationLogEventDataSource
@property(readonly, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
@property(readonly, getter=isResidentFirstAccessoryCommunicationEnabled) _Bool residentFirstAccessoryCommunicationEnabled;
@property(readonly, copy, nonatomic) NSArray *enabledResidents;
@property(readonly) HMDDevice *currentDevice;
@property(readonly, copy) NSArray *triggers;
@property(readonly, nonatomic) NSArray *triggerOwnedActionSets;
@property(readonly, nonatomic) NSArray *actionSets;
@property(readonly, copy) NSArray *accessories;
@property(readonly, copy) NSArray *users;
@property(readonly) _Bool isAccessToHomeAllowed;
@property(readonly, getter=isAdminUser) _Bool adminUser;
@property(readonly, getter=isOwnerUser) _Bool ownerUser;
@property(readonly, nonatomic) NSUUID *uuid;
@end
