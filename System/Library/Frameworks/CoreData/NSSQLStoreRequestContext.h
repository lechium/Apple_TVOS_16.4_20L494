//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSException, NSManagedObjectContext, NSNumber, NSPersistentStoreRequest, NSQueryGenerationToken, NSSQLCore, NSSQLRowCache, NSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface NSSQLStoreRequestContext : NSObject
{
    NSSQLCore *_sqlCore;	// 8 = 0x8
    NSPersistentStoreRequest *_persistentStoreRequest;	// 16 = 0x10
    NSSQLiteConnection *_connection;	// 24 = 0x18
    NSManagedObjectContext *_context;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSException *_exception;	// 48 = 0x30
    id _result;	// 56 = 0x38
    NSQueryGenerationToken *_queryGeneration;	// 64 = 0x40
    NSNumber *_transactionID;	// 72 = 0x48
    _Bool _useColoredLogging;	// 80 = 0x50
    _Bool _useConcurrentFetching;	// 81 = 0x51
    _Bool _hasHistoryTracking;	// 82 = 0x52
    _Bool _storeIsInMemory;	// 83 = 0x53
}

@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest; // @synthesize persistentStoreRequest=_persistentStoreRequest;
- (void)executeEpilogue;	// IMP=0x0000000000062649
- (_Bool)executeRequestUsingConnection:(id)arg1;	// IMP=0x0000000000062157
- (_Bool)executeRequestCore:(id *)arg1;	// IMP=0x0000000000062129
- (void)executePrologue;	// IMP=0x0000000000062123
@property(readonly, nonatomic) _Bool isWritingRequest;
@property(readonly, nonatomic) NSSQLRowCache *rowCache;
- (void)dealloc;	// IMP=0x0000000000061fb3
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;	// IMP=0x0000000000061e45

@end

