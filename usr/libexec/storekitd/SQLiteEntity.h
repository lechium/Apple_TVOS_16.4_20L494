//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface SQLiteEntity : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
}

+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 onConnection:(id)arg4;	// IMP=0x002000000000a730
+ (Class)memoryEntityClass;	// IMP=0x0010000000008dd0
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0010000000008dc8
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x0010000000008dc0
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x0010000000008db8
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x0010000000008db0
+ (id)foreignDatabaseColumnForProperty:(id)arg1;	// IMP=0x0010000000008da8
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x0010000000008ce5
+ (id)databaseTable;	// IMP=0x0010000000008cb3
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 onConnection:(id)arg4;	// IMP=0x0010000000071644
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 entityClass:(Class)arg5;	// IMP=0x0010000000071519
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 entityClass:(Class)arg4;	// IMP=0x00100000000714f7
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 entityClass:(Class)arg3;	// IMP=0x00100000000714d2
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4;	// IMP=0x00100000000714b3
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x001000000007149e
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x0010000000071489
+ (id)sumForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x0010000000071420
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x0010000000071401
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x00100000000713e2
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x00100000000713c3
+ (id)allOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x00100000000711ee
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000007101b
+ (id)memoryEntityForPersistentID:(long long)arg1 withProperties:(id)arg2 usingConnection:(id)arg3;	// IMP=0x001000000008e3e3
+ (id)memoryEntityForPersistentID:(long long)arg1 usingConnection:(id)arg2;	// IMP=0x001000000008e3cc
- (void).cxx_destruct;	// IMP=0x001000000000b0d5
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;	// IMP=0x001000000000afc8
- (id)_copyTableClusteredValuesWithValues:(id)arg1;	// IMP=0x001000000000ad5c
- (id)valueForProperty:(id)arg1;	// IMP=0x001000000000a653
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x001000000000a641
- (_Bool)setValuesWithDictionary:(id)arg1;	// IMP=0x0010000000009cb4
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000009bc8
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0010000000009bb6
- (id)getValuesForProperties:(id)arg1;	// IMP=0x0010000000009412
@property(readonly, nonatomic) _Bool existsInDatabase;
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000008de1
- (id)initWithPropertyValues:(id)arg1 onConnection:(id)arg2;	// IMP=0x0010000000008a0c
- (id)initWithPersistentID:(long long)arg1 onConnection:(id)arg2;	// IMP=0x0010000000008996
- (id)urlValueForProperty:(id)arg1;	// IMP=0x001000000000b2fc
- (id)uuidValueForProperty:(id)arg1;	// IMP=0x001000000000b2a5
- (id)stringValueForProperty:(id)arg1;	// IMP=0x001000000000b24e
- (id)numberValueForProperty:(id)arg1;	// IMP=0x001000000000b1f7
- (long long)integerValueForProperty:(id)arg1;	// IMP=0x001000000000b1b3
- (id)errorValueForProperty:(id)arg1;	// IMP=0x001000000000b129
- (_Bool)boolValueForProperty:(id)arg1;	// IMP=0x001000000000b0e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

