//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (UIAccessibilityElementTraversal)
+ (id)_accessibilityElementsAndContainersDescendingFromViews:(id)arg1 options:(id)arg2 sorted:(_Bool)arg3;	// IMP=0x005000000001a390
+ (id)_subviewsReplacedByModalViewSubviewsIfNecessary:(id)arg1;	// IMP=0x00500000000188f0
+ (id)_accessibilityTitleForSystemTag:(long long)arg1;	// IMP=0x005000000009f730
- (_Bool)_accessibilityShouldBeProcessed:(id)arg1;	// IMP=0x001000000001ac10
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;	// IMP=0x001000000001aa70
- (void)_accessibilitySetIsSortingInUpperFrame:(_Bool)arg1;	// IMP=0x001000000001aa30
- (_Bool)_accessibilityIsSortingInUpperFrame;	// IMP=0x001000000001aa00
- (void)_addAccessibilityElementsAndOrderedContainersWithOptions:(id)arg1 toCollection:(id)arg2;	// IMP=0x0010000000019620
- (id)_accessibilitySubviewsForGettingElementsWithOptions:(id)arg1;	// IMP=0x00100000000190c0
- (_Bool)_accessibilityShouldUseSupplementaryViews;	// IMP=0x0010000000019060
- (_Bool)_accessibilityShouldBeAddedToViewChildrenWithOptions:(id)arg1;	// IMP=0x0010000000018ee0
- (struct CGRect)accessibilityConvertRectToSceneReferenceCoordinates:(struct CGRect)arg1;	// IMP=0x001000000009e460
- (struct CGPoint)accessibilityConvertPointFromSceneReferenceCoordinates:(struct CGPoint)arg1;	// IMP=0x001000000009e370
- (id)_accessibilityComputedLabelForNavigationBarWithAssociatedBarButtonItem:(id)arg1;	// IMP=0x001000000009f1b0
- (void)_accessibilitySetAllowsSiblingsWhenOvergrown:(_Bool)arg1;	// IMP=0x001000000009f170
- (_Bool)_accessibilityAllowsSiblingsWhenOvergrown;	// IMP=0x001000000009f140
- (void)_accessibilitySetOverridesInvalidFrames:(_Bool)arg1;	// IMP=0x001000000009f100
- (_Bool)_accessibilityOverridesInvalidFrames;	// IMP=0x001000000009f0d0
- (id)_accessibilitySubviews;	// IMP=0x001000000009f0a0
- (id)_accessibleNonSupplementarySubviews;	// IMP=0x001000000009efc0
- (id)_accessibleSubviews;	// IMP=0x001000000009ef60
- (id)_accessibleSubviews:(int)arg1;	// IMP=0x001000000009eeb0
- (_Bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(_Bool)arg1 stoppingBeforeContainer:(id)arg2;	// IMP=0x001000000009e800
- (_Bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(_Bool)arg1;	// IMP=0x001000000009e780
- (void)_accessibilitySetViewIsVisible:(_Bool)arg1;	// IMP=0x001000000009e710
- (_Bool)_accessibilityViewIsVisible;	// IMP=0x001000000009e6e0
- (_Bool)_accessibilityViewIsActive;	// IMP=0x001000000009e670
- (void)_accessibilitySetFrameExpansion:(struct CGSize)arg1;	// IMP=0x001000000009e5f0
- (struct CGSize)_accessibilityFrameExpansion;	// IMP=0x001000000009e570
- (void)_accessibilityClearChildren;	// IMP=0x001000000009e560
@end
