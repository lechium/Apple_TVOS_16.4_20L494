//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestTileGroupObserverProxy : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    struct os_unfair_lock_s _observersLock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000b0bcf9
- (void)registerObserver:(id)arg1;	// IMP=0x0000000000b0bac2
- (id)description;	// IMP=0x0000000000b0b9f7
- (id)init;	// IMP=0x0000000000b0b9a2

@end

