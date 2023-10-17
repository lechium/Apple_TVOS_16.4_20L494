//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, OBPrivacyCombinedViewConfiguration, OBSupplementaryTextView, UICollectionView, UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface OBPrivacyCombinedView : UIView
{
    UIStackView *_dialogueColumnStackView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    UICollectionView *_buttonsCollectionView;	// 32 = 0x20
    double _maxButtonCellWidth;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    NSMutableArray *_volatileConstraints;	// 56 = 0x38
    OBSupplementaryTextView *_sizingSupplementaryView;	// 64 = 0x40
    OBPrivacyCombinedViewConfiguration *_configuration;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000550b
@property(copy, nonatomic) OBPrivacyCombinedViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_updateCompositingEffects;	// IMP=0x00000000000053f6
- (double)_buttonsCollectionViewWidth;	// IMP=0x000000000000530b
- (double)_descriptionLabelToButtonsCollectionViewSpacing;	// IMP=0x00000000000052dd
- (void)_configureFooterView:(id)arg1 atSectionIndex:(unsigned long long)arg2;	// IMP=0x00000000000050d0
- (void)_configureHeaderView:(id)arg1 atSectionIndex:(unsigned long long)arg2;	// IMP=0x0000000000004eb3
- (void)_configureListCell:(id)arg1 withTitle:(id)arg2;	// IMP=0x0000000000004d6c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000004cad
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x0000000000004b65
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000004a1d
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000049fb
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000048b4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000004746
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000004650
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000045b3
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000004564
- (void)updateConstraints;	// IMP=0x000000000000436e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000003020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

