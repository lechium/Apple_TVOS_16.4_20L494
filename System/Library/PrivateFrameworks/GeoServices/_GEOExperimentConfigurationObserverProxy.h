//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOExperimentConfigurationObserverProxy : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    struct os_unfair_lock_s _observersLock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000011e6b68
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (unsigned long long)observersCount;	// IMP=0x00000000011e6b0e
- (void)forEachObserver:(CDUnknownBlockType)arg1;	// IMP=0x00000000011e68f2
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000000011e6888
- (void)registerObserver:(id)arg1;	// IMP=0x00000000011e67ed
- (id)description;	// IMP=0x00000000011e6722
- (id)init;	// IMP=0x00000000011e66cd

@end

