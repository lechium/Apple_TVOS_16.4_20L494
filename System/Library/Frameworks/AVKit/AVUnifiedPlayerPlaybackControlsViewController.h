//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVUnifiedPlayerToolbarMenuController, NSString;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerPlaybackControlsViewController
{
    AVUnifiedPlayerToolbarMenuController *_toolbarMenuController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000119f96
- (void)pictureInPictureController:(id)arg1 didUpdatePresentationState:(unsigned long long)arg2;	// IMP=0x0000000000119f0b
- (void)_updatePlaybackMetadataAtLiveEdge;	// IMP=0x0000000000119e8e
- (void)_updatePlaybackMetadataBadges;	// IMP=0x0000000000119dce
- (void)_reloadToolbarMenuController;	// IMP=0x0000000000119d91
- (void)_updateToolbarMenuControllerPlayerViewController;	// IMP=0x0000000000119ccf
- (void)_updateToolbarMenuController;	// IMP=0x0000000000119aac
- (void)setDelegateManager:(id)arg1;	// IMP=0x0000000000119a22
@property(readonly, nonatomic) AVUnifiedPlayerToolbarMenuController *toolbarMenuController; // @synthesize toolbarMenuController=_toolbarMenuController;
- (void)viewDidLoad;	// IMP=0x0000000000119929
- (void)didChangePlayerController;	// IMP=0x00000000001198e8
- (void)dealloc;	// IMP=0x0000000000119873
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000119823
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001197d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

