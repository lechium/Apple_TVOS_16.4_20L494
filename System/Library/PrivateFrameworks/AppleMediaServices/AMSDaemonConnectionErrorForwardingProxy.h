//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSXPCInterface;
@protocol NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface AMSDaemonConnectionErrorForwardingProxy : NSProxy
{
    _Bool _isSync;	// 8 = 0x8
    NSXPCInterface *_interface;	// 16 = 0x10
    id <NSXPCProxyCreating> _proxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001cfe64
@property(readonly, nonatomic) _Bool isSync; // @synthesize isSync=_isSync;
@property(readonly, nonatomic) id <NSXPCProxyCreating> proxy; // @synthesize proxy=_proxy;
@property(readonly, nonatomic) NSXPCInterface *interface; // @synthesize interface=_interface;
- (id)_blockToInvokeWithErrorForwardingForInvocation:(id)arg1 errorArgumentIndex:(unsigned long long *)arg2;	// IMP=0x00000000001cf559
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000001cf4fa
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000001cf0ae
- (id)initWithProxy:(id)arg1 fromInterface:(id)arg2 isSync:(_Bool)arg3;	// IMP=0x00000000001cf021
- (id)initWithProxy:(id)arg1 fromInterface:(id)arg2;	// IMP=0x00000000001cf00c

@end

