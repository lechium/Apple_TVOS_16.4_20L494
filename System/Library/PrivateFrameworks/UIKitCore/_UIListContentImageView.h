//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIListContentImageView : UIImageView
{
    _Bool _hadStroke;	// 144 = 0x90
    UIColor *_strokeColor;	// 152 = 0x98
    double _strokeWidth;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000004696c
@property(nonatomic, setter=_setStrokeWidth:) double _strokeWidth; // @synthesize _strokeWidth;
@property(retain, nonatomic, setter=_setStrokeColor:) UIColor *_strokeColor; // @synthesize _strokeColor;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000046897
- (void)_updateStroke;	// IMP=0x00000000000466d2

@end

