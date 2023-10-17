//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, NSXPCConnection;
@protocol AMSEngagementServiceProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSEngagementConnection : NSObject
{
    id <AMSEngagementServiceProtocol> _proxy;	// 8 = 0x8
    CDUnknownBlockType _errorHandler;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSNotificationCenter *_notificationCenter;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000207fa4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) id <AMSEngagementServiceProtocol> proxy; // @synthesize proxy=_proxy;
- (void)treatmentsDidSyncronize;	// IMP=0x0000000000207ef4
- (void)handlePushedEvent:(id)arg1;	// IMP=0x0000000000207e7b
- (void)_removeRemoteConnection;	// IMP=0x0000000000207e21
- (id)_newRemoteConnection;	// IMP=0x0000000000207a52
- (id)_makeExportedClientConnectionInterface;	// IMP=0x00000000002079ca
- (id)_makeRemoteConnectionInterface;	// IMP=0x000000000020779b
- (void)dealloc;	// IMP=0x000000000020775d
- (id)initWithNotificationCenter:(id)arg1;	// IMP=0x0000000000207478

@end

