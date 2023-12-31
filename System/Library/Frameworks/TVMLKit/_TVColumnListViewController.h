//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class IKViewElement, NSArray, NSString, _TVColumnListView;

__attribute__((visibility("hidden")))
@interface _TVColumnListViewController : UIViewController
{
    IKViewElement *_columnListElement;	// 8 = 0x8
    _TVColumnListView *_collectionView;	// 16 = 0x10
    struct CGSize _cachedSize;	// 24 = 0x18
    NSArray *_cachedDataSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007f443
- (void)_dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2;	// IMP=0x000000000007f2ee
- (id)_dataSourceWithSections:(id)arg1 numColumns:(unsigned long long)arg2 lineSpace:(double)arg3;	// IMP=0x000000000007e88f
- (void)_updateDataSource;	// IMP=0x000000000007e778
- (void)_updateViewLayout;	// IMP=0x000000000007e643
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e10f
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000007e093
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000007e076
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e06e
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e052
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e036
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e01a
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000007df81
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000007df1b
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000007ddb8
- (struct CGSize)_collectionView:(id)arg1 layout:(id)arg2 sizeThatFits:(struct CGSize)arg3;	// IMP=0x000000000007d8dd
- (id)preferredFocusEnvironments;	// IMP=0x000000000007d864
- (void)viewDidLayoutSubviews;	// IMP=0x000000000007d79f
- (void)viewDidLoad;	// IMP=0x000000000007d5a3
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000000007d4d0
- (void)dealloc;	// IMP=0x000000000007d469

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

