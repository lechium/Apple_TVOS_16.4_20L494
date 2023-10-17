//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLCredentialStorage.h>

@class NSArray, NSDictionary;

@interface NSURLCredentialStorage (SafariCoreExtras)
+ (_Bool)safari_test_saveCredential:(id)arg1 withArbitraryProtectionSpace:(id)arg2;	// IMP=0x002000000002c867
+ (id)safari_test_addTestingPasskeyItemWithCredentialID:(id)arg1;	// IMP=0x002000000002c6fa
+ (void)safari_test_purgeKeychainItemsFromTestingAccessGroups;	// IMP=0x002000000002c26d
+ (void)safari_test_setUseTestingAccessGroups:(_Bool)arg1;	// IMP=0x002000000002c151
- (void)safari_deleteSidecarOfType:(long long)arg1 forUser:(id)arg2 htmlFormProtectionSpace:(id)arg3;	// IMP=0x001000000002bf61
- (void)_safari_setSidecarDictionary:(id)arg1 type:(unsigned long long)arg2 credential:(id)arg3 htmlFormProtectionSpace:(id)arg4;	// IMP=0x001000000002b819
- (void)safari_setSidecar:(id)arg1 credential:(id)arg2 htmlFormProtectionSpace:(id)arg3;	// IMP=0x001000000002b639
- (id)_safari_sidecarDictionaryFromData:(id)arg1 user:(id)arg2 domain:(id)arg3;	// IMP=0x001000000002b514
- (id)_safari_dataFromSidecarDictionary:(id)arg1 user:(id)arg2 domain:(id)arg3;	// IMP=0x001000000002b39f
- (id)_safari_protectionSpaceFromKeychainDictionary:(id)arg1;	// IMP=0x001000000002b277
- (id)_safari_allPersonalSidecarEntriesInPersonalKeychain;	// IMP=0x001000000002b263
@property(readonly, nonatomic) NSArray *safari_allPersonalSidecarsInPersonalKeychain;
- (id)_safari_allSidecarItemsOfType:(long long)arg1;	// IMP=0x001000000002ac64
- (void)_safari_addKeychainItem:(id)arg1 ofType:(long long)arg2 toSidecarDictionary:(id)arg3;	// IMP=0x001000000002ab45
- (id)_safari_getKeychainItemForSidecar:(id)arg1 ofType:(long long)arg2;	// IMP=0x001000000002a78e
- (id)_safari_getSidecarKeychainItemsByTypeForPasskeyOnSavedAccount:(id)arg1;	// IMP=0x001000000002a662
- (id)_safari_getSidecarKeychainItemsByTypeForPasswordOnSavedAccount:(id)arg1;	// IMP=0x001000000002a536
- (void)_safari_migrateKeychainItemsWithInvalidAuthenticationTypes;	// IMP=0x0010000000029292
- (void)safari_migrateKeychainItemsWithInvalidAuthenticationTypesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000029129
- (id)_safari_allCredentialItemsOfType:(long long)arg1;	// IMP=0x0010000000028d3b
@property(readonly, nonatomic) NSArray *safari_allPasswordCredentialItemsInPersonalKeychain;
@property(readonly, nonatomic) NSDictionary *safari_allSafariCredentials;
- (void)safari_setDefaultCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;	// IMP=0x0010000000028330
- (id)_formattedLabelWithHost:(id)arg1 user:(id)arg2;	// IMP=0x0010000000028298
- (void)safari_deleteSynchronizableCredentialWithEmptyServerHost:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;	// IMP=0x0010000000027f15
- (_Bool)safari_setSynchronizableCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;	// IMP=0x0010000000027883
- (id)_safari_getCredentialItemFromKeychainForPasskeyInSavedAccount:(id)arg1;	// IMP=0x001000000002751d
- (id)_safari_getCredentialItemsFromKeychainForPasswordInSavedAccount:(id)arg1;	// IMP=0x0010000000026ff5
- (_Bool)_safari_moveKeychainItemsWithPersistentIdentifiers:(id)arg1 toAccessGroup:(id)arg2;	// IMP=0x0010000000026c32
@end
