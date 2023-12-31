//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSNumber, NSString;

@interface NSDictionary (AppleMediaServices_EncryptionResult)
+ (id)ams_dictionaryWithEncryptionResult:(CDStruct_0f015c83)arg1;	// IMP=0x00100000003726b8
- (CDStruct_0f015c83)ams_encryptionResult;	// IMP=0x0010000000372769
@property(readonly, nonatomic) NSString *hashedDescription;
@property(readonly, nonatomic) NSString *ams_secureToken;
@property(readonly, nonatomic) NSDictionary *ams_privacyAcknowledgement;
@property(readonly, nonatomic) NSString *ams_lastName;
@property(readonly, nonatomic) _Bool ams_isManagedAppleID;
@property(readonly, nonatomic) NSString *ams_firstName;
@property(readonly, nonatomic) long long ams_errorCode;
@property(readonly, nonatomic) NSNumber *ams_DSID;
@property(readonly, nonatomic) NSString *ams_creditsString;
@property(readonly, nonatomic) NSString *ams_altDSID;
@property(readonly, nonatomic) NSString *ams_username;
@property(readonly, nonatomic) NSDictionary *ams_accountFlags;
- (id)ams_dictionaryRemovingKeys:(id)arg1;	// IMP=0x0010000000373ffe
- (id)ams_objectForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x0010000000373f98
- (id)ams_objectForCaseInsensitiveKey:(id)arg1;	// IMP=0x0010000000373e07
- (id)ams_mapWithTransform:(CDUnknownBlockType)arg1;	// IMP=0x0010000000373c63
- (id)ams_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000373c13
- (id)ams_firstKeyObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000373a38
- (id)ams_firstKeyPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000003739e8
- (id)ams_filterUsingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000003738a4
- (id)ams_dictionaryByAddingEntriesFromDictionary:(id)arg1;	// IMP=0x0010000000373824
- (id)ams_componentsJoinedByString:(id)arg1;	// IMP=0x00100000003736ad
- (id)ams_arrayUsingTransform:(CDUnknownBlockType)arg1;	// IMP=0x0010000000373595
- (id)ams_sanitizedForSecureCoding;	// IMP=0x00100000003733a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

