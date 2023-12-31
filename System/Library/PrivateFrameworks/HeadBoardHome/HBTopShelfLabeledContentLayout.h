//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HBTopShelfLabeledContentLayout : UICollectionViewFlowLayout
{
    struct {
        unsigned int delegateSizeOfSectionHeader:1;
    } _flags;	// 8 = 0x8
    _Bool _animatingFocusUpdate;	// 12 = 0xc
    NSArray *_headerFrames;	// 16 = 0x10
    unsigned long long _focusAnimationOptions;	// 24 = 0x18
    double _focusingAnimationDuration;	// 32 = 0x20
    double _unfocusingAnimationDuration;	// 40 = 0x28
}

+ (Class)invalidationContextClass;	// IMP=0x00600000000909e0
- (void).cxx_destruct;	// IMP=0x000000000009150f
@property(nonatomic) double unfocusingAnimationDuration; // @synthesize unfocusingAnimationDuration=_unfocusingAnimationDuration;
@property(nonatomic) double focusingAnimationDuration; // @synthesize focusingAnimationDuration=_focusingAnimationDuration;
@property(nonatomic) unsigned long long focusAnimationOptions; // @synthesize focusAnimationOptions=_focusAnimationOptions;
@property(nonatomic, getter=isAnimatingFocusUpdate) _Bool animatingFocusUpdate; // @synthesize animatingFocusUpdate=_animatingFocusUpdate;
@property(copy, nonatomic) NSArray *headerFrames; // @synthesize headerFrames=_headerFrames;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x000000000009145b
- (long long)developmentLayoutDirection;	// IMP=0x0000000000091453
- (double)_widthOfSection:(long long)arg1;	// IMP=0x0000000000091415
- (struct CGRect)_rectOfSection:(long long)arg1;	// IMP=0x0000000000091240
- (id)_layoutAttributesForSectionHeaderAtIndexPath:(id)arg1;	// IMP=0x00000000000910a4
- (void)_updateIsAboveFocusedItemStateForLayoutAttribute:(id)arg1;	// IMP=0x0000000000090a73
- (void)_updateLabeledContentDelegateFlags;	// IMP=0x00000000000909f1
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x0000000000090891
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000090889
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000907c7
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000090399
- (void)prepareLayout;	// IMP=0x000000000008fdd5

@end

