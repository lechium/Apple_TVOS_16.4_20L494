//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HBFolder, HBFolderCellIconVendor, NSString;

__attribute__((visibility("hidden")))
@interface HBFolderCell
{
    HBFolderCellIconVendor *_iconVendor;	// 8 = 0x8
}

+ (id)_baseFolderLayerStackWithInterfaceStyle:(long long)arg1;	// IMP=0x0010000000039739
- (void).cxx_destruct;	// IMP=0x0000000000039b10
- (void)_updateIconImagesWithReasons:(unsigned long long)arg1 previousTraitCollection:(id)arg2;	// IMP=0x0000000000039532
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000039398
- (void)iconImagesDidChange:(id)arg1;	// IMP=0x0000000000039382
- (void)setDropState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000392b3
- (void)setDropState:(long long)arg1;	// IMP=0x000000000003929f
@property(readonly, nonatomic) HBFolder *folder;
- (void)setItem:(id)arg1;	// IMP=0x00000000000391cc
- (id)notificationObject:(id)arg1;	// IMP=0x0000000000039051
@property(readonly, nonatomic) HBFolderCellIconVendor *iconVendor; // @synthesize iconVendor=_iconVendor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
