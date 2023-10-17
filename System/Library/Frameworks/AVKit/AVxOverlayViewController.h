//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVControlItem, AVNonDigitizerTapRecognizer, AVPermissiveSwipeGestureRecognizer, AVUnifiedPlayerToolbarMenuController, AVxCollectionViewController, AVxOverlayInteractionController, NSArray, NSLayoutConstraint, NSString, UITapGestureRecognizer;
@protocol AVxOverlayInteractionAssistant, AVxOverlayViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVxOverlayViewController : UIViewController
{
    _Bool _isVisible;	// 8 = 0x8
    id _elementDidInteractObserver;	// 16 = 0x10
    _Bool _overlayPresented;	// 24 = 0x18
    id <AVxOverlayViewControllerDelegate> _delegate;	// 32 = 0x20
    double _bottomInset;	// 40 = 0x28
    NSArray *_buttonItems;	// 48 = 0x30
    AVUnifiedPlayerToolbarMenuController *_toolbarMenuController;	// 56 = 0x38
    AVxCollectionViewController *_collectionViewController;	// 64 = 0x40
    AVPermissiveSwipeGestureRecognizer *_swipeDownGestureRecognizer;	// 72 = 0x48
    AVNonDigitizerTapRecognizer *_b39ArrowGestureRecognizer;	// 80 = 0x50
    UITapGestureRecognizer *_playPauseGestureRecognizer;	// 88 = 0x58
    UITapGestureRecognizer *_menuGestureRecognizer;	// 96 = 0x60
    AVControlItem *_startPictureInPicture;	// 104 = 0x68
    AVControlItem *_swapPictureInPicture;	// 112 = 0x70
    NSLayoutConstraint *_bottomConstraint;	// 120 = 0x78
    AVxOverlayInteractionController *_interactionController;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000006790a
@property(readonly, nonatomic) AVxOverlayInteractionController *interactionController; // @synthesize interactionController=_interactionController;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) AVControlItem *swapPictureInPicture; // @synthesize swapPictureInPicture=_swapPictureInPicture;
@property(retain, nonatomic) AVControlItem *startPictureInPicture; // @synthesize startPictureInPicture=_startPictureInPicture;
@property(readonly, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *playPauseGestureRecognizer; // @synthesize playPauseGestureRecognizer=_playPauseGestureRecognizer;
@property(readonly, nonatomic) AVNonDigitizerTapRecognizer *b39ArrowGestureRecognizer; // @synthesize b39ArrowGestureRecognizer=_b39ArrowGestureRecognizer;
@property(readonly, nonatomic) AVPermissiveSwipeGestureRecognizer *swipeDownGestureRecognizer; // @synthesize swipeDownGestureRecognizer=_swipeDownGestureRecognizer;
@property(readonly, nonatomic) AVxCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(retain, nonatomic) AVUnifiedPlayerToolbarMenuController *toolbarMenuController; // @synthesize toolbarMenuController=_toolbarMenuController;
@property(copy, nonatomic) NSArray *buttonItems; // @synthesize buttonItems=_buttonItems;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic, getter=isOverlayPresented) _Bool overlayPresented; // @synthesize overlayPresented=_overlayPresented;
@property(nonatomic) __weak id <AVxOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_contextMenuViewControllerForPresentingPiPOptionsFromSourceView:(id)arg1;	// IMP=0x0000000000067679
- (id)_contextMenuViewControllerForPresentingMenu:(id)arg1 fromSourceView:(id)arg2;	// IMP=0x00000000000674fe
- (id)_adjacentMenuForContextMenuViewController:(id)arg1 withSwipeDirection:(unsigned long long)arg2;	// IMP=0x0000000000067390
- (void)contextMenuViewController:(id)arg1 didReceiveSwipeGestureWithDirection:(unsigned long long)arg2;	// IMP=0x0000000000066e39
- (void)contextMenuViewControllerDidDismiss:(id)arg1;	// IMP=0x0000000000066d56
- (void)toolbarMenuProvider:(id)arg1 didSelectItemForPictureInPictureOptionsMenuWithSender:(id)arg2;	// IMP=0x0000000000066bf0
- (void)toolbarMenuProvider:(id)arg1 didLongPressItemForLegibleLanguageOptionsMenuWithSender:(id)arg2;	// IMP=0x0000000000066bea
- (void)toolbarMenuProvider:(id)arg1 didSelectItemForMenu:(id)arg2 withSender:(id)arg3;	// IMP=0x0000000000066a27
- (void)toolbarMenuProvider:(id)arg1 didSelectItemForAction:(id)arg2 withSender:(id)arg3;	// IMP=0x00000000000669a8
- (void)toolbarMenuProviderDidPrepare:(id)arg1;	// IMP=0x0000000000066959
- (void)setScaleOfEveryVisibleCell:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006693c
- (void)didLongPressCell:(id)arg1 forButtonItem:(id)arg2;	// IMP=0x0000000000066927
- (void)didSelectCell:(id)arg1 forButtonItem:(id)arg2;	// IMP=0x00000000000668a2
- (id)preferredFocusEnvironments;	// IMP=0x0000000000066885
- (void)_handleB39Arrow:(id)arg1;	// IMP=0x0000000000066755
- (void)_handleSwipeDown:(id)arg1;	// IMP=0x0000000000066689
- (void)_handleMenu:(id)arg1;	// IMP=0x0000000000066559
- (void)_cancelAutoDismiss;	// IMP=0x0000000000066533
- (void)_dismissAfterDelay;	// IMP=0x00000000000664bb
- (void)_autoDismiss;	// IMP=0x00000000000664a4
- (void)_dismissAnimated:(_Bool)arg1;	// IMP=0x00000000000663a6
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000066365
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000066324
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000006629d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000660b0
- (void)hideAnimating:(_Bool)arg1 withCoordinator:(id)arg2;	// IMP=0x0000000000065d01
- (void)showAnimating:(_Bool)arg1 withCoordinator:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006586c
- (struct CGRect)frameForContextMenuInCoordinateSpace:(id)arg1;	// IMP=0x00000000000657a9
- (struct CGRect)frameForControlsBarInCoordinateSpace:(id)arg1;	// IMP=0x00000000000655d4
- (struct CGRect)frameForControlItem:(id)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000006546e
- (_Bool)_isAnyButtonEnabled;	// IMP=0x0000000000065335
- (_Bool)isVisible;	// IMP=0x0000000000065325
- (void)viewDidLoad;	// IMP=0x0000000000064b8e
@property(readonly, nonatomic) id <AVxOverlayInteractionAssistant> interactionAssistant;
- (void)reloadCollection;	// IMP=0x0000000000064a80
@property(readonly, nonatomic) _Bool hasEnabledItems;
@property(readonly, nonatomic) _Bool shouldShowPlaybackControls;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000006466f
@property(nonatomic) long long initialFocus;
- (id)collectionView;	// IMP=0x0000000000064618
- (void)dealloc;	// IMP=0x0000000000064570
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000064520
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000644d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

