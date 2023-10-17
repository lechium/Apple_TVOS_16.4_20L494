//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface MCProfileServicer : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000056af3
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)debugRescheduleBackgroundActivity:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 repeatingInterval:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000569f7
- (void)managingOrganizationInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005692d
- (void)monitorEnrollmentStateWithPersonaID:(id)arg1;	// IMP=0x001000000005686e
- (void)createMDMUnlockTokenIfNeededWithPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005677f
- (void)mayShareToAirDropForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000565b2
- (void)mayShareToMessagesForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000563e5
- (id)prefixedFeaturePromptIdentifierForIdentifier:(id)arg1;	// IMP=0x00100000000563ab
- (void)cancelFeaturePromptWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000560f8
- (void)showFeaturePromptForSetting:(id)arg1 configurationUUID:(id)arg2 promptOptions:(id)arg3 promptIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000055bc4
- (void)shutDownWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000055a2b
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000055967
- (void)validateAppBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055806
- (void)setupAssistantDidFinishCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005542c
- (void)hasMailAccountsWithFilteringEnabled:(_Bool)arg1 sourceAccountManagement:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000552b4
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000550a4
- (void)setUserBookmarks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054f58
- (void)storeActivationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054e69
- (void)createActivationLockBypassCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000054d9f
- (void)restoreCloudConfigAndMDMProfileFromSetAsideDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000054c8b
- (void)cloudConfigurationStoreDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054b9c
- (void)cloudConfigurationMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000054ad2
- (void)reducedMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000054a08
- (void)rereadManagedAppAttributesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000054940
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054870
- (void)profileDataStoredForPurpose:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005479e
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000546a5
- (void)removeExpiredProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000545dd
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000544a1
- (void)resetAllSettingsToDefaultsIsUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000543a5
- (void)recomputePerClientUserComplianceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000542e1
- (void)recomputeUserComplianceWarningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005421d
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054135
- (void)notifyStartComplianceTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005404d
- (void)areBundlesBlocked:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053c0d
- (void)isBundleBlocked:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053ac7
- (void)removeProvisioningProfileWithUUID:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000539b8
- (void)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000538ab
- (void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005379e
- (void)openSensitiveURL:(id)arg1 unlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000053652
- (void)removeValueSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053534
- (void)removeBoolSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053416
- (void)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000052c32
- (void)migrateCleanupMigratorWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000052b64
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052a90
- (void)managedWiFiNetworkNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000529c6
- (void)managedSystemConfigurationServiceIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000528fc
- (void)removeOrphanedClientRestrictionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000052834
- (void)resetPasscodeMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005276c
- (void)isPasscodeCompliantWithNamedPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005267b
- (void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005256e
- (void)changePasscode:(id)arg1 oldPasscode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052430
- (void)applyRestrictionDictionary:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 localizedClientDescription:(id)arg5 localizedWarningMessage:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000052295
- (_Bool)remoteProcessCanRemoveProfilesOutError:(id *)arg1;	// IMP=0x001000000005223f
- (_Bool)isCloudLockedProfileWithIdentifier:(id)arg1;	// IMP=0x0010000000052183
- (void)removeProtectedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051f7c
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000051d9e
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051b83
- (id)_invalidValue:(id)arg1 forArgument:(id)arg2;	// IMP=0x0010000000051aff
- (void)updateProfileIdentifier:(id)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005192c
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000051862
- (void)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000516f8
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005162e
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000514c7
- (void)appleConnect_installMDMAssociatedProfileData:(id)arg1 interactive:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005133a
- (void)installProfileData:(id)arg1 interactive:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000050f95
- (void)isProfileInstalledWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050e3a
- (void)verifiedMDMProfileIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000050d74
- (_Bool)remoteProcessHasEntitlementArray:(id)arg1 containingString:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000050ca6
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000050bf9
- (id)lacksArrayEntitlementError:(id)arg1 withMemberString:(id)arg2;	// IMP=0x0010000000050b72
- (id)lacksBooleanEntitlementError:(id)arg1;	// IMP=0x0010000000050aee
- (id)remoteProcessBundleID;	// IMP=0x0010000000050a2d
- (_Bool)remoteProcessHasEntitlementArray:(id)arg1 containingString:(id)arg2;	// IMP=0x00100000000508b0
- (id)remoteProcessEntitlementStringArrayForKey:(id)arg1;	// IMP=0x00100000000506a8
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1;	// IMP=0x0010000000050581
- (void)setAllowedURLStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050490
- (void)setSpellCheckAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000503bc
- (void)setKeyboardShortcutsAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000502e8
- (void)setContinuousPathKeyboardAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050214
- (void)setPredictiveKeyboardAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050140
- (void)setSmartPunctuationAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005006c
- (void)setAutoCorrectionAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ff98
- (void)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004feff
- (void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004fe53
- (void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004fda7
- (void)notifyDeviceUnlockedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004fd31
- (void)notifyDeviceUnlockedAndPasscodeRequiredWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004fcbb
- (void)waitForMigrationIncludingPostRestoreMigration:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fc3f
- (void)checkCarrierProfileAndForceReinstallation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fbc3
- (void)checkInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004facb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

