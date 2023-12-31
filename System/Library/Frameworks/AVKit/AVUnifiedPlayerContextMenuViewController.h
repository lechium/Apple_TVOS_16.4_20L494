//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVUnifiedPlayerContextMenuRepresentation, AVUnifiedPlayerContextMenuWrappingView, NSArray, NSIndexPath, NSLayoutConstraint, NSString, UIMenu, UIView, _AVUnifiedPlayerContextMenuRepresentationVisitor;
@protocol AVUnifiedPlayerContextMenuViewControllerDelegate, AVxOverlayInteractionAssistant, NSObject;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerContextMenuViewController : UIViewController
{
    _Bool _prefersExpandedDisplaySize;	// 8 = 0x8
    long long _bestAvailableAudioFormat;	// 16 = 0x10
    id <AVUnifiedPlayerContextMenuViewControllerDelegate> _delegate;	// 24 = 0x18
    UIMenu *_menu;	// 32 = 0x20
    id <AVxOverlayInteractionAssistant> _interactionAssistant;	// 40 = 0x28
    NSIndexPath *_sourceIndexPath;	// 48 = 0x30
    id <NSObject> _didEnterBackgroundObservationToken;	// 56 = 0x38
    AVUnifiedPlayerContextMenuRepresentation *_representation;	// 64 = 0x40
    _AVUnifiedPlayerContextMenuRepresentationVisitor *_visitor;	// 72 = 0x48
    NSLayoutConstraint *_preferredWidthConstraint;	// 80 = 0x50
    NSLayoutConstraint *_expandedWidthConstraint;	// 88 = 0x58
    NSLayoutConstraint *_restrictedHeightConstraint;	// 96 = 0x60
    UIView *_sourceView;	// 104 = 0x68
}

+ (id)viewControllerForPresentingMenu:(id)arg1 fromSourceView:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x00100000000136e2
- (void).cxx_destruct;	// IMP=0x0000000000013073
@property(readonly, nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) NSLayoutConstraint *restrictedHeightConstraint; // @synthesize restrictedHeightConstraint=_restrictedHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *expandedWidthConstraint; // @synthesize expandedWidthConstraint=_expandedWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredWidthConstraint; // @synthesize preferredWidthConstraint=_preferredWidthConstraint;
@property(readonly, nonatomic) _AVUnifiedPlayerContextMenuRepresentationVisitor *visitor; // @synthesize visitor=_visitor;
@property(readonly, nonatomic) AVUnifiedPlayerContextMenuRepresentation *representation; // @synthesize representation=_representation;
@property(readonly, nonatomic) id <NSObject> didEnterBackgroundObservationToken; // @synthesize didEnterBackgroundObservationToken=_didEnterBackgroundObservationToken;
@property(copy, nonatomic) NSIndexPath *sourceIndexPath; // @synthesize sourceIndexPath=_sourceIndexPath;
@property(retain, nonatomic) id <AVxOverlayInteractionAssistant> interactionAssistant; // @synthesize interactionAssistant=_interactionAssistant;
@property(retain, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) __weak id <AVUnifiedPlayerContextMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long bestAvailableAudioFormat; // @synthesize bestAvailableAudioFormat=_bestAvailableAudioFormat;
@property(nonatomic) _Bool prefersExpandedDisplaySize; // @synthesize prefersExpandedDisplaySize=_prefersExpandedDisplaySize;
- (void)_updateMatchMoveAnimation;	// IMP=0x0000000000012c1d
- (void)_toggleExpandedWidthConstraint;	// IMP=0x0000000000012bf2
- (void)_updateAudioCalloutStyle;	// IMP=0x0000000000012b66
- (void)_swipeRightGesture:(id)arg1;	// IMP=0x0000000000012b0a
- (void)_swipeLeftGesture:(id)arg1;	// IMP=0x0000000000012aae
- (void)_installLateralMenuChangeGestureRecognizers;	// IMP=0x00000000000128fa
- (void)_didDismiss;	// IMP=0x0000000000012870
- (id)_secondaryTextForSection:(long long)arg1;	// IMP=0x00000000000127c7
- (id)_imageForSection:(long long)arg1;	// IMP=0x000000000001271e
- (id)_titleForSection:(long long)arg1;	// IMP=0x00000000000126c5
- (id)_fallbackTitleForSection:(long long)arg1;	// IMP=0x000000000001269a
- (void)_dismissAnimated:(_Bool)arg1;	// IMP=0x0000000000012686
- (void)_dismissAnimated;	// IMP=0x000000000001266f
- (void)_configureCell:(id)arg1 atIndexPath:(id)arg2 withItem:(id)arg3;	// IMP=0x000000000001265f
- (id)_itemAtIndexPath:(id)arg1;	// IMP=0x0000000000012642
- (unsigned long long)_sectionCount;	// IMP=0x0000000000012625
@property(readonly, nonatomic) NSArray *collectionViews;
- (void)_setupSizingLayoutConstraints;	// IMP=0x000000000001221d
- (_Bool)_setupPositionalLayoutConstraintsInContainerView:(id)arg1;	// IMP=0x0000000000012036
- (void)updateMenu:(id)arg1;	// IMP=0x0000000000011ef9
@property(readonly, nonatomic) NSString *menuIdentifier;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000011e22
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000011db9
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000011c30
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000011c13
- (_Bool)contextMenuView:(id)arg1 shouldDisplayFooterInSection:(long long)arg2;	// IMP=0x0000000000011bed
- (_Bool)contextMenuView:(id)arg1 shouldDisplayHeaderInSection:(long long)arg2;	// IMP=0x0000000000011bb7
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000011a49
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000011a29
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000011851
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000001183f
- (void)representation:(id)arg1 didUpdateItem:(id)arg2 inSection:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000000011654
- (void)representation:(id)arg1 didUpdateSection:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000011527
- (struct CGRect)frameInView:(id)arg1;	// IMP=0x00000000000113c2
@property(readonly, nonatomic) NSArray *menuElements;
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000110ad
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000010dee
- (void)viewDidLoad;	// IMP=0x0000000000010d0c
- (void)loadView;	// IMP=0x0000000000010a3c
- (void)dealloc;	// IMP=0x0000000000010975
- (id)initWithSender:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x000000000001073b
- (id)containerViewControllerWithSourceCollectionView:(id)arg1;	// IMP=0x000000000012ee36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) AVUnifiedPlayerContextMenuWrappingView *view; // @dynamic view;

@end

