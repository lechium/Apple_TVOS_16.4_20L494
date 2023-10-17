//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewCompositionalLayout, UIFocusGuide, _UIFocusFastScrollingIndexBarEntry, _UIHorizontalIndexTitleBarCell;
@protocol _UIHorizontalIndexTitleBarDelegate;

__attribute__((visibility("hidden")))
@interface _UIHorizontalIndexTitleBar : UIView
{
    NSArray *_entries;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UICollectionViewCompositionalLayout *_layout;	// 24 = 0x18
    UIFocusGuide *_horizontalIndexTitleBarFocusGuide;	// 32 = 0x20
    _UIFocusFastScrollingIndexBarEntry *_selectedEntry;	// 40 = 0x28
    NSIndexPath *_selectedEntryIndexPath;	// 48 = 0x30
    _UIHorizontalIndexTitleBarCell *_focusedCell;	// 56 = 0x38
    id <_UIHorizontalIndexTitleBarDelegate> _delegate;	// 64 = 0x40
    struct UIEdgeInsets _sectionInset;	// 72 = 0x48
    struct UIEdgeInsets _parentContentInset;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000654e7e
@property(nonatomic, getter=_parentContentInset, setter=_setParentContentInset:) struct UIEdgeInsets parentContentInset; // @synthesize parentContentInset=_parentContentInset;
@property(nonatomic) __weak id <_UIHorizontalIndexTitleBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak _UIHorizontalIndexTitleBarCell *focusedCell; // @synthesize focusedCell=_focusedCell;
@property(retain, nonatomic) NSIndexPath *selectedEntryIndexPath; // @synthesize selectedEntryIndexPath=_selectedEntryIndexPath;
@property(retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *selectedEntry; // @synthesize selectedEntry=_selectedEntry;
@property(retain, nonatomic) UIFocusGuide *horizontalIndexTitleBarFocusGuide; // @synthesize horizontalIndexTitleBarFocusGuide=_horizontalIndexTitleBarFocusGuide;
@property(retain, nonatomic) UICollectionViewCompositionalLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000654d08
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000654c21
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000654b3a
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000654af6
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000654aeb
- (id)preferredFocusEnvironments;	// IMP=0x0000000000654a60
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000065492c
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000000065483a
- (id)_existingCellForSelectedIndexPath;	// IMP=0x0000000000654729
- (struct NSDirectionalEdgeInsets)_combinedSectionInset;	// IMP=0x000000000065462d
- (void)_cancelDelayedFocusAction;	// IMP=0x00000000006545fc
- (void)_sendDelayedFocusActionIfNecessary;	// IMP=0x00000000006545bd
- (void)_selectFocusedCell;	// IMP=0x0000000000654476
- (_Bool)_isViewEntryCell:(id)arg1;	// IMP=0x0000000000654363
- (id)_currentlyFocusedCell;	// IMP=0x0000000000654351
- (void)_selectEntryForTitleIndex:(long long)arg1;	// IMP=0x0000000000654184
- (void)_updateWithEntries:(id)arg1;	// IMP=0x00000000006540f0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000006540af
- (void)_flipIfRightToLeft;	// IMP=0x0000000000653fa3
- (void)commonInit;	// IMP=0x0000000000653723
- (id)init;	// IMP=0x00000000006536d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
