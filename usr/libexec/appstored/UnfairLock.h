//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface UnfairLock : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
}

- (void)unlock;	// IMP=0x002000000017c565
- (void)lock;	// IMP=0x001000000017c557
- (id)init;	// IMP=0x001000000017c51c

@end

