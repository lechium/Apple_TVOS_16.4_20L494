//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSRunLoop, NSThread;

@interface CLRunLoopSiloThread : NSObject
{
    struct _opaque_pthread_t *_threadId;	// 8 = 0x8
    NSRunLoop *_underlyingRunLoop;	// 16 = 0x10
    NSThread *_underlyingThread;	// 24 = 0x18
    _Bool _shouldCancelThread;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000097fb
@property(readonly, nonatomic) _Bool shouldCancelThread; // @synthesize shouldCancelThread=_shouldCancelThread;
@property(readonly, nonatomic) NSThread *underlyingThread; // @synthesize underlyingThread=_underlyingThread;
@property(readonly, nonatomic) NSRunLoop *underlyingRunLoop; // @synthesize underlyingRunLoop=_underlyingRunLoop;
@property(readonly, nonatomic) struct _opaque_pthread_t *threadId; // @synthesize threadId=_threadId;
- (void)dealloc;	// IMP=0x000000000000976e
- (id)initWithCurrentThread;	// IMP=0x00000000000096c7
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1;	// IMP=0x0000000000009448
- (id)init;	// IMP=0x0000000000009127

@end

