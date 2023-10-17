//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFItemManager, HMHomeManager, NSArray, NSString, TSKMappingFormatter, TVCSHomeManager;

@interface TVSettingsHomeKitFacade
{
    _Bool _needsUpdate;	// 8 = 0x8
    int _cameraFilter;	// 12 = 0xc
    NSArray *_residentDevices;	// 16 = 0x10
    NSArray *_secureServices;	// 24 = 0x18
    NSArray *_cameraProfiles;	// 32 = 0x20
    long long _secureAccessoryAllowedRemotes;	// 40 = 0x28
    HMHomeManager *_homeManager;	// 48 = 0x30
    TVCSHomeManager *_settingsHomeManager;	// 56 = 0x38
    HFItemManager *_itemManager;	// 64 = 0x40
    NSArray *_favoriteCameraProfiles;	// 72 = 0x48
    NSArray *_nonFavoriteCameraProfiles;	// 80 = 0x50
}

+ (id)keyPathsForValuesAffectingCanAccessHomeData;	// IMP=0x00200000000aaa1e
+ (id)sharedInstance;	// IMP=0x00100000000aa1ec
- (void).cxx_destruct;	// IMP=0x00200000000ac991
@property(copy, nonatomic) NSArray *nonFavoriteCameraProfiles; // @synthesize nonFavoriteCameraProfiles=_nonFavoriteCameraProfiles;
@property(copy, nonatomic) NSArray *favoriteCameraProfiles; // @synthesize favoriteCameraProfiles=_favoriteCameraProfiles;
@property(readonly, nonatomic) HFItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) TVCSHomeManager *settingsHomeManager; // @synthesize settingsHomeManager=_settingsHomeManager;
@property(readonly, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) long long secureAccessoryAllowedRemotes; // @synthesize secureAccessoryAllowedRemotes=_secureAccessoryAllowedRemotes;
@property(nonatomic) int cameraFilter; // @synthesize cameraFilter=_cameraFilter;
@property(copy, nonatomic) NSArray *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(copy, nonatomic) NSArray *secureServices; // @synthesize secureServices=_secureServices;
@property(copy, nonatomic) NSArray *residentDevices; // @synthesize residentDevices=_residentDevices;
- (void)removeProfileIdentifierFromDisabledList:(id)arg1;	// IMP=0x00100000000ac37c
- (void)addProfileIdentifierToDisabledList:(id)arg1;	// IMP=0x00100000000ac1c6
- (void)_setupItemManager;	// IMP=0x00100000000ac0e6
- (void)_updateSecureServices;	// IMP=0x00100000000abdb4
- (void)_updateCameraProfiles;	// IMP=0x00100000000ab595
- (void)_updateResidentDevices;	// IMP=0x00100000000ab220
- (void)_setNeedsResidentDeviceAndAccessoryUpdate;	// IMP=0x00100000000ab106
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;	// IMP=0x00100000000ab0d0
- (void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;	// IMP=0x00100000000ab0be
- (void)home:(id)arg1 didAddResidentDevice:(id)arg2;	// IMP=0x00100000000ab0ac
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;	// IMP=0x00100000000ab09a
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x00100000000ab088
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x00100000000ab047
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x00100000000ab035
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000aaf8e
@property(readonly, nonatomic) NSArray *allowedRemoteTypes;
@property(readonly, nonatomic) TSKMappingFormatter *allowedRemotesDescriptionFormatter;
@property(readonly, nonatomic) TSKMappingFormatter *allowedRemotesFormatter;
@property(readonly, nonatomic) _Bool odeonSupportsAtmos;
@property(readonly, nonatomic) _Bool odeonEnabled;
@property(readonly, nonatomic) _Bool canAccessHomeData;
@property(readonly, nonatomic) NSArray *times;
@property(readonly, nonatomic) TSKMappingFormatter *timesFormatter;
@property(readonly, nonatomic) NSArray *significantEventTypes;
@property(readonly, nonatomic) TSKMappingFormatter *significantEventTypesFormatter;
@property(readonly, nonatomic) NSArray *smartNotificationsOptions;
@property(readonly, nonatomic) TSKMappingFormatter *smartNotificationsShortFormatter;
@property(readonly, nonatomic) TSKMappingFormatter *smartNotificationsFormatter;
- (id)initWithServiceName:(id)arg1;	// IMP=0x00100000000aa293

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
