//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI20WorkoutMediaTagsCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *itemInfo;	// 0 = 0x0
    MISSING_TYPE *layout;	// 0 = 0x0
    MISSING_TYPE *downloadButton;	// 0 = 0x0
    MISSING_TYPE *trainerButton;	// 0 = 0x0
    MISSING_TYPE *tagsLabel;	// 0 = 0x0
    MISSING_TYPE *tagsLabelTopLayoutConstraint;	// 0 = 0x0
    MISSING_TYPE *accessibilityMediaTags;	// 1868783455 = 0x6f635f5f
}

- (void).cxx_destruct;	// IMP=0x0000000000131520
@property(nonatomic, copy) NSArray *accessibilityMediaTags;
- (void)handleDownloadButtonTapped:(id)arg1;	// IMP=0x0000000000131350
- (void)handleTrainerButtonTapped:(id)arg1;	// IMP=0x0000000000131330
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0000000000130ea0
- (void)prepareForReuse;	// IMP=0x0000000000130dc0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000130da0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000130ac0
@property(nonatomic, readonly) UILabel *tagsLabel; // @synthesize tagsLabel;

@end
