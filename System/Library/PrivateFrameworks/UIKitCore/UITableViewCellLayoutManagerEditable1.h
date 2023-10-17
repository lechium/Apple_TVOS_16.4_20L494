//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCellLayoutManager.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager
{
}

- (void)_textValueChanged:(id)arg1;	// IMP=0x0000000000e1275c
- (void)_textFieldEndEditingOnReturn:(id)arg1;	// IMP=0x0000000000e12756
- (void)_textFieldEndEditing:(id)arg1;	// IMP=0x0000000000e126d0
- (void)_textFieldStartEditing:(id)arg1;	// IMP=0x0000000000e12643
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000e1263b
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x0000000000e12633
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000000e12533
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000000e1252d
- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;	// IMP=0x0000000000e12452
- (id)editableTextFieldForCell:(id)arg1;	// IMP=0x0000000000e12311
- (id)detailTextLabelForCell:(id)arg1;	// IMP=0x0000000000e12309
- (void)layoutSubviewsOfCell:(id)arg1;	// IMP=0x0000000000e117c8
- (double)defaultTextFieldFontSizeForCell:(id)arg1;	// IMP=0x0000000000e11799

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
