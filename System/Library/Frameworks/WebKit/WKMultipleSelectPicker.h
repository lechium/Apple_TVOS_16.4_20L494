//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPickerView.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKMultipleSelectPicker : UIPickerView
{
    WKContentView *_view;	// 8 = 0x8
    long long _textAlignment;	// 16 = 0x10
    unsigned long long _singleSelectionIndex;	// 24 = 0x18
    _Bool _allowsMultipleSelection;	// 32 = 0x20
    double _layoutWidth;	// 40 = 0x28
    double _fontSize;	// 48 = 0x30
    double _maximumTextWidth;	// 56 = 0x38
}

- (_Bool)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1;	// IMP=0x000000000038ff33
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;	// IMP=0x000000000038fee5
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(_Bool)arg4;	// IMP=0x000000000038fcce
- (long long)findItemIndexAt:(int)arg1;	// IMP=0x000000000038fc57
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000038fc36
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000038fc2b
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;	// IMP=0x000000000038f925
- (void)layoutSubviews;	// IMP=0x000000000038f851
- (void)controlEndEditing;	// IMP=0x000000000038f84b
- (void)controlBeginEditing;	// IMP=0x000000000038f845
- (id)controlView;	// IMP=0x000000000038f83c
- (void)dealloc;	// IMP=0x000000000038f7e5
- (id)initWithView:(id)arg1;	// IMP=0x000000000038f61b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

