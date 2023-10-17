//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SRStarkGatekeeperHeaderView, SRStarkMessagesContactContainerView, UIButton, UIFocusContainerGuide, UITapGestureRecognizer;
@protocol SRStarkViewDelegate, UIFocusItem;

@interface SRStarkView : UIView
{
    _Bool _touchPassthroughEnabled;	// 8 = 0x8
    UIView *_snippetView;	// 16 = 0x10
    SRStarkMessagesContactContainerView *_messagesContactContainerView;	// 24 = 0x18
    SRStarkGatekeeperHeaderView *_gatekeeperHeader;	// 32 = 0x20
    id <SRStarkViewDelegate> _delegate;	// 40 = 0x28
    UIView *_dismisserView;	// 48 = 0x30
    UIButton *_selectButton;	// 56 = 0x38
    UIFocusContainerGuide *_selectButtonFocusContainerGuide;	// 64 = 0x40
    id <UIFocusItem> _userFocusedItem;	// 72 = 0x48
    UITapGestureRecognizer *_backButtonTapGestureRecognizer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000025389
@property(retain, nonatomic) UITapGestureRecognizer *backButtonTapGestureRecognizer; // @synthesize backButtonTapGestureRecognizer=_backButtonTapGestureRecognizer;
@property(retain, nonatomic) id <UIFocusItem> userFocusedItem; // @synthesize userFocusedItem=_userFocusedItem;
@property(retain, nonatomic) UIFocusContainerGuide *selectButtonFocusContainerGuide; // @synthesize selectButtonFocusContainerGuide=_selectButtonFocusContainerGuide;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(readonly, nonatomic, getter=_dismisserView) UIView *dismisserView; // @synthesize dismisserView=_dismisserView;
@property(nonatomic) __weak id <SRStarkViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool touchPassthroughEnabled; // @synthesize touchPassthroughEnabled=_touchPassthroughEnabled;
@property(retain, nonatomic) SRStarkGatekeeperHeaderView *gatekeeperHeader; // @synthesize gatekeeperHeader=_gatekeeperHeader;
@property(retain, nonatomic) SRStarkMessagesContactContainerView *messagesContactContainerView; // @synthesize messagesContactContainerView=_messagesContactContainerView;
@property(retain, nonatomic) UIView *snippetView; // @synthesize snippetView=_snippetView;
- (_Bool)canBecomeFirstResponder;	// IMP=0x001000000002526c
- (void)layoutSubviews;	// IMP=0x00100000000248eb
@property(readonly, nonatomic, getter=_snippetYOrigin) double snippetYOrigin;
- (void)gatekeeperHeaderViewRequestsFocusUpdate:(id)arg1;	// IMP=0x00100000000247ad
- (void)gatekeeperHeaderDismissalButtonPressed:(id)arg1;	// IMP=0x000000000002475c
- (void)_updateUserFocusedItem:(id)arg1 fromView:(id)arg2 toView:(id)arg3;	// IMP=0x00100000000244c4
- (_Bool)canBecomeFocused;	// IMP=0x001000000002448f
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x001000000002413a
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0010000000024032
- (id)preferredFocusEnvironments;	// IMP=0x0010000000023e4f
- (void)_setGatekeeperHeader:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000023ac3
- (void)setGatekeeperHeader:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000023ab1
- (void)_setSnippetView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000236dc
- (void)setSnippetView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000236ca
- (void)_setMessagesContactContainerView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000233cb
- (void)setMessagesContactContainerView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000233b9
- (void)_dismissalTapped:(id)arg1;	// IMP=0x00100000000230d3
- (void)_selectButtonTapped:(id)arg1;	// IMP=0x0010000000023087
- (void)_handleBackButtonTapGestureRecognizer:(id)arg1;	// IMP=0x0010000000023012
- (_Bool)isOrbFocused;	// IMP=0x0010000000022ff5
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000022d56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
