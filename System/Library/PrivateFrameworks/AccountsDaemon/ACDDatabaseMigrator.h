//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSPersistentStoreCoordinator, NSURL;

__attribute__((visibility("hidden")))
@interface ACDDatabaseMigrator : NSObject
{
    NSManagedObjectContext *_migrationContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_privateCoordinator;	// 16 = 0x10
    NSURL *_databaseURL;	// 24 = 0x18
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 32 = 0x20
    NSDictionary *_storeOptions;	// 40 = 0x28
}

+ (id)new;	// IMP=0x006000000005f167
- (void).cxx_destruct;	// IMP=0x000000000006183d
@property(readonly, copy, nonatomic) NSDictionary *storeOptions; // @synthesize storeOptions=_storeOptions;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2;	// IMP=0x0000000000061267
- (long long)_versionForModel:(id)arg1;	// IMP=0x00000000000611f6
- (id)_compatibleModelForStoreAtURL:(id)arg1;	// IMP=0x0000000000060d19
- (id)_setUpContextForMigration;	// IMP=0x0000000000060a1a
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1;	// IMP=0x00000000000607f5
- (id)_fetchAllDataclassEntitles;	// IMP=0x00000000000605f0
- (void)_migrateNameAttributeOfDataclassEntities;	// IMP=0x0000000000060464
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1;	// IMP=0x00000000000600c7
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1;	// IMP=0x000000000005fca1
- (_Bool)runReturningError:(id *)arg1;	// IMP=0x000000000005f274
- (id)initForDatabaseAtURL:(id)arg1 persistentStoreCoordinator:(id)arg2 storeOptions:(id)arg3;	// IMP=0x000000000005f1aa
- (id)init;	// IMP=0x000000000005f17f

@end

