//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (FezAdditions)
- (_Bool)isNull;	// IMP=0x0060000000002ebe
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ignoreMenuTracking:(_Bool)arg4;	// IMP=0x006000000000aba0
- (id)__im_getInvocation:(id *)arg1;	// IMP=0x006000000000d0b2
- (id)__im_afterDelay:(double)arg1 modes:(id)arg2;	// IMP=0x006000000000d04c
- (id)__im_afterDelay:(double)arg1;	// IMP=0x006000000000d00a
- (id)__im_onThread:(id)arg1;	// IMP=0x006000000000cff6
- (id)__im_onThread:(id)arg1 immediateForMatchingThread:(_Bool)arg2;	// IMP=0x006000000000cf95
- (id)__im_onDetachedThread;	// IMP=0x006000000000cf81
- (id)__im_onMainThreadIfNecessary;	// IMP=0x006000000000cf16
- (id)__im_onMainThread;	// IMP=0x006000000000ceb0
@end

