//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIKBScreenTraits, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBDimmingView : UIView
{
    UIKBTree *_keyplane;	// 144 = 0x90
    UIKBScreenTraits *_screenTraits;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000952637
@property(retain, nonatomic) UIKBScreenTraits *screenTraits; // @synthesize screenTraits=_screenTraits;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000009523e0
- (void)refreshStyleForKeyplane:(id)arg1;	// IMP=0x00000000009523cc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000952344

@end

