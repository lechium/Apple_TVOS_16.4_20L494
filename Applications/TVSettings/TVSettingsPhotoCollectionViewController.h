//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, TVImageScaleDecorator, TVPhotoCollection, UICollectionView;
@protocol TVSettingsPhotoCollectionViewControllerSelectionDelegate;

@interface TVSettingsPhotoCollectionViewController : UIViewController
{
    TVPhotoCollection *_collection;	// 8 = 0x8
    TVImageScaleDecorator *_scaleDecorator;	// 16 = 0x10
    id <TVSettingsPhotoCollectionViewControllerSelectionDelegate> _delegate;	// 24 = 0x18
    UICollectionView *_gridView;	// 32 = 0x20
    NSArray *_photoAssets;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000007c18f
@property(copy, nonatomic) NSArray *photoAssets; // @synthesize photoAssets=_photoAssets;
@property(retain, nonatomic) UICollectionView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak id <TVSettingsPhotoCollectionViewControllerSelectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVPhotoCollection *collection; // @synthesize collection=_collection;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x001000000007c080
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x001000000007bf05
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x001000000007bd70
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x001000000007bd53
- (id)preferredFocusEnvironments;	// IMP=0x001000000007ba31
- (void)loadView;	// IMP=0x001000000007b7be
- (void)dealloc;	// IMP=0x001000000007b749
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000007b6b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
