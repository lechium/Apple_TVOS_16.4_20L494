//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SQLiteConnection;

@interface SQLiteStatement : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    SQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000008f121
@property(readonly, nonatomic) struct sqlite3_stmt *sqlite3_stmt; // @synthesize sqlite3_stmt=_statement;
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (int)clearBindings;	// IMP=0x001000000008f0f3
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008f09f
- (void)bindUUID:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008f04b
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008efd7
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008eece
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008ede1
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x001000000008eda4
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x001000000008ed67
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x001000000008ed2a
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x001000000008ece9
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x001000000008ecac
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008ec4f
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008ec0f
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008eb5e
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008eab1
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008ea54
- (int)step;	// IMP=0x001000000008ea13
@property(readonly, copy, nonatomic) NSString *SQL;
- (int)reset;	// IMP=0x001000000008e98f
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
- (int)finalizeStatement;	// IMP=0x001000000008e913
@property(readonly, copy, nonatomic) NSDictionary *columnIndexByName;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 onConnection:(id)arg2;	// IMP=0x001000000008e744

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
