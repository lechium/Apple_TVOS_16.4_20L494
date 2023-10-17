//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class BSWatchdog, NSError, NSObject;
@protocol OS_dispatch_queue, PBMediaRemoteClient;

@interface PBMediaRemoteTransaction : BSTransaction
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    BSWatchdog *_watchdog;	// 16 = 0x10
    id <PBMediaRemoteClient> _client;	// 24 = 0x18
}

+ (id)_defaultClient;	// IMP=0x00400000001b7fda
- (void).cxx_destruct;	// IMP=0x00200000001b804a
@property(readonly, nonatomic) id <PBMediaRemoteClient> client; // @synthesize client=_client;
@property(readonly, nonatomic) BSWatchdog *watchdog; // @synthesize watchdog=_watchdog;
- (void)_failWithMediaRemoteError:(id)arg1;	// IMP=0x00100000001b8004
- (double)watchdogTimeout;	// IMP=0x00100000001b7fcc
- (void)_didComplete;	// IMP=0x00100000001b7f83
- (void)_begin;	// IMP=0x00100000001b7d78
- (id)queue;	// IMP=0x00100000001b7d62
@property(readonly, nonatomic) NSError *mediaRemoteError;
- (id)init;	// IMP=0x00100000001b7c82
- (id)initWithClient:(id)arg1;	// IMP=0x00100000001b7be7

@end

