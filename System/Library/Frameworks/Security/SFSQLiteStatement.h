//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, SFSQLite;

__attribute__((visibility("hidden")))
@interface SFSQLiteStatement : NSObject
{
    SFSQLite *_SQLite;	// 8 = 0x8
    NSString *_SQL;	// 16 = 0x10
    struct sqlite3_stmt *_handle;	// 24 = 0x18
    _Bool _reset;	// 32 = 0x20
    NSMutableArray *_temporaryBoundObjects;	// 40 = 0x28
    NSDictionary *_indexesByColumnName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000015a62
@property(retain, nonatomic) NSDictionary *indexesByColumnName; // @synthesize indexesByColumnName=_indexesByColumnName;
@property(retain, nonatomic) NSMutableArray *temporaryBoundObjects; // @synthesize temporaryBoundObjects=_temporaryBoundObjects;
@property(nonatomic, getter=isReset) _Bool reset; // @synthesize reset=_reset;
@property(readonly, nonatomic) struct sqlite3_stmt *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) NSString *SQL; // @synthesize SQL=_SQL;
@property(readonly, nonatomic) __weak SFSQLite *SQLite; // @synthesize SQLite=_SQLite;
- (void)enumerateColumnsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001588b
- (id)allObjectsByColumnName;	// IMP=0x00000000000157c9
- (id)allObjects;	// IMP=0x000000000001570c
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001558d
- (id)textAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000154c3
- (id)blobAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000153e3
- (double)doubleAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001534c
- (long long)int64AtIndex:(unsigned long long)arg1;	// IMP=0x00000000000152b5
- (int)intAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001521e
- (unsigned long long)indexForColumnName:(id)arg1;	// IMP=0x0000000000015187
- (id)columnNameAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000150d4
- (int)columnTypeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001503d
- (unsigned long long)columnCount;	// IMP=0x0000000000014fb2
- (void)bindValues:(id)arg1;	// IMP=0x0000000000014f07
- (void)bindValue:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000014a0a
- (id)retainedTemporaryBoundObject:(id)arg1;	// IMP=0x00000000000149b1
- (void)bindNullAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001493e
- (void)bindText:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000147bd
- (void)bindBlob:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000014624
- (void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000014508
- (void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000143ec
- (void)bindInt:(int)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000142d0
- (void)reset;	// IMP=0x00000000000141b0
- (_Bool)step;	// IMP=0x00000000000140d1
- (void)resetAfterStepError;	// IMP=0x0000000000014094
- (void)finalizeStatement;	// IMP=0x0000000000013f9c
- (id)initWithSQLite:(id)arg1 SQL:(id)arg2 handle:(struct sqlite3_stmt *)arg3;	// IMP=0x0000000000013efb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

