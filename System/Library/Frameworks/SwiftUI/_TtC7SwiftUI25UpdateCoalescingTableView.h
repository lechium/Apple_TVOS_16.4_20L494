//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI25UpdateCoalescingTableView : UITableView
{
    MISSING_TYPE *isSidebarStyle;	// 8 = 0x8
    MISSING_TYPE *cachedIdealSize;	// 16 = 0x10
    MISSING_TYPE *rowSpacing;	// 40 = 0x28
    MISSING_TYPE *safeAreaTransitionState;	// 56 = 0x38
    MISSING_TYPE *longPressDelegate;	// 72 = 0x48
    MISSING_TYPE *longPressGestureRecognizer;	// 88 = 0x58
    MISSING_TYPE *visibleCellsUpdate;	// 96 = 0x60
    MISSING_TYPE *ignoreGraphUpdates;	// 112 = 0x70
    MISSING_TYPE *pendingGraphUpdate;	// 116 = 0x74
    MISSING_TYPE *pendingScrollTarget;	// 0 = 0x0
    MISSING_TYPE *previousHorizontalMargin;	// 0 = 0x0
    MISSING_TYPE *_lastUpdateSeed;	// 0 = 0x0
    MISSING_TYPE *bridgedState;	// 1651471470 = 0x626f746e
    MISSING_TYPE *shouldDetermineInsetStyle;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *needsUpdateAlignmentInsets;	// 0 = 0x0
    MISSING_TYPE *lastConfigurationHash;	// 0 = 0x0
}

+ (_Bool)_isInternalTableView;	// IMP=0x0060000000ad24f0
- (void).cxx_destruct;	// IMP=0x0000000000ad3d57
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ad3bcb
- (void)layoutSubviews;	// IMP=0x0000000000ad38b1
- (double)_rowSpacing;	// IMP=0x0000000000ad3025
- (double)_alignedContentMarginGivenMargin:(double)arg1;	// IMP=0x0000000000ad2f9f
- (void)safeAreaInsetsDidChange;	// IMP=0x0000000000ad2f41
- (void)layoutMarginsDidChange;	// IMP=0x0000000000ad2efe
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000ad2766
@property(nonatomic) struct CGRect bounds;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ad24d2
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x0000000000ad22c1
- (void)_setSectionContentInsetFollowsLayoutMargins:(_Bool)arg1;	// IMP=0x0000000000ad1f74
- (_Bool)_sectionContentInsetFollowsLayoutMargins;	// IMP=0x0000000000ad1f12

// Remaining properties
@property(nonatomic) _Bool sectionContentInsetFollowsLayoutMargins;

@end
