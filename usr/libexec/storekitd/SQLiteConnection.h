//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMapTable, NSMutableArray, SQLiteConnectionOptions;
@protocol SQLiteConnectionDelegate;

@interface SQLiteConnection : NSObject
{
    NSMutableArray *_afterTransactionBlocks;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    id <SQLiteConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _didResetForCorruption;	// 32 = 0x20
    NSMapTable *_preparedStatements;	// 40 = 0x28
    long long _transactionDepth;	// 48 = 0x30
    _Bool _transactionWantsRollback;	// 56 = 0x38
    SQLiteConnectionOptions *_options;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000029c67
@property(readonly, copy, nonatomic) SQLiteConnectionOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <SQLiteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000029aaa
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000298ed
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000297ce
- (_Bool)_resetAfterIOError;	// IMP=0x001000000002961c
- (_Bool)_resetAfterCorruptionError;	// IMP=0x00100000000295ae
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000293da
- (_Bool)_performResetAfterCorruptionError;	// IMP=0x00100000000291c1
- (_Bool)_open;	// IMP=0x00100000000290db
- (void)_flushAfterTransactionBlocks;	// IMP=0x0010000000028f0f
- (void)_finalizeAllStatements;	// IMP=0x0010000000028d90
- (_Bool)_executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028b35
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000028a72
- (_Bool)_close;	// IMP=0x0010000000028a11
- (_Bool)executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000289ff
@property(readonly, copy, nonatomic) NSError *currentError;
- (_Bool)tableExists:(id)arg1;	// IMP=0x001000000002886f
- (_Bool)truncate;	// IMP=0x00100000000287e7
- (id)prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002869d
- (void)performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00100000000285af
- (_Bool)performSavepoint:(CDUnknownBlockType)arg1;	// IMP=0x000000000002838b
- (_Bool)open;	// IMP=0x0010000000028379
@property(readonly, nonatomic) long long lastChangeCount;
- (_Bool)finalizePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000028246
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00100000000280ab
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000028096
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x0010000000027ee9
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x0010000000027dd2
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000027dbd
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x0010000000027c8b
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000027bdd
- (_Bool)close;	// IMP=0x0010000000027bcb
- (void)dealloc;	// IMP=0x0010000000027b03
- (id)initWithOptions:(id)arg1;	// IMP=0x0010000000027a5c

@end
