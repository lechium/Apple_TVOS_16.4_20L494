//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI25SummaryContentSummaryView : UIView
{
    MISSING_TYPE *thumbnailDimensions;	// 8 = 0x8
    MISSING_TYPE *thumbnailView;	// 24 = 0x18
    MISSING_TYPE *bookmarkButton;	// 32 = 0x20
    MISSING_TYPE *labels;	// 40 = 0x28
    MISSING_TYPE *layoutGuide;	// 48 = 0x30
    MISSING_TYPE *layoutGuideConstraints;	// 56 = 0x38
    MISSING_TYPE *layoutGuideSecondaryConstraints;	// 64 = 0x40
    MISSING_TYPE *labelsBottomConstraint;	// 72 = 0x48
    MISSING_TYPE *bookmarkButtonBottomConstraint;	// 80 = 0x50
    MISSING_TYPE *thumbnailWidthConstraint;	// 88 = 0x58
    MISSING_TYPE *thumbnailHeightConstraint;	// 96 = 0x60
    MISSING_TYPE *onBookmarkTapped;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000015b8e0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000015b6e0
- (void)layoutSubviews;	// IMP=0x000000000015b410
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015b3f0
- (void)bookmarkButtonTapped;	// IMP=0x000000000015b010
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)updateConstraints;	// IMP=0x000000000015ad40
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000159e10

@end

