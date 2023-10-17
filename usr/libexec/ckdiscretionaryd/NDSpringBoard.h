//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface NDSpringBoard : NSObject
{
    BKSApplicationStateMonitor *_monitor;	// 8 = 0x8
    NSMutableDictionary *_observers;	// 16 = 0x10
    NSMutableDictionary *_appStates;	// 24 = 0x18
    NSMutableSet *_monitoredBundleIDs;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)sharedSpringBoard;	// IMP=0x004000000000609e
- (void).cxx_destruct;	// IMP=0x002000000000711d
- (_Bool)identifierIsForSpringBoardApplication:(id)arg1;	// IMP=0x001000000000702b
- (_Bool)applicationIsForeground:(id)arg1;	// IMP=0x001000000000700a
- (unsigned int)applicationStateForBundleID:(id)arg1;	// IMP=0x0010000000006dda
- (void)stopMonitoringBundleID:(id)arg1;	// IMP=0x0010000000006ccb
- (void)startMonitoringBundleID:(id)arg1;	// IMP=0x0010000000006b51
- (void)removeObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0010000000006a39
- (void)addObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x00100000000068ac
- (void)handleApplicationStateChange:(id)arg1;	// IMP=0x00100000000062fc
- (void)setupMonitor;	// IMP=0x001000000000621c
- (id)init;	// IMP=0x0010000000006107

@end

