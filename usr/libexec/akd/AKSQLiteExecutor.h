//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AKSQLiteMigration;

@interface AKSQLiteExecutor : NSObject
{
    struct sqlite3 *_database;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    _Bool _shouldAutomaticallyMigrate;	// 24 = 0x18
    id <AKSQLiteMigration> _migrator;	// 32 = 0x20
}

+ (id)_databaseQueue;	// IMP=0x004000000007c66a
+ (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000007c580
+ (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000007c497
- (void).cxx_destruct;	// IMP=0x002000000007db7d
@property(retain, nonatomic) id <AKSQLiteMigration> migrator; // @synthesize migrator=_migrator;
- (void)setShouldAutomaticallyMigrate:(_Bool)arg1;	// IMP=0x001000000007db59
- (_Bool)shouldAutomaticallyMigrate;	// IMP=0x001000000007db50
- (void)_unsafe_closeDatabase;	// IMP=0x001000000007da7e
- (void)closeDatabase;	// IMP=0x001000000007da12
- (void)_unsafe_wipeDatabase:(id *)arg1;	// IMP=0x001000000007d904
- (void)wipeDatabase:(id *)arg1;	// IMP=0x001000000007d788
- (int)_unsafe_createDataBase;	// IMP=0x001000000007d580
- (_Bool)_unsafe_openDatabase:(id *)arg1;	// IMP=0x001000000007d390
- (_Bool)openDatabase:(id *)arg1;	// IMP=0x001000000007d1ce
- (id)_currentDataBaseError;	// IMP=0x001000000007d066
- (_Bool)_handleDatabaseFailureError:(id *)arg1;	// IMP=0x001000000007ced5
- (_Bool)_finalizeStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x001000000007ce4e
- (struct sqlite3_stmt *)_prepareStatementForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007cdb4
- (void)_stepThroughRowsWithQuery:(id)arg1 statement:(struct sqlite3_stmt *)arg2;	// IMP=0x001000000007cd01
- (void)_printStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x001000000007cca6
- (long long)performInsertQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007cb66
- (_Bool)performQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007ca11
- (_Bool)performQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c922
- (_Bool)performQuery:(id)arg1;	// IMP=0x001000000007c90e
- (long long)performInsertQuery:(id)arg1;	// IMP=0x001000000007c8b2
- (int)_executeQuery:(id)arg1;	// IMP=0x001000000007c7b2
- (void)rollbackTransaction;	// IMP=0x001000000007c799
- (void)commitTransaction;	// IMP=0x001000000007c75b
- (void)openTransaction;	// IMP=0x001000000007c742
- (void)performTransactionBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000007c6eb
@property(readonly, nonatomic) NSString *databasePath;
@property(readonly, nonatomic) struct sqlite3 *database;
- (id)initWithDatabasePath:(id)arg1 migrationController:(id)arg2;	// IMP=0x001000000007c3f3

@end
