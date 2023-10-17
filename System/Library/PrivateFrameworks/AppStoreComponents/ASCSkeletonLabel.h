//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class ASCContentSkeleton, UIColor;

__attribute__((visibility("hidden")))
@interface ASCSkeletonLabel : UILabel
{
    _Bool _wantsAncestorFocusMarqueeAfterClearingSkeleton;	// 8 = 0x8
    UIColor *_skeletonColor;	// 16 = 0x10
    ASCContentSkeleton *_skeleton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000043a2f
@property(nonatomic) _Bool wantsAncestorFocusMarqueeAfterClearingSkeleton; // @synthesize wantsAncestorFocusMarqueeAfterClearingSkeleton=_wantsAncestorFocusMarqueeAfterClearingSkeleton;
@property(copy, nonatomic) ASCContentSkeleton *skeleton; // @synthesize skeleton=_skeleton;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000043957
- (void)drawSkeletonInRect:(struct CGRect)arg1;	// IMP=0x0000000000043837
- (struct CGRect)skeletonRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000004360d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000043554
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000004349f
- (void)setEnablesMarqueeWhenAncestorFocused:(_Bool)arg1;	// IMP=0x0000000000043423
@property(copy, nonatomic) UIColor *skeletonColor; // @synthesize skeletonColor=_skeletonColor;
@property(readonly, nonatomic) long long effectiveSkeletonAlignment;
- (double)_baselineOffsetFromBottom;	// IMP=0x0000000000043107
- (double)_firstBaselineOffsetFromTop;	// IMP=0x000000000004305f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004304a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004301f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000042fb8

@end

