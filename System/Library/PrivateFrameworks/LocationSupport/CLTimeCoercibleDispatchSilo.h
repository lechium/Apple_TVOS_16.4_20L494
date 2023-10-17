//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLDispatchSilo.h"

@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo
{
    NSMutableArray *_timerHolders;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000001adec
@property(readonly, nonatomic) NSMutableArray *timerHolders; // @synthesize timerHolders=_timerHolders;
- (id)newTimer;	// IMP=0x000000000001ad56
- (void)heartBeat:(id)arg1;	// IMP=0x000000000001ac97
- (void)afterInterval:(double)arg1 async:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ab98
- (void)prepareAndRunBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ab86
- (void)setLatchedAbsoluteTimestamp:(double)arg1;	// IMP=0x000000000001a7e1
- (id)initWithUnderlyingQueue:(id)arg1;	// IMP=0x000000000001a774
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000001a707

@end

