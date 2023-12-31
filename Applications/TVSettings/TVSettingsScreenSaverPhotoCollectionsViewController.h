//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TVPhotoCollectionGroup, TVSettingsPhotoCollectionPreviewViewController, UIVisualEffectView;

@interface TVSettingsScreenSaverPhotoCollectionsViewController : TSKViewController
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    TVPhotoCollectionGroup *_photoCollectionsGroup;	// 16 = 0x10
    TVSettingsPhotoCollectionPreviewViewController *_photoPreviewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000c5fe6
- (void)_updatePhotoCollectionWithIndexPath:(id)arg1;	// IMP=0x00100000000c5f04
- (id)_photoCollectionTitleFormatter;	// IMP=0x00100000000c5d9c
- (void)radioSettingsGroup:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x00100000000c5cce
- (_Bool)hasFullscreenPreview;	// IMP=0x00100000000c5cc6
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00100000000c5c3c
- (id)title;	// IMP=0x00100000000c5c34
- (id)loadSettingGroups;	// IMP=0x00100000000c578f
- (void)viewDidLoad;	// IMP=0x00100000000c5058
- (id)initWithPhotoCollectionGroup:(id)arg1;	// IMP=0x00100000000c4f67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

