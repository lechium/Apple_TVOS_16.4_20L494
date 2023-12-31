//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVoiceControlPillItem
{
    _UIStatusBarPillView *_pillView;	// 8 = 0x8
    struct CGSize _pillSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005db9d4
@property(retain, nonatomic) _UIStatusBarPillView *pillView; // @synthesize pillView=_pillView;
@property(nonatomic) struct CGSize pillSize; // @synthesize pillSize=_pillSize;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x00000000005db97e
- (void)_create_pillView;	// IMP=0x00000000005db924
- (_Bool)_pulsingForVoiceControlType:(long long)arg1;	// IMP=0x00000000005db8e0
- (id)_backgroundColorForVoiceControlType:(long long)arg1 styleAttributes:(id)arg2;	// IMP=0x00000000005db822
- (double)imageOpacityForVoiceControlType:(long long)arg1;	// IMP=0x00000000005db7e4
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x00000000005db63b
- (id)createDisplayItemForIdentifier:(id)arg1;	// IMP=0x00000000005db337

@end

