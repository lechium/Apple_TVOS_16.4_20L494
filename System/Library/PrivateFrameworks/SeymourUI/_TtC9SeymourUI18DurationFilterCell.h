//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI18DurationFilterCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *itemInfo;	// 1127183211 = 0x432f736b
    MISSING_TYPE *tickView;	// 1752195442 = 0x68706172
    MISSING_TYPE *durationLabel;	// 1835102822 = 0x6d617266
    MISSING_TYPE *minLabel;	// 1866674027 = 0x6f432f6b
    MISSING_TYPE *layout;	// 1768452193 = 0x69687061
    MISSING_TYPE *labelLayoutGuide;	// 12 = 0xc
    MISSING_TYPE *unitsVerticalConstraint;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000036b7e0
- (void)textSizeChanged:(id)arg1;	// IMP=0x000000000036b700
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000036b540
- (void)prepareForReuse;	// IMP=0x000000000036b460
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000036b440
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000036b1e0
@property(nonatomic, readonly) UILabel *durationLabel; // @synthesize durationLabel;

@end

