//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHSynchronizedLoggable.h"

@class NSMutableArray, NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface TransactionManager : CHSynchronizedLoggable
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSXPCInterface *_interface;	// 16 = 0x10
    id _syncHelperReadyNotificationRef;	// 24 = 0x18
    NSMutableArray *_queuedTransactions;	// 32 = 0x20
}

+ (id)instance;	// IMP=0x0060000000032c2c
- (void).cxx_destruct;	// IMP=0x0000000000033b33
- (void)setupConnectionHandlers_sync;	// IMP=0x000000000003351d
- (void)appendTransactions_sync:(id)arg1;	// IMP=0x0000000000032ff4
- (void)appendTransactions:(id)arg1;	// IMP=0x0000000000032f45
- (void)createXpcConnection_sync;	// IMP=0x0000000000032df0
- (void)createXpcConnection;	// IMP=0x0000000000032d8e
- (void)dealloc;	// IMP=0x0000000000032d04
- (id)init;	// IMP=0x0000000000032cb1

@end

