//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface RMConnectionListener : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_connections;	// 16 = 0x10
    NSObject<OS_xpc_object> *_listener;	// 24 = 0x18
    CDUnknownBlockType _messageHandlerConstructor;	// 32 = 0x20
    NSString *_entitlement;	// 40 = 0x28
    NSString *_tccService;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000004d7f
@property(copy, nonatomic) NSString *tccService; // @synthesize tccService=_tccService;
@property(copy, nonatomic) NSString *entitlement; // @synthesize entitlement=_entitlement;
@property(copy, nonatomic) CDUnknownBlockType messageHandlerConstructor; // @synthesize messageHandlerConstructor=_messageHandlerConstructor;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)endpointWasInvalidated:(id)arg1;	// IMP=0x0010000000004bc6
- (void);	// IMP=0x00100000000049b8
- (void)invalidate;	// IMP=0x00100000000048c8
- (void)traverseEndpointsAsynchronously:(CDUnknownBlockType)arg1;	// IMP=0x00100000000046a2
- (void)startListeningForService:(id)arg1;	// IMP=0x0010000000003f21
- (_Bool)isEndpointConnectionAllowed:(id)arg1;	// IMP=0x0010000000003cfb
- (id)initWithQueue:(id)arg1 entitlement:(id)arg2 tccService:(id)arg3 messageHandlerConstructor:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003c10
- (id)initWithQueue:(id)arg1 entitlement:(id)arg2 messageHandlerConstructor:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003bf8
- (id)_initWithQueue:(id)arg1 entitlement:(id)arg2 tccService:(id)arg3 messageHandlerConstructor:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003ae4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

