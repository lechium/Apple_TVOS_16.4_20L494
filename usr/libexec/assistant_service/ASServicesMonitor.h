//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol ASServicesMonitorDelegate, OS_dispatch_queue;

@interface ASServicesMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _keepAliveCount;	// 16 = 0x10
    SEL _abortMethod;	// 24 = 0x18
    NSString *_stuckPluginPath;	// 32 = 0x20
    NSMutableSet *_pendingServiceBundlesToReload;	// 40 = 0x28
    id <ASServicesMonitorDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000057dc
@property(nonatomic) __weak id <ASServicesMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_reloadPendingServiceBundles;	// IMP=0x00100000000054e4
- (void)reloadServiceBundleAtPath:(id)arg1;	// IMP=0x001000000000535e
- (CDUnknownBlockType)keepAliveWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000518b
- (CDUnknownBlockType)startWatchdogForPluginAtPath:(id)arg1 syncClassName:(id)arg2 syncSnapshotCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004e73
- (CDUnknownBlockType)startWatchdogForPluginAtPath:(id)arg1 syncClassName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004aef
- (void)_restartDueToStuckPluginAtPath:(id)arg1;	// IMP=0x0010000000004a03
- (void)__CRASH_DUE_TO_STUCK_PLUGIN__;	// IMP=0x001000000000499e
- (void)_restartProcessIfNeeded;	// IMP=0x00100000000048e5
- (void)decrementKeepAliveCount;	// IMP=0x00100000000047d6
- (void)incrementKeepAliveCount;	// IMP=0x00100000000046e4
- (id)init;	// IMP=0x001000000000463b
- (id)_pendingServiceBundlesToReload;	// IMP=0x0010000000004600

@end

