//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Time
{
    double _timeHourWidth;	// 240 = 0xf0
    double _timeMinuteWidth;	// 248 = 0xf8
    double _timeAMPMWidth;	// 256 = 0x100
    NSString *_hourFormat;	// 264 = 0x108
    NSString *_minuteFormat;	// 272 = 0x110
}

+ (unsigned long long)extractableCalendarUnits;	// IMP=0x0060000000c0e794
+ (long long)datePickerMode;	// IMP=0x0060000000c0e78c
- (void).cxx_destruct;	// IMP=0x0000000000c0f1ce
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000c0f1b1
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000c0f187
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000000c0efae
- (id)font;	// IMP=0x0000000000c0ef9c
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000c0ec54
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000c0ec39
- (void)noteCalendarChanged;	// IMP=0x0000000000c0ebd2
- (void)resetComponentWidths;	// IMP=0x0000000000c0eba9
- (double)rowHeight;	// IMP=0x0000000000c0eb9b
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000c0e8d7
- (id)localizedFormatString;	// IMP=0x0000000000c0e839
- (void)_shouldReset:(id)arg1;	// IMP=0x0000000000c0e7d2
- (long long)displayedCalendarUnits;	// IMP=0x0000000000c0e79f

@end
