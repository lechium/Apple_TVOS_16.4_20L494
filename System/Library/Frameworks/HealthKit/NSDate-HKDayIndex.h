//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (HKDayIndex)
+ (id)hk_latestPossibleDateWithDayIndex:(long long)arg1;	// IMP=0x00800000000307d7
+ (id)hk_earliestPossibleDateWithDayIndex:(long long)arg1;	// IMP=0x0080000000030746
+ (id)hk_noonWithDayIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x008000000003072c
+ (id)hk_dateOnDayIndex:(long long)arg1 atHour:(long long)arg2 calendar:(id)arg3;	// IMP=0x0080000000030687
+ (id)hk_sleepWeekStartForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0080000000030cf8
+ (id)hk_sleepDayStartForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0080000000030a73
+ (id)hk_dateWithNanosecondsSince1970:(long long)arg1;	// IMP=0x00800000000d3ece
+ (id)hk_mostRecentDate:(id)arg1;	// IMP=0x00800000000d3e42
- (long long)hk_latestPossibleDayIndex;	// IMP=0x0010000000030a19
- (long long)hk_earliestPossibleDayIndex;	// IMP=0x00100000000309bf
- (long long)hk_dayIndexWithCalendar:(id)arg1;	// IMP=0x001000000003089f
- (id)hk_sleepDayStartWithCalendar:(id)arg1;	// IMP=0x0010000000030bd9
- (long long)hk_morningIndexWithCalendar:(id)arg1;	// IMP=0x0010000000030a9c
- (id)hk_utcDateAdjustedToCalendar:(id)arg1;	// IMP=0x00100000000d3f1c
- (long long)hk_nanosecondsSince1970;	// IMP=0x00100000000d3efd
- (id)hk_truncateToDay;	// IMP=0x00100000000d3e73
- (id)hk_nearestDate:(id)arg1;	// IMP=0x00100000000d3dbd
- (id)hk_rfc3339String;	// IMP=0x00100000000d3ce7
- (_Bool)hk_isAfterOrEqualToDate:(id)arg1;	// IMP=0x00100000000d3cd2
- (_Bool)hk_isBeforeOrEqualToDate:(id)arg1;	// IMP=0x001000000000e482
- (_Bool)hk_isAfterDate:(id)arg1;	// IMP=0x001000000000e497
- (_Bool)hk_isBeforeDate:(id)arg1;	// IMP=0x001000000001100d
@end

