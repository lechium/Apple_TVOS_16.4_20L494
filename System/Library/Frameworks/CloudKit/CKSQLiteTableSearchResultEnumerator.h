//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class CKSQLiteCompiledStatement, CKSQLiteTable, NSError;

@interface CKSQLiteTableSearchResultEnumerator : NSEnumerator
{
    CKSQLiteTable *_table;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    id _entry;	// 24 = 0x18
    _Bool _enumerationStarted;	// 32 = 0x20
    CKSQLiteCompiledStatement *_statement;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006399e
@property(retain, nonatomic) CKSQLiteCompiledStatement *statement; // @synthesize statement=_statement;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)nextObject;	// IMP=0x00000000000632db
- (void)invalidate;	// IMP=0x000000000006318b
- (void)dealloc;	// IMP=0x000000000006314d
- (id)initWithTable:(id)arg1 statement:(id)arg2;	// IMP=0x00000000000630ab
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x0000000000060297

@end

