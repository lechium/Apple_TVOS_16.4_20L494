//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Date
{
    double _dateYearWidth;	// 240 = 0xf0
    double _dateMonthWidth;	// 248 = 0xf8
    double _dateDayWidth;	// 256 = 0x100
    NSString *_yearFormat;	// 264 = 0x108
    NSString *_monthFormat;	// 272 = 0x110
    NSString *_dayFormat;	// 280 = 0x118
}

+ (unsigned long long)extractableCalendarUnits;	// IMP=0x0060000000c0d575
+ (long long)datePickerMode;	// IMP=0x0060000000c0d56a
- (void).cxx_destruct;	// IMP=0x0000000000c0e74a
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000c0e720
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000c0e6f6
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000000c0e484
- (id)_dateForYearRow:(long long)arg1;	// IMP=0x0000000000c0e296
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;	// IMP=0x0000000000c0e054
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000c0dafe
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000c0daf3
- (void)noteCalendarChanged;	// IMP=0x0000000000c0da7a
- (void)resetComponentWidths;	// IMP=0x0000000000c0da51
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000c0d6a2
- (id)localizedFormatString;	// IMP=0x0000000000c0d604
- (void)_shouldReset:(id)arg1;	// IMP=0x0000000000c0d58b
- (long long)displayedCalendarUnits;	// IMP=0x0000000000c0d580

@end
