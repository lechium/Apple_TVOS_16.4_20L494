//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface _bmFMDatabase : NSObject
{
    void *_db;	// 8 = 0x8
    _Bool _isExecutingStatement;	// 16 = 0x10
    double _startBusyRetryTime;	// 24 = 0x18
    NSMutableSet *_openResultSets;	// 32 = 0x20
    NSMutableSet *_openFunctions;	// 40 = 0x28
    NSDateFormatter *_dateFormat;	// 48 = 0x30
    _Bool _shouldCacheStatements;	// 56 = 0x38
    _Bool _traceExecution;	// 57 = 0x39
    _Bool _checkedOut;	// 58 = 0x3a
    _Bool _crashOnErrors;	// 59 = 0x3b
    _Bool _logsErrors;	// 60 = 0x3c
    _Bool _isOpen;	// 61 = 0x3d
    _Bool _isInTransaction;	// 62 = 0x3e
    double _maxBusyRetryTimeInterval;	// 64 = 0x40
    NSMutableDictionary *_cachedStatements;	// 72 = 0x48
    NSString *_databasePath;	// 80 = 0x50
}

+ (id)storeableDateFormat:(id)arg1;	// IMP=0x0040000000044589
+ (_Bool)isSQLiteThreadSafe;	// IMP=0x0010000000043914
+ (id)sqliteLibVersion;	// IMP=0x00100000000438d0
+ (int)FMDBVersion;	// IMP=0x00100000000436d2
+ (id)FMDBUserVersion;	// IMP=0x00100000000436c5
+ (id)databaseWithURL:(id)arg1;	// IMP=0x00100000000434d5
+ (id)databaseWithPath:(id)arg1;	// IMP=0x001000000004348c
- (void).cxx_destruct;	// IMP=0x00100000000476dd
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) _Bool isInTransaction; // @synthesize isInTransaction=_isInTransaction;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements=_cachedStatements;
@property _Bool logsErrors; // @synthesize logsErrors=_logsErrors;
@property _Bool crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property _Bool checkedOut; // @synthesize checkedOut=_checkedOut;
@property _Bool traceExecution; // @synthesize traceExecution=_traceExecution;
- (void)resultErrorTooBigInContext:(void *)arg1;	// IMP=0x0010000000047638
- (void)resultErrorNoMemoryInContext:(void *)arg1;	// IMP=0x001000000004762b
- (void)resultErrorCode:(int)arg1 context:(void *)arg2;	// IMP=0x001000000004761c
- (void)resultError:(id)arg1 context:(void *)arg2;	// IMP=0x00100000000475e5
- (void)resultString:(id)arg1 context:(void *)arg2;	// IMP=0x00100000000475a7
- (void)resultData:(id)arg1 context:(void *)arg2;	// IMP=0x001000000004753d
- (void)resultDouble:(double)arg1 context:(void *)arg2;	// IMP=0x0010000000047530
- (void)resultLong:(long long)arg1 context:(void *)arg2;	// IMP=0x0010000000047520
- (void)resultInt:(int)arg1 context:(void *)arg2;	// IMP=0x0010000000047511
- (void)resultNullInContext:(void *)arg1;	// IMP=0x0010000000047504
- (id)valueString:(void *)arg1;	// IMP=0x00100000000474c6
- (id)valueData:(void *)arg1;	// IMP=0x0010000000047471
- (double)valueDouble:(void *)arg1;	// IMP=0x0010000000047464
- (long long)valueLong:(void *)arg1;	// IMP=0x0010000000047457
- (int)valueInt:(void *)arg1;	// IMP=0x001000000004744a
- (int)valueType:(void *)arg1;	// IMP=0x001000000004743d
- (void)makeFunctionNamed:(id)arg1 arguments:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047347
- (void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047335
@property(nonatomic) _Bool shouldCacheStatements; // @synthesize shouldCacheStatements=_shouldCacheStatements;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x001000000004712b
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000047106
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x00100000000470df
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x0010000000046f79
- (_Bool)rollbackToSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000046e36
- (_Bool)releaseSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000046cf3
- (_Bool)startSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000046bb0
- (_Bool)interrupt;	// IMP=0x0010000000046b7f
- (_Bool)inTransaction;	// IMP=0x0010000000046b76
- (_Bool)beginExclusiveTransaction;	// IMP=0x0010000000046b48
- (_Bool)beginImmediateTransaction;	// IMP=0x0010000000046b1a
- (_Bool)beginDeferredTransaction;	// IMP=0x0010000000046aec
- (_Bool)beginTransaction;	// IMP=0x0010000000046abe
- (_Bool)commit;	// IMP=0x0010000000046a90
- (_Bool)rollback;	// IMP=0x0010000000046a62
- (id)prepare:(id)arg1;	// IMP=0x0010000000046a38
- (_Bool)update:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x0010000000046994
- (_Bool)executeUpdate:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x00100000000468f0
- (_Bool)executeStatements:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000467f8
- (_Bool)executeStatements:(id)arg1;	// IMP=0x00100000000467e4
- (_Bool)executeUpdateWithFormat:(id)arg1;	// IMP=0x00100000000464f2
- (_Bool)executeUpdate:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x00100000000464cb
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x00100000000464a0
- (_Bool)executeUpdate:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000046471
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x0010000000046446
- (_Bool)executeUpdate:(id)arg1;	// IMP=0x001000000004639c
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(struct __va_list_tag [1])arg5;	// IMP=0x00100000000462fd
- (id)executeQuery:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x00100000000462d3
- (id)executeQuery:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004625f
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x0010000000046237
- (id)executeQueryWithFormat:(id)arg1;	// IMP=0x00100000000460be
- (id)executeQuery:(id)arg1;	// IMP=0x0010000000046005
- (_Bool)bindStatement:(struct sqlite3_stmt *)arg1 WithArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4;	// IMP=0x0010000000045a71
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4 shouldBind:(_Bool)arg5;	// IMP=0x00100000000456ee
- (id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x00100000000456c4
- (void)extractSQL:(id)arg1 argumentsList:(struct __va_list_tag [1])arg2 intoString:(id)arg3 arguments:(id)arg4;	// IMP=0x0010000000044ead
- (int)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;	// IMP=0x0010000000044947
@property(readonly, nonatomic) int changes;
@property(readonly, nonatomic) long long lastInsertRowId;
- (id)lastError;	// IMP=0x0010000000044872
- (id)errorWithMessage:(id)arg1;	// IMP=0x00100000000447eb
- (int)lastExtendedErrorCode;	// IMP=0x00100000000447dd
- (int)lastErrorCode;	// IMP=0x00100000000447cf
- (_Bool)hadError;	// IMP=0x00100000000447b4
- (id)lastErrorMessage;	// IMP=0x0010000000044785
- (_Bool)databaseExists;	// IMP=0x0010000000044737
- (void)warnInUse;	// IMP=0x00100000000446fe
@property(readonly, nonatomic) _Bool goodConnection;
- (id)stringFromDate:(id)arg1;	// IMP=0x0010000000044688
- (id)dateFromString:(id)arg1;	// IMP=0x0010000000044672
- (void)setDateFormat:(id)arg1;	// IMP=0x0010000000044661
- (_Bool)hasDateFormatter;	// IMP=0x0010000000044653
- (_Bool)setKeyWithData:(id)arg1;	// IMP=0x0010000000044581
- (_Bool)setKey:(id)arg1;	// IMP=0x00100000000444bc
- (_Bool)rekeyWithData:(id)arg1;	// IMP=0x00100000000444b4
- (_Bool)rekey:(id)arg1;	// IMP=0x00100000000443ef
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;	// IMP=0x0010000000044281
- (id)cachedStatementForQuery:(id)arg1;	// IMP=0x00100000000441d8
- (void)clearCachedStatements;	// IMP=0x0010000000043f79
- (void)resultSetDidClose:(id)arg1;	// IMP=0x0010000000043f25
- (void)closeOpenResultSets;	// IMP=0x0010000000043d47
@property(readonly, nonatomic) _Bool hasOpenResultSets;
- (void)setBusyRetryTimeout:(int)arg1;	// IMP=0x0010000000043cfc
- (int)busyRetryTimeout;	// IMP=0x0010000000043cc9
@property(nonatomic) double maxBusyRetryTimeInterval; // @synthesize maxBusyRetryTimeInterval=_maxBusyRetryTimeInterval;
- (_Bool)close;	// IMP=0x0010000000043b1c
- (_Bool)openWithFlags:(int)arg1 vfs:(id)arg2;	// IMP=0x0010000000043a3c
- (_Bool)openWithFlags:(int)arg1;	// IMP=0x0010000000043a28
- (_Bool)open;	// IMP=0x0010000000043992
- (int)limitFor:(int)arg1 value:(int)arg2;	// IMP=0x0010000000043980
- (const char *)sqlitePath;	// IMP=0x001000000004392e
@property(readonly, nonatomic) void *sqliteHandle;
@property(readonly, nonatomic) NSURL *databaseURL;
- (void)dealloc;	// IMP=0x0010000000043650
- (id)initWithPath:(id)arg1;	// IMP=0x0010000000043588
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000043532
- (id)init;	// IMP=0x001000000004351e
- (void)setShouldCacheStatementsWithoutClearingExistingStatements:(_Bool)arg1;	// IMP=0x00100000000282ef
- (_Bool)DELETE_FROM:(id)arg1 WHERE:(id)arg2;	// IMP=0x0010000000028144
- (_Bool)INSERT_INTO:(id)arg1 VALUES:(id)arg2;	// IMP=0x0010000000027e0e
- (_Bool)UPDATE:(id)arg1 SET:(id)arg2 WHERE:(id)arg3;	// IMP=0x0010000000027b1c
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 GROUP_BY:(id)arg5 HAVING:(id)arg6 ORDER_BY:(id)arg7 LIMIT:(id)arg8;	// IMP=0x001000000002746d
- (id)_SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 GROUP_BY:(id)arg5 ORDER_BY:(id)arg6 LIMIT:(id)arg7;	// IMP=0x0010000000026f5c
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 WHERE:(id)arg3 GROUP_BY:(id)arg4;	// IMP=0x0010000000026f2c
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 ORDER_BY:(id)arg5 LIMIT:(id)arg6;	// IMP=0x0010000000026f00
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 WHERE:(id)arg3 ORDER_BY:(id)arg4 LIMIT:(id)arg5;	// IMP=0x0010000000026ed6
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 WHERE:(id)arg3;	// IMP=0x0010000000026ea5
- (_Bool)validateSQL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000048781
- (_Bool);	// IMP=0x0010000000048766
@property(nonatomic) unsigned int userVersion;
@property(nonatomic) unsigned int applicationID;
- (_Bool)columnExists:(id)arg1 inTableWithName:(id)arg2;	// IMP=0x0010000000048402
- (id)getTableSchema:(id)arg1;	// IMP=0x001000000004836d
- (id)getSchema;	// IMP=0x0010000000048352
- (_Bool)tableExists:(id)arg1;	// IMP=0x00100000000482c5
- (id)dateForQuery:(id)arg1;	// IMP=0x00100000000481a2
- (id)dataForQuery:(id)arg1;	// IMP=0x001000000004807f
- (double)doubleForQuery:(id)arg1;	// IMP=0x0010000000047f63
- (_Bool)boolForQuery:(id)arg1;	// IMP=0x0010000000047e4c
- (long long)longForQuery:(id)arg1;	// IMP=0x0010000000047d35
- (int)intForQuery:(id)arg1;	// IMP=0x0010000000047c1e
- (id)stringForQuery:(id)arg1;	// IMP=0x0010000000047afb

@end

