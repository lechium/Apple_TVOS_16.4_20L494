//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI20ProgramMediaTagsCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *itemInfo;	// 1937330991 = 0x7379532f
    MISSING_TYPE *tagsTextLabel;	// 0 = 0x0
    MISSING_TYPE *accessibilityMediaTags;	// 1919052108 = 0x7262694c
}

- (void).cxx_destruct;	// IMP=0x00000000003f47f0
@property(nonatomic, copy) NSArray *accessibilityMediaTags;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000003f4690
- (void)prepareForReuse;	// IMP=0x00000000003f45b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f4590
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003f4320
@property(nonatomic, readonly) UILabel *tagsTextLabel; // @synthesize tagsTextLabel;

@end

