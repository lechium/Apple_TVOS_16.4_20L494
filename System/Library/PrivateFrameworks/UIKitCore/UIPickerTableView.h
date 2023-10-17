//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableView.h"

@class NSMutableArray, NSMutableIndexSet, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIPickerTableView : UITableView
{
    struct CGRect _selectionBarRect;	// 152 = 0x98
    long long _selectionBarRow;	// 184 = 0xb8
    NSMutableIndexSet *_checkedRows;	// 192 = 0xc0
    double _lastClickedOffset;	// 200 = 0xc8
    long long _lastSelectedRow;	// 208 = 0xd0
    UIColor *_textColor;	// 216 = 0xd8
    struct CGRect _visibleRect;	// 224 = 0xe0
    NSMutableArray *_referencingCells;	// 256 = 0x100
    struct {
        unsigned int allowsMultipleSelection:1;
        unsigned int scrollingDirection:2;
        unsigned int didSelectDisabled:1;
        unsigned int skipRowChangeNotifications:1;
        unsigned int scrollingForSelection:1;
        unsigned int pickerViewImplementsSelectionBarChanged:2;
        unsigned int cancellingAnimation:1;
        unsigned int updatingContentInset:1;
    } _pickerTableFlags;	// 264 = 0x108
    _Bool _playsFeedback;	// 268 = 0x10c
    _Bool _generatorActivated;	// 269 = 0x10d
}

+ (_Bool)_isInternalTableView;	// IMP=0x0010000000c20a60
- (void).cxx_destruct;	// IMP=0x0000000000c23598
@property(nonatomic) _Bool generatorActivated; // @synthesize generatorActivated=_generatorActivated;
@property(getter=_playsFeedback, setter=_setPlaysFeedback:) _Bool playsFeedback; // @synthesize playsFeedback=_playsFeedback;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(nonatomic) struct CGRect selectionBarRect; // @synthesize selectionBarRect=_selectionBarRect;
- (_Bool)_shouldWrapCells;	// IMP=0x0000000000c2350c
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000c233fb
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000c23254
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000c231dd
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;	// IMP=0x0000000000c231d5
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000000c231c3
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000c23195
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000c230f4
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;	// IMP=0x0000000000c230e2
- (void)_deactivateFeedbackGeneratorIfNeeded;	// IMP=0x0000000000c230dc
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000c2304f
- (void)_scrollingFinished;	// IMP=0x0000000000c22f44
- (struct CGPoint)contentOffsetForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000c22eb6
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000c22c03
- (_Bool)_beginTrackingWithEvent:(id)arg1;	// IMP=0x0000000000c22bbb
- (_Bool)isRowChecked:(long long)arg1;	// IMP=0x0000000000c22b9e
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000c22acb
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000c229f8
@property(nonatomic, setter=_setSelectionBarRow:) long long selectionBarRow; // @synthesize selectionBarRow=_selectionBarRow;
- (void)_playClickIfNecessary;	// IMP=0x0000000000c228d2
- (id)_containerView;	// IMP=0x0000000000c22826
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000c227ea
- (id)_anyDateLabel;	// IMP=0x0000000000c22737
- (void)layoutSubviews;	// IMP=0x0000000000c22365
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000000c2234e
- (void)_setContentOffset:(struct CGPoint)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000c220d9
- (void)_notifyContentOffsetChange;	// IMP=0x0000000000c2208d
- (struct CATransform3D)_transformForCellAtY:(double)arg1;	// IMP=0x0000000000c21c0f
- (double)_rotationForCellCenterY:(double)arg1;	// IMP=0x0000000000c21b39
- (double)_yForY:(double)arg1;	// IMP=0x0000000000c21ac9
- (double)_distanceToCenterForY:(double)arg1;	// IMP=0x0000000000c21a8c
- (double)_zForUnitY:(double)arg1;	// IMP=0x0000000000c219d2
- (double)_viewYForUnitY:(double)arg1;	// IMP=0x0000000000c21985
- (double)_yRangingFromZeroTo:(double)arg1 forUnitY:(double)arg2;	// IMP=0x0000000000c2196b
- (double)_unitYForViewY:(double)arg1;	// IMP=0x0000000000c2192a
- (double)_zCoordinateForYCoordinate:(double)arg1;	// IMP=0x0000000000c218d8
- (long long)_contentInsetAdjustmentBehavior;	// IMP=0x0000000000c218cd
- (void)_updateContentInsets;	// IMP=0x0000000000c2172a
- (void)_rectChangedWithNewSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;	// IMP=0x0000000000c216e9
- (_Bool)didSelectDisabled:(_Bool)arg1;	// IMP=0x0000000000c216c2
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3 updateChecked:(_Bool)arg4;	// IMP=0x0000000000c2110b
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x0000000000c210f3
- (id)_checkedRows;	// IMP=0x0000000000c210b2
- (_Bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000c20f9b
- (struct CGRect)_selectionBarRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000c20f3b
- (void)dealloc;	// IMP=0x0000000000c20db0
- (id)_pickerView;	// IMP=0x0000000000c20d1a
- (struct CGRect)_visibleBounds;	// IMP=0x0000000000c20c9a
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 visibleRect:(struct CGRect)arg3;	// IMP=0x0000000000c20a68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
