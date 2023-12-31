//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerWeekMonthDayView : UIView
{
    struct {
        unsigned int weekdayLast:1;
    } _datePickerWeekMonthDayViewFlags;	// 144 = 0x90
    UILabel *_dateLabel;	// 152 = 0x98
    UILabel *_weekdayLabel;	// 160 = 0xa0
    NSString *_formattedDateString;	// 168 = 0xa8
    double _weekdayWidth;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000c02b23
@property(nonatomic) double weekdayWidth; // @synthesize weekdayWidth=_weekdayWidth;
@property(copy, nonatomic) NSString *formattedDateString; // @synthesize formattedDateString=_formattedDateString;
@property(readonly, nonatomic) UILabel *weekdayLabel; // @synthesize weekdayLabel=_weekdayLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) _Bool weekdayLast;
- (void)layoutSubviews;	// IMP=0x0000000000c0234a
- (_Bool)_canBeReusedInPickerView;	// IMP=0x0000000000c02324
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000c01fa2

@end

