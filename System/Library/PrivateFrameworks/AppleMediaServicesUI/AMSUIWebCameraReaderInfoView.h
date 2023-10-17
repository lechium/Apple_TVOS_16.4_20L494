//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonView.h"

@class UIButton, UILabel;
@protocol AMSUIWebActionRunnable;

__attribute__((visibility("hidden")))
@interface AMSUIWebCameraReaderInfoView : AMSUICommonView
{
    UIButton *_bottomLink;	// 8 = 0x8
    id <AMSUIWebActionRunnable> _bottomLinkAction;	// 16 = 0x10
    UILabel *_primaryLabel;	// 24 = 0x18
    UILabel *_secondaryLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000601e9
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) id <AMSUIWebActionRunnable> bottomLinkAction; // @synthesize bottomLinkAction=_bottomLinkAction;
@property(retain, nonatomic) UIButton *bottomLink; // @synthesize bottomLink=_bottomLink;
- (id)_createLabelWithLines:(long long)arg1 title:(_Bool)arg2;	// IMP=0x00000000000600c0
- (id)_createButtonWithTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x000000000005ff07
- (void)_bottomLinkSelected:(id)arg1;	// IMP=0x000000000005fec2
- (void)layoutSubviews;	// IMP=0x000000000005f9aa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005f7df

@end

