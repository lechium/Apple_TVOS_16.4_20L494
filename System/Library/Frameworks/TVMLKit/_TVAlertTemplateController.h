//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVBgImageLoadingViewController.h"

@class IKImageElement, IKViewElement, NSArray, NSIndexPath, NSString, _TVCollectionView;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateController : _TVBgImageLoadingViewController
{
    IKViewElement *_templateElement;	// 8 = 0x8
    _TVCollectionView *_collectionView;	// 16 = 0x10
    NSArray *_collectionViewElements;	// 24 = 0x18
    IKImageElement *_bgImageElement;	// 32 = 0x20
    IKImageElement *_bgHeroImageElement;	// 40 = 0x28
    NSIndexPath *_lastFocusedIndexPath;	// 48 = 0x30
    _Bool _updateAutoHighlight;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001786c0
- (void)_scrollToPreferredFocusView;	// IMP=0x000000000017865b
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x00000000001785e9
- (long long)_blurEffectStyle;	// IMP=0x00000000001785ae
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x0000000000178587
- (id)_backgroundImageProxy;	// IMP=0x0000000000178469
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x0000000000178405
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000178306
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000178207
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000001780d1
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x00000000001780bc
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000001780b4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000177e2c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000177e0f
- (void)loadView;	// IMP=0x0000000000177b95
- (id)preferredFocusEnvironments;	// IMP=0x0000000000177b1c
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000177ac4
- (void)updateWithViewElement:(id)arg1;	// IMP=0x0000000000176fc0
- (void)updateWithTemplateElement:(id)arg1;	// IMP=0x0000000000176fae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

