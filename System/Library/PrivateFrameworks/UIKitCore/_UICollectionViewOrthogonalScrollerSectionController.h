//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSIndexSet, NSMapTable, NSString, NSUUID, UICollectionView, _UICollectionViewOrthogonalScrollerEmbeddedScrollView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewOrthogonalScrollerSectionController : NSObject
{
    _Bool _shouldPreventFocusScrollPastContentSize;	// 8 = 0x8
    _Bool _isHandlingScrollViewDelegateCallout;	// 9 = 0x9
    UICollectionView *_collectionView;	// 16 = 0x10
    NSMapTable *_scrollViewFromSectionMap;	// 24 = 0x18
    NSMapTable *_scrollViewToSectionMap;	// 32 = 0x20
    NSHashTable *_frontMostElements;	// 40 = 0x28
    NSHashTable *_elementsBelowOrthogonalScrollView;	// 48 = 0x30
    NSIndexSet *_currentOrthogonalSectionIndexes;	// 56 = 0x38
    _UICollectionViewOrthogonalScrollerEmbeddedScrollView *_scrollViewCurrentlyBeingConfigured;	// 64 = 0x40
    NSUUID *_lastUpdateIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000037d4e0
@property(retain, nonatomic) NSUUID *lastUpdateIdentifier; // @synthesize lastUpdateIdentifier=_lastUpdateIdentifier;
@property(nonatomic) _Bool isHandlingScrollViewDelegateCallout; // @synthesize isHandlingScrollViewDelegateCallout=_isHandlingScrollViewDelegateCallout;
@property(retain, nonatomic) _UICollectionViewOrthogonalScrollerEmbeddedScrollView *scrollViewCurrentlyBeingConfigured; // @synthesize scrollViewCurrentlyBeingConfigured=_scrollViewCurrentlyBeingConfigured;
@property(retain, nonatomic) NSIndexSet *currentOrthogonalSectionIndexes; // @synthesize currentOrthogonalSectionIndexes=_currentOrthogonalSectionIndexes;
@property(retain, nonatomic) NSHashTable *elementsBelowOrthogonalScrollView; // @synthesize elementsBelowOrthogonalScrollView=_elementsBelowOrthogonalScrollView;
@property(retain, nonatomic) NSHashTable *frontMostElements; // @synthesize frontMostElements=_frontMostElements;
@property(retain, nonatomic) NSMapTable *scrollViewToSectionMap; // @synthesize scrollViewToSectionMap=_scrollViewToSectionMap;
@property(retain, nonatomic) NSMapTable *scrollViewFromSectionMap; // @synthesize scrollViewFromSectionMap=_scrollViewFromSectionMap;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool shouldPreventFocusScrollPastContentSize; // @synthesize shouldPreventFocusScrollPastContentSize=_shouldPreventFocusScrollPastContentSize;
- (id)_managedScrollViews;	// IMP=0x000000000037d38d
- (void)_placeView:(id)arg1 belowOrthogonalScrollViewForSection:(long long)arg2;	// IMP=0x000000000037d2d8
- (void)_updateElementOrdering;	// IMP=0x000000000037cf6f
- (struct CGSize)_orthogonalScrollViewContentSizeForSection:(long long)arg1 layout:(id)arg2;	// IMP=0x000000000037cda3
- (_Bool)_configureScrollView:(id)arg1 forSection:(long long)arg2 baseContentInsets:(struct UIEdgeInsets)arg3 frameInsets:(struct UIEdgeInsets)arg4 isInitialConfiguration:(_Bool)arg5;	// IMP=0x000000000037c106
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000037bf69
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000037bdfd
- (void)_updateEmbeddedScrollViewContentSizeForSection:(long long)arg1;	// IMP=0x000000000037bcbe
- (struct CGPoint)_contentOffsetForScrollingToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 itemFrame:(struct CGRect)arg3 containingScrollView:(id)arg4;	// IMP=0x000000000037baa1
- (void)_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000000037b6f3
- (id)_addSectionScrollViewForSection:(long long)arg1;	// IMP=0x000000000037b25a
- (id)_addSectionScrollViewForIndexPath:(id)arg1;	// IMP=0x000000000037b1b6
- (id)_sectionScrollViewForSection:(long long)arg1;	// IMP=0x000000000037b12f
- (id)_sectionScrollViewForIndexPath:(id)arg1;	// IMP=0x000000000037b0b1
- (void)cleanupEmbeddedOrthogonalScrollViews;	// IMP=0x000000000037ad45
- (void)updateParentScrollViewForCellPromiseRegion:(id)arg1;	// IMP=0x000000000037ac8d
- (void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)arg1 layoutAttributes:(id)arg2;	// IMP=0x000000000037aa9b
- (void)reconfigureOrthogonalSectionsForUpdate:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000037a1be
- (void)updateContentSizesForOrthogonalSections:(id)arg1;	// IMP=0x000000000037a0ee
- (struct NSDirectionalEdgeInsets)_orthogonalScrollViewFrameInsetsForSection:(long long)arg1 layout:(id)arg2;	// IMP=0x000000000037a02c
- (void)performLayout;	// IMP=0x0000000000379af6
- (_Bool)hasOrthogonalSections;	// IMP=0x0000000000379ad9
- (void)addControlledSubview:(id)arg1 atZIndex:(long long)arg2;	// IMP=0x0000000000379823
- (id)autoScrollAssistantForOrthogonalScrollingSectionAtIndexPath:(id)arg1;	// IMP=0x0000000000379792
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000379730
- (_Bool)isIndexPathInExtantOrthogonalScroller:(id)arg1;	// IMP=0x00000000003796c2
- (_Bool)isIndexPathInOrthogonalScrollingSection:(id)arg1;	// IMP=0x00000000003795ca
- (_Bool)isElementInOrthogonalScrollingSection:(id)arg1;	// IMP=0x0000000000379405
- (id)initWithCollectionView:(id)arg1;	// IMP=0x000000000037926f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
