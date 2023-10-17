//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIFocusGuide, UILabel, UIStackView;
@protocol PBUserNotificationUnbiasedAlertViewDelegate;

@interface PBUserNotificationUnbiasedAlertView : UIView
{
    NSArray *_optionTitles;	// 8 = 0x8
    id <PBUserNotificationUnbiasedAlertViewDelegate> _delegate;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_descriptionLabel;	// 32 = 0x20
    UIButton *_selectButton;	// 40 = 0x28
    UIStackView *_buttonsStackView;	// 48 = 0x30
    UIFocusGuide *_buttonsFocusGuide;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000014cd89
@property(readonly, nonatomic) UIFocusGuide *buttonsFocusGuide; // @synthesize buttonsFocusGuide=_buttonsFocusGuide;
@property(readonly, nonatomic) UIStackView *buttonsStackView; // @synthesize buttonsStackView=_buttonsStackView;
@property(readonly, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <PBUserNotificationUnbiasedAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *optionTitles; // @synthesize optionTitles=_optionTitles;
- (void)_didSelectButton:(id)arg1;	// IMP=0x001000000014cc10
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSString *title;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x001000000014c2b5
- (id)preferredFocusEnvironments;	// IMP=0x001000000014c164
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000014b014

@end

