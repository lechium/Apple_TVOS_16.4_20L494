//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _FMBoundedQueueingStrategy : NSObject
{
    unsigned long long _capacity;	// 8 = 0x8
    CDUnknownBlockType _overflowHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000036fa
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;	// IMP=0x0000000000003641
- (id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000035c2
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000003569

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

