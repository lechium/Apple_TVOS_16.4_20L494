//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TVPhotoCollectionGroup, TVSettingsPhotoCollectionPreviewViewController, UIVisualEffectView;
@protocol TVSettingsPhotoCollectionGroupViewControllerDelegate;

@interface TVSettingsPhotoCollectionGroupViewController : TSKViewController
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    id <TVSettingsPhotoCollectionGroupViewControllerDelegate> _delegate;	// 16 = 0x10
    TVPhotoCollectionGroup *_photoCollectionGroup;	// 24 = 0x18
    TVSettingsPhotoCollectionPreviewViewController *_photoPreviewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000cb4f7
@property(retain, nonatomic) TVSettingsPhotoCollectionPreviewViewController *photoPreviewController; // @synthesize photoPreviewController=_photoPreviewController;
@property(retain, nonatomic) TVPhotoCollectionGroup *photoCollectionGroup; // @synthesize photoCollectionGroup=_photoCollectionGroup;
@property(nonatomic) __weak id <TVSettingsPhotoCollectionGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updatePhotoCollectionWithIndexPath:(id)arg1;	// IMP=0x00100000000cb39e
- (id)_localizedTitleForPhotoCollection:(id)arg1;	// IMP=0x00100000000cb266
- (void)controller:(id)arg1 didSelectAsset:(id)arg2;	// IMP=0x00100000000cb1a2
- (_Bool)hasFullscreenPreview;	// IMP=0x00100000000cb19a
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00100000000cb16e
- (id)title;	// IMP=0x00100000000cb166
- (id)loadSettingGroups;	// IMP=0x00100000000cae48
- (void)viewDidLoad;	// IMP=0x00100000000ca712
- (id)initWithPhotoCollectionGroup:(id)arg1;	// IMP=0x00100000000ca621

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

