//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (HealthKit)
+ (_Bool)hk_acceptsMetadataValue:(id)arg1 allowPrivateMetadata:(_Bool)arg2;	// IMP=0x008000000000d6ff
+ (id)hk_acceptedPublicMetadataValueClasses;	// IMP=0x00800000000a8f87
+ (id)hk_acceptedMetadataValueClasses;	// IMP=0x008000000000d86d
+ (id)hk_secureCodingClasses;	// IMP=0x008000000001d6b0
+ (void)_addDerivedPublicKeyIfNecessaryForPrivateKey:(id)arg1 mutableDictionary:(id)arg2;	// IMP=0x00800000000a8d96
+ (id)hk_secureAttachmentCodingClasses;	// IMP=0x00800000001f22a8
+ (id)hk_acceptedAttachmentMetadataValueClasses;	// IMP=0x00800000001f21f9
- (id)hk_map:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a51a1
- (id)hk_filter:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a505d
- (id)hk_filteredDictionaryForKeys:(id)arg1;	// IMP=0x00100000000a4f12
- (id)hk_filterKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a4d2a
- (id)hk_allValuesBySortedKeys;	// IMP=0x00100000000a4c81
- (id)hk_sortedKeys;	// IMP=0x00100000000a4c2a
- (id)hk_dictionaryByAddingEntriesFromDictionary:(id)arg1;	// IMP=0x00100000000a4baa
- (_Bool)_hk_validateMetadataValueContent:(id)arg1 forKey:(id)arg2 applicationSDKVersion:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x00100000000aa94b
- (_Bool)_hk_validateMetadataSydneyValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000aa745
- (_Bool)_hk_validateMetadataSkyValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000aa54a
- (_Bool)_hk_validateMetadataAzulValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000aa0f1
- (_Bool)_hk_validateMetadataYukonValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a9b8a
- (_Bool)_hk_validateMetadataBaseValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a9054
- (id)_copyWithoutPrivateMetadataKeysShouldDerivePublicKeys:(_Bool)arg1;	// IMP=0x00100000000a8b69
- (id)hk_copySanitizedForPublicClient;	// IMP=0x00100000000a8b4a
- (id)hk_copyWithoutPrivateMetadataKeys;	// IMP=0x00100000000a8b2e
- (_Bool)hk_validateMetadataKeysAndValuesAllowingPrivateMetadataKeys:(_Bool)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00100000000a884c
- (_Bool)_hk_validateMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 forKey:(id)arg3 applicationSDKVersion:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x0010000000122cc1
- (_Bool)_hk_validateYukonMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 key:(id)arg3 error:(id *)arg4;	// IMP=0x001000000012281d
- (_Bool)_hk_validateBaseMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 key:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000122655
- (_Bool)hk_validateMetadataKeysAndValuesForWorkoutEvent:(id)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0010000000122351
- (_Bool)hk_validateAttachmentMetadataKeysAndValuesWithError:(id *)arg1;	// IMP=0x00100000001f1f89
@end

