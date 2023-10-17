//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue_serial;

__attribute__((visibility("hidden")))
@interface TVHKDeviceStatusCenter : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSHashTable *_lock_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue_serial> *_queue;	// 24 = 0x18
    _Bool _lock_sleeping;	// 32 = 0x20
}

+ (id)sharedCenter;	// IMP=0x00600000000a009c
- (void).cxx_destruct;	// IMP=0x00000000000a060c
- (void)_queue_updateSleeping;	// IMP=0x00000000000a044f
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000a03f6
- (void)addObserver:(id)arg1;	// IMP=0x00000000000a039d
@property(readonly, nonatomic, getter=isSleeping) _Bool sleeping; // @synthesize sleeping=_lock_sleeping;
- (id)_init;	// IMP=0x00000000000a0170
- (id)init;	// IMP=0x00000000000a0101

@end

