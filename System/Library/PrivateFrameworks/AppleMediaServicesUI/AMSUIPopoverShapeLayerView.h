//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AMSUIPopoverShapeLayerMaskView;

__attribute__((visibility("hidden")))
@interface AMSUIPopoverShapeLayerView : UIView
{
    _Bool _shapeLayerPathNeedsUpdate;	// 8 = 0x8
    _Bool _popoverBackgroundColorIsOpaque;	// 9 = 0x9
    _Bool _arrowVisible;	// 10 = 0xa
    _Bool _arrowOffsetWasFlipped;	// 11 = 0xb
    _Bool _arrowDirectionWasFlipped;	// 12 = 0xc
    unsigned long long _arrowDirection;	// 16 = 0x10
    double _arrowOffset;	// 24 = 0x18
    UIView *_viewToMaskWhenContentExtendsOverArrow;	// 32 = 0x20
    AMSUIPopoverShapeLayerMaskView *_shapeLayerMaskView;	// 40 = 0x28
}

+ (double)cornerRadius;	// IMP=0x006000000004c470
+ (double)arrowBase;	// IMP=0x006000000004c462
- (void).cxx_destruct;	// IMP=0x000000000004e318
@property(retain) AMSUIPopoverShapeLayerMaskView *shapeLayerMaskView; // @synthesize shapeLayerMaskView=_shapeLayerMaskView;
@property _Bool arrowDirectionWasFlipped; // @synthesize arrowDirectionWasFlipped=_arrowDirectionWasFlipped;
@property _Bool arrowOffsetWasFlipped; // @synthesize arrowOffsetWasFlipped=_arrowOffsetWasFlipped;
@property _Bool arrowVisible; // @synthesize arrowVisible=_arrowVisible;
@property _Bool popoverBackgroundColorIsOpaque; // @synthesize popoverBackgroundColorIsOpaque=_popoverBackgroundColorIsOpaque;
@property _Bool shapeLayerPathNeedsUpdate; // @synthesize shapeLayerPathNeedsUpdate=_shapeLayerPathNeedsUpdate;
@property(nonatomic) __weak UIView *viewToMaskWhenContentExtendsOverArrow; // @synthesize viewToMaskWhenContentExtendsOverArrow=_viewToMaskWhenContentExtendsOverArrow;
- (void)didMoveToWindow;	// IMP=0x000000000004e161
- (void)_loadNecessaryViews;	// IMP=0x000000000004e0b5
- (void)_updateShapeLayerPath;	// IMP=0x000000000004d882
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect)arg1;	// IMP=0x000000000004d780
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect)arg1;	// IMP=0x000000000004d682
- (void)_addLeftRightArrowCurveForPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;	// IMP=0x000000000004d450
- (void)_addTopBottomArrowCurveForPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;	// IMP=0x000000000004d1be
- (void)_addLeadingPinnedCurveToPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;	// IMP=0x000000000004d0b1
- (void)_addLeadingPinnedCurveToPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3;	// IMP=0x000000000004cf9e
- (void)_addTopBottomRoundedRectWithGapForPath:(id)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000004cd57
- (void)_addLeftRightRoundedRectWithGapForPath:(id)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000004cb01
- (void)_addRoundedRectExcludingTopLeftCornerForPath:(id)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000004c968
@property double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
- (void)setNeedsLayout;	// IMP=0x000000000004c8a1
@property unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void)_updatePathAnimationState;	// IMP=0x000000000004c7f3
- (void)layoutSubviews;	// IMP=0x000000000004c6ff
- (_Bool)wouldPinForOffset:(double)arg1;	// IMP=0x000000000004c6b5
- (void)_updateShapeLayerPathIfNeeded;	// IMP=0x000000000004c686
- (id)_shadowPath;	// IMP=0x000000000004c67e
- (struct CGSize)_shadowOffset;	// IMP=0x000000000004c668
- (double)_shadowRadius;	// IMP=0x000000000004c65f
- (double)_shadowOpacity;	// IMP=0x000000000004c656
- (struct UIEdgeInsets)_shadowInsets;	// IMP=0x000000000004c638
- (double)maxNonPinnedOffset;	// IMP=0x000000000004c5a3
- (double)minNonPinnedOffset;	// IMP=0x000000000004c506
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004c47e
@property(readonly) double arrowHeight;

@end
