//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutConstraint, NSString, UILabel, UIStatusBarCarPlayDockAppItemButton, UIView;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayDockItemView
{
    _Bool _showingCallTimer;	// 144 = 0x90
    UILabel *_inCallDurationLabel;	// 152 = 0x98
    UIStatusBarCarPlayDockAppItemButton *_itemOneButton;	// 160 = 0xa0
    UIStatusBarCarPlayDockAppItemButton *_itemTwoButton;	// 168 = 0xa8
    UIStatusBarCarPlayDockAppItemButton *_itemThreeButton;	// 176 = 0xb0
    NSLayoutConstraint *_inCallLabelSpacingConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_itemOneTopConstraint;	// 192 = 0xc0
    NSArray *_currentBundleIdentifiers;	// 200 = 0xc8
    NSString *_currentActiveBundleIdentifier;	// 208 = 0xd0
    UIView *_preferredItemViewToFocus;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000d27955
@property(nonatomic, getter=isShowingCallTimer) _Bool showingCallTimer; // @synthesize showingCallTimer=_showingCallTimer;
@property(nonatomic) __weak UIView *preferredItemViewToFocus; // @synthesize preferredItemViewToFocus=_preferredItemViewToFocus;
@property(copy, nonatomic) NSString *currentActiveBundleIdentifier; // @synthesize currentActiveBundleIdentifier=_currentActiveBundleIdentifier;
@property(copy, nonatomic) NSArray *currentBundleIdentifiers; // @synthesize currentBundleIdentifiers=_currentBundleIdentifiers;
@property(retain, nonatomic) NSLayoutConstraint *itemOneTopConstraint; // @synthesize itemOneTopConstraint=_itemOneTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inCallLabelSpacingConstraint; // @synthesize inCallLabelSpacingConstraint=_inCallLabelSpacingConstraint;
@property(retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemThreeButton; // @synthesize itemThreeButton=_itemThreeButton;
@property(retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemTwoButton; // @synthesize itemTwoButton=_itemTwoButton;
@property(retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemOneButton; // @synthesize itemOneButton=_itemOneButton;
@property(retain, nonatomic) UILabel *inCallDurationLabel; // @synthesize inCallDurationLabel=_inCallDurationLabel;
- (id)preferredFocusEnvironments;	// IMP=0x0000000000d276fd
- (unsigned long long)_numberOfEnabledItems;	// IMP=0x0000000000d2763c
- (double)extraRightPadding;	// IMP=0x0000000000d2762e
- (double)extraLeftPadding;	// IMP=0x0000000000d27625
- (void)_updateInCallDurationIfNecessary:(id)arg1;	// IMP=0x0000000000d2706c
- (id)_toItemViewForBundleIdentifier:(id)arg1;	// IMP=0x0000000000d26e7c
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000d24d42
- (_Bool)animatesDataChange;	// IMP=0x0000000000d24d3a
- (void)updateForNewStyle:(id)arg1;	// IMP=0x0000000000d248c1
- (double)neededSizeForImageSet:(id)arg1;	// IMP=0x0000000000d24883
- (double)_neededSizeWithoutCallTimer;	// IMP=0x0000000000d2483e
- (double)_neededSizeWithCallTimer;	// IMP=0x0000000000d24777
- (_Bool)allowsUserInteraction;	// IMP=0x0000000000d2476f
- (void)layoutSubviews;	// IMP=0x0000000000d24602
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d24444
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000d240ff

@end

