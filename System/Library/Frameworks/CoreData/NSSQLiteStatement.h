//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCachedFetchRequestInfo, NSMutableArray, NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLiteStatement : NSObject
{
    NSSQLEntity *_entity;	// 8 = 0x8
    NSMutableArray *_bindVariables;	// 16 = 0x10
    NSMutableArray *_bindIntarrays;	// 24 = 0x18
    NSString *_sqlString;	// 32 = 0x20
    _Bool _isImpossibleCondition;	// 40 = 0x28
    _Bool _trackChangedRowCount;	// 41 = 0x29
    NSSQLEntity *_fakeEntityForFetch;	// 48 = 0x30
    NSCachedFetchRequestInfo *_cachedStatementInfo;	// 56 = 0x38
    struct sqlite3_stmt *_cachedSQLiteStatement;	// 64 = 0x40
    void *_owner;	// 72 = 0x48
}

- (id)bindIntarrays;	// IMP=0x00000000001f3eb7
- (id)bindVariables;	// IMP=0x00000000001f3de4
- (id)sqlString;	// IMP=0x00000000001f3da0
- (id)entity;	// IMP=0x00000000001f3d96
- (void)dealloc;	// IMP=0x00000000001f3d17
- (id)initWithEntity:(id)arg1;	// IMP=0x00000000001f3c9c
- (id)description;	// IMP=0x00000000001f3c2a
- (id)initWithEntity:(id)arg1 sqlString:(id)arg2;	// IMP=0x00000000001f3bc8

@end

