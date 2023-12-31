//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface NDStatusMonitor : NSObject
{
    struct __CFRunLoopSource *_dynamicStoreSource;	// 8 = 0x8
    NSMutableArray *;	// 16 = 0x10
    unsigned long long _networkChangeEventCount;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    int _symptomToken;	// 40 = 0x28
}

+ (id)sharedMonitor;	// IMP=0x004000000002f5bb
- (void).cxx_destruct;	// IMP=0x002000000002f35b
- (void)stop;	// IMP=0x001000000002f349
- (void)start;	// IMP=0x001000000002f337
- (void)stopMonitoringDynamicStore;	// IMP=0x001000000002f308
- (void)startMonitoringDynamicStore;	// IMP=0x001000000002f00c
- (void)handleBetterNetworkEvent;	// IMP=0x001000000002f006
- (void)handleDynamicStoreCallback:(struct __SCDynamicStore *)arg1 changedKeys:(struct __CFArray *)arg2;	// IMP=0x001000000002f000
- (void)performBlockAfterNetworkChangedEvent:(CDUnknownBlockType)arg1 delay:(long long)arg2;	// IMP=0x001000000002ef69
- (void)performBlockAfterNetworkChangedEvent:(CDUnknownBlockType)arg1 numberOfPreviousRetries:(unsigned long long)arg2;	// IMP=0x001000000002ef1a
- (void)dealloc;	// IMP=0x001000000002eea7
- (id)init;	// IMP=0x001000000002edac

@end

