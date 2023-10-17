//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _GEOURLManifestListener : NSObject
{
    NSMutableArray *_handlers;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 24 = 0x18
}

+ (id)sharedListener;	// IMP=0x00600000011d64f1
- (void).cxx_destruct;	// IMP=0x00000000011d6cb0
- (void)waitForManifestWithCallback:(id)arg1;	// IMP=0x00000000011d6803
- (void)_finish:(_Bool)arg1;	// IMP=0x00000000011d65b5
- (id)init;	// IMP=0x00000000011d6546

@end
