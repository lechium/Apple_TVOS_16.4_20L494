//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_xpc_object;

@interface _NSDNXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_conn;	// 8 = 0x8
    NSObject<OS_xpc_object> *_sconn;	// 16 = 0x10
    struct _opaque_pthread_mutex_t _lock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dq;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_dgroup;	// 96 = 0x60
    NSString *_serviceName;	// 104 = 0x68
    CDUnknownBlockType _handleMessage;	// 112 = 0x70
    long long _mseqno;	// 120 = 0x78
    NSMutableArray *_invalidHandlers;	// 128 = 0x80
    NSMutableArray *_termImminentHandlers;	// 136 = 0x88
    int _started;	// 144 = 0x90
    int _invalid;	// 148 = 0x94
    int _flavor;	// 152 = 0x98
}

- (void)sendMessage:(id)arg1 waitForAck:(_Bool)arg2;	// IMP=0x0020000000004536
- (void)sendMessage:(id)arg1;	// IMP=0x0010000000004496
- (void)start;	// IMP=0x0010000000004446
- (void)addTerminationImminentHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000043e8
- (void)addInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000436e
- (void)invalidate;	// IMP=0x00100000000041bb
- (void)__terminationImminent;	// IMP=0x00100000000040ae
- (id)__invalidate;	// IMP=0x001000000000406b
- (id)dispatchQueue;	// IMP=0x0010000000004061
@property(copy) CDUnknownBlockType handleMessage; // @dynamic handleMessage;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *XPCConnection; // @dynamic XPCConnection;
@property(readonly) NSString *serviceName; // @dynamic serviceName;
- (id)initWithPeerConnection:(id)arg1 target:(id)arg2;	// IMP=0x0010000000003f6d
- (id)initWithReceivedConnection:(id)arg1 target:(id)arg2;	// IMP=0x0010000000003f53
- (id)initWithEndpoint:(id)arg1 target:(id)arg2;	// IMP=0x0010000000003f04
- (id)initWithServiceName:(id)arg1 privileged:(_Bool)arg2 target:(id)arg3;	// IMP=0x0010000000003ddf
- (void)dealloc;	// IMP=0x0010000000003d80
- (id)initWithXPCConnection:(id)arg1 type:(int)arg2 target:(id)arg3;	// IMP=0x0010000000003c82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

