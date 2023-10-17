//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCalendar.h"

__attribute__((visibility("hidden")))
@interface __NSCFCalendar : NSCalendar
{
}

+ (id)calendarWithIdentifier:(id)arg1;	// IMP=0x00800000001423ca
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000140a0a
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0080000000140a07
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001425eb
- (_Bool)nextWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;	// IMP=0x000000000014240c
- (_Bool)isDateInWeekend:(id)arg1;	// IMP=0x00000000001423f9
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000141cde
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000014184b
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;	// IMP=0x000000000014125a
- (id)dateFromComponents:(id)arg1;	// IMP=0x0000000000140e25
- (_Bool)rangeOfUnit:(unsigned long long)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;	// IMP=0x0000000000140ce2
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x0000000000140c10
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x0000000000140b39
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x0000000000140b15
- (struct _NSRange)minimumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x0000000000140af1
- (id)gregorianStartDate;	// IMP=0x0000000000140adf
- (void)setGregorianStartDate:(id)arg1;	// IMP=0x0000000000140ad7
- (unsigned long long)minimumDaysInFirstWeek;	// IMP=0x0000000000140ad2
- (void)setMinimumDaysInFirstWeek:(unsigned long long)arg1;	// IMP=0x0000000000140aca
- (unsigned long long)firstWeekday;	// IMP=0x0000000000140ac5
- (void)setFirstWeekday:(unsigned long long)arg1;	// IMP=0x0000000000140abd
- (id)timeZone;	// IMP=0x0000000000140aab
- (void)setTimeZone:(id)arg1;	// IMP=0x0000000000140aa3
- (id)locale;	// IMP=0x0000000000140a91
- (void)setLocale:(id)arg1;	// IMP=0x0000000000140a89
- (id)calendarIdentifier;	// IMP=0x0000000000140a84
- (id)initWithCalendarIdentifier:(id)arg1;	// IMP=0x0000000000140a34
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000140a22
- (unsigned long long)retainCount;	// IMP=0x0000000000140a02
- (_Bool)_isDeallocating;	// IMP=0x00000000001409f2
- (_Bool)_tryRetain;	// IMP=0x00000000001409e1
- (oneway void)release;	// IMP=0x00000000001409dc
- (id)retain;	// IMP=0x00000000001409c4
- (unsigned long long)hash;	// IMP=0x00000000001409bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001409a4

@end
