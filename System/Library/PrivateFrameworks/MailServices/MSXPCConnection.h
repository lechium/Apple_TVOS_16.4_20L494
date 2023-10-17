//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@class MFPromise, NSLock, NSObject, NSXPCInterface, Protocol;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSXPCConnection : NSXPCConnection
{
    NSLock *_lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    MFPromise *_connectionPromise;	// 24 = 0x18
    NSXPCInterface *_remoteObjectInterface;	// 32 = 0x20
    NSXPCInterface *_exportedInterface;	// 40 = 0x28
    id _exportedObject;	// 48 = 0x30
    CDUnknownBlockType _interruptionHandler;	// 56 = 0x38
    CDUnknownBlockType _invalidationHandler;	// 64 = 0x40
    long long _resumeCount;	// 72 = 0x48
    unsigned int _state;	// 80 = 0x50
    _Bool _shouldLaunchMobileMail;	// 84 = 0x54
    Protocol *_protocol;	// 88 = 0x58
}

@property(nonatomic) _Bool shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail;
@property(readonly, retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000004f1d
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004ed7
- (id)remoteObjectProxy;	// IMP=0x0000000000004e93
- (unsigned int)effectiveGroupIdentifier;	// IMP=0x0000000000004e68
- (unsigned int)effectiveUserIdentifier;	// IMP=0x0000000000004e3d
- (int)processIdentifier;	// IMP=0x0000000000004e12
- (int)auditSessionIdentifier;	// IMP=0x0000000000004de7
- (id)_connection;	// IMP=0x0000000000004d88
- (void)invalidate;	// IMP=0x0000000000004d06
- (void)suspend;	// IMP=0x0000000000004c93
- (void)resume;	// IMP=0x0000000000004c20
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004bb4
- (CDUnknownBlockType)invalidationHandler;	// IMP=0x0000000000004b50
- (void)setInterruptionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004a87
- (CDUnknownBlockType)interruptionHandler;	// IMP=0x0000000000004a23
- (void)_queue_invokeInvalidationHandler;	// IMP=0x0000000000004911
- (void)_invokeInterruptionHandlerForPromise:(id)arg1;	// IMP=0x000000000000482c
- (CDUnknownBlockType)_nts_wrappedInterruptionHandler;	// IMP=0x00000000000046e9
- (void)_finishPromise:(id)arg1 withConnection:(id)arg2 error:(id)arg3;	// IMP=0x00000000000046a9
- (void)_invalidatePromise:(id)arg1;	// IMP=0x000000000000464f
- (id)_connectionForPromise:(id)arg1;	// IMP=0x0000000000004608
- (void)setExportedObject:(id)arg1;	// IMP=0x000000000000456d
- (id)exportedObject;	// IMP=0x000000000000450d
- (void)setExportedInterface:(id)arg1;	// IMP=0x0000000000004472
- (id)exportedInterface;	// IMP=0x0000000000004412
- (void)setRemoteObjectInterface:(id)arg1;	// IMP=0x0000000000004377
- (id)remoteObjectInterface;	// IMP=0x0000000000004317
- (id)description;	// IMP=0x00000000000042bb
- (void)dealloc;	// IMP=0x00000000000041ec
- (id)initWithProtocol:(id)arg1;	// IMP=0x00000000000040fe

@end

