//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMSQLiteDB, MCMUserIdentityCache;
@protocol MCMChildParentMapCache, MCMManagedPath, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMCodeSigningMapping : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <MCMChildParentMapCache> _childParentMapCache;	// 16 = 0x10
    MCMSQLiteDB *_codeSigningMappingDB;	// 24 = 0x18
    MCMUserIdentityCache *_userIdentityCache;	// 32 = 0x20
    id <MCMManagedPath> _library;	// 40 = 0x28
}

+ (id)_moveDBIfNeededFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x006000000006396f
+ (id)codeSignMappingWithError:(id *)arg1;	// IMP=0x006000000006341c
- (void).cxx_destruct;	// IMP=0x000000000005ff14
@property(readonly, nonatomic) id <MCMManagedPath> library; // @synthesize library=_library;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(retain, nonatomic) MCMSQLiteDB *codeSigningMappingDB; // @synthesize codeSigningMappingDB=_codeSigningMappingDB;
@property(readonly, nonatomic) id <MCMChildParentMapCache> childParentMapCache; // @synthesize childParentMapCache=_childParentMapCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_onQueue_removeGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005faa2
- (_Bool)_onQueue_addGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005f71a
- (_Bool)removeGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005f53c
- (_Bool)addGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005f35e
- (_Bool)_onqueue_enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000005f1dc
- (_Bool)enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000005eff9
- (_Bool)_onQueue_registerKernelProvidedReferencesForIdentifier:(id)arg1 withAppGroupContainers:(id)arg2 systemGroupContainers:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000000005e7df
- (_Bool)registerKernelProvidedReferencesForIdentifier:(id)arg1 withAppGroupContainers:(id)arg2 systemGroupContainers:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000000005e632
- (_Bool)_onQueue_removeAllAdvanceCopiesWithError:(id *)arg1;	// IMP=0x000000000005e587
- (_Bool)removeAllAdvanceCopiesWithError:(id *)arg1;	// IMP=0x000000000005e48f
- (id)_onQueue_removeReferenceForGroupIdentifiers:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x000000000005dd67
- (void)_onQueue_handleChangeFromOldGroupContainerIds:(id)arg1 toNewGroupContainerIds:(id)arg2 containerClass:(unsigned long long)arg3 reconcileHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005d985
- (id)_onQueue_copyReferenceCountSetForContainerClass:(unsigned long long)arg1;	// IMP=0x000000000005d80f
- (id)copyReferenceCountSetForContainerClass:(unsigned long long)arg1;	// IMP=0x000000000005d6e5
- (_Bool)invalidateCodeSigningInfoForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000005d5a8
- (_Bool)invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000005d42b
- (id)_onQueue_identifiersWithError:(id *)arg1;	// IMP=0x000000000005d374
- (id)identifiersWithError:(id *)arg1;	// IMP=0x000000000005d1c3
- (unsigned long long)invalidateCodeSigningInfoForAppsWithoutDataContainer;	// IMP=0x000000000005c811
- (id)entitlementsForIdentifier:(id)arg1;	// IMP=0x000000000005c232
- (id)getCodeSigningInfoForIdentifier:(id)arg1;	// IMP=0x000000000005c0b7
- (id)processCodeSigningInfo:(id)arg1 identifier:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005be08
- (id)processCallerRegisteredEntitlements:(id)arg1 identifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005b839
- (id)systemGroupIdentifiersForIdentifier:(id)arg1;	// IMP=0x000000000005b7be
- (id)appGroupIdentifiersForIdentifier:(id)arg1;	// IMP=0x000000000005b743
- (unsigned long long)dataContainerTypeForIdentifier:(id)arg1;	// IMP=0x000000000005b618
- (_Bool)identifierHasSystemContainer:(id)arg1;	// IMP=0x000000000005b5a9
- (_Bool)identifierHasCallerRegisteredEntitlements:(id)arg1;	// IMP=0x000000000005b47b
- (id)codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000005b305
- (id)removeCodeSigningDictionaryForIdentifier:(id)arg1;	// IMP=0x000000000005b17f
- (id)groupContainerIdentifiersAssociatedWithIdentifier:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x000000000005b0af
- (void)_onQueue_iterateGroupIdsWithKey:(id)arg1 fallBackKey:(id)arg2 forAllIdentifiersUsingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ae60
- (_Bool)_onQueue_invalidateCodeSigningInfoForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005ad95
- (id)_onQueue_invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1;	// IMP=0x000000000005acb5
- (_Bool)_onQueue_processCodeSigningInfo:(id)arg1 identifier:(id)arg2 options:(id)arg3 oldEntitlements:(id)arg4 error:(id *)arg5 reconcileHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000594d3
- (unsigned long long)_onQueue_dataContainerTypeForIdentifier:(id)arg1;	// IMP=0x00000000000592a5
- (_Bool)_onQueue_identifierHasCallerRegisteredEntitlements:(id)arg1;	// IMP=0x0000000000059077
- (id)_onQueue_codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000058e33
- (id)_entitlementsFromCodeSigningEntry:(id)arg1;	// IMP=0x0000000000058daf
- (id)_onQueue_entitlementsForIdentifier:(id)arg1;	// IMP=0x0000000000058cac
- (id)_codeSigningInfoForCodeSigningEntry:(id)arg1 externalRequest:(_Bool)arg2;	// IMP=0x0000000000058be4
- (id)_onQueue_codeSigningInfoForIdentifier:(id)arg1 externalRequest:(_Bool)arg2;	// IMP=0x000000000005897c
- (id)_onQueue_setCodeSigningDictionaryValues:(id)arg1 forIdentifiers:(id)arg2;	// IMP=0x0000000000058125
- (id)_readCodeSigningMappingFromDiskAtURL:(id)arg1;	// IMP=0x0000000000057ce8
- (void)performAllCodeSigningMigrationAndReconciliationWithContext:(id)arg1;	// IMP=0x0000000000057bd6
- (void)_onQueue_reconcileSystemContainersWithContext:(id)arg1;	// IMP=0x0000000000057413
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainerToMappingWithInfo:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3;	// IMP=0x0000000000056e17
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainersToMappingWithContainersLegacy:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x0000000000056296
- (void)migrateCachedCodeSigningInfoFromBundleContainersToMapping;	// IMP=0x00000000000560d3
- (void)_onQueue_migrateDataFromLegacyEntitlementsFileToCodeSigningFile;	// IMP=0x0000000000055912
- (void)_onQueue_migrateAppGroupIdsFromDataContainersToFileUsingContainers:(id)arg1;	// IMP=0x0000000000054dc4
- (void)migrateAppGroupIdsFromDataContainersToFile;	// IMP=0x000000000005453b
- (void)_onQueue_migrateFromMappingFileToDBIfNecessary;	// IMP=0x0000000000053f51
- (id)initWithUserIdentityCache:(id)arg1 queue:(id)arg2 mappingDB:(id)arg3 childParentMapCache:(id)arg4 library:(id)arg5;	// IMP=0x0000000000053db9

@end
