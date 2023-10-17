//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class MISSING_TYPE, NSArray, NSString, TSKSettingItem, TVSettingsCRDPreviewViewController, TVSettingsPhotoChooserViewController;

@interface TVSettingsCRDViewController : TSKViewController
{
    TVSettingsCRDPreviewViewController *_crdPreviewViewController;	// 8 = 0x8
    NSArray *_photoCollectionGroups;	// 16 = 0x10
    TSKSettingItem *_backgroundPhotoSettingItem;	// 24 = 0x18
    TVSettingsPhotoChooserViewController *__CRDBackgroundPhotoViewController;	// 32 = 0x20
}

+ (void)_removeFromHomeAndEnableEveryTimeCode;	// IMP=0x00200000000e42e2
+ (CDUnknownBlockType)_makeRequireCodeEveryTimeHomeChildViewControllerBlock;	// IMP=0x00100000000e405e
+ (id)crdModeFormatter;	// IMP=0x00100000000e2b40
- (void).cxx_destruct;	// IMP=0x00200000000e4450
@property(retain, nonatomic) TVSettingsPhotoChooserViewController *_CRDBackgroundPhotoViewController; // @synthesize _CRDBackgroundPhotoViewController=__CRDBackgroundPhotoViewController;
@property(retain, nonatomic) TSKSettingItem *backgroundPhotoSettingItem; // @synthesize backgroundPhotoSettingItem=_backgroundPhotoSettingItem;
@property(retain) NSArray *photoCollectionGroups; // @synthesize photoCollectionGroups=_photoCollectionGroups;
@property(retain, nonatomic) TVSettingsCRDPreviewViewController *crdPreviewViewController; // @synthesize crdPreviewViewController=_crdPreviewViewController;
- (MISSING_TYPE *)_allowedPhotoCollectionGroups;	// IMP=0x00100000000e3fbf
- (void)_fetchPhotoCollectionGroups;	// IMP=0x00100000000e3be4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000e3af7
- (void)controller:(id)arg1 didSelectAsset:(id)arg2 inCollection:(id)arg3 collectionGroup:(id)arg4;	// IMP=0x00100000000e3976
- (void)controller:(id)arg1 didSelectCollectionGroup:(id)arg2;	// IMP=0x00100000000e3872
- (id)photoCollectionGroupsForController:(id)arg1;	// IMP=0x00100000000e3846
- (void)_showPreview:(id)arg1;	// IMP=0x00100000000e3802
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00100000000e3764
- (id)loadSettingGroups;	// IMP=0x00100000000e2d91
- (void)dealloc;	// IMP=0x00100000000e2cc4
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000000e2baf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

