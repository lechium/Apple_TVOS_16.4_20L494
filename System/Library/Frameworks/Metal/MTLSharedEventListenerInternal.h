//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLSharedEventListener.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTLSharedEventListenerInternal : MTLSharedEventListener
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x00000000001018b4
- (id)dispatchQueue;	// IMP=0x00000000001018a3
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x000000000010183b
- (id)init;	// IMP=0x00000000001017e6

@end

