//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_os_transaction, OS_xpc_object, RBDaemonContextProviding;

__attribute__((visibility("hidden")))
@interface RBConnectionListener : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_listener;	// 24 = 0x18
    NSMapTable *_lock_connectionToClientMap;	// 32 = 0x20
    NSMapTable *_lock_identifierToClientMap;	// 40 = 0x28
    NSMutableArray *_lock_readyClients;	// 48 = 0x30
    id <RBDaemonContextProviding> _context;	// 56 = 0x38
    NSObject<OS_os_transaction> *_transaction;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000049ab9
- (id)captureState;	// IMP=0x0000000000049aa7
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property(readonly, copy) NSString *debugDescription;
- (id)init;	// IMP=0x0000000000048d01

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

