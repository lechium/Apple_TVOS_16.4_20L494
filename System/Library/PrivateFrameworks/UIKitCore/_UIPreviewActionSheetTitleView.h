//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetTitleView : UIView
{
    NSString *_title;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000bd6a83
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_contentSizeChanged:(id)arg1;	// IMP=0x0000000000bd6a1f
- (void)_updateLabelFont;	// IMP=0x0000000000bd6989
- (void)dealloc;	// IMP=0x0000000000bd6914
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000bd6900
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000bd68d1
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;	// IMP=0x0000000000bd654b

@end
