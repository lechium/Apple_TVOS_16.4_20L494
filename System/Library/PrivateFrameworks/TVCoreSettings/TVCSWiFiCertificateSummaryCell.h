//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSDate, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface TVCSWiFiCertificateSummaryCell : UITableViewCell
{
    _Bool _trusted;	// 8 = 0x8
    NSString *_titleText;	// 16 = 0x10
    NSString *_issuer;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_issuerLabel;	// 48 = 0x30
    UILabel *_trustLabel;	// 56 = 0x38
    UILabel *_isTrustedLabel;	// 64 = 0x40
    UILabel *_expiresByLabel;	// 72 = 0x48
    UILabel *_expiryDateLabel;	// 80 = 0x50
    NSArray *_constraints;	// 88 = 0x58
}

+ (id)dateFormatter;	// IMP=0x006000000001d852
- (void).cxx_destruct;	// IMP=0x000000000001f38d
@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) UILabel *expiryDateLabel; // @synthesize expiryDateLabel=_expiryDateLabel;
@property(readonly, nonatomic) UILabel *expiresByLabel; // @synthesize expiresByLabel=_expiresByLabel;
@property(readonly, nonatomic) UILabel *isTrustedLabel; // @synthesize isTrustedLabel=_isTrustedLabel;
@property(readonly, nonatomic) UILabel *trustLabel; // @synthesize trustLabel=_trustLabel;
@property(readonly, nonatomic) UILabel *issuerLabel; // @synthesize issuerLabel=_issuerLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isTrusted) _Bool trusted; // @synthesize trusted=_trusted;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *issuer; // @synthesize issuer=_issuer;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001f20c
- (void)_updateCellBackground;	// IMP=0x000000000001f150
- (id)_newTitleLabel;	// IMP=0x000000000001f0c6
- (id)_newSubtitleLabel;	// IMP=0x000000000001f066
- (id)_subtitleFont;	// IMP=0x000000000001eff7
- (id)_titleFont;	// IMP=0x000000000001ef88
- (void)updateConstraints;	// IMP=0x000000000001e06b
- (_Bool)canBecomeFocused;	// IMP=0x000000000001e063
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000001d8c4

@end

