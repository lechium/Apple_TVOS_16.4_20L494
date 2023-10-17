//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateFormatter, NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_DateAndTime
{
    _Bool _weekdayLast;	// 240 = 0xf0
    double _wmdWeekMonthDayWidth;	// 248 = 0xf8
    double _wmdHourWidth;	// 256 = 0x100
    double _wmdMinuteWidth;	// 264 = 0x108
    double _wmdAMPMWidth;	// 272 = 0x110
    double _wmdWeekdayWidth;	// 280 = 0x118
    NSString *_weekdayFormat;	// 288 = 0x120
    NSString *_monthDayFormat;	// 296 = 0x128
    NSString *_hourFormat;	// 304 = 0x130
    NSString *_minuteFormat;	// 312 = 0x138
    NSDateFormatter *_relativeFormatter;	// 320 = 0x140
    NSDateFormatter *_weekdayFormatter;	// 328 = 0x148
}

+ (unsigned long long)extractableCalendarUnits;	// IMP=0x0060000000c0f20a
+ (long long)datePickerMode;	// IMP=0x0060000000c0f1ff
- (void).cxx_destruct;	// IMP=0x0000000000c11d95
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000c11d40
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000c11ceb
- (void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2;	// IMP=0x0000000000c11bbf
- (id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3;	// IMP=0x0000000000c11378
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000000c11114
- (_Bool)_shouldEnableWeekMonthDayForRow:(long long)arg1;	// IMP=0x0000000000c11000
- (id)_dateForWeekMonthDayRow:(long long)arg1;	// IMP=0x0000000000c10f46
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;	// IMP=0x0000000000c10ceb
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;	// IMP=0x0000000000c10c8d
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;	// IMP=0x0000000000c10c18
- (_Bool)isWeekdayLast;	// IMP=0x0000000000c10c08
- (double)weekdayWidth;	// IMP=0x0000000000c10bf6
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000c10be4
- (double)componentWidthForDateTimeCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000c1030d
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000c102f2
- (id)baseDateComponents;	// IMP=0x0000000000c10249
- (void)_takeBaseDateComponentsFromDate:(id)arg1;	// IMP=0x0000000000c100cc
- (void)_resetBaseDateComponentsIfNecessaryFromDate:(id)arg1;	// IMP=0x0000000000c0fed3
- (void)loadDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000c0fe62
- (unsigned long long *)elements;	// IMP=0x0000000000c0fca8
- (long long)displayedCalendarUnits;	// IMP=0x0000000000c0fc6f
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000c0f6f3
- (id)localizedFormatString;	// IMP=0x0000000000c0f655
- (id)weekdayFormatter;	// IMP=0x0000000000c0f4ec
- (id)relativeFormatter;	// IMP=0x0000000000c0f3a7
- (void)noteCalendarChanged;	// IMP=0x0000000000c0f2f8
- (void)resetComponentWidths;	// IMP=0x0000000000c0f2c4
- (void)_shouldReset:(id)arg1;	// IMP=0x0000000000c0f215

@end
