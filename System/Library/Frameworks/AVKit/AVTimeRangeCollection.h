//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVTimeRangeCollection : NSObject
{
    NSArray *_timeRanges;	// 8 = 0x8
    double _combinedDuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a2183
@property(readonly) double combinedDuration; // @synthesize combinedDuration=_combinedDuration;
@property(readonly) NSArray *timeRanges; // @synthesize timeRanges=_timeRanges;
- (id)displayTimeRangeTrimmedToTimeRange:(id)arg1;	// IMP=0x00000000000a2027
- (double)timeFromDisplayTime:(double)arg1;	// IMP=0x00000000000a1e6a
- (double)displayTimeFromTime:(double)arg1;	// IMP=0x00000000000a1bbf
- (id)timeRangesBetweenDisplayTime:(double)arg1 and:(double)arg2;	// IMP=0x00000000000a193b
- (id)arrayOfDisplayTimes;	// IMP=0x00000000000a1922
- (id)arrayOfDisplayTimesMatching:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a180f
- (id)arrayOfBoundaryTimes;	// IMP=0x00000000000a1501
- (id)timeRangeAfterTime:(double)arg1;	// IMP=0x00000000000a1342
- (id)timeRangeBeforeTime:(double)arg1;	// IMP=0x00000000000a117b
- (id)timeRangeClosestToTime:(double)arg1;	// IMP=0x00000000000a0f0e
- (id)timeRangeContainingTime:(double)arg1;	// IMP=0x00000000000a0dab
- (unsigned long long)count;	// IMP=0x00000000000a0d67
- (void)setMapDate:(id)arg1 toTime:(double)arg2;	// IMP=0x00000000000a0c06
- (id)initWithTimedMetadataGroups:(id)arg1;	// IMP=0x00000000000a0a13
- (id)init;	// IMP=0x00000000000a09fa
- (id)initWithTimeRanges:(id)arg1;	// IMP=0x00000000000a07c8
- (id)initWithInterstitialTimeRanges:(id)arg1;	// IMP=0x00000000000fe11e

@end

