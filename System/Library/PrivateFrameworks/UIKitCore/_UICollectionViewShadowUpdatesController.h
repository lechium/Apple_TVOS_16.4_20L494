//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPointerArray, UICollectionView, _UIDataSourceSnapshotter, _UIDataSourceUpdateMap;

__attribute__((visibility("hidden")))
@interface _UICollectionViewShadowUpdatesController : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    _UIDataSourceSnapshotter *_initialSnapshot;	// 16 = 0x10
    _UIDataSourceUpdateMap *_updateMap;	// 24 = 0x18
    NSMutableArray *__shadowUpdates;	// 32 = 0x20
    NSPointerArray *_rebaseObservers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000038525d
@property(retain, nonatomic) NSPointerArray *rebaseObservers; // @synthesize rebaseObservers=_rebaseObservers;
@property(retain, nonatomic) NSMutableArray *_shadowUpdates; // @synthesize _shadowUpdates=__shadowUpdates;
@property(retain, nonatomic) _UIDataSourceUpdateMap *updateMap; // @synthesize updateMap=_updateMap;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_pruneAndRebaseShadowUpdatesForShadowInsertWithIdentifier:(id)arg1;	// IMP=0x00000000003850cc
- (id)_findInsertShadowUpdateForFinalIndexPath:(id)arg1;	// IMP=0x0000000000384e4d
- (id)_findShadowUpdateForIdentifier:(id)arg1 inShadowUpdates:(id)arg2;	// IMP=0x0000000000384c70
- (void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000384c6a
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1;	// IMP=0x0000000000384c5d
- (id)_supplementaryIndexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x0000000000384c47
- (id)_indexPathsBeforeShadowUpdates:(id)arg1;	// IMP=0x0000000000384a96
- (long long)sectionIndexAfterShadowUpdates:(long long)arg1 allowingAppendingInserts:(_Bool)arg2;	// IMP=0x0000000000384961
- (long long)sectionIndexAfterShadowUpdates:(long long)arg1;	// IMP=0x000000000038494d
- (long long)sectionIndexBeforeShadowUpdates:(long long)arg1;	// IMP=0x00000000003848de
- (id)indexPathAfterShadowUpdates:(id)arg1 allowingAppendingInserts:(_Bool)arg2;	// IMP=0x000000000038475b
- (id)indexPathAfterShadowUpdates:(id)arg1;	// IMP=0x0000000000384747
- (id)indexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x00000000003846ac
- (id)_coalesceUpdatesIfPossible:(id)arg1;	// IMP=0x0000000000384402
- (id)_snapshotForShadowUpdatePreceedingShadowUpdate:(id)arg1 shadowUpdates:(id)arg2;	// IMP=0x00000000003842a8
- (id)_rebasedUpdateMapForUpdate:(id)arg1;	// IMP=0x0000000000384155
- (void)_regenerateUpdateMap;	// IMP=0x0000000000384088
- (id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2 shadowUpdates:(id)arg3;	// IMP=0x0000000000383923
- (_Bool)_shadowUpdatesAreSimpleInsertWithOptionalMoveSequenceForIndexPath:(id)arg1;	// IMP=0x000000000038372f
- (_Bool)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;	// IMP=0x0000000000383727
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x00000000003834fc
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x00000000003832d1
- (id)_collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x00000000003831b6
- (id)_collectionView:(id)arg1 indexPathOfReferenceItemToPreserveContentOffsetWithProposedReference:(id)arg2;	// IMP=0x0000000000383091
- (void)_collectionView:(id)arg1 orthogonalScrollViewDidScroll:(id)arg2 section:(long long)arg3;	// IMP=0x0000000000382ff3
- (_Bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;	// IMP=0x0000000000382f33
- (struct CGPoint)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x0000000000382e7d
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1;	// IMP=0x0000000000382ddc
- (void)collectionView:(id)arg1 performPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000382d44
- (_Bool)collectionView:(id)arg1 canPerformPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000382ca2
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000382bfc
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000382b2b
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x0000000000382a75
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000003829ab
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x00000000003828f5
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000000038281c
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;	// IMP=0x0000000000382720
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;	// IMP=0x0000000000382647
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000382559
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000382464
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;	// IMP=0x000000000038239a
- (_Bool)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;	// IMP=0x00000000003822b8
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000000003821c6
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000003820e6
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000000381ff4
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000381f14
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000381e51
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000381d8e
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000381cc4
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000381bfa
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000381b37
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000381a74
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000003819aa
- (void)_collectionView:(id)arg1 willPerformUpdates:(id)arg2;	// IMP=0x0000000000381683
- (id)_collectionView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000003815c2
- (id)_collectionView:(id)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;	// IMP=0x000000000038151b
- (id)_sectionIndexTitlesForCollectionView:(id)arg1;	// IMP=0x000000000038147a
- (_Bool)_collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;	// IMP=0x00000000003813b0
- (void)_collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000000003812ae
- (_Bool)_collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x00000000003811da
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;	// IMP=0x00000000003810f2
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;	// IMP=0x000000000038101c
- (id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000000380f50
- (id)indexTitlesForCollectionView:(id)arg1;	// IMP=0x0000000000380eaa
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x0000000000380da8
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x0000000000380cde
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000380bed
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000380a5c
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000380949
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000038082a
- (void)addRebaseObserver:(id)arg1;	// IMP=0x0000000000380783
- (id)computeRevertShadowUpdates;	// IMP=0x00000000003805dc
- (id)shadowUpdates;	// IMP=0x00000000003805ca
- (void)appendShadowUpdate:(id)arg1;	// IMP=0x0000000000380263
- (void)didRebaseWithNewBaseUpdateMap:(id)arg1;	// IMP=0x000000000038025d
- (void)rebaseForUpdates:(id)arg1 notifyRebaseObservers:(_Bool)arg2;	// IMP=0x000000000037fdf7
- (_Bool)shouldRebaseForUpdates;	// IMP=0x000000000037fdaf
- (void)reset;	// IMP=0x000000000037fd46
- (id)initWithCollectionView:(id)arg1;	// IMP=0x000000000037fc65

@end

