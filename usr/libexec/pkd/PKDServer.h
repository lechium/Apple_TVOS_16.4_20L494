//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, PKDUserPrefs;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface PKDServer
{
    unsigned int _verbose;	// 8 = 0x8
    struct os_unfair_lock_s _holdLock;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_mainQueue;	// 24 = 0x18
    NSObject<OS_xpc_object> *_service;	// 32 = 0x20
    PKDUserPrefs *_userPrefs;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_sigSource;	// 48 = 0x30
    NSMutableArray *_holds;	// 56 = 0x38
}

+ (id)server;	// IMP=0x0020000000001bc6
- (void).cxx_destruct;	// IMP=0x00200000000030a2
@property(nonatomic) struct os_unfair_lock_s holdLock; // @synthesize holdLock=_holdLock;
@property(retain) NSMutableArray *holds; // @synthesize holds=_holds;
@property(retain) NSObject<OS_dispatch_source> *sigSource; // @synthesize sigSource=_sigSource;
@property(retain) PKDUserPrefs *userPrefs; // @synthesize userPrefs=_userPrefs;
@property(retain) NSObject<OS_xpc_object> *service; // @synthesize service=_service;
@property(retain) NSObject<OS_dispatch_queue> *mainQueue; // @synthesize mainQueue=_mainQueue;
@property(retain) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property unsigned int verbose; // @synthesize verbose=_verbose;
- (void)stop;	// IMP=0x0010000000002cd0
- (void)unholdClient:(id)arg1;	// IMP=0x0010000000002a34
- (void)unholdToken:(id)arg1 silent:(_Bool)arg2;	// IMP=0x0010000000002756
- (void)addHold:(id)arg1 silent:(_Bool)arg2;	// IMP=0x00100000000026b7
- (id)holdOnPlugIn:(id)arg1;	// IMP=0x00100000000023eb
- (void)terminatePlugIns:(id)arg1 synchronously:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001d0e
- (void)removedPlugIns:(id)arg1;	// IMP=0x0010000000001c30
- (void)run;	// IMP=0x0010000000001bd7
- (id)initWithConnection:(id)arg1 queue:(id)arg2 database:(id)arg3 proxyFactory:(id)arg4;	// IMP=0x00100000000016ef
- (id)initForService:(const char *)arg1 database:(id)arg2 proxyFactory:(id)arg3;	// IMP=0x001000000000161c
- (void)_startSandbox;	// IMP=0x0010000000001616

@end

