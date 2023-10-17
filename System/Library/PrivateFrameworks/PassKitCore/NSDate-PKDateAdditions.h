//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (PKDateAdditions)
+ (id)dateForYesterday;	// IMP=0x00800000000a26e6
+ (id)dateForTomorrow;	// IMP=0x00800000000a26c8
+ (id)dateWithDaysBeforeNow:(unsigned long long)arg1;	// IMP=0x00800000000a26ac
+ (id)dateWithDaysFromNow:(unsigned long long)arg1;	// IMP=0x00800000000a25ed
- (long long)numberOfYearsFromNow;	// IMP=0x00100000000a2bb6
- (long long)numberOfMonthsFromNow;	// IMP=0x00100000000a2abe
- (long long)numberOfWeeksFromNow;	// IMP=0x00100000000a29c6
- (id)dateWithoutTime;	// IMP=0x00100000000a2937
- (_Bool)isYesterday;	// IMP=0x00100000000a28dd
- (_Bool)isTomorrow;	// IMP=0x00100000000a2883
- (_Bool)isToday;	// IMP=0x00100000000a2829
- (_Bool)isDateEqualToDateIgnoringTime:(id)arg1;	// IMP=0x00100000000a2704
@end

