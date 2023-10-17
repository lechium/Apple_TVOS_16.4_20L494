//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVInterstitialDateRange, AVInterstitialTimeRange, NSDate;

__attribute__((visibility("hidden")))
@interface AVTimeRange : NSObject
{
    double _startTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
}

+ (id)timeRangeZero;	// IMP=0x00100000000a075d
+ (id)timeRangeWithInterstice:(id)arg1;	// IMP=0x00100000000fe360
- (void).cxx_destruct;	// IMP=0x00000000000a074d
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) double startTime; // @synthesize startTime=_startTime;
- (id)description;	// IMP=0x00000000000a050b
- (long long)compare:(id)arg1;	// IMP=0x00000000000a042f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a03b2
- (_Bool)isEqualToTimeRange:(id)arg1;	// IMP=0x00000000000a0234
- (unsigned long long)hash;	// IMP=0x00000000000a01ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a0145
- (id)timeRangeByAddingTimeInterval:(double)arg1;	// IMP=0x00000000000a0131
- (id)timeRangeByAddingTimeInterval:(double)arg1 shiftingDates:(_Bool)arg2;	// IMP=0x00000000000a0035
- (id)timeRangeExcludingTimeRange:(id)arg1;	// IMP=0x000000000009fea3
- (id)timeRangeIntersectingWithTimeRange:(id)arg1;	// IMP=0x000000000009fd3c
- (double)pinnedTime:(double)arg1;	// IMP=0x000000000009fcfe
- (double)deltaTimeFromOutsideTime:(double)arg1;	// IMP=0x000000000009fc86
- (_Bool)containsDate:(id)arg1;	// IMP=0x000000000009fba5
- (_Bool)containsTime:(double)arg1;	// IMP=0x000000000009fb5c
- (id)endDate;	// IMP=0x000000000009faf3
- (CDStruct_e83c9415)cmTimeRange;	// IMP=0x000000000009fa78
@property(readonly) CDStruct_1b6d18a9 endCMTime;
@property(readonly) CDStruct_1b6d18a9 startCMTime;
@property(readonly) double endTime;
- (double)timeForDate:(id)arg1;	// IMP=0x000000000009f8f0
- (id)dateForTime:(double)arg1;	// IMP=0x000000000009f875
- (void)setMapDate:(id)arg1 toTime:(double)arg2;	// IMP=0x000000000009f6f6
- (void)setMapTime:(double)arg1 toDate:(id)arg2;	// IMP=0x000000000009f66d
- (id)initWithUnionOfCMTimeRanges:(id)arg1;	// IMP=0x000000000009f2bc
- (id)initWithAVTimedMetadataGroup:(id)arg1;	// IMP=0x000000000009f253
- (id)initWithCMTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000009f189
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;	// IMP=0x000000000009f173
- (id)initWithStartTime:(double)arg1 duration:(double)arg2;	// IMP=0x000000000009f121
- (id)init;	// IMP=0x000000000009f109
- (_Bool)requiresLinearPlaybackForTime:(double)arg1;	// IMP=0x00000000000fe047
@property(readonly, getter=isCollapsedInTimeLine) _Bool collapsedInTimeLine;
@property(readonly, getter=isSkipped) _Bool skipped;
@property(readonly, getter=isHidden) _Bool hidden;
@property(readonly) AVInterstitialDateRange *dateBasedInterstice;
@property(readonly) AVInterstitialTimeRange *interstice;

@end
