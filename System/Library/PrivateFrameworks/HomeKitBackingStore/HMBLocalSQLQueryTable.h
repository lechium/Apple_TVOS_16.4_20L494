//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLContext, HMBSQLQueryStatement, HMBSQLStatement, NSArray, NSHashTable, NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLQueryTable : HMFObject
{
    _Bool _finalized;	// 8 = 0x8
    HMBLocalSQLContext *_context;	// 16 = 0x10
    Class _modelClass;	// 24 = 0x18
    NSString *_modelType;	// 32 = 0x20
    NSArray *_columnFields;	// 40 = 0x28
    NSArray *_columnNames;	// 48 = 0x30
    HMBSQLQueryStatement *_selectAll;	// 56 = 0x38
    NSString *_dropTableSQL;	// 64 = 0x40
    HMBSQLStatement *_deleteAll;	// 72 = 0x48
    HMBSQLStatement *_updateRecord;	// 80 = 0x50
    HMBSQLStatement *_deleteRecord;	// 88 = 0x58
    NSHashTable *_userQueries;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000001f8c1
@property(nonatomic) _Bool finalized; // @synthesize finalized=_finalized;
@property(readonly, nonatomic) NSHashTable *userQueries; // @synthesize userQueries=_userQueries;
@property(readonly, nonatomic) HMBSQLStatement *deleteRecord; // @synthesize deleteRecord=_deleteRecord;
@property(readonly, nonatomic) HMBSQLStatement *updateRecord; // @synthesize updateRecord=_updateRecord;
@property(readonly, nonatomic) HMBSQLStatement *deleteAll; // @synthesize deleteAll=_deleteAll;
@property(readonly, nonatomic) NSString *dropTableSQL; // @synthesize dropTableSQL=_dropTableSQL;
@property(readonly, nonatomic) HMBSQLQueryStatement *selectAll; // @synthesize selectAll=_selectAll;
@property(readonly, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(readonly, nonatomic) NSArray *columnFields; // @synthesize columnFields=_columnFields;
@property(readonly, nonatomic) NSString *modelType; // @synthesize modelType=_modelType;
@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(readonly, nonatomic) __weak HMBLocalSQLContext *context; // @synthesize context=_context;
- (void)finalize;	// IMP=0x000000000001f49c
- (void)dealloc;	// IMP=0x000000000001f334
- (unsigned long long)_updateQueryForZoneRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 encodedColumns:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001f206
- (id)buildQueriableFieldsForModel:(id)arg1;	// IMP=0x000000000001f0bb
- (unsigned long long)_deleteAllQueriesForZoneRow:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000001f007
- (unsigned long long)_deleteQueryForRecordRow:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000001ef29
- (id)performQueryOn:(id)arg1 properties:(id)arg2 filter:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ed9d
- (id)initWithContext:(id)arg1 queryModel:(Class)arg2 prepareOnly:(_Bool)arg3;	// IMP=0x000000000001d20c

@end

