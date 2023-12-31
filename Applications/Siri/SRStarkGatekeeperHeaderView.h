//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSString, SRCarPlayHeaderButton, SRStarkCancelButton, SRUIFCachedPreferences, UIFocusContainerGuide;
@protocol SRStarkGatekeeperHeaderViewDelegate, UIFocusItem;

@interface SRStarkGatekeeperHeaderView : UIView
{
    id <UIFocusItem> userFocusedItem;	// 8 = 0x8
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;	// 16 = 0x10
    id <SRStarkGatekeeperHeaderViewDelegate> _delegate;	// 24 = 0x18
    UIFocusContainerGuide *_gatekeeperHeaderViewFocusContainerGuide;	// 32 = 0x20
    NSString *_appBundleIdentifier;	// 40 = 0x28
    SRStarkCancelButton *_cancelButton;	// 48 = 0x30
    SRCarPlayHeaderButton *_trailingButton;	// 56 = 0x38
}

+ (Class)_carPlayHeaderButtonClassForHeaderButtonType:(unsigned long long)arg1;	// IMP=0x0020000000014dfd
+ (unsigned long long)_carPlayHeaderButtonTypeForDirectActionEvent:(long long)arg1;	// IMP=0x0010000000014de1
+ (unsigned long long)_carPlayHeaderButtonTypeForAceObject:(id)arg1;	// IMP=0x0010000000014bfa
+ (unsigned long long)_gatekeeperTypeForBundleIdentifier:(id)arg1;	// IMP=0x00100000000141c1
+ (id)gatekeeperForAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000013533
+ (id)gatekeeperForRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x00100000000133ef
- (void).cxx_destruct;	// IMP=0x0020000000014fed
@property(readonly, nonatomic) SRCarPlayHeaderButton *trailingButton; // @synthesize trailingButton=_trailingButton;
@property(readonly, nonatomic) SRStarkCancelButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) UIFocusContainerGuide *gatekeeperHeaderViewFocusContainerGuide; // @synthesize gatekeeperHeaderViewFocusContainerGuide=_gatekeeperHeaderViewFocusContainerGuide;
@property(nonatomic) __weak id <SRStarkGatekeeperHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, getter=_currentTurnContext, setter=_setCurrentTurnContext:) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
@property(retain, nonatomic) id <UIFocusItem> userFocusedItem; // @synthesize userFocusedItem;
- (id)accessibilityIdentifier;	// IMP=0x0010000000014f0a
- (void)_announceButtonTapped:(id)arg1;	// IMP=0x0010000000014e2b
- (id)_trailingButtonForCarPlayHeaderButtonType:(unsigned long long)arg1;	// IMP=0x0010000000014bf2
- (void)_updateTrailingButton:(id)arg1;	// IMP=0x0010000000014b5e
- (void)_updateTrailingButtonForCarPlayHeaderButtonType:(unsigned long long)arg1;	// IMP=0x0010000000014b12
- (void)_updateTrailingButtonForDirectActionEvent:(long long)arg1;	// IMP=0x0010000000014a5b
- (void)_updateTrailingButtonForAceObject:(id)arg1;	// IMP=0x001000000001498f
- (void)_updateAppBundleIdentifier:(id)arg1;	// IMP=0x0010000000014934
- (void)cachedPreferences:(id)arg1 announceNotificationsInCarPlayTemporarilyDisabledChanged:(_Bool)arg2;	// IMP=0x001000000001492e
- (_Bool)viewContainsFocusItem:(id)arg1;	// IMP=0x0010000000014862
- (id)updatedFocusItemForCurrentFocusItem:(id)arg1;	// IMP=0x0010000000014737
- (id)preferredFocusEnvironments;	// IMP=0x0010000000014662
- (void)layoutSubviews;	// IMP=0x001000000001426b
- (void)_logGatekeeperDismissedManually;	// IMP=0x001000000001408b
- (void)logGatekeeperAppeared;	// IMP=0x0010000000013f55
- (void)_dismissalButtonTapped:(id)arg1;	// IMP=0x0010000000013c9d
@property(readonly, nonatomic) SRUIFCachedPreferences *cachedPreferences;
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000013be7
- (id)initWithRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000013b3c
- (id)_initWithAppBundleIdentifier:(id)arg1 directActionEvent:(long long)arg2 aceObject:(id)arg3 currentTurnContext:(id)arg4;	// IMP=0x00100000000138d2
- (void)updateForRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x001000000001382d
- (void)updateForAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000013791

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

