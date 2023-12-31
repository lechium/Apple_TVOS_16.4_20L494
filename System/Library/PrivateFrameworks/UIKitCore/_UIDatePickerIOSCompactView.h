//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSArray, NSDateFormatter, NSDictionary, NSString, UIDatePicker, UILayoutGuide, UIPanGestureRecognizer, _UIDatePickerCompactDateLabel, _UIDatePickerCompactTimeLabel, _UIDatePickerDataModel, _UIDatePickerOverlayPresentation;

__attribute__((visibility("hidden")))
@interface _UIDatePickerIOSCompactView : UIControl
{
    struct {
        unsigned int isEnabled:1;
        unsigned int implementsCustomDidSelectComponent:1;
    } _flags;	// 144 = 0x90
    NSDateFormatter *_dateFormatterMedium;	// 152 = 0x98
    NSDateFormatter *_dateFormatterShort;	// 160 = 0xa0
    UILayoutGuide *_timeViewLayoutGuide;	// 168 = 0xa8
    UILayoutGuide *_contentLayoutGuide;	// 176 = 0xb0
    NSDateFormatter *_layoutFormatter;	// 184 = 0xb8
    _Bool _dateOnLeadingSide;	// 192 = 0xc0
    NSArray *_dateTimeConstraints;	// 200 = 0xc8
    _UIDatePickerOverlayPresentation *_presentation;	// 208 = 0xd0
    long long _activeComponent;	// 216 = 0xd8
    UIPanGestureRecognizer *_panGestureRecognizer;	// 224 = 0xe0
    UIDatePicker *_datePicker;	// 232 = 0xe8
    _UIDatePickerDataModel *_data;	// 240 = 0xf0
    _UIDatePickerCompactDateLabel *_dateView;	// 248 = 0xf8
    _UIDatePickerCompactTimeLabel *_timeView;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x0000000001011833
@property(readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeView; // @synthesize timeView=_timeView;
@property(readonly, nonatomic) _UIDatePickerCompactDateLabel *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) _UIDatePickerDataModel *data; // @synthesize data=_data;
@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (_Bool)hasDefaultSize;	// IMP=0x00000000010117cb
- (struct CGSize)defaultSize;	// IMP=0x00000000010117b5
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000101179f
- (void)_setEnabled:(_Bool)arg1;	// IMP=0x000000000101177b
- (_Bool)usesAutoLayout;	// IMP=0x0000000001011773
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;	// IMP=0x000000000101176b
@property(readonly, nonatomic) struct UIEdgeInsets appliedInsetsToEdgeOfContent;
- (void)didChangeToday;	// IMP=0x0000000001011746
- (void)didReset;	// IMP=0x0000000001011718
- (void)didChangeRoundsToMinuteInterval;	// IMP=0x0000000001011658
- (void)didChangeMinuteInterval;	// IMP=0x000000000101159a
- (void)didChangeMaximumDate;	// IMP=0x0000000001011517
- (void)didChangeMinimumDate;	// IMP=0x0000000001011494
- (void)displaySelectedDateAnimated:(_Bool)arg1;	// IMP=0x000000000101140c
- (void)didChangeDateFrom:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000010112f4
- (void)didChangeCalendar;	// IMP=0x000000000101125a
- (void)didChangeTimeZone;	// IMP=0x00000000010111c0
- (void)didChangeLocale;	// IMP=0x0000000001011126
- (void)didChangeMode;	// IMP=0x00000000010110e6
@property(readonly, nonatomic) long long datePickerStyle;
- (void)_reloadTimeViewTimeFormat;	// IMP=0x0000000001010ef6
- (void)updateTimeZoneDisplay;	// IMP=0x0000000001010ee4
@property(retain, nonatomic) NSDictionary *overrideAttributes;
- (void)_resignActiveComponentAnimated:(_Bool)arg1;	// IMP=0x0000000001010df4
- (void)setActiveComponent:(long long)arg1;	// IMP=0x0000000001010d97
- (void)_datePickerPresentation:(id)arg1 didChangeActiveMode:(long long)arg2;	// IMP=0x0000000001010cca
- (void)didChangeCompactStyleDelegate;	// IMP=0x0000000001010c2a
- (id)createDatePickerForCompactDateLabel:(id)arg1;	// IMP=0x0000000001010a36
- (id)createDatePickerForCompactTimeLabel:(id)arg1;	// IMP=0x0000000001010981
- (void)compactDateLabelDidEndEditing:(id)arg1;	// IMP=0x000000000101094d
- (void)compactDateLabelDidBeginEditing:(id)arg1;	// IMP=0x0000000001010919
- (_Bool)compactTimeLabel:(id)arg1 shouldDismissForInteractionAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000001010879
- (void)compactTimeLabelWillBecomeFirstResponder:(id)arg1;	// IMP=0x0000000001010832
- (void)compactTimeLabelDidEndEditing:(id)arg1;	// IMP=0x00000000010107a6
- (void)compactTimeLabelDidBeginEditing:(id)arg1;	// IMP=0x0000000001010772
- (void)compactTimeLabel:(id)arg1 didSelectTime:(id)arg2;	// IMP=0x000000000101045f
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000101044b
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000001010427
- (void)_didReceivePanGestureRecognizer:(id)arg1;	// IMP=0x0000000001010410
- (void)updateConstraints;	// IMP=0x000000000100d14e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000100d054
- (void)tintColorDidChange;	// IMP=0x000000000100cfac
@property(readonly, nonatomic) _Bool alignConstraintsToLayoutGuide;
- (void)_updateDateViewTextAlignment;	// IMP=0x000000000100cee4
- (void)_updateEnabledStyling;	// IMP=0x000000000100ce3a
- (void)_updateUI;	// IMP=0x000000000100ca04
- (void)_updateDateBeforeTimeValue;	// IMP=0x000000000100c63d
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x000000000100c5ee
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000100c59f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000100c23e
- (void)setContentHorizontalAlignment:(long long)arg1;	// IMP=0x000000000100c1d0

// Remaining properties
@property(readonly, nonatomic) double contentWidth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) double timeInterval;

@end

