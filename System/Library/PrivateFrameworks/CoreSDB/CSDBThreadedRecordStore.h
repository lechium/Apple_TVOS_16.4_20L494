//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _CSDBThreadObject;
@protocol OS_dispatch_queue;

@interface CSDBThreadedRecordStore : NSObject
{
    struct CSDBRecordStore *_recordStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_recordStoreQueue;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    _CSDBThreadObject *_thread;	// 32 = 0x20
    struct CSDBLookAsideBufferConfig _lookAsideConfig;	// 40 = 0x28
    _Bool _wantsRegister;	// 52 = 0x34
}

- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;	// IMP=0x000000000000be6e
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;	// IMP=0x000000000000bd56
- (_Bool)ownsCurrentThreadOtherwiseAssert:(_Bool)arg1;	// IMP=0x000000000000bd40
- (void)registerClass:(const CDStruct_47876580 *)arg1;	// IMP=0x000000000000bd27
- (void)teardownDatabase;	// IMP=0x000000000000bcc6
- (void)_teardownDatabaseOnQueue;	// IMP=0x000000000000bca0
- (void)setupDatabaseWithAllowLocalMigration:(_Bool)arg1 pathBlock:(CDUnknownBlockType)arg2 setupStoreHandler:(CDUnknownFunctionPointerType)arg3 connectionInitializer:(CDUnknownFunctionPointerType)arg4 versionChecker:(CDUnknownFunctionPointerType)arg5 migrationHandler:(CDUnknownFunctionPointerType)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned int)arg8 registerBlock:(CDUnknownBlockType)arg9;	// IMP=0x000000000000bc5a
- (void)setupDatabaseWithAllowLocalMigration:(_Bool)arg1 pathBlock:(CDUnknownBlockType)arg2 setupStoreHandler:(CDUnknownFunctionPointerType)arg3 connectionInitializer:(CDUnknownFunctionPointerType)arg4 versionChecker:(CDUnknownFunctionPointerType)arg5 migrationHandler:(CDUnknownFunctionPointerType)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned int)arg8 registerBlock:(CDUnknownBlockType)arg9 exclusiveOwnership:(_Bool)arg10;	// IMP=0x000000000000b874
- (void)dealloc;	// IMP=0x000000000000b80c
- (id)initWithIdentifier:(struct __CFString *)arg1 qosClass:(unsigned short)arg2 lookAsideConfig:(struct CSDBLookAsideBufferConfig)arg3;	// IMP=0x000000000000b735

@end

