//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MPMediaLibraryEntityTranslator : NSObject
{
    NSMutableDictionary *_propertiesToTranslators;	// 8 = 0x8
    NSMutableDictionary *_relationshipsToTranslators;	// 16 = 0x10
    _Bool _transient;	// 24 = 0x18
    Class _MPModelClass;	// 32 = 0x20
    void *_entityClass;	// 40 = 0x28
    CDUnknownBlockType _allowedItemPredicatesBlock;	// 48 = 0x30
    CDUnknownBlockType _entityQueryBlock;	// 56 = 0x38
}

+ (id)translatorForTransientMPModelClass:(Class)arg1;	// IMP=0x00600000002bea56
+ (id)translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(void *)arg2;	// IMP=0x00600000002bea3b
+ (id)translatorForMPModelClass:(Class)arg1;	// IMP=0x00600000002be9f0
+ (id)_translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(void *)arg2 create:(_Bool)arg3 transient:(_Bool)arg4;	// IMP=0x00600000002be5d2
- (void).cxx_destruct;	// IMP=0x00000000002ba255
@property(copy, nonatomic) CDUnknownBlockType entityQueryBlock; // @synthesize entityQueryBlock=_entityQueryBlock;
@property(copy, nonatomic) CDUnknownBlockType allowedItemPredicatesBlock; // @synthesize allowedItemPredicatesBlock=_allowedItemPredicatesBlock;
@property(readonly, nonatomic) void *entityClass; // @synthesize entityClass=_entityClass;
@property(readonly, nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
@property(readonly, nonatomic) Class MPModelClass; // @synthesize MPModelClass=_MPModelClass;
- (vector_2194507e)_MLCorePropertiesForPropertySet:(id)arg1 withForeignPropertyBase:(void *)arg2;	// IMP=0x00000000002b9506
- (id)_objectForPropertySet:(id)arg1 entityClass:(void *)arg2 propertyCache:(const void *)arg3 baseTranslator:(id)arg4 prependKeyPath:(id)arg5 context:(id)arg6;	// IMP=0x00000000002b90f7
- (id)_valueForKeyPath:(id)arg1 forPropertyCache:(const void *)arg2 context:(id)arg3;	// IMP=0x00000000002b8ce4
- (shared_ptr_66289562)_propertyMapForKeyPath:(id)arg1 includePropertiesToSort:(_Bool)arg2;	// IMP=0x00000000002b82d2
- (void *)_propertyForKeyPath:(id)arg1;	// IMP=0x00000000002b7d31
- (id)_propertyTranslatorForKeyPath:(id)arg1;	// IMP=0x00000000002b7b75
- (unordered_map_f010a342)propertiesToFetchForPropertyKey:(id)arg1;	// IMP=0x00000000002b78ca
- (Class)classForRelationshipKey:(id)arg1;	// IMP=0x00000000002b7862
- (vector_05d2ab2a)MLCorePredicateForModelPropertyFilters:(id)arg1;	// IMP=0x00000000002b6dbd
- (vector_9ebba6ab)MLCoreSortDescriptorsForModelSortDescriptors:(id)arg1;	// IMP=0x00000000002b61c7
- (vector_2194507e)MLCorePropertiesForPropertySet:(id)arg1;	// IMP=0x00000000002b61a5
- (shared_ptr_889ae36a)propertiesQueryForPropertySet:(id)arg1 scopedContainers:(id)arg2 allowedItemIdentifiers:(id)arg3 view:(id)arg4;	// IMP=0x00000000002b5a69
- (shared_ptr_e8455ceb)entityQueryForPropertySet:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3 view:(id)arg4;	// IMP=0x00000000002b431b
- (id)identifiersForPropertyCache:(const void *)arg1 context:(id)arg2;	// IMP=0x00000000002b42ec
- (id)objectForPropertySet:(id)arg1 entityClass:(void *)arg2 propertyCache:(const void *)arg3 context:(id)arg4;	// IMP=0x00000000002b42b6
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 transient:(_Bool)arg3 usingForeignPropertyBase:(void *)arg4 relationshipValidationProperties:(const void *)arg5 isValidRelationshipHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002b412d
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 transient:(_Bool)arg3 usingForeignPropertyBase:(void *)arg4;	// IMP=0x00000000002b401f
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 usingForeignPropertyBase:(void *)arg3;	// IMP=0x00000000002b4007
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const void *)arg2 propertiesToSort:(const void *)arg3 sortTransformer:(CDUnknownBlockType)arg4 filterTransformer:(CDUnknownBlockType)arg5 valueTransformer:(CDUnknownBlockType)arg6;	// IMP=0x00000000002b3c12
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const void *)arg2 propertiesToSort:(const void *)arg3 sortTransformer:(CDUnknownBlockType)arg4 valueTransformer:(CDUnknownBlockType)arg5;	// IMP=0x00000000002b3bf6
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const void *)arg2 valueTransformer:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b3af9
- (void)mapPropertyKey:(id)arg1 toMLProperty:(void *)arg2;	// IMP=0x00000000002b3a11
- (void)mapIdentifierMLProperties:(const void *)arg1 identifierCreationBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b3929

@end

