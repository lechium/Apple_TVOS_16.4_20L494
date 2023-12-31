//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICPlayActivityTable, NSOperationQueue, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ICPlayActivityServer : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSOperationQueue *_debugLogOperationQueue;	// 24 = 0x18
    NSOperationQueue *_flushOperationQueue;	// 32 = 0x20
    long long _flushOperationCount;	// 40 = 0x28
    double _nextFlushPlayActivityFireSyncInterval;	// 48 = 0x30
    double _testNextFlushPlayActivityFireSyncInterval;	// 56 = 0x38
    NSXPCListener *_listener;	// 64 = 0x40
    ICPlayActivityTable *_table;	// 72 = 0x48
}

+ (id)PlayActivityStorageDirectoryPath;	// IMP=0x00200000000be7b8
+ (id)sharedInstance;	// IMP=0x00100000000be788
- (void).cxx_destruct;	// IMP=0x00200000000bd71a
- (void)_scheduleNextPlayActivityFlushOperationWithCriteria:(id)arg1;	// IMP=0x00100000000bd682
- (_Bool)_isValidTimeInterval:(double)arg1;	// IMP=0x00100000000bd615
- (id)_criteriaDictionaryWithPostFrequency:(double)arg1;	// IMP=0x00100000000bd353
- (void)_timeIntervalForNextFlushOperationWithReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bd10c
- (_Bool)hasPendingPlayEvents;	// IMP=0x00100000000bcfb5
- (void)_dispatchCompletionHandler:(CDUnknownBlockType)arg1 withError:(id)arg2;	// IMP=0x00100000000bcefa
- (void)_handleFlushRequestNotification:(id)arg1;	// IMP=0x00100000000bcec9
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000bcbc8
- (void)insertPlayActivityEvents:(id)arg1 shouldFlush:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bc7f4
- (void)flushPendingPlayActivityEventsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bc625
- (void)stop;	// IMP=0x00100000000bc580
- (void)start;	// IMP=0x00100000000bc4ca
- (id)_init;	// IMP=0x00100000000bc360
- (id)init;	// IMP=0x00100000000bc31e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

