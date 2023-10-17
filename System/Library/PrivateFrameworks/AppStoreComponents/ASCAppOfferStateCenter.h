//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPromise, ASCJitterBackoff, ASCPendingPromises, ASCWorkspace, NSMapTable, NSString;
@protocol ASCServices;

__attribute__((visibility("hidden")))
@interface ASCAppOfferStateCenter : NSObject
{
    id <ASCServices> _connection;	// 8 = 0x8
    ASCWorkspace *_workspace;	// 16 = 0x10
    NSMapTable *_stateMachines;	// 24 = 0x18
    ASCJitterBackoff *_reconnectBackoff;	// 32 = 0x20
    ASCPendingPromises *_pendingActionPromises;	// 40 = 0x28
    AMSPromise *_service;	// 48 = 0x30
}

+ (id)sharedCenter;	// IMP=0x001000000000acbf
+ (id)log;	// IMP=0x001000000000ac63
- (void).cxx_destruct;	// IMP=0x000000000000d425
@property(retain, nonatomic) AMSPromise *service; // @synthesize service=_service;
@property(readonly, nonatomic) ASCPendingPromises *pendingActionPromises; // @synthesize pendingActionPromises=_pendingActionPromises;
@property(readonly, nonatomic) ASCJitterBackoff *reconnectBackoff; // @synthesize reconnectBackoff=_reconnectBackoff;
@property(readonly, nonatomic) NSMapTable *stateMachines; // @synthesize stateMachines=_stateMachines;
@property(readonly, nonatomic) ASCWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly, nonatomic) id <ASCServices> connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
- (void)offer:(id)arg1 didChangeStatusText:(id)arg2;	// IMP=0x000000000000d14b
- (void)offer:(id)arg1 didChangeState:(id)arg2 withMetadata:(id)arg3 flags:(long long)arg4;	// IMP=0x000000000000cfa8
- (id)reinstallWatchSystemAppWithBundleID:(id)arg1;	// IMP=0x000000000000cd03
- (id)reinstallWatchAppWithID:(id)arg1;	// IMP=0x000000000000ca5e
- (id)performActionOfOffer:(id)arg1 withActivity:(id)arg2 inContext:(id)arg3;	// IMP=0x000000000000c976
- (id)performFallbackActionForOffer:(id)arg1;	// IMP=0x000000000000c819
- (id)performActionOfOffer:(id)arg1 withActivity:(id)arg2 inContext:(id)arg3 usingService:(id)arg4;	// IMP=0x000000000000c395
- (void)stopObservingStateForOffer:(id)arg1;	// IMP=0x000000000000c086
- (id)stateMachineForOffer:(id)arg1;	// IMP=0x000000000000bca9
- (void)daemonDidRebootstrap:(id)arg1;	// IMP=0x000000000000bc4c
- (void)daemonConnectionWasLost:(id)arg1;	// IMP=0x000000000000bb4b
- (void)tryReconnect;	// IMP=0x000000000000b75c
- (void)scheduleTryReconnect;	// IMP=0x000000000000b6af
- (void)useOfferStateMachineFallback;	// IMP=0x000000000000b49a
- (void)connectToService;	// IMP=0x000000000000b020
- (void)dealloc;	// IMP=0x000000000000afab
- (id)initWithConnection:(id)arg1 workspace:(id)arg2;	// IMP=0x000000000000ad89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

