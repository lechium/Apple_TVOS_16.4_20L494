//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MKTransitSystemFilterView, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MKTransitSystemFilterHeaderFooterView : UITableViewHeaderFooterView
{
    MKTransitSystemFilterView *_filterView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000157d58
@property(readonly, nonatomic) MKTransitSystemFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) NSString *titleText;
- (void)_contentSizeDidChange;	// IMP=0x0000000000157c7a
- (void)_setupConstraints;	// IMP=0x00000000001577f4
- (void)_setupSubviews;	// IMP=0x000000000015763c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001575ca

@end

