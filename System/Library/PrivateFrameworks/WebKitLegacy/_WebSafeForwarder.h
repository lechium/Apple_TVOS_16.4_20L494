//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _WebSafeAsyncForwarder;

__attribute__((visibility("hidden")))
@interface _WebSafeForwarder : NSObject
{
    id _target;	// 8 = 0x8
    id _defaultTarget;	// 16 = 0x10
    _WebSafeAsyncForwarder *_asyncForwarder;	// 24 = 0x18
}

@property(readonly, nonatomic) id asyncForwarder; // @synthesize asyncForwarder=_asyncForwarder;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000d51d0
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000d51b0
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000d50a0
- (void)clearTarget;	// IMP=0x00000000000d5090
- (void)dealloc;	// IMP=0x00000000000d5040
- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2;	// IMP=0x00000000000d4fc0

@end

