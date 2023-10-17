//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKSQLiteDatabase, CKSQLiteTable, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableString, NSNumber, NSPredicate, NSString;

@interface CKSQLiteCompiledStatement : NSObject
{
    CKSQLiteDatabase *_db;	// 8 = 0x8
    struct sqlite3_stmt *_handle;	// 16 = 0x10
    NSMutableString *_sql;	// 24 = 0x18
    NSArray *_resultColumns;	// 32 = 0x20
    NSArray *_resultColumnTypes;	// 40 = 0x28
    NSPredicate *_wherePredicate;	// 48 = 0x30
    Class _tableClass;	// 56 = 0x38
    NSMutableDictionary *_bindingTypesByVariable;	// 64 = 0x40
    NSDictionary *_searchValues;	// 72 = 0x48
    _Bool _needsSearchBinding;	// 80 = 0x50
    _Bool _sqlLoggingEnabled;	// 81 = 0x51
    NSMutableString *_orderBySQL;	// 88 = 0x58
    NSMutableArray *_boundObjects;	// 96 = 0x60
    NSArray *_updatedColumns;	// 104 = 0x68
    NSString *_label;	// 112 = 0x70
    CKSQLiteTable *_cachingTable;	// 120 = 0x78
    NSArray *_searchProperties;	// 128 = 0x80
    NSNumber *_limit;	// 136 = 0x88
    NSNumber *_offset;	// 144 = 0x90
}

+ (id)statementForDeletingInTable:(id)arg1;	// IMP=0x006000000005ea53
+ (id)statementForFetchingMaximumValueForColumn:(id)arg1 inTable:(id)arg2 error:(id *)arg3;	// IMP=0x006000000005ea31
+ (id)statementForFetchingMinimumValueForColumn:(id)arg1 inTable:(id)arg2 error:(id *)arg3;	// IMP=0x006000000005ea0f
+ (id)_statementForFetchingMinMax:(id)arg1 forColumn:(id)arg2 inTable:(id)arg3 error:(id *)arg4;	// IMP=0x006000000005e773
+ (id)statementForFetchingColumns:(id)arg1 inTable:(id)arg2 error:(id *)arg3;	// IMP=0x006000000005e389
+ (id)statementForInserting:(id)arg1 orUpdating:(id)arg2 inTable:(id)arg3;	// IMP=0x006000000005e02f
+ (id)statementForInserting:(id)arg1 inTable:(id)arg2;	// IMP=0x006000000005e018
+ (id)statementForUpdatingColumns:(id)arg1 inTable:(id)arg2 error:(id *)arg3;	// IMP=0x006000000005dcd7
+ (id)statementForEmptyCheckInTable:(id)arg1;	// IMP=0x006000000005dc07
+ (id)statementForSizingColumn:(id)arg1 inTable:(id)arg2;	// IMP=0x006000000005dafb
+ (id)statementForSummingColumn:(id)arg1 inTable:(id)arg2;	// IMP=0x006000000005d9ef
+ (id)statementForCountingRowsInTable:(id)arg1;	// IMP=0x006000000005d8fb
+ (id)statementForFetchingAllTableNamesInDatabase:(id)arg1;	// IMP=0x006000000005d870
- (void).cxx_destruct;	// IMP=0x00000000000601e4
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSArray *searchProperties; // @synthesize searchProperties=_searchProperties;
@property(nonatomic) __weak CKSQLiteTable *cachingTable; // @synthesize cachingTable=_cachingTable;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x0000000000060070
- (void)enumerateResultColumnsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005fc06
- (id)bindValueColumn:(id)arg1 type:(unsigned int)arg2 value:(id)arg3;	// IMP=0x000000000005faa4
- (id)bindValue:(id)arg1 ofType:(unsigned int)arg2 atIndex:(int)arg3;	// IMP=0x000000000005f7f8
- (id)boundObjects;	// IMP=0x000000000005f7bd
- (_Bool)step:(id *)arg1;	// IMP=0x000000000005f6bb
- (id)compile;	// IMP=0x000000000005f51e
- (void)orderByProperty:(id)arg1 ascending:(_Bool)arg2;	// IMP=0x000000000005f44f
- (id)searchBindingsDescription;	// IMP=0x000000000005f3fb
- (id)doSearchValueBinding;	// IMP=0x000000000005f0ec
- (id)sqlValueForVariable:(id)arg1;	// IMP=0x000000000005f056
- (id)bindSearchValues:(id)arg1;	// IMP=0x000000000005effe
- (id)addBindingVariable:(id)arg1 withAssociatedProperty:(id)arg2;	// IMP=0x000000000005eebd
- (id)setSearchPredicate:(id)arg1 forProperties:(id)arg2 tableClass:(Class)arg3;	// IMP=0x000000000005ee06
- (void)resetAndClearBindings;	// IMP=0x000000000005ed60
- (id)updatedColumns;	// IMP=0x000000000005ed52
- (id)fetchedColumns;	// IMP=0x000000000005ed44
- (id)description;	// IMP=0x000000000005ecad
- (void)invalidate;	// IMP=0x000000000005ec21
- (void)dealloc;	// IMP=0x000000000005ebe3
- (id)initWithTable:(id)arg1;	// IMP=0x000000000005eb60
- (id)initWithDatabase:(id)arg1;	// IMP=0x000000000005eb23

@end

