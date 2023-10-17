//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVMLCollectionViewController.h"

@class IKViewElement, NSIndexPath, NSMutableArray, NSString, UIViewController;
@protocol _TVListViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _TVListViewController : _TVMLCollectionViewController
{
    _Bool _configureForStackTemplate;	// 8 = 0x8
    _Bool _relatedContentElementValid;	// 9 = 0x9
    IKViewElement *_relatedContentElement;	// 16 = 0x10
    IKViewElement *_previewElement;	// 24 = 0x18
    _Bool _previewUpdated;	// 32 = 0x20
    UIViewController *_previewController;	// 40 = 0x28
    double _cachedCellWidth;	// 48 = 0x30
    NSMutableArray *_cachedListChildViewControllers;	// 56 = 0x38
    NSIndexPath *_pendingPreviewIndexPath;	// 64 = 0x40
    NSIndexPath *_lastPreviewedIndexPath;	// 72 = 0x48
    NSIndexPath *_secondCellIndexPath;	// 80 = 0x50
    _Bool _secondIndexPathFocused;	// 88 = 0x58
    _Bool _alwaysSoftFocusEnabled;	// 89 = 0x59
    id <_TVListViewControllerDelegate> _delegate;	// 96 = 0x60
}

+ (id)_shadowCollectionElementForCollectionElement:(id)arg1;	// IMP=0x00100000000e98c4
- (void).cxx_destruct;	// IMP=0x00000000000ebd4b
@property(nonatomic, getter=isAlwaysSoftFocusEnabled) _Bool alwaysSoftFocusEnabled; // @synthesize alwaysSoftFocusEnabled=_alwaysSoftFocusEnabled;
@property(nonatomic) __weak id <_TVListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIEdgeInsets)_marginForHeaderCellForElement:(id)arg1 section:(long long)arg2;	// IMP=0x00000000000ebb8d
- (struct CGSize)_expectedHeaderCellSizeForElement:(id)arg1 section:(long long)arg2;	// IMP=0x00000000000eba8c
- (struct CGSize)_expectedCellSizeForElement:(id)arg1 inSectionIndex:(long long)arg2;	// IMP=0x00000000000eb36e
- (id)_cachedViewControllerForElement:(id)arg1;	// IMP=0x00000000000eb121
- (id)_viewControllerForElement:(id)arg1;	// IMP=0x00000000000eb000
- (id)_previewControllerWithElement:(id)arg1 previewElement:(id *)arg2;	// IMP=0x00000000000ea9cf
- (void)_updatedPreviewWithItemAtIndexPath:(id)arg1;	// IMP=0x00000000000ea3ce
- (id)_relatedContentElementForIndexPath:(id)arg1;	// IMP=0x00000000000ea169
- (_Bool)_relatedElementIsGridAtIndexPath:(id)arg1;	// IMP=0x00000000000ea0cf
- (void)_delayedUpdatePreview;	// IMP=0x00000000000e9d26
- (void)_updateCellMetrics;	// IMP=0x00000000000e9b8d
- (id)impressionableElementsContainedInDocument:(id)arg1;	// IMP=0x00000000000e955d
- (_Bool)listCell:(id)arg1 shouldAppearSelectedForPreviouslyFocusedView:(id)arg2;	// IMP=0x00000000000e933f
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000e90f1
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000e8d32
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000000e8c89
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000e8bba
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000e8bb2
- (void)templateControllerDidUpdateFocusFromView:(id)arg1;	// IMP=0x00000000000e8908
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000e87b6
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000e8564
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000000e8483
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000000e8291
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000e8167
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000e7c28
- (void)didUpdateCollectionViewByNeedingReload:(_Bool)arg1 focusUpdate:(_Bool)arg2;	// IMP=0x00000000000e74f9
- (void)updateSupplementaryViewsForSectionAtOldIndex:(long long)arg1 oldElement:(id)arg2 withNewIndex:(long long)arg3 newElement:(id)arg4 requiresReload:(_Bool *)arg5 requiresRelayout:(_Bool *)arg6;	// IMP=0x00000000000e7180
- (void)updateVisibleCell:(id)arg1 atIndexPath:(id)arg2 withElement:(id)arg3;	// IMP=0x00000000000e6f18
- (struct CGSize)expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000e6e9f
- (Class)cellClassForElement:(id)arg1;	// IMP=0x00000000000e6df1
- (void)updateViewLayoutAnimated:(_Bool)arg1 relayout:(_Bool)arg2;	// IMP=0x00000000000e6d20
- (_Bool)contentFlowsVertically;	// IMP=0x00000000000e6d18
- (id)makeCollectionViewWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e6bac
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000e6b6b
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000000000e6b0d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000e6a1e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000e69ef
- (void)viewDidLoad;	// IMP=0x00000000000e6980
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics)arg2;	// IMP=0x00000000000e646d
- (void)dealloc;	// IMP=0x00000000000e641b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

