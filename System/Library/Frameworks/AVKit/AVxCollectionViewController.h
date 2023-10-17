//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

@class AVControlItem, NSIndexPath, NSMutableArray, NSString;
@protocol AVxCollectionViewControllerDelegate, AVxOverlayInteractionAssistant;

__attribute__((visibility("hidden")))
@interface AVxCollectionViewController : UICollectionViewController
{
    _Bool _allowsItemScaling;	// 8 = 0x8
    id <AVxCollectionViewControllerDelegate> _interactiveCollectionViewControllerDelegate;	// 16 = 0x10
    long long _initialFocus;	// 24 = 0x18
    NSMutableArray *_leftItems;	// 32 = 0x20
    NSMutableArray *_centerItems;	// 40 = 0x28
    NSMutableArray *_rightItems;	// 48 = 0x30
    NSIndexPath *_preferredFocusIndexPath;	// 56 = 0x38
    id <AVxOverlayInteractionAssistant> _interactionAssistant;	// 64 = 0x40
    AVControlItem *_focusedItem;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000128dbe
@property(readonly, nonatomic) __weak AVControlItem *focusedItem; // @synthesize focusedItem=_focusedItem;
@property(readonly, nonatomic) _Bool allowsItemScaling; // @synthesize allowsItemScaling=_allowsItemScaling;
@property(retain, nonatomic) id <AVxOverlayInteractionAssistant> interactionAssistant; // @synthesize interactionAssistant=_interactionAssistant;
@property(copy, nonatomic) NSIndexPath *preferredFocusIndexPath; // @synthesize preferredFocusIndexPath=_preferredFocusIndexPath;
@property(readonly, nonatomic) NSMutableArray *rightItems; // @synthesize rightItems=_rightItems;
@property(readonly, nonatomic) NSMutableArray *centerItems; // @synthesize centerItems=_centerItems;
@property(readonly, nonatomic) NSMutableArray *leftItems; // @synthesize leftItems=_leftItems;
@property(nonatomic) long long initialFocus; // @synthesize initialFocus=_initialFocus;
@property(nonatomic) __weak id <AVxCollectionViewControllerDelegate> interactiveCollectionViewControllerDelegate; // @synthesize interactiveCollectionViewControllerDelegate=_interactiveCollectionViewControllerDelegate;
- (void)overlayToolCellDidReceiveLongPress:(id)arg1;	// IMP=0x0000000000128b73
- (id)collectionView:(id)arg1 layout:(id)arg2 controlItemForIndexPath:(id)arg3;	// IMP=0x0000000000128b5e
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000128a38
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000012896c
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x00000000001287bc
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000128569
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000128479
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000128467
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001283ed
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001283e2
- (void)setScaleOfEveryVisibleCell:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000127e50
- (id)cellsLeadingToTrailing;	// IMP=0x0000000000127d86
- (id)visibleCellsLoadingIfNecessary;	// IMP=0x0000000000127cf4
@property(readonly, nonatomic) NSIndexPath *initialFocusIndexPath;
- (id)firstAvailableIndexPathInSection:(long long)arg1;	// IMP=0x00000000001279a2
- (id)indexPathForControlItem:(id)arg1;	// IMP=0x0000000000127833
- (id)controlItemForIndexPath:(id)arg1;	// IMP=0x000000000012778b
- (void)viewDidLoad;	// IMP=0x000000000012770b
- (id)init;	// IMP=0x00000000001274f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

