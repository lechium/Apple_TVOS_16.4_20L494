//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMCatherineFeederInternal : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 8 = 0x8
    void *fLocationdConnection;	// 16 = 0x10
}

- (void)_feedCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3;	// IMP=0x00000000001d9252
- (void)_startDaemonConnection;	// IMP=0x00000000001d90ba
- (void)_teardown;	// IMP=0x00000000001d908a
- (void)dealloc;	// IMP=0x00000000001d904f
- (id)init;	// IMP=0x00000000001d8f86

@end

