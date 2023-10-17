//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface NSSQLUbiquitizedStoreConnectionManager
{
    NSSQLiteConnection *_connection;	// 24 = 0x18
}

- (void)scheduleConnectionsBarrier:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d7878
- (void)scheduleBarrierBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d781a
- (_Bool)handleStoreRequest:(id)arg1;	// IMP=0x00000000001d76de
- (void)setExclusiveLockingMode:(_Bool)arg1;	// IMP=0x00000000001d765e
- (void)disconnectAllConnections;	// IMP=0x00000000001d75f3
- (void)dealloc;	// IMP=0x00000000001d75a5
- (id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3;	// IMP=0x00000000001d751e

@end
