//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (MCUtilities)
- (void)MCSanitizeRestrictions;	// IMP=0x0090000000008090
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;	// IMP=0x0090000000007a06
- (void)MCFilterRestrictionPayloadKeys:(id)arg1;	// IMP=0x00900000000077e2
- (void)MCSetUnionSetting:(id)arg1 values:(id)arg2;	// IMP=0x00900000000074cd
- (void)MCSetIntersectionSetting:(id)arg1 values:(id)arg2;	// IMP=0x00900000000071b8
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;	// IMP=0x0090000000006ea3
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;	// IMP=0x0090000000006b8e
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;	// IMP=0x0090000000006846
- (void)MCDeleteBoolRestriction:(id)arg1;	// IMP=0x0090000000006795
- (void)MCSetBoolRestriction:(id)arg1 value:(_Bool)arg2;	// IMP=0x00900000000064c6
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x00900000000064ad
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;	// IMP=0x0090000000006216
- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;	// IMP=0x0090000000005f7a
- (id)MCMutableDictionaryContainingValidatedKeysAndClasses:(id)arg1 removeKeys:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x00900000000c90ee
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 outError:(id *)arg4;	// IMP=0x00900000000c90c9
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 allowZeroLengthString:(_Bool)arg4 outError:(id *)arg5;	// IMP=0x00900000000c8d86
- (id)MCValidateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 outError:(id *)arg4;	// IMP=0x00900000000c8c73
- (id)MCValidateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x00900000000c8b3e
@end

