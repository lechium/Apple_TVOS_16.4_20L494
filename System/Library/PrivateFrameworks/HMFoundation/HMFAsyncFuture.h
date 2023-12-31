//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFFuture.h"

@class HMFPromise;

__attribute__((visibility("hidden")))
@interface HMFAsyncFuture : HMFFuture
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    int _state;	// 12 = 0xc
    HMFPromise *_promise;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000074d4
- (id)inContext:(id)arg1 then:(CDUnknownBlockType)arg2 orRecover:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007244
- (id)then:(CDUnknownBlockType)arg1 orRecover:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007238
- (id)inContext:(id)arg1 recover:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007229
- (id)recover:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007218
- (id)inContext:(id)arg1 then:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007206
- (id)then:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006e9f
- (void)getResultWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006cd6
- (struct _HMFFutureBlockOutcome)outcomeIfSettled;	// IMP=0x0000000000006bdc
- (_Bool)isPending;	// IMP=0x0000000000006b60

@end

