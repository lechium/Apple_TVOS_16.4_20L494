//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JEUnfairLock, NSString;

__attribute__((visibility("hidden")))
@interface ASCExponentialBackoff : NSObject
{
    double _baseSleepTimeInterval;	// 8 = 0x8
    double _maxSleepTimeInterval;	// 16 = 0x10
    JEUnfairLock *_attemptLock;	// 24 = 0x18
    long long _attemptsMade;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000017559
@property(nonatomic) long long attemptsMade; // @synthesize attemptsMade=_attemptsMade;
@property(readonly, nonatomic) JEUnfairLock *attemptLock; // @synthesize attemptLock=_attemptLock;
@property(readonly, nonatomic) double maxSleepTimeInterval; // @synthesize maxSleepTimeInterval=_maxSleepTimeInterval;
@property(readonly, nonatomic) double baseSleepTimeInterval; // @synthesize baseSleepTimeInterval=_baseSleepTimeInterval;
- (void)reset;	// IMP=0x0000000000017495
- (double)nextSleepTimeInterval;	// IMP=0x00000000000173b3
- (id)initWithBaseSleepTimeInterval:(double)arg1 maxSleepTimeInterval:(double)arg2;	// IMP=0x0000000000017337

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

