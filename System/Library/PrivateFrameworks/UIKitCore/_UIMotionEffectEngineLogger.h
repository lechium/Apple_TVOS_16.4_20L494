//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngineLogger : NSObject
{
    long long _motionLevelSamples[8];	// 8 = 0x8
    long long _sampleCount;	// 72 = 0x48
    long long _updateFreqency;	// 80 = 0x50
    double _lastUpdateTimeStamp;	// 88 = 0x58
}

- (void)_dumpToAggregated;	// IMP=0x0000000000baa010
- (void)recordMotionMagnitude:(double)arg1 atTimestamp:(double)arg2;	// IMP=0x0000000000ba9e86
- (id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2;	// IMP=0x0000000000ba9e08

@end

