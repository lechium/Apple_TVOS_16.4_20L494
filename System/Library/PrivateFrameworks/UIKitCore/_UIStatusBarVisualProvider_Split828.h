//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarVisualProvider_FixedSplit.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Split828 : _UIStatusBarVisualProvider_FixedSplit
{
}

+ (_Bool)shrinksSingleCharacterTypes;	// IMP=0x0010000000d9bf2e
+ (double)LTEAPlusFontSize;	// IMP=0x0010000000d9bf20
+ (double)additionalBottomLeadingMargin;	// IMP=0x0010000000d9bebc
+ (double)baseFontSize;	// IMP=0x0010000000d9be92
+ (double)pillCenteringOffset;	// IMP=0x0010000000d9be47
+ (double)leadingCenteringOffset;	// IMP=0x0010000000d9be39
+ (double)leadingSmallPillSpacing;	// IMP=0x0010000000d9be2b
+ (struct CGSize)notchSize;	// IMP=0x0010000000d9bdf9
+ (double)nativeDisplayWidth;	// IMP=0x0010000000d9bdeb
+ (double)height;	// IMP=0x0010000000d9bddd
- (double)condensedPointSizeForCellularType:(long long)arg1 defaultPointSize:(double)arg2 baselineOffset:(double *)arg3;	// IMP=0x0000000000d9bf36
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;	// IMP=0x0000000000d9bef4
- (double)expandedIconScale;	// IMP=0x0000000000d9bee6
- (double)normalIconScale;	// IMP=0x0000000000d9bed8
- (double)bottomLeadingTopOffset;	// IMP=0x0000000000d9beca
- (double)lowerExpandedBaselineOffset;	// IMP=0x0000000000d9beae
- (double)baselineBottomInset;	// IMP=0x0000000000d9bea0
- (struct CGSize)expandedPillSize;	// IMP=0x0000000000d9be7c
- (struct CGSize)smallPillSize;	// IMP=0x0000000000d9be6b
- (struct CGSize)pillSize;	// IMP=0x0000000000d9be55
- (double)leadingItemSpacing;	// IMP=0x0000000000d9be1d
- (double)itemSpacing;	// IMP=0x0000000000d9be0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

