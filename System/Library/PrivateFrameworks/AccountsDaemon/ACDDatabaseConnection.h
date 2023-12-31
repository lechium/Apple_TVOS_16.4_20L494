//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSManagedObjectContext, NSNumber, NSPersistentStoreCoordinator;
@protocol ACDDatabaseConnectionDelegate, NSObject;

__attribute__((visibility("hidden")))
@interface ACDDatabaseConnection : NSObject
{
    id <NSObject> _managedObjectContextDidSaveObserver;	// 8 = 0x8
    NSCache *_cache;	// 16 = 0x10
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 24 = 0x18
    NSManagedObjectContext *_managedObjectContext;	// 32 = 0x20
    id <ACDDatabaseConnectionDelegate> _delegate;	// 40 = 0x28
}

+ (id)new;	// IMP=0x0060000000057679
- (void).cxx_destruct;	// IMP=0x000000000005a1cd
@property(nonatomic) __weak id <ACDDatabaseConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1;	// IMP=0x000000000005a09e
- (void)_endObservingManagedObjectContextDidSaveNotifications;	// IMP=0x0000000000059fdc
- (void)_managedObjectContextDidSave:(id)arg1;	// IMP=0x0000000000059c4e
- (void)_beginObservingManagedObjectContextDidSaveNotifications;	// IMP=0x0000000000059a8a
- (id)_managedObjectModificationDescription:(id)arg1;	// IMP=0x00000000000598e1
- (id)_managedObjectContextModificationDescription;	// IMP=0x00000000000594cd
- (void)_traceDatabaseEvents;	// IMP=0x0000000000059164
- (void)_handleManagedObjectContextError:(id)arg1;	// IMP=0x00000000000590bc
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1;	// IMP=0x0000000000058f35
- (void)rollback;	// IMP=0x0000000000058edc
- (_Bool)saveWithError:(id *)arg1 rollbackOnFailure:(_Bool)arg2;	// IMP=0x0000000000058c8b
- (_Bool)saveWithError:(id *)arg1;	// IMP=0x0000000000058c77
- (id)managedObjectIDForURI:(id)arg1;	// IMP=0x0000000000058bd6
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;	// IMP=0x0000000000058a98
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;	// IMP=0x0000000000058a11
- (void)deleteObject:(id)arg1;	// IMP=0x0000000000058991
- (id)insertNewObjectForEntityForName:(id)arg1;	// IMP=0x00000000000588f2
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;	// IMP=0x00000000000586db
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;	// IMP=0x0000000000058566
- (id)existingObjectWithURI:(id)arg1;	// IMP=0x0000000000058299
- (id)objectForObjectURI:(id)arg1;	// IMP=0x000000000005819d
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 prefetchKeypaths:(id)arg4;	// IMP=0x0000000000057c74
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;	// IMP=0x0000000000057c5f
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;	// IMP=0x0000000000057c47
- (id)fetchObjectsForEntityNamed:(id)arg1;	// IMP=0x0000000000057c2d
@property(retain, nonatomic) NSNumber *keychainVersion;
@property(retain, nonatomic) NSNumber *version;
- (id)_persistentStore;	// IMP=0x00000000000578d0
- (id)_managedObjectModel;	// IMP=0x00000000000578ba
- (void)dealloc;	// IMP=0x000000000005777a
- (id)initWithPersistentStoreCoordinator:(id)arg1;	// IMP=0x00000000000576bc
- (id)init;	// IMP=0x0000000000057691

@end

