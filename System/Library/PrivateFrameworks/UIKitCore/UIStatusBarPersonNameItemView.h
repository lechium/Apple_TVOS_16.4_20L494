//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarPersonNameItemView
{
    NSString *_personNameString;	// 8 = 0x8
    double _letterSpacing;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000d35e66
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000d35e0c
- (long long)legibilityStyle;	// IMP=0x0000000000d35dc6
- (double)extraRightPadding;	// IMP=0x0000000000d35d80
- (double)addContentOverlap:(double)arg1;	// IMP=0x0000000000d35d04
- (double)resetContentOverlap;	// IMP=0x0000000000d35ca1
- (id)contentsImage;	// IMP=0x0000000000d35c6c
- (_Bool)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2;	// IMP=0x0000000000d358e6
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000d35865
- (double)standardPadding;	// IMP=0x0000000000d3582e

@end
