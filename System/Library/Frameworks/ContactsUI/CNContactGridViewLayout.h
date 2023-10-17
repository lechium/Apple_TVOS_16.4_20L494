//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface CNContactGridViewLayout : UICollectionViewFlowLayout
{
    _Bool _needsUpdateLayout;	// 8 = 0x8
    long long _numberOfColumns;	// 16 = 0x10
    NSIndexPath *_selectedIndexPath;	// 24 = 0x18
    double _offsetBefore;	// 32 = 0x20
    double _offsetAfter;	// 40 = 0x28
    double _selectedItemWidthOffset;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009f987
@property(nonatomic) double selectedItemWidthOffset; // @synthesize selectedItemWidthOffset=_selectedItemWidthOffset;
@property(nonatomic) double offsetAfter; // @synthesize offsetAfter=_offsetAfter;
@property(nonatomic) double offsetBefore; // @synthesize offsetBefore=_offsetBefore;
@property(nonatomic) _Bool needsUpdateLayout; // @synthesize needsUpdateLayout=_needsUpdateLayout;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x000000000009f77b
- (void)_updateLayoutMetrics;	// IMP=0x000000000009edb2
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000009eb0e
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000009e7e4
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x000000000009e7b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009e6e0

@end

