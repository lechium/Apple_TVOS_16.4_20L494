//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AVxOverlayInteractionAssistant;

__attribute__((visibility("hidden")))
@interface AVInfoPanelSubtitleCollectionViewController
{
    id <AVxOverlayInteractionAssistant> _interactionAssistant;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a3845
@property(retain, nonatomic) id <AVxOverlayInteractionAssistant> interactionAssistant; // @synthesize interactionAssistant=_interactionAssistant;
- (void)_selectSubtitleAtIndex:(long long)arg1 shouldScrollToCenter:(_Bool)arg2;	// IMP=0x00000000000a3724
- (void)_scrollToAndSelectCurrentSubtitleOption;	// IMP=0x00000000000a360d
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000a352f
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000a349e
- (id)_indexPathForMediaOptionIndex:(long long)arg1;	// IMP=0x00000000000a33e0
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000a3319
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000a3255
- (void)viewDidLoad;	// IMP=0x00000000000a30ee
- (void)setSelectedMediaOptionIndex:(long long)arg1;	// IMP=0x00000000000a302d

@end

