//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (CalendarAdditions)
+ (id)CalTimeRangeStringWithStart:(id)arg1 end:(id)arg2;	// IMP=0x00800000000251b5
+ (id)nextRoundedHour;	// IMP=0x0080000000022cfa
+ (id)dateWithDatePartFromDate:(id)arg1 timePartFromDate:(id)arg2 inCalendar:(id)arg3;	// IMP=0x0080000000022180
+ (id)dateFromISO8601String:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x00800000000204c7
+ (id)dateFromISO8601String:(id)arg1;	// IMP=0x0080000000020437
+ (id)CalDateForEndOfTomorrow;	// IMP=0x008000000002037a
+ (id)CalDateForBeginningOfTomorrow;	// IMP=0x00800000000202f3
+ (id)_tomorrowComponents;	// IMP=0x008000000002020a
+ (id)CalDateForEndOfToday;	// IMP=0x008000000002014d
+ (id)CalDateForBeginningOfToday;	// IMP=0x008000000000a67d
+ (id)_todayComponents;	// IMP=0x008000000000a704
+ (id)_nowComponents;	// IMP=0x008000000000a760
+ (id)CalDateForNow;	// IMP=0x008000000000a7ec
+ (id)CalSimulatedDateForNow;	// IMP=0x008000000001ff4f
+ (id)calGMT;	// IMP=0x008000000001fba1
+ (long long)daysSpannedFromStartDate:(id)arg1 toEndDate:(id)arg2 allDay:(_Bool)arg3 inCalendar:(id)arg4;	// IMP=0x008000000000a37d
- (void)_performBlockBehindDispatchSync:(CDUnknownBlockType)arg1 inTimeZone:(id)arg2;	// IMP=0x001000000001eeb8
- (id)dateWithoutTimeComponentsInTimeZone:(id)arg1;	// IMP=0x001000000001ed4f
- (id)dateAtHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 second:(unsigned long long)arg3 inTimeZone:(id)arg4;	// IMP=0x001000000000f4d9
- (id)dateForEndOfDayInTimeZone:(id)arg1;	// IMP=0x001000000000f2ea
- (id)dateForStartOfDayInTimeZone:(id)arg1;	// IMP=0x001000000000f4bd
- (id)localizedStringForEventTimeInTimeZone:(id)arg1;	// IMP=0x0010000000025078
- (id)localizedStringForEventTime;	// IMP=0x0010000000025012
- (id)localizedHourWithoutAMPM;	// IMP=0x0010000000024ff6
- (id)localizedHourMinutesWithoutAMPMInTimeZone:(id)arg1;	// IMP=0x0010000000024fd7
- (id)localizedHourMinutesWithoutAMPM;	// IMP=0x0010000000024f71
- (id)localizedHourInTimeZone:(id)arg1;	// IMP=0x0010000000024f52
- (id)localizedHour;	// IMP=0x0010000000024eec
- (id)localizedShortTimeInTimeZone:(id)arg1;	// IMP=0x0010000000024ecd
- (id)localizedShortTime;	// IMP=0x0010000000024e67
- (id)localizedTime;	// IMP=0x0010000000024e4b
- (id)localizedAbbrevStandaloneMonth;	// IMP=0x0010000000024dcc
- (id)localizedAbbrevMonthWithDayRangeToDate:(id)arg1;	// IMP=0x0010000000024c61
- (id)localizedAbbrevWeekdayWithDayOfMonthPreferWeekdayFirstForEnglish;	// IMP=0x0010000000024a38
- (struct _NSRange)rangeOfDayInLocalizedDateString:(id)arg1;	// IMP=0x001000000002487f
- (id)localizedAbbrevWeekdayWithDayOfMonth;	// IMP=0x0010000000024863
- (id)localizedFullWeekdayWithDayOfMonth;	// IMP=0x0010000000024847
- (id)localizedShortStandaloneWeekday;	// IMP=0x001000000002482b
- (id)localizedFullStandaloneWeekday;	// IMP=0x001000000002480f
- (id)localizedMonthWithDayWithPreferredShortening;	// IMP=0x001000000002478f
- (id)localizedShortMonthWithDay;	// IMP=0x0010000000024773
- (id)localizedAbbrevMonthWithDayInTimeZone:(id)arg1;	// IMP=0x0010000000024754
- (id)localizedAbbrevMonthWithDay;	// IMP=0x00100000000246ee
- (id)localizedFullMonthWithDay;	// IMP=0x00100000000246d2
- (id)localizedAbbrevMonthWeekdayDay;	// IMP=0x00100000000246b6
- (id)localizedFullMonthWeekdayDay;	// IMP=0x001000000002469a
- (id)localizedFullYearMonth;	// IMP=0x001000000002467e
- (id)localizedShortDate;	// IMP=0x0010000000024662
- (id)localizedDayOfWeekWithAbbrevDateInTimeZone:(id)arg1;	// IMP=0x0010000000024643
- (id)localizedAbbrevDateInTimeZone:(id)arg1;	// IMP=0x0010000000024624
- (id)localizedAbbrevDate;	// IMP=0x00100000000245be
- (id)localizedLongDate;	// IMP=0x00100000000245a2
- (id)localizedFullDate;	// IMP=0x0010000000024586
- (id)localizedShortDateAndTime;	// IMP=0x001000000002456a
- (id)localizedFullDateAndTime;	// IMP=0x001000000002454e
- (id)localizedDayOfMonth;	// IMP=0x0010000000024532
- (id)localizedFullMonth;	// IMP=0x0010000000024516
- (id)localizedYear;	// IMP=0x00100000000244fa
- (id)dateRemovingComponents:(unsigned long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000002443e
- (long long)midnightOffsetMinutes:(id)arg1;	// IMP=0x00100000000243d2
- (id)timeStringAlwaysIncludeMinutes:(_Bool)arg1;	// IMP=0x001000000000ff90
- (id)_stringWithUseAbbreviatedFormats:(_Bool)arg1 lowerCase:(_Bool)arg2;	// IMP=0x0010000000023e8a
- (id)localizedRelativeDateStringShortened:(_Bool)arg1 lowercase:(_Bool)arg2;	// IMP=0x0010000000023e78
- (id)localizedRelativeDateStringShortened:(_Bool)arg1;	// IMP=0x0010000000023e64
- (id)localizedWeekNumber;	// IMP=0x0010000000023de3
- (id)localizedDateStringWithTemplate:(id)arg1;	// IMP=0x0010000000023ced
- (id)localizedWeekdayMonthDayStringShortened:(_Bool)arg1;	// IMP=0x0010000000023cc4
- (id)localizedWeekdayMonthYearStringShortened:(_Bool)arg1;	// IMP=0x0010000000023c9b
- (id)localizedWeekdayMonthDayYearStringShortened:(_Bool)arg1;	// IMP=0x0010000000023c72
- (id)localizedYearMonthAndDayStringShortened:(_Bool)arg1;	// IMP=0x0010000000023c49
- (id)localizedMonthAndDayStringShortened:(_Bool)arg1;	// IMP=0x0010000000023c20
- (id)localizedMonthAndYearStringShortened:(_Bool)arg1;	// IMP=0x0010000000023bf7
- (id)localizedMonthShortened:(_Bool)arg1;	// IMP=0x0010000000023bce
- (void)printComparisonToDate:(id)arg1;	// IMP=0x0010000000022d84
- (id)dateRoundedToStartOfNextDayInCalendar:(id)arg1;	// IMP=0x0010000000022c78
- (id)dateRoundedToHourOnSameDayInCalendar:(id)arg1;	// IMP=0x0010000000022b44
- (id)dateRoundedDownToNearestFiveMinutesInCalendar:(id)arg1;	// IMP=0x0010000000022b2a
- (id)dateRoundedToNearestFifteenMinutesInCalendar:(id)arg1;	// IMP=0x0010000000022a59
- (id)CalDateRoundedDownToNearestMinuteIncrement:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000022939
- (_Bool)isTodayInCalendar:(id)arg1;	// IMP=0x001000000002284d
- (_Bool)isAfterOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000022833
- (_Bool)isAfterDayForDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000022819
- (_Bool)isBeforeOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x00100000000227ff
- (_Bool)isBeforeDayForDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x00100000000227e5
- (_Bool)isEqualToDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;	// IMP=0x00100000000226fa
- (_Bool)isSameYearAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000022601
- (_Bool)isSameWeekAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000022526
- (_Bool)isSameMonthAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x001000000002242d
- (_Bool)isSameDayAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x001000000002241b
- (long long)compareDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000022330
- (_Bool)isBeforeDate:(id)arg1;	// IMP=0x001000000002230e
- (_Bool)isAfterDate:(id)arg1;	// IMP=0x00100000000222ec
- (id)roundToCurrentYearInCalendar:(id)arg1;	// IMP=0x00100000000220df
- (id)roundToCurrentMonthInCalendar:(id)arg1;	// IMP=0x0010000000022047
- (id)roundToCurrentMondayInCalendar:(id)arg1;	// IMP=0x0010000000021fbe
- (id)roundToCurrentWeekInCalendar:(id)arg1 withFirstWeekdayIndex:(long long)arg2;	// IMP=0x0010000000021f3c
- (id)roundToCurrentDayInCalendar:(id)arg1;	// IMP=0x0010000000021f2a
- (id)subtractOneSecondIfAt0InCalendar:(id)arg1;	// IMP=0x0010000000021e2b
- (id)roundUpOneSecondIfAt59InCalendar:(id)arg1;	// IMP=0x0010000000021d2b
- (id)roundSecondsAndMinutesUpInCalendar:(id)arg1;	// IMP=0x0010000000021c33
- (id)roundSecondsAndMinutesDownInCalendar:(id)arg1;	// IMP=0x0010000000021b6b
- (id)roundSecondsDownInCalendar:(id)arg1;	// IMP=0x0010000000021ab2
- (id)CalDateByComponentwiseAddingComponents:(id)arg1 inCalendar:(id)arg2;	// IMP=0x001000000002159b
- (id)CalDateByComponentwiseAddingHours:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x00100000000214e1
- (id)CalDateByComponentwiseAddingMinutes:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000021427
- (id)CalDateByComponentwiseAddingSeconds:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000002136d
- (id)dateByAddingYears:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x00100000000212c6
- (id)dateByAddingMonths:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000002121f
- (id)dateByAddingWeeks:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000021178
- (id)dateByAddingDays:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x00100000000210d1
- (id)dateByAddingHours:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000002102a
- (id)dateByAddingMinutes:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020f83
- (id)dateRemovingTimeComponentsInCalendar:(id)arg1;	// IMP=0x0010000000020ed9
- (long long)secondInCalendar:(id)arg1;	// IMP=0x0010000000020e2c
- (long long)minuteInCalendar:(id)arg1;	// IMP=0x0010000000020d7f
- (long long)hourInCalendar:(id)arg1;	// IMP=0x0010000000020cd2
- (long long)weekdayInCalendar:(id)arg1;	// IMP=0x0010000000020c25
- (long long)dayInCalendar:(id)arg1;	// IMP=0x0010000000020b78
- (long long)weekInCalendar:(id)arg1;	// IMP=0x0010000000020acb
- (long long)monthInCalendar:(id)arg1;	// IMP=0x0010000000020a1e
- (long long)yearInCalendar:(id)arg1;	// IMP=0x0010000000020971
- (id)dateOnlyByTranslatingFrom:(id)arg1 toCalendar:(id)arg2;	// IMP=0x0010000000020842
- (id)timeOnlyComponentsInCalendar:(id)arg1;	// IMP=0x00100000000207b6
- (id)dateOnlyComponentsInCalendar:(id)arg1;	// IMP=0x001000000002072a
- (id)allComponentsInCalendar:(id)arg1;	// IMP=0x001000000002069c
- (id)toISO8601String;	// IMP=0x00100000000205b6
- (id)dateBySubtractingCalSimulatedOffset;	// IMP=0x00100000000200d6
- (id)dateByAddingCalSimulatedOffset;	// IMP=0x0010000000020066
- (_Bool)CalIsAfterOrSameAsDate:(id)arg1;	// IMP=0x00100000000050a9
- (_Bool)CalIsAfterDate:(id)arg1;	// IMP=0x00100000000079f8
- (_Bool)CalIsBeforeOrSameAsDate:(id)arg1;	// IMP=0x0010000000005085
- (_Bool)CalIsBeforeDate:(id)arg1;	// IMP=0x0010000000007685
- (_Bool)CalIsBetweenStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x001000000001163a
- (id)ek_ios_dateForEndOfDayInTimeZone:(id)arg1;	// IMP=0x001000000001fec1
- (id)dateForDayInTimeZone:(id)arg1;	// IMP=0x001000000001fe69
- (id)components:(unsigned long long)arg1 forDayInTimeZone:(id)arg2;	// IMP=0x001000000001fd85
- (id)dateInTimeZone:(id)arg1 fromTimeZone:(id)arg2;	// IMP=0x001000000001fc0d
- (id)localizedStringWithFormat:(id)arg1 timeZone:(id)arg2;	// IMP=0x001000000004657c
- (id)localizedStringWithFormat:(id)arg1;	// IMP=0x00100000000464ef
@end
