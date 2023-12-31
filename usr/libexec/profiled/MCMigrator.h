//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCNotifier, MISSING_TYPE, NSFileManager;

@interface MCMigrator : NSObject
{
    _Bool _systemProfileStorageWasMigratedFromLegacyStorage;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
    MCNotifier *_notifier;	// 24 = 0x18
}

+ (id)stringWithContext:(int)arg1;	// IMP=0x004000000002b5c9
+ (_Bool)payloadHasHardwareBoundKey:(id)arg1;	// IMP=0x001000000002b572
- (void).cxx_destruct;	// IMP=0x002000000003a18e
@property(nonatomic) _Bool systemProfileStorageWasMigratedFromLegacyStorage; // @synthesize systemProfileStorageWasMigratedFromLegacyStorage=_systemProfileStorageWasMigratedFromLegacyStorage;
@property(retain, nonatomic) MCNotifier *notifier; // @synthesize notifier=_notifier;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void)_checkForStaleAPNCarrierFile;	// IMP=0x0010000000039ddb
- (void)_wakeDaemonsPostMigration;	// IMP=0x0010000000039d8e
- (void)_correctCloudConfigurationIfNecessary;	// IMP=0x001000000003971f
- (void)_validateCloudConfiguration;	// IMP=0x0010000000039490
- (void)_tagIMAPAccountsWithProfileAndPayloadProperties;	// IMP=0x001000000003942c
- (void)_tagManagedAccounts;	// IMP=0x001000000003909d
- (void)_correctInstallOptionsOnProfileStubs;	// IMP=0x0010000000038bb0
- (void)_removeUnmanageableApps;	// IMP=0x00100000000386cc
- (void)_cleanUpAppConfiguration;	// IMP=0x0010000000037d08
- (void)_removeSupervisionProfiles;	// IMP=0x00100000000379f5
- (id)_generatedManifestIfNeededFromOrderedProfiles:(id)arg1 hiddenProfiles:(id)arg2 existingManifest:(id)arg3;	// IMP=0x0010000000037823
- (void)_profilesFromStubsAtPath:(id)arg1 orderedProfiles:(id *)arg2 hiddenProfiles:(id *)arg3;	// IMP=0x001000000003732e
- (id)_profilesFromManifestAtPath:(id)arg1;	// IMP=0x0010000000036fbd
- (void)_fixManifestFromStubsIfNecessaryWithStubPath:(id)arg1 manifestPath:(id)arg2;	// IMP=0x0010000000036d26
- (void)_fixManifestFromStubsIfNecessary;	// IMP=0x0010000000036c6b
- (void)_migrateLostModeLastLocationRequestDate;	// IMP=0x00100000000366f4
- (void)_migrateSharedDeviceConfiguration;	// IMP=0x00100000000365cd
- (void)_applyImpliedSettings;	// IMP=0x001000000003648d
- (void)_updateProfileRestrictions;	// IMP=0x0010000000036111
- (id)_updateProfileRestrictionsForProfileRestrictions:(id)arg1;	// IMP=0x0010000000035e90
- (void)_updateClientRestrictions;	// IMP=0x0010000000035ac1
- (void)_migrateClientRestrictions;	// IMP=0x0010000000035330
- (void)_migrateSettings;	// IMP=0x00100000000341bd
- (void)_migrateBoolValueToFeature:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 synchronize:(_Bool)arg4;	// IMP=0x00100000000340d9
- (void)_migrateValueRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 keysToRestricitons:(id)arg4 currentValueUserSettings:(id)arg5;	// IMP=0x0010000000033d39
- (void)_migrateBoolRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 valuesToRestrictions:(id)arg4 currentBoolUserSettings:(id)arg5;	// IMP=0x0010000000033976
- (void)_applyDefaultSettings;	// IMP=0x00100000000331e6
- (void)_removeOriginalCopies;	// IMP=0x0010000000032ec5
- (void)_transferTagsToProfileStubs;	// IMP=0x0010000000032add
- (_Bool)_applyAccountTagsToProfile:(id)arg1;	// IMP=0x0010000000032706
- (void)_transferInstallationDatesFromOriginalProfiles;	// IMP=0x001000000003211a
- (void)_migrateOTAProfiles;	// IMP=0x00100000000311ad
- (void)_transferRemovalPasswordsFromOriginalProfiles;	// IMP=0x0010000000030a4f
- (void)_transferSignerCertificates;	// IMP=0x0010000000030114
- (void)_moveSignerCertificatesInProfileStubDictionary:(id)arg1;	// IMP=0x001000000002fe49
- (id)_removeOrphanedManifestEntriesFromManifestInDirectory:(id)arg1;	// IMP=0x001000000002f7f6
- (void)_removeOrphanedManifestEntries;	// IMP=0x001000000002f663
- (void)_createStubs;	// IMP=0x001000000002ee61
- (void)_removeDuplicatedHiddenIdentifiers;	// IMP=0x001000000002eaed
- (void)_removeUnusedManifestArrays;	// IMP=0x001000000002e98a
- (void)_migrateManifestLocation;	// IMP=0x001000000002e450
- (void)_moveFilesToPublicDirectories;	// IMP=0x001000000002e25e
- (void)_removeLegacyProfileStorageDirectory;	// IMP=0x001000000002e0eb
- (_Bool)_isDirectoryEmptyAtPath:(id)arg1;	// IMP=0x001000000002e049
- (_Bool)_isLegacyProfileStoragePresent;	// IMP=0x001000000002dfd1
- (_Bool)_shouldAttemptToMigrateLegacyProfileStorage;	// IMP=0x001000000002df7a
- (_Bool)_copyAlmostAtomicallyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002dc49
- (id)_attributeDictionaryForProfileStorageWithPosixPermissions:(unsigned long long)arg1;	// IMP=0x001000000002db82
- (id)_attributesForUserProfileStorageItem;	// IMP=0x001000000002db6b
- (id)_attributesForSystemProfileStorageItems;	// IMP=0x001000000002db54
- (void)_setAttributesOnSystemProfileStorageDirectory;	// IMP=0x001000000002da27
- (void)_removeExistingSystemProfileStorageDirectoryBlockingMigration;	// IMP=0x001000000002d8ef
- (void)_migrateLegacySystemProfileStorage;	// IMP=0x001000000002d75a
- (void)_createSystemProfileStorageDirectoryMigratingFromLegacyStorageIfNecessary;	// IMP=0x001000000002d656
- (void)_sendCloudConfigurationChangedNotificationIfWeMigratedLegacyProfileStorage;	// IMP=0x001000000002d5fd
- (void)_fixPermissionsOnTheSystemProfileLibraryDirectoryAndContents;	// IMP=0x001000000002d4e9
- (void)_createSystemGroupContainerAndMoveFiles;	// IMP=0x001000000002d326
- (MISSING_TYPE *)_removeInvalidOptionsFromLegacyCloudConfiguration;	// IMP=0x001000000002d193
- (void)_createDirectories;	// IMP=0x001000000002d053
- (void)_fixDirectoryAtPath:(id)arg1 permissions:(id)arg2;	// IMP=0x001000000002cf86
- (void)_createDirectoryAtPath:(id)arg1 attributes:(id)arg2;	// IMP=0x001000000002ce0c
- (void)_createDirectoryAtPath:(id)arg1;	// IMP=0x001000000002cd5c
- (void)migrateWithPostMigrationTaskQueue:(id)arg1;	// IMP=0x001000000002c3f9
- (void)migrateCleanupMigratorWithContext:(int)arg1;	// IMP=0x001000000002bd1a
- (void)_removeMDMProfileIfUserEnrollment;	// IMP=0x001000000002b9f8
- (void)migratePostDataMigratorWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2;	// IMP=0x001000000002b5ea
- (void)_removeHardwareBoundPayloads;	// IMP=0x001000000002b56c
- (void)_removeOSXServerPayloadAccount;	// IMP=0x001000000002b51f
- (void)_removeiPCUCertificates;	// IMP=0x001000000002b273
- (_Bool)_isMultiUserMode;	// IMP=0x001000000002b1d8
- (void)_migratePasscodeDidRestore:(_Bool)arg1 passcodeWasSet:(_Bool)arg2 historyRequired:(_Bool)arg3;	// IMP=0x001000000002b14b
- (id)_lastUserMigratedBuildVersion;	// IMP=0x001000000002b0f1
- (id)_lastSystemMigratedBuildVersion;	// IMP=0x001000000002b097
- (void)setUserMetadataDictionary:(id)arg1;	// IMP=0x001000000002b03f
- (id)userMetadataDictionary;	// IMP=0x001000000002af57
- (void)setSystemMetadataDictionary:(id)arg1;	// IMP=0x001000000002aeff
- (id)systemMetadataDictionary;	// IMP=0x001000000002ae17
- (id)init;	// IMP=0x001000000002ad9e

@end

