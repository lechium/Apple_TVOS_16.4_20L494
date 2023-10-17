//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface MCMEntitlements : NSObject
{
    NSDictionary *_sanitizedLookup;	// 8 = 0x8
    NSSet *_sanitizedWipe;	// 16 = 0x10
    _Bool _isSimulatorTestClient;	// 24 = 0x18
    _Bool _privileged;	// 25 = 0x19
    NSDictionary *_rawEntitlements;	// 32 = 0x20
    NSDictionary *_lookup;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
}

+ (id)entitlementForGroupContainerClass:(unsigned long long)arg1;	// IMP=0x0010000000092277
+ (id)systemGroupIdentifiersForIdentifier:(id)arg1 entitlements:(id)arg2;	// IMP=0x0010000000092118
+ (id)appGroupIdentifiersForIdentifier:(id)arg1 entitlements:(id)arg2;	// IMP=0x00100000000920cc
+ (id)copyGroupEntitlementForIdentifier:(id)arg1 entitlements:(id)arg2 groupKey:(id)arg3;	// IMP=0x0010000000091d10
- (void).cxx_destruct;	// IMP=0x0000000000091c27
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool privileged; // @synthesize privileged=_privileged;
@property(retain, nonatomic) NSDictionary *rawEntitlements; // @synthesize rawEntitlements=_rawEntitlements;
- (id)_setOfStringsFromArray:(id)arg1;	// IMP=0x0000000000091a46
- (id)copyEntitlementsDictionaryByAddingGroupContainerOfClass:(unsigned long long)arg1 groupIdentifier:(id)arg2;	// IMP=0x00000000000917ec
- (id)copyEntitlementsDictionaryByRemovingGroupContainerOfClass:(unsigned long long)arg1 groupIdentifier:(id)arg2;	// IMP=0x0000000000091601
- (void)prune;	// IMP=0x00000000000914f5
- (_Bool)isAllowedToChangeReferences;	// IMP=0x00000000000914b8
- (_Bool)isAllowedToReadReferences;	// IMP=0x000000000009144c
- (_Bool)isAllowedToAccessUserAssets;	// IMP=0x00000000000913e0
- (_Bool)isAllowedToStageSharedContent;	// IMP=0x0000000000091374
- (_Bool)isAllowedToStartUserDataMigration;	// IMP=0x0000000000091337
- (_Bool)isAllowedToStartDataMigration;	// IMP=0x00000000000912cb
- (_Bool)isAllowedToRestoreContainer;	// IMP=0x000000000009128e
- (_Bool)isAllowedToSetDataProtection;	// IMP=0x0000000000091251
- (_Bool)isAllowedToAccessCodesignMapping;	// IMP=0x0000000000091214
- (_Bool)isAllowedToTest;	// IMP=0x00000000000911d7
- (_Bool)isAllowedToDelete;	// IMP=0x000000000009119a
- (_Bool)isAllowedToRegenerateDirectoryUUIDs;	// IMP=0x000000000009115d
- (_Bool)isAllowedToRecreateContainerStructure;	// IMP=0x0000000000091120
- (_Bool)isAllowedToAccessInfoMetadata;	// IMP=0x00000000000910e3
- (_Bool)isAllowedToReplaceContainers;	// IMP=0x00000000000910a6
- (_Bool)isAllowedToWipePlugInDataContainerWithIdentifier:(id)arg1;	// IMP=0x0000000000090de1
- (_Bool)isAllowedToWipeAnyDataContainer;	// IMP=0x0000000000090d75
- (_Bool)isAllowedToControlCaches;	// IMP=0x0000000000090d09
- (id)containerRequiredIdentifier;	// IMP=0x0000000000090bab
- (id)systemGroupIdentifiers;	// IMP=0x0000000000090af2
- (id)appGroupIdentifiers;	// IMP=0x0000000000090a39
- (int)intendedDataProtectionClass;	// IMP=0x000000000009068a
- (_Bool)isOwnerOfContainerWithClass:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x000000000009059b
- (id)lookupForContainerClass:(unsigned long long)arg1;	// IMP=0x0000000000090154
- (_Bool)isAllowedToLookupGroupContainersOfClass:(unsigned long long)arg1 ownedByIdentifier:(id)arg2;	// IMP=0x0000000000090032
- (_Bool)isAllowedToLookupContainerIdentity:(id)arg1;	// IMP=0x000000000008fdc1
- (_Bool)isAllowedToLookupAllContainersOfClass:(unsigned long long)arg1;	// IMP=0x000000000008fd09
- (_Bool)isEntitledForLookupWithClass:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x000000000008fae9
@property(readonly, nonatomic) NSDictionary *lookup; // @synthesize lookup=_lookup;
@property(readonly, nonatomic) _Bool canReadWriteReferences;
@property(readonly, nonatomic) _Bool canReadReferences;
@property(readonly, nonatomic) _Bool requestsNoContainer;
@property(readonly, nonatomic) _Bool canDeleteContainerContent;
@property(readonly, nonatomic) _Bool canPerformDataMigration;
@property(readonly, nonatomic) _Bool canStageSharedContent;
@property(readonly, nonatomic) _Bool canRepair;
@property(readonly, nonatomic) _Bool canControlCaches;
@property(readonly, nonatomic) _Bool canManageUserManagedAssets;
@property(readonly, nonatomic) _Bool canDelete;
@property(readonly, nonatomic) _Bool otherIDLookup;
@property(readonly, nonatomic) _Bool allowed;
@property(readonly, nonatomic) _Bool hasSystemContainer;
@property(readonly, nonatomic) _Bool testabilityAllowed;
@property(readonly, nonatomic) _Bool proxyAllowed;
- (id)initForPrivilegedAnonymous;	// IMP=0x000000000008e9f5
- (id)initWithEntitlements:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x000000000008e904

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

