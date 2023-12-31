//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ISDeferredDealloc : NSObject
{
    NSObject<OS_dispatch_queue> *_deferredDeallocQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000000baea
- (void)dealloc;	// IMP=0x000000000000b9aa
- (void)_performDeferredDealloc:(id)arg1;	// IMP=0x000000000000b941
- (void)_performDeferredDealloc:(id)arg1 withDelay:(double)arg2;	// IMP=0x000000000000b8be
- (id)init;	// IMP=0x000000000000b861

@end

