//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, TVSMAirPodsModuleCAPackageView, UIColor, UILabel, UIView, _UIFloatingContentView;

@interface TVSMAirPodsModuleSegmentedControlCollectionViewCell : UICollectionViewCell
{
    _Bool _isFocused;	// 8 = 0x8
    _Bool _displayAsSelected;	// 9 = 0x9
    _Bool _disabled;	// 10 = 0xa
    NSString *_title;	// 16 = 0x10
    NSString *_packageName;	// 24 = 0x18
    UIColor *_overrideTintColor;	// 32 = 0x20
    _UIFloatingContentView *_floatingContentView;	// 40 = 0x28
    UIView *_backgroundColorView;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    TVSMAirPodsModuleCAPackageView *_focusedPackageView;	// 64 = 0x40
    TVSMAirPodsModuleCAPackageView *_normalPackageView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000002fb20
@property(retain, nonatomic) TVSMAirPodsModuleCAPackageView *normalPackageView; // @synthesize normalPackageView=_normalPackageView;
@property(retain, nonatomic) TVSMAirPodsModuleCAPackageView *focusedPackageView; // @synthesize focusedPackageView=_focusedPackageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(retain, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool displayAsSelected; // @synthesize displayAsSelected=_displayAsSelected;
@property(retain, nonatomic) UIColor *overrideTintColor; // @synthesize overrideTintColor=_overrideTintColor;
@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned long long)_controlStateForCell;	// IMP=0x000000000002f810
- (void)_updatePackageRasterizationScale;	// IMP=0x000000000002f740
- (void)_updatePackageViewVisibility;	// IMP=0x000000000002f570
- (void)_configureAppearanceForControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000002f190
- (void)_setupPackageViews;	// IMP=0x000000000002eaa0
- (void)_setupConstraints;	// IMP=0x000000000002e200
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000002e110
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000002e090
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002d7b0

@end

