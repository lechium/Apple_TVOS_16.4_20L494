//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIButtonBarButtonVisualProvider.h"

@class UIButton;

__attribute__((visibility("hidden")))
@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider
{
    UIButton *_contentButton;	// 24 = 0x18
}

+ (id)_defaultTitleAttributes;	// IMP=0x0060000000112d7a
- (void).cxx_destruct;	// IMP=0x00000000001137f5
- (id)imageSymbolConfiguration;	// IMP=0x00000000001137ed
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;	// IMP=0x0000000000113493
- (void)_configureImageOrTitleFromBarItem:(id)arg1;	// IMP=0x0000000000112f30
- (long long)_securePasteButtonSite;	// IMP=0x0000000000112f28
- (id)_defaultTitleAttributes;	// IMP=0x0000000000112f0e
- (id)_newButtonSecure:(_Bool)arg1 orDictation:(_Bool)arg2;	// IMP=0x0000000000112cd2
- (id)contentView;	// IMP=0x0000000000112cbd
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;	// IMP=0x0000000000112c9e
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;	// IMP=0x0000000000112c7f

@end

