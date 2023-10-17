//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class IKViewElement, NSArray, NSIndexPath, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _TVShowcaseViewController : UIViewController
{
    _Bool _updateAutohighlight;	// 8 = 0x8
    NSIndexPath *_pendingPreviewedIndexPath;	// 16 = 0x10
    NSIndexPath *_lastPreviewedIndexPath;	// 24 = 0x18
    double _lastPreviewDelay;	// 32 = 0x20
    NSIndexPath *_indexPathForFocusedItem;	// 40 = 0x28
    CDUnknownBlockType _transitionHandler;	// 48 = 0x30
    NSArray *_lockupElements;	// 56 = 0x38
    IKViewElement *_bannerElement;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000decd5
@property(retain, nonatomic) IKViewElement *bannerElement; // @synthesize bannerElement=_bannerElement;
@property(copy, nonatomic) NSArray *lockupElements; // @synthesize lockupElements=_lockupElements;
@property(copy, nonatomic) CDUnknownBlockType transitionHandler; // @synthesize transitionHandler=_transitionHandler;
@property(copy, nonatomic) NSIndexPath *indexPathForFocusedItem; // @synthesize indexPathForFocusedItem=_indexPathForFocusedItem;
- (void)_dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2;	// IMP=0x00000000000de8df
- (void)_updateLockupInforViewForIndexPath:(id)arg1;	// IMP=0x00000000000de785
- (void)_delayedUpdatePreview;	// IMP=0x00000000000de4cc
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000de4c4
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000de4a8
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000de48c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000de470
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000de24f
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000000de14d
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x00000000000de138
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000dddb2
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000ddd6e
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000000ddd63
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000000000ddd05
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000ddc31
- (void)loadView;	// IMP=0x00000000000ddad2
- (void)updateWithLockupElements:(id)arg1 bannerElement:(id)arg2 focusedIndexPath:(id)arg3 update:(_Bool)arg4;	// IMP=0x00000000000dd7f3
@property(retain, nonatomic) UIImage *bgImage;
- (void)dealloc;	// IMP=0x00000000000dd68b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
