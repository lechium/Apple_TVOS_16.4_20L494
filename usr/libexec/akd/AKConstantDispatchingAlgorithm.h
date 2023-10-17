//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AKConstantDispatchingAlgorithm : NSObject
{
    unsigned long long _counter;	// 8 = 0x8
    unsigned long long _queueSize;	// 16 = 0x10
    double _delay;	// 24 = 0x18
    unsigned long long _maxQueueSize;	// 32 = 0x20
}

@property(readonly, nonatomic) unsigned long long maxQueueSize; // @synthesize maxQueueSize=_maxQueueSize;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (void)_decrementQueueSize;	// IMP=0x001000000001b8c8
- (_Bool)_incrementQueueSize;	// IMP=0x001000000001b8a7
@property(readonly, copy) NSString *debugDescription;
- (id)nextCalculation;	// IMP=0x001000000001b6bf
- (id)initWithDelay:(double)arg1 maxQueueSize:(unsigned long long)arg2;	// IMP=0x001000000001b673

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

