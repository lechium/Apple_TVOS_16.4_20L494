//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSNumber, NSString;

@interface NSDate (HFAnalytics)
+ (id)hf_dateByAddingYears:(long long)arg1 months:(long long)arg2 weeks:(long long)arg3 days:(long long)arg4 hours:(long long)arg5 minutes:(long long)arg6 seconds:(long long)arg7 nanoseconds:(long long)arg8 toDate:(id)arg9;	// IMP=0x0010000000209750
+ (long long)hf_daysBetweenDates:(id)arg1 endDate:(id)arg2;	// IMP=0x0010000000209641
+ (long long)hf_minutesBetweenDates:(id)arg1 endDate:(id)arg2;	// IMP=0x0010000000209532
+ (id)hf_dateByAddingNanoseconds:(long long)arg1 toDate:(id)arg2;	// IMP=0x0010000000208b27
+ (id)hf_dateByAddingSeconds:(long long)arg1 toDate:(id)arg2;	// IMP=0x0010000000208aa6
+ (id)hf_dateByAddingMinutes:(long long)arg1 toDate:(id)arg2;	// IMP=0x0010000000208a25
+ (id)hf_dateByAddingHours:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000002089a4
+ (id)hf_dateByAddingDays:(long long)arg1 toDate:(id)arg2;	// IMP=0x001000000020892c
+ (id)hf_dateByAddingWeeks:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000002088b4
+ (id)hf_dateByAddingMonths:(long long)arg1 toDate:(id)arg2;	// IMP=0x001000000020883b
+ (id)hf_dateByAddingYears:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000002087c2
+ (id)hf_dateBySubtractingComponents:(id)arg1 fromDate:(id)arg2 times:(long long)arg3;	// IMP=0x0010000000208580
+ (id)hf_dateByAddingComponents:(id)arg1 toDate:(id)arg2 times:(long long)arg3;	// IMP=0x0010000000208490
+ (id)hf_sharedTimeZone;	// IMP=0x001000000020842b
+ (id)hf_sharedCalendar;	// IMP=0x00100000002083c6
@property(readonly, nonatomic) NSNumber *hf_analyticsTimestamp;
- (_Bool)_uses24HourTimeForLocale;	// IMP=0x00100000002098b3
- (_Bool)hf_isBetweenStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x0010000000209455
- (_Bool)hf_isSingularHour;	// IMP=0x001000000020939a
- (_Bool)hf_isMidnight;	// IMP=0x00100000002092e9
- (_Bool)hf_isFirstHourOfDay;	// IMP=0x0010000000209266
- (_Bool)hf_isWithinOneSecondOfDate:(id)arg1;	// IMP=0x001000000020924c
- (_Bool)hf_isWithinOneMinuteOfDate:(id)arg1;	// IMP=0x0010000000209232
- (_Bool)hf_isWithinOneHourOfDate:(id)arg1;	// IMP=0x0010000000209218
- (_Bool)hf_isWithinInterval:(double)arg1 ofDate:(id)arg2;	// IMP=0x00100000002091e4
- (id)hf_endOfWeek;	// IMP=0x0010000000209113
- (id)hf_startOfWeek;	// IMP=0x0010000000209032
- (id)hf_startOfSecond;	// IMP=0x0010000000208f44
- (id)hf_startOfMinute;	// IMP=0x0010000000208e47
- (id)hf_startOfHour;	// IMP=0x0010000000208d3b
- (id)hf_startOfNextDay;	// IMP=0x0010000000208cc4
- (id)hf_startOfDay;	// IMP=0x0010000000208ba8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

