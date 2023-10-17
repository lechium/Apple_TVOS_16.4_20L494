//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface TVCSWiFiExpandedDetailCell : UITableViewCell
{
    NSString *_titleText;	// 8 = 0x8
    NSString *_detailText;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_detailLabel;	// 32 = 0x20
    NSArray *_constraints;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002c6da
@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)updateConstraints;	// IMP=0x000000000002c1e5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000002bf18

@end

