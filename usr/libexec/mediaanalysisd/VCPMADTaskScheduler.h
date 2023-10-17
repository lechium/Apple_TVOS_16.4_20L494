//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADScopedWatchdog, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPMADTaskScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_managementQueue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_runningGroup;	// 16 = 0x10
    NSMutableArray *_runningTasks;	// 24 = 0x18
    NSMutableDictionary *_pendingTasks;	// 32 = 0x20
    unsigned long long _nextTaskID;	// 40 = 0x28
    float _resourceBudget;	// 48 = 0x30
    int _cpuMonitorID;	// 52 = 0x34
    MADScopedWatchdog *_scopedWatchdog;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x004000000000f5fb
+ (id)qosArray;	// IMP=0x001000000000f283
- (void).cxx_destruct;	// IMP=0x0020000000012bc8
- (unsigned long long)currentOutstandingTasks;	// IMP=0x0010000000012955
- (void)cancelAllTasks;	// IMP=0x0010000000012421
- (void)cancelTaskWithID:(unsigned long long)arg1;	// IMP=0x0010000000011def
- (unsigned long long)addBackgroundTask:(id)arg1 withQoS:(unsigned int)arg2;	// IMP=0x0010000000011a78
- (unsigned long long)addForegroundTask:(id)arg1 withQoS:(unsigned int)arg2;	// IMP=0x0010000000011701
- (unsigned int)validateQoS:(unsigned int)arg1;	// IMP=0x00100000000114b9
- (_Bool)validateTask:(id)arg1;	// IMP=0x001000000001134e
- (void)cancelBackgroundTasks;	// IMP=0x0010000000011143
- (void)_runTask:(id)arg1;	// IMP=0x00100000000108fa
- (void)_schedule;	// IMP=0x001000000001045f
- (void)_tryFreeingResourcesForQOS:(id)arg1 resourceRequirement:(float)arg2;	// IMP=0x001000000000f650
- (void)dealloc;	// IMP=0x001000000000f56f
- (id)init;	// IMP=0x001000000000f290

@end

