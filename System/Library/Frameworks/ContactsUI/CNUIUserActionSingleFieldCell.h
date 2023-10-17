//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface CNUIUserActionSingleFieldCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    NSLayoutConstraint *_titleLabelTopConstraint;	// 16 = 0x10
    NSLayoutConstraint *_titleLabelBottomConstraint;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000027fc5
@property(retain, nonatomic) NSLayoutConstraint *titleLabelBottomConstraint; // @synthesize titleLabelBottomConstraint=_titleLabelBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint; // @synthesize titleLabelTopConstraint=_titleLabelTopConstraint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateFonts;	// IMP=0x0000000000027dff
- (void)viewWillMoveToSuperview:(id)arg1;	// IMP=0x0000000000027db2
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000279d3

@end
