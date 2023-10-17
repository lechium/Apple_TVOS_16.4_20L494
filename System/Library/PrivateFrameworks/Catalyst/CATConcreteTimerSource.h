//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CATConcreteTimerSource : NSObject
{
    NSObject<OS_dispatch_queue> *mWorkQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004a745
- (id)scheduleInfiniteTimerWithIdentifier:(id)arg1 timeInterval:(double)arg2 queue:(id)arg3 fireHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004a665
- (id)scheduleRepeatTimerWithIdentifier:(id)arg1 timeInterval:(double)arg2 queue:(id)arg3 totalFires:(unsigned long long)arg4 fireHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004a580
- (id)scheduleOneShotTimerWithIdentifier:(id)arg1 timeInterval:(double)arg2 queue:(id)arg3 fireHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004a49d
- (id)init;	// IMP=0x000000000004a44a

@end

