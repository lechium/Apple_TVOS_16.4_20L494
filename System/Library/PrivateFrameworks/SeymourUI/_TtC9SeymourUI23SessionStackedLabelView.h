//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI23SessionStackedLabelView : UIView
{
    MISSING_TYPE *primaryLabel;	// 8 = 0x8
    MISSING_TYPE *secondaryLabel;	// 16 = 0x10
    MISSING_TYPE *stackView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003eab90
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003eaaa0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003eaa80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003ea650
@property(nonatomic, readonly) UILabel *secondaryLabel; // @synthesize secondaryLabel;
@property(nonatomic, readonly) UILabel *primaryLabel; // @synthesize primaryLabel;

@end

