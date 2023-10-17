//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FSNode, LSBundleProxy, LSPropertyList, NSArray, NSDate, NSDictionary, NSSet, NSString, NSURL, _LSLazyPropertyList, _LSLocalizedStringRecord;

@interface LSBundleRecord
{
    CDStruct_4c969caf *_auditToken;	// 8 = 0x8
    id _cachedDataContainerURL;	// 16 = 0x10
    FSNode *_node;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000071563
+ (id)_propertyClasses;	// IMP=0x0040000000070a0d
+ (id)_bundleRecordForAuditToken:(CDStruct_4c969caf)arg1 checkNSBundleMainBundle:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x004000000006e531
+ (id)bundleRecordForAuditToken:(CDStruct_4c969caf)arg1 error:(id *)arg2;	// IMP=0x004000000006e51a
+ (id)bundleRecordWithApplicationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x004000000006e1d4
+ (id)bundleRecordWithBundleIdentifier:(id)arg1 allowPlaceholder:(_Bool)arg2 error:(id *)arg3;	// IMP=0x004000000006dfea
+ (id)coreTypesBundleRecord;	// IMP=0x004000000006dfd1
+ (id)bundleRecordForCurrentProcess;	// IMP=0x004000000006dc62
- (void).cxx_destruct;	// IMP=0x0000000000071da0
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) FSNode *_node; // @synthesize _node;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000071c97
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000716a4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007156b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000071473
- (unsigned long long)hash;	// IMP=0x000000000007141b
- (id)debugDescription;	// IMP=0x00000000000712fa
- (id)description;	// IMP=0x000000000007123f
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000070dc2
- (id)_initWithContext:(struct LSContext *)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData *)arg2 length:(unsigned long long)arg3;	// IMP=0x0000000000070ade
- (id)_localizedShort:(_Bool)arg1 nameWithContext:(struct LSContext *)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 bundleData:(const struct LSBundleBaseData *)arg5;	// IMP=0x00000000000709b2
- (void)_LSRecord_resolve__localizedShortName;	// IMP=0x0000000000070997
@property(readonly) _LSLocalizedStringRecord *_localizedShortName;
- (id)_localizedShortNameWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000070956
- (void)_LSRecord_resolve__localizedName;	// IMP=0x000000000007093b
@property(readonly) _LSLocalizedStringRecord *_localizedName;
- (id)_localizedNameWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x00000000000708fd
@property(readonly) NSString *_fallbackLocalizedName;
@property(readonly) NSDictionary *groupContainerURLs;
- (id)_getGroupContainersCreatingIfNecessary:(_Bool)arg1 checkNonContainerizedBundles:(_Bool)arg2;	// IMP=0x00000000000705ab
- (id)_cachedDataContainerURL;	// IMP=0x0000000000070454
- (void)_LSRecord_resolve__dataContainerURLFromDatabase;	// IMP=0x0000000000070439
@property(readonly) NSURL *_dataContainerURLFromDatabase;
- (id)_dataContainerURLFromDatabaseWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x00000000000703bf
- (void)_LSRecord_resolve__baseFlags;	// IMP=0x00000000000703ad
@property(readonly) struct LSBundleBaseFlags _baseFlags;
- (struct LSBundleBaseFlags)_baseFlagsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000007038f
- (void)_LSRecord_resolve__rawGroupContainerURLs;	// IMP=0x0000000000070374
@property(readonly) _LSLazyPropertyList *_rawGroupContainerURLs;
- (id)_rawGroupContainerURLsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000070343
@property(readonly) unsigned long long _containerClass;
@property(readonly) _Bool _containerized;
@property(readonly) _Bool _usesSystemPersona;
- (void)_LSRecord_resolve__profileValidationState;	// IMP=0x0000000000070319
@property(readonly) unsigned char _profileValidationState;
- (unsigned char)_profileValidationStateWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x00000000000702fa
@property(readonly, nonatomic) LSBundleRecord *_realRecord;
- (void)_LSRecord_resolve__bundleVersion;	// IMP=0x00000000000702ad
@property(readonly, nonatomic) struct LSVersionNumber _bundleVersion;
- (struct LSVersionNumber)_bundleVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000070272
@property(readonly, nonatomic) const CDStruct_4c969caf *_auditToken;
- (id)_initWithNode:(id)arg1 bundleIdentifier:(id)arg2 context:(struct LSContext *)arg3 tableID:(unsigned int)arg4 unitID:(unsigned int)arg5 bundleBaseData:(const struct LSBundleBaseData *)arg6 error:(id *)arg7;	// IMP=0x000000000006fdc8
- (void)_LSRecord_resolve_isAppleInternal;	// IMP=0x000000000006fdb6
@property(readonly) _Bool isAppleInternal;
- (_Bool)isAppleInternalWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006fd96
- (void)_LSRecord_resolve_isLinkEnabled;	// IMP=0x000000000006fd84
@property(readonly) _Bool isLinkEnabled;
- (_Bool)isLinkEnabledWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006fd61
@property(readonly) NSSet *serviceRecords;
- (void)_LSRecord_resolve_importedTypeRecords;	// IMP=0x000000000006fd2d
@property(readonly) NSSet *importedTypeRecords;
- (id)importedTypeRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006fcef
- (void)_LSRecord_resolve_exportedTypeRecords;	// IMP=0x000000000006fcd4
@property(readonly) NSSet *exportedTypeRecords;
- (id)exportedTypeRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006fc93
- (id)exported:(_Bool)arg1 typesWithContext:(struct LSContext *)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 unitBytes:(const struct LSBundleData *)arg5;	// IMP=0x000000000006fac3
- (void)_LSRecord_resolve_claimRecords;	// IMP=0x000000000006faa8
@property(readonly) NSSet *claimRecords;
- (id)claimRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006f8e9
@property(readonly, getter=wasBuiltWithThreadSanitizer) _Bool builtWithThreadSanitizer;
- (void)_LSRecord_resolve_platform;	// IMP=0x000000000006f8bf
@property(readonly) unsigned int platform;
- (unsigned int)platformWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f8a4
- (void)_LSRecord_resolve_SDKVersion;	// IMP=0x000000000006f889
@property(readonly) NSString *SDKVersion;
- (id)SDKVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f81f
- (void)_LSRecord_resolve_machOUUIDs;	// IMP=0x000000000006f804
@property(readonly) NSArray *machOUUIDs;
- (id)machOUUIDsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f556
- (void)_LSRecord_resolve_registrationDate;	// IMP=0x000000000006f53b
@property(readonly) NSDate *registrationDate;
- (id)registrationDateWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f4f2
- (void)_LSRecord_resolve_developerType;	// IMP=0x000000000006f4e0
@property(readonly) BOOL developerType;
- (BOOL)developerTypeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x000000000006f2ec
@property(readonly) NSString *bundleVersion;
- (void)_LSRecord_resolve_executableURL;	// IMP=0x000000000006f264
@property(readonly) NSURL *executableURL;
- (id)executableURLWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f117
@property(readonly) NSURL *URL;
- (void)_LSRecord_resolve_teamIdentifier;	// IMP=0x000000000006f0df
@property(readonly) NSString *teamIdentifier;
- (id)teamIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006f099
@property(readonly) NSString *applicationIdentifier;
- (void)dealloc;	// IMP=0x000000000006efef
- (void)_LSRecord_resolve_infoDictionary;	// IMP=0x0000000000071e13
@property(readonly) LSPropertyList *infoDictionary;
- (id)infoDictionaryWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000071de2
- (void)_LSRecord_resolve_entitlements;	// IMP=0x0000000000072163
@property(readonly) LSPropertyList *entitlements;
- (id)entitlementsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x00000000000720ab
- (id)getGroupContainersCreatingIfNecessary:(_Bool)arg1;	// IMP=0x0000000000072330
- (_Bool)getDataContainerURL:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000000721b8
@property(readonly) NSURL *dataContainerURL;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2;	// IMP=0x00000000000726d0
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1;	// IMP=0x000000000007263a
- (id)localizedShortNameWithPreferredLocalizations:(id)arg1;	// IMP=0x0000000000072597
- (id)localizedNameWithPreferredLocalizations:(id)arg1;	// IMP=0x00000000000724f4
@property(readonly) NSString *localizedShortName;
@property(readonly) NSString *localizedName;
@property(readonly) unsigned long long compatibilityState;
- (void)_LSRecord_resolve_codeSignatureVersion;	// IMP=0x000000000007288e
@property(readonly) unsigned int codeSignatureVersion;
- (unsigned int)codeSignatureVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000072870
@property(readonly, getter=isFreeProfileValidated) _Bool freeProfileValidated;
@property(readonly, getter=isUPPValidated) _Bool UPPValidated;
@property(readonly, getter=isProfileValidated) _Bool profileValidated;
- (void)_LSRecord_resolve_signerIdentity;	// IMP=0x000000000007280d
@property(readonly) NSString *signerIdentity;
- (id)signerIdentityWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x00000000000727c7
- (void)_LSRecord_resolve_signerOrganization;	// IMP=0x00000000000727ac
@property(readonly) NSString *signerOrganization;
- (id)signerOrganizationWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000072766
@property(readonly) NSArray *managedPersonas;
@property(readonly) NSString *accentColorName;
@property(readonly) NSArray *UIBackgroundModes;
@property(readonly) _Bool supportsNowPlaying;
@property(readonly) NSArray *WKBackgroundModes;
@property(readonly) NSArray *supportedIntentMediaCategories;
@property(readonly) NSArray *intentsRestrictedWhileProtectedDataUnavailable;
@property(readonly) NSArray *intentsRestrictedWhileLocked;
@property(readonly) NSArray *supportedIntents;
- (void)_LSRecord_resolve_intentDefinitionURLs;	// IMP=0x0000000000072bb4
@property(readonly) NSDictionary *intentDefinitionURLs;
- (id)intentDefinitionURLsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x00000000000729de

// Remaining properties
@property(readonly, nonatomic) LSBundleProxy *compatibilityObject; // @dynamic compatibilityObject;

@end

