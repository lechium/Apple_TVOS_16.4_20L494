//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface IMDelayedInvocationTrampoline
{
    NSArray *_modes;	// 16 = 0x10
    double _delay;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c10d
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000000c083
- (id)initWithTarget:(id)arg1 delay:(double)arg2 modes:(id)arg3;	// IMP=0x000000000000bfd1

@end

