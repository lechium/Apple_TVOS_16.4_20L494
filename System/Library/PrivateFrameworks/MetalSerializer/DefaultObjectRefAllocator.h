//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalSerializer/MTLSerializerObjectRefAllocator-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DefaultObjectRefAllocator : NSObject <MTLSerializerObjectRefAllocator>
{
    void *_generator;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

- (void)releaseObjectRef:(unsigned int)arg1;	// IMP=0x000000000000258c
- (unsigned int)allocateObjectRef;	// IMP=0x000000000000257e
- (void)dealloc;	// IMP=0x0000000000002519
- (id)init;	// IMP=0x000000000000248e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

