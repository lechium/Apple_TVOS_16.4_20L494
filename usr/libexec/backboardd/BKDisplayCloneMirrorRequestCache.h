//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayCloneMirrorRequestClient, NSMutableDictionary, NSMutableOrderedSet;
@protocol BKDisplayCloneMirrorRequestsDelegate;

@interface BKDisplayCloneMirrorRequestCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <BKDisplayCloneMirrorRequestsDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_displayUUIDToModeRequest;	// 24 = 0x18
    NSMutableDictionary *_pidToRequests;	// 32 = 0x20
    NSMutableOrderedSet *_modeRequestsInOrder;	// 40 = 0x28
    NSMutableDictionary *_pidToDeathWatcher;	// 48 = 0x30
    BKDisplayCloneMirrorRequestClient *_globalRequest;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000237ce
- (void)_lock_rebuildModeCache;	// IMP=0x0010000000023546
- (void)_lock_addDeathWatcherForPid:(int)arg1;	// IMP=0x0010000000023446

@end

