//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (TPSTimeframeRecordUtilities_NSDate)
+ (_Bool)isDateExpired:(id)arg1 maxTimeInterval:(double)arg2;	// IMP=0x008000000000d9d9
- (_Bool)isNight;	// IMP=0x00100000000068ab
- (_Bool)isEvening;	// IMP=0x001000000000680d
- (_Bool)isAfternoon;	// IMP=0x001000000000676f
- (_Bool)isMorning;	// IMP=0x00100000000066d1
- (unsigned long long)weekday;	// IMP=0x0010000000006651
- (_Bool)isTimeToDate:(id)arg1 withinTimeInterval:(double)arg2;	// IMP=0x001000000000da10
@end

