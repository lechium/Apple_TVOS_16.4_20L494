//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AVAudioSessionXPCClientRelay : NSObject
{
    struct synchronized<as::server::DeferredMessageState, caulk::mach::unfair_lock, caulk::empty_atomic_interface<as::server::DeferredMessageState>> guarded_impl;	// 8 = 0x8
    NSXPCConnection *connection;	// 256 = 0x100
    struct ProcessToken token;	// 264 = 0x108
}

- (id).cxx_construct;	// IMP=0x0000000000004180
- (void).cxx_destruct;	// IMP=0x0000000000004159
- (void)sendControlValueChanged:(const void *)arg1;	// IMP=0x00000000000040e3
- (void)sendServerConfigurationChange:(const void *)arg1;	// IMP=0x000000000000406d
- (void)sendSessionNeedsStateSync:(unsigned int)arg1;	// IMP=0x0000000000003ff7
- (void)sendSession:(unsigned int)arg1 hasProxies:(_Bool)arg2;	// IMP=0x0000000000003f6c
- (void)sendSessionStoppedForAppStateChange:(unsigned int)arg1;	// IMP=0x0000000000003ef6
- (void)sendInterruptionMessageForSession:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0000000000003e64
- (void)sendServerDefaultRouteChange:(const void *)arg1;	// IMP=0x0000000000003dee
- (void)setBarrierBlock;	// IMP=0x0000000000003cbd
- (void)sendDeferredMessages;	// IMP=0x0000000000003c4f
- (id)initWithConnection:(id)arg1 token:(struct ProcessToken)arg2;	// IMP=0x0000000000003b6e

@end
