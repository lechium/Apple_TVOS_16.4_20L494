//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage, UIView, _UILegibilityImageSet;

__attribute__((visibility("hidden")))
@interface UIStatusBarBatteryItemView
{
    int _capacity;	// 8 = 0x8
    int _state;	// 12 = 0xc
    _Bool _batterySaverModeActive;	// 16 = 0x10
    UIView *_accessoryView;	// 24 = 0x18
    _Bool _cachedImageHasAccessoryImage;	// 32 = 0x20
    int _cachedCapacity;	// 36 = 0x24
    int _cachedAXHUDCapacity;	// 40 = 0x28
    _UILegibilityImageSet *_cachedImageSet;	// 48 = 0x30
    unsigned long long _cachedBatteryStyle;	// 56 = 0x38
    unsigned long long _cachedAXHUDStyle;	// 64 = 0x40
    UIImage *_cachedAXHUDImage;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000d20ca2
@property(retain, nonatomic) UIImage *cachedAXHUDImage; // @synthesize cachedAXHUDImage=_cachedAXHUDImage;
@property(nonatomic) unsigned long long cachedAXHUDStyle; // @synthesize cachedAXHUDStyle=_cachedAXHUDStyle;
@property(nonatomic) int cachedAXHUDCapacity; // @synthesize cachedAXHUDCapacity=_cachedAXHUDCapacity;
@property(nonatomic) unsigned long long cachedBatteryStyle; // @synthesize cachedBatteryStyle=_cachedBatteryStyle;
@property(nonatomic) _Bool cachedImageHasAccessoryImage; // @synthesize cachedImageHasAccessoryImage=_cachedImageHasAccessoryImage;
@property(nonatomic) int cachedCapacity; // @synthesize cachedCapacity=_cachedCapacity;
@property(retain, nonatomic) _UILegibilityImageSet *cachedImageSet; // @synthesize cachedImageSet=_cachedImageSet;
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000d2090c
- (double)legibilityStrength;	// IMP=0x0000000000d208fe
- (void)_updateAccessoryImage;	// IMP=0x0000000000d204f2
- (double)extraRightPadding;	// IMP=0x0000000000d20475
- (id)contentsImage;	// IMP=0x0000000000d203fd
- (id)_contentsImage;	// IMP=0x0000000000d1ff11
- (id)_accessoryImage;	// IMP=0x0000000000d1feba
- (_Bool)_needsAccessoryImage;	// IMP=0x0000000000d1fea6
- (struct CGSize)_batteryOffsetWithBackground:(id)arg1;	// IMP=0x0000000000d1fdbb
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000d1fd0d

@end

