//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NRMockXPCProxy : NSProxy
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _async;	// 16 = 0x10
    id _target;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000003c3d
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000039ed
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000039a1

@end

