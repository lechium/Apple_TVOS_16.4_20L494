//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIStatusBarDataNetworkItemView
{
    int _dataNetworkType;	// 8 = 0x8
    int _wifiStrengthRaw;	// 12 = 0xc
    int _wifiStrengthBars;	// 16 = 0x10
    _Bool _wifiLinkWarning;	// 20 = 0x14
    _Bool _enableRSSI;	// 21 = 0x15
    _Bool _showRSSI;	// 22 = 0x16
}

- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000d29876
- (id)_stringForRSSI;	// IMP=0x0000000000d29847
- (id)_dataNetworkImage;	// IMP=0x0000000000d297e8
- (id)_dataNetworkImageName;	// IMP=0x0000000000d2971b
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d2961c
- (id)contentsImage;	// IMP=0x0000000000d2952b
- (_Bool)_updateWithData:(CDStruct_97a66028 *)arg1 networkType:(int)arg2;	// IMP=0x0000000000d293f9
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000d293bf
- (double)maximumOverlap;	// IMP=0x0000000000d29350
- (double)extraRightPadding;	// IMP=0x0000000000d292b3
- (double)extraLeftPadding;	// IMP=0x0000000000d291f8

@end
