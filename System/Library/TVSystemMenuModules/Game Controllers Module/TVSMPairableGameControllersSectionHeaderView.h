//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface TVSMPairableGameControllersSectionHeaderView : UICollectionReusableView
{
    _Bool _showingActivityIndicator;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicatorView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000005780
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool showingActivityIndicator; // @synthesize showingActivityIndicator=_showingActivityIndicator;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000004d50

@end

