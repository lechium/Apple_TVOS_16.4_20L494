//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _MSVSQLConnection : NSObject
{
    struct sqlite3 *_connectionHandle;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    NSMutableDictionary *_attachedDatabases;	// 24 = 0x18
    NSMutableArray *_scalarFunctions;	// 32 = 0x20
    NSMutableArray *_aggregateFunctions;	// 40 = 0x28
    _Bool _invalid;	// 48 = 0x30
    NSString *_databaseURI;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000361c0
- (id)_cloneWithOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000035df2
- (void)_registerAggregateFunctionDescriptor:(id)arg1;	// IMP=0x0000000000035c81
- (void)registerAggregateFunctionNamed:(id)arg1 arguments:(long long)arg2 options:(unsigned long long)arg3 start:(CDUnknownBlockType)arg4 add:(CDUnknownBlockType)arg5 remove:(CDUnknownBlockType)arg6 value:(CDUnknownBlockType)arg7;	// IMP=0x0000000000035b22
- (void)unregisterFunctionNamed:(id)arg1 arguments:(long long)arg2;	// IMP=0x0000000000035982
- (void)_registerScalarFunctionDescriptor:(id)arg1;	// IMP=0x0000000000035865
- (void)registerFunctionNamed:(id)arg1 arguments:(long long)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000000357bf
- (_Bool)executeStatementString:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000356bb
- (id)resultsForStatement:(id)arg1;	// IMP=0x00000000000355ff
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000354ec
- (id)statementWithString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003351b
- (void)dealloc;	// IMP=0x00000000000334d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

