//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSExtensionURLResult : NSObject
{
    NSObject<OS_dispatch_semaphore> *_sema;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x0000000000428f62
- (_Bool)wait:(double)arg1;	// IMP=0x0000000000428f2c
- (void)signal;	// IMP=0x0000000000428f1e
@property(copy, setter=setURL:) NSURL *url;
- (id)copiedURL;	// IMP=0x0000000000428eca
- (id)init;	// IMP=0x0000000000428dfe

@end

