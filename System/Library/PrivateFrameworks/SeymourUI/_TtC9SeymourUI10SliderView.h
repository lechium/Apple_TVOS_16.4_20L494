//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI10SliderView : UIView
{
    MISSING_TYPE *trackLayoutGuide;	// 8 = 0x8
    MISSING_TYPE *value;	// 16 = 0x10
    MISSING_TYPE *onValueChanged;	// 24 = 0x18
    MISSING_TYPE *isEnabled;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_panGestureRecognizer;	// 48 = 0x30
    MISSING_TYPE *elapsedTrack;	// 56 = 0x38
    MISSING_TYPE *feedbackGenerator;	// 64 = 0x40
    MISSING_TYPE *remainingTrack;	// 72 = 0x48
    MISSING_TYPE *stackView;	// 80 = 0x50
    MISSING_TYPE *styleProvider;	// 88 = 0x58
    MISSING_TYPE *valueRange;	// 128 = 0x80
    MISSING_TYPE *currentState;	// 144 = 0x90
    MISSING_TYPE *currentTrackWidth;	// 152 = 0x98
    MISSING_TYPE *elapsedTrackWidthConstraint;	// 168 = 0xa8
    MISSING_TYPE *oldBounds;	// 176 = 0xb0
    MISSING_TYPE *trackHeightConstraint;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000624e80
- (void)panGestureRecognized:(id)arg1;	// IMP=0x0000000000624cf0
- (void)layoutSubviews;	// IMP=0x0000000000624630
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000624450
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006240c0
@property(nonatomic) long long semanticContentAttribute;

@end

