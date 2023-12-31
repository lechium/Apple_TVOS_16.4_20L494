//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, NSError;

__attribute__((visibility("hidden")))
@interface AMSSQLiteSchemaMigration : NSObject
{
    AMSSQLiteConnection *_connection;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000313582
@property(readonly) _Bool success; // @synthesize success=_success;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)_executeStatement:(id)arg1 canFailMigration:(_Bool)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x000000000031349a
- (void)executeStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x0000000000313480
- (void)executeStatement:(id)arg1;	// IMP=0x0000000000313466
- (void)executeOptionalStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x000000000031344f
- (void)executeOptionalStatement:(id)arg1;	// IMP=0x0000000000313438
- (id)initWithConnection:(id)arg1;	// IMP=0x00000000003133c9

@end

