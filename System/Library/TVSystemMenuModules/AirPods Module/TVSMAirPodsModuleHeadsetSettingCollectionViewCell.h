//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableArray, NSString, TVNPFloatingContentControl, TVSMCAPackageView, UIImageView, UILabel, UILayoutGuide, UIView;
@protocol TVSMAirPodsModuleHeadsetSettingsCollectionViewCellDelegate;

@interface TVSMAirPodsModuleHeadsetSettingCollectionViewCell : UICollectionViewCell
{
    _Bool _isFloatingViewFocused;	// 8 = 0x8
    _Bool _showCheckmark;	// 9 = 0x9
    _Bool _isSettingEnabled;	// 10 = 0xa
    _Bool _isUnavailable;	// 11 = 0xb
    long long _setting;	// 16 = 0x10
    id <TVSMAirPodsModuleHeadsetSettingsCollectionViewCellDelegate> _delegate;	// 24 = 0x18
    NSString *_titleText;	// 32 = 0x20
    NSString *_enabledText;	// 40 = 0x28
    NSString *_subtitleText;	// 48 = 0x30
    TVSMCAPackageView *_blackPackageView;	// 56 = 0x38
    TVSMCAPackageView *_whitePackageView;	// 64 = 0x40
    TVNPFloatingContentControl *_floatingView;	// 72 = 0x48
    UIView *_backgroundColorView;	// 80 = 0x50
    UILabel *_titleLabel;	// 88 = 0x58
    UILabel *_subtitleLabel;	// 96 = 0x60
    UILayoutGuide *_packageViewLayoutGuide;	// 104 = 0x68
    UIImageView *_checkmarkView;	// 112 = 0x70
    UILabel *_enabledLabel;	// 120 = 0x78
    NSMutableArray *_volatileConstraints;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000462f0
@property(retain, nonatomic) NSMutableArray *volatileConstraints; // @synthesize volatileConstraints=_volatileConstraints;
@property(readonly, nonatomic) UILabel *enabledLabel; // @synthesize enabledLabel=_enabledLabel;
@property(readonly, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(readonly, nonatomic) UILayoutGuide *packageViewLayoutGuide; // @synthesize packageViewLayoutGuide=_packageViewLayoutGuide;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(readonly, nonatomic) TVNPFloatingContentControl *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) TVSMCAPackageView *whitePackageView; // @synthesize whitePackageView=_whitePackageView;
@property(retain, nonatomic) TVSMCAPackageView *blackPackageView; // @synthesize blackPackageView=_blackPackageView;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *enabledText; // @synthesize enabledText=_enabledText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) _Bool isUnavailable; // @synthesize isUnavailable=_isUnavailable;
@property(nonatomic) _Bool isSettingEnabled; // @synthesize isSettingEnabled=_isSettingEnabled;
@property(nonatomic) _Bool showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(nonatomic) __weak id <TVSMAirPodsModuleHeadsetSettingsCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long setting; // @synthesize setting=_setting;
- (void)updateConstraints;	// IMP=0x0000000000045c70
- (void)_addInitialConstraints;	// IMP=0x0000000000044b70
- (void)_setupPackageView:(id)arg1;	// IMP=0x00000000000447c0
- (void)_updatePackageViewVisibility;	// IMP=0x00000000000445e0
@property(nonatomic) _Bool selectionEnabled;
- (unsigned long long)_controlStateForCell;	// IMP=0x0000000000043f50
- (id)preferredFocusEnvironments;	// IMP=0x0000000000043ed0
- (void)_configureAppearanceForControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000043630
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000043510
- (void)selectedSetting;	// IMP=0x00000000000434b0
- (void)prepareForReuse;	// IMP=0x00000000000433b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000042ad0

@end

