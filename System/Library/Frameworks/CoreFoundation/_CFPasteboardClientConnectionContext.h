//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CFPasteboardClientConnectionContext : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    struct __CFArray *_cleanupBlocks;	// 16 = 0x10
}

- (void)cleanup;	// IMP=0x00000000000921f6
- (void)addCleanupBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000092112
- (void)dealloc;	// IMP=0x00000000000920b0
- (id)init;	// IMP=0x000000000009202e

@end

