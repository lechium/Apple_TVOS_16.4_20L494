//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtCC7SwiftUI17HostingScrollView22PlatformGroupContainer : UIView
{
    MISSING_TYPE *scrollView;	// 8 = 0x8
    MISSING_TYPE *_focusableBounds;	// 16 = 0x10
    MISSING_TYPE *_focusableFillerBounds;	// 24 = 0x18
    MISSING_TYPE *_focusableBorder;	// 32 = 0x20
    MISSING_TYPE *fillerItems;	// 40 = 0x28
    MISSING_TYPE *requestedFocusItem;	// 48 = 0x30
}

+ (_Bool)_supportsInvalidatingFocusCache;	// IMP=0x0010000000760852
- (void).cxx_destruct;	// IMP=0x0000000000acdea9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000acde4f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000acdd7d
- (id)focusItemsInRect:(struct CGRect)arg1;	// IMP=0x00000000007607ab
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0000000000760052
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000075fcf5

@end

