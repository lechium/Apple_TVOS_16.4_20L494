//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarIndicatorLocationItem
{
    _UIStatusBarImageView *_prominentImageView;	// 8 = 0x8
    long long _previousType;	// 16 = 0x10
}

+ (id)prominentDisplayIdentifier;	// IMP=0x004000000125dc61
+ (id)groupWithPriority:(long long)arg1;	// IMP=0x0040000000bc9e59
- (void).cxx_destruct;	// IMP=0x000000000125e7c8
@property(nonatomic) long long previousType; // @synthesize previousType=_previousType;
@property(retain, nonatomic) _UIStatusBarImageView *prominentImageView; // @synthesize prominentImageView=_prominentImageView;
- (id)overriddenStyleAttributesForData:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000125e6f3
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x000000000125e1b1
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x000000000125e064
- (id)viewForIdentifier:(id)arg1;	// IMP=0x000000000125dfb6
- (id)createDisplayItemForIdentifier:(id)arg1;	// IMP=0x000000000125dde6
- (void)_create_prominentImageView;	// IMP=0x000000000125dd8c
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x000000000125dcd1
- (id)indicatorEntryKey;	// IMP=0x000000000125dcbd
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;	// IMP=0x000000000125dc7a

@end
