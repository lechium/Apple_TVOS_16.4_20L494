//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSIndexPath, NSString, UICollectionView, UITapGestureRecognizer;
@protocol HBTopShelfLabeledContentViewDataSource, HBTopShelfLabeledContentViewDelegate;

__attribute__((visibility("hidden")))
@interface HBTopShelfLabeledContentView : UIView
{
    UITapGestureRecognizer *_playButtonRecognizer;	// 8 = 0x8
    struct {
        unsigned int delegateDidFocusItemAtIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateDidPlayItemAtIndexPath:1;
        unsigned int dataSourceTitleForSection:1;
        unsigned int dataSourceConfigureLabelForSection:1;
        unsigned int dataSourceNumberOfSections:1;
        unsigned int dataSourceNumberOfItemsInSection:1;
        unsigned int dataSourcePreferredSizeOfItemAtIndexPath:1;
    } _flags;	// 16 = 0x10
    _Bool _shouldUpdateNormalizedHeight;	// 20 = 0x14
    id <HBTopShelfLabeledContentViewDelegate> _delegate;	// 24 = 0x18
    id <HBTopShelfLabeledContentViewDataSource> _dataSource;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    NSIndexPath *_preferredIndexPath;	// 48 = 0x30
    double _normalizedHeight;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000009b00c
@property(nonatomic) _Bool shouldUpdateNormalizedHeight; // @synthesize shouldUpdateNormalizedHeight=_shouldUpdateNormalizedHeight;
@property(nonatomic) double normalizedHeight; // @synthesize normalizedHeight=_normalizedHeight;
@property(retain, nonatomic) NSIndexPath *preferredIndexPath; // @synthesize preferredIndexPath=_preferredIndexPath;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <HBTopShelfLabeledContentViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <HBTopShelfLabeledContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_normalizedItemHeight;	// IMP=0x000000000009a84e
- (long long)_numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000009a7e5
- (long long)_numberOfSections;	// IMP=0x000000000009a781
- (void)_playButtonAction:(id)arg1;	// IMP=0x000000000009a632
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000009a62a
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000009a5f1
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000009a507
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000009a4ff
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;	// IMP=0x000000000009a47e
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000009a3fd
- (double)collectionView:(id)arg1 layout:(id)arg2 widthOfSectionHeaderAtIndexPath:(id)arg3;	// IMP=0x000000000009a32d
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000009a278
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000009a1b5
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000009a0cc
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000009a0b7
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000009a0a5
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000099f65
- (void)preheatCellsInRect:(struct CGRect)arg1;	// IMP=0x0000000000099f0f
- (void)reloadData;	// IMP=0x0000000000099ebd
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x0000000000099ea0
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;	// IMP=0x0000000000099e83
- (struct CGSize)normalizedSizeWithPreferredSize:(struct CGSize)arg1;	// IMP=0x0000000000099c5a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000099a2a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000099588

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

