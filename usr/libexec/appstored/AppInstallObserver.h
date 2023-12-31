//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppInstallScheduler, AppInstallsDatabaseStore, IXAppInstallObserver, NSMutableDictionary, NSString, TaskQueue, UnfairLock;
@protocol OS_dispatch_queue;

@interface AppInstallObserver : NSObject
{
    AppInstallsDatabaseStore *_databaseStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    TaskQueue *_policyQueue;	// 24 = 0x18
    IXAppInstallObserver *_installObserver;	// 32 = 0x20
    AppInstallScheduler *_installScheduler;	// 40 = 0x28
    UnfairLock *_lock;	// 48 = 0x30
    NSMutableDictionary *_observedCoordinators;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000a3122
- (void)coordinator:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;	// IMP=0x00100000000a2fbb
- (void)coordinatorShouldBeginPostProcessing:(id)arg1 forApplicationRecord:(id)arg2;	// IMP=0x00100000000a2c26
- (id)init;	// IMP=0x00000000000a28d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

