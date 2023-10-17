//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIStatusBarSignalStrengthItemView
{
    int _signalStrengthRaw;	// 8 = 0x8
    int _signalStrengthBars;	// 12 = 0xc
    _Bool _enableRSSI;	// 16 = 0x10
    _Bool _showRSSI;	// 17 = 0x11
    _Bool _showFailure;	// 18 = 0x12
    _Bool _useSmallBars;	// 19 = 0x13
}

- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000d3b2e9
- (id)_stringForRSSI;	// IMP=0x0000000000d3b2ba
- (double)extraLeftPadding;	// IMP=0x0000000000d3b28b
- (double)extraRightPadding;	// IMP=0x0000000000d3b17a
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d3b090
- (id)contentsImage;	// IMP=0x0000000000d3af75
- (id)_signalStrengthBarsImageName;	// IMP=0x0000000000d3af16
- (_Bool)_updateWithRaw:(int)arg1 bars:(int)arg2 enableRSSI:(_Bool)arg3 showFailure:(_Bool)arg4 useSmallBars:(_Bool)arg5;	// IMP=0x0000000000d3ae46
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000d3add2

@end
