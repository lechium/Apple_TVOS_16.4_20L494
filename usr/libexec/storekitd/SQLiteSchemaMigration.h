//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, SQLiteConnection;

@interface SQLiteSchemaMigration : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000007bac8
@property(readonly) _Bool success; // @synthesize success=_success;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)_executeStatement:(id)arg1 canFailMigration:(_Bool)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x001000000007b9e0
- (void)executeStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x001000000007b9c6
- (void)executeStatement:(id)arg1;	// IMP=0x001000000007b9ac
- (void)executeOptionalStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x001000000007b995
- (void)executeOptionalStatement:(id)arg1;	// IMP=0x001000000007b97e
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000007b90f

@end

