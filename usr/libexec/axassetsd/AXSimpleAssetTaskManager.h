//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface AXSimpleAssetTaskManager : NSObject
{
    NSMutableDictionary *_taskQueues;	// 8 = 0x8
    NSMutableSet *_registeredTasks;	// 16 = 0x10
    NSMutableSet *_inflightTasks;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_taskDispatcherQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_taskCompletionWaitingQueue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x004000000000dff0
- (void).cxx_destruct;	// IMP=0x0020000000012300
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskCompletionWaitingQueue; // @synthesize taskCompletionWaitingQueue=_taskCompletionWaitingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskDispatcherQueue; // @synthesize taskDispatcherQueue=_taskDispatcherQueue;
@property(retain, nonatomic) NSMutableSet *inflightTasks; // @synthesize inflightTasks=_inflightTasks;
@property(retain, nonatomic) NSMutableSet *registeredTasks; // @synthesize registeredTasks=_registeredTasks;
@property(retain, nonatomic) NSMutableDictionary *taskQueues; // @synthesize taskQueues=_taskQueues;
- (id)_getBootTime;	// IMP=0x0010000000012040
- (id)_taskQueueForTask:(Class)arg1;	// IMP=0x0010000000011e30
- (void)_handleXPCActivity:(id)arg1 taskClass:(Class)arg2;	// IMP=0x0010000000011cb0
- (void)_dispatchTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010bc0
- (id)_tasksForFirstBoot;	// IMP=0x00100000000105b0
- (id)_anonymousTaskForId:(id)arg1 withArguments:(id)arg2;	// IMP=0x0010000000010130
- (id)_tasksForNotification:(id)arg1;	// IMP=0x001000000000f830
- (void)_handleNotification:(id)arg1;	// IMP=0x001000000000f5f0
- (void)invokeTaskById:(id)arg1 arguments:(id)arg2;	// IMP=0x001000000000f520
- (void)handleFirstBoot:(_Bool)arg1;	// IMP=0x001000000000ef50
- (void)registerTask:(Class)arg1;	// IMP=0x001000000000e550
- (void)start;	// IMP=0x001000000000e2d0
- (id)init;	// IMP=0x001000000000e0b0

@end

