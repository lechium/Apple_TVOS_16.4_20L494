//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOSQLiteDB, _GEOConfigDBOperationQueue;

__attribute__((visibility("hidden")))
@interface _GEOConfigDB
{
    _Atomic long long _lastId;	// 24 = 0x18
    GEOSQLiteDB *_db;	// 32 = 0x20
    _GEOConfigDBOperationQueue *_operationQueue;	// 40 = 0x28
    CDUnknownFunctionPointerType _clearFunction;	// 48 = 0x30
    CDUnknownFunctionPointerType _setFunction;	// 56 = 0x38
    CDUnknownFunctionPointerType _addFunction;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000296374
@property(readonly, nonatomic) CDUnknownFunctionPointerType addFunction; // @synthesize addFunction=_addFunction;
@property(readonly, nonatomic) CDUnknownFunctionPointerType setFunction; // @synthesize setFunction=_setFunction;
@property(readonly, nonatomic) CDUnknownFunctionPointerType clearFunction; // @synthesize clearFunction=_clearFunction;
@property(readonly, nonatomic) _GEOConfigDBOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) GEOSQLiteDB *db; // @synthesize db=_db;
- (long long)nextId;	// IMP=0x0000000000296307
- (id)init:(id)arg1 cache:(id)arg2 operationQueue:(id)arg3 clearFunction:(CDUnknownFunctionPointerType)arg4 setFunction:(CDUnknownFunctionPointerType)arg5 addFunction:(CDUnknownFunctionPointerType)arg6 tableName:(id)arg7;	// IMP=0x0000000000296102

@end

