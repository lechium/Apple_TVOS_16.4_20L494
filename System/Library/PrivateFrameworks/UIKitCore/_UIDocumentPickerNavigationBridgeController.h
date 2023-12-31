//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UINavigationController.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerNavigationBridgeController : UINavigationController
{
    _Bool _hasSetInitialNavigationItem;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x001000000056c152
+ (id)_exportedInterface;	// IMP=0x001000000056c0a7
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000056c878
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000056c82d
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000056c7e2
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000056c797
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000056c756
- (void)_updateNavigationItem;	// IMP=0x000000000056c5aa
- (void)_locationsMenu:(id)arg1;	// IMP=0x000000000056c4cc
- (void)_doneButton:(id)arg1;	// IMP=0x000000000056c4a1
- (id)hostingViewController;	// IMP=0x000000000056c48f
- (void)_setTintColor:(id)arg1;	// IMP=0x000000000056c45e
- (void)_documentPickerDidDismiss;	// IMP=0x000000000056c3e6
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000056c307
- (void)_setUploadURLWrapper:(id)arg1;	// IMP=0x000000000056c280
- (void)_setPickerMode:(unsigned long long)arg1;	// IMP=0x000000000056c1f9
- (void)_setPickableTypes:(id)arg1;	// IMP=0x000000000056c172

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

