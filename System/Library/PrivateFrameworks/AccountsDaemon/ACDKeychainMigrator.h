//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface ACDKeychainMigrator : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000003c917
- (void).cxx_destruct;	// IMP=0x000000000003e1be
- (id)_keychainItemFromAttributesArray:(id)arg1;	// IMP=0x000000000003dfce
- (id)_keychainItemFromAttributes:(id)arg1;	// IMP=0x000000000003df4a
- (id)_keychainItemsForAccount:(id)arg1 accountTypeIdentifiers:(id)arg2;	// IMP=0x000000000003db1f
- (id)keychainItemsForAccounts:(id)arg1;	// IMP=0x000000000003d539
- (id)allKeychainItems;	// IMP=0x000000000003d4d6
- (void)_migrateUUIDKeychainItems:(id)arg1;	// IMP=0x000000000003d231
- (void)_validateKeychainItemClass:(id)arg1;	// IMP=0x000000000003cdc6
- (_Bool)migrateKeychainItem:(id)arg1 toKeybag:(_Bool)arg2;	// IMP=0x000000000003cbdd
- (void)migrateAllKeychainItems;	// IMP=0x000000000003c9f2
- (id)init;	// IMP=0x000000000003c99c

@end

