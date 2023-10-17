//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class _UIStatusBarImageView, _UIStatusBarStringView, _UIStatusBarWifiSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarWifiItem : _UIStatusBarItem
{
    _UIStatusBarWifiSignalView *_signalView;	// 8 = 0x8
    _UIStatusBarImageView *_networkIconView;	// 16 = 0x10
    _UIStatusBarStringView *_rawStringView;	// 24 = 0x18
}

+ (id)rawDisplayIdentifier;	// IMP=0x0040000000d568b6
+ (id)iconDisplayIdentifier;	// IMP=0x0040000000d5689d
+ (id)signalStrengthDisplayIdentifier;	// IMP=0x0040000000d56884
+ (id)groupWithPriority:(long long)arg1;	// IMP=0x0040000000d5aae7
- (void).cxx_destruct;	// IMP=0x0000000000d5761e
@property(retain, nonatomic) _UIStatusBarStringView *rawStringView; // @synthesize rawStringView=_rawStringView;
@property(retain, nonatomic) _UIStatusBarImageView *networkIconView; // @synthesize networkIconView=_networkIconView;
@property(retain, nonatomic) _UIStatusBarWifiSignalView *signalView; // @synthesize signalView=_signalView;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000d574bc
- (void)_create_rawStringView;	// IMP=0x0000000000d57462
- (void)_create_networkIconView;	// IMP=0x0000000000d573d1
- (void)_create_signalView;	// IMP=0x0000000000d5731f
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000d56c2b
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;	// IMP=0x0000000000d56b61
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;	// IMP=0x0000000000d56a89
- (double)_totalWidthForUpdate:(id)arg1;	// IMP=0x0000000000d56a05
- (double)_interspaceForUpdate:(id)arg1;	// IMP=0x0000000000d56981
- (double)_barThicknessForUpdate:(id)arg1;	// IMP=0x0000000000d568fd
- (long long)_barCountForUpdate:(id)arg1;	// IMP=0x0000000000d568f2
- (id)dependentEntryKeys;	// IMP=0x0000000000d568cf

@end
