//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSString, PBDialogHiddenAssertion, PBSystemGestureHandle, PBSystemOverlayController;
@protocol PBOverlayLayoutAssertion;

@interface PBDialogManager : NSObject
{
    struct os_unfair_lock_s _observersLock;	// 8 = 0x8
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    NSMutableDictionary *_identifiersToContexts;	// 32 = 0x20
    PBSystemGestureHandle *_dismissDialogGesture;	// 40 = 0x28
    NSMutableArray *_hiddenDialogAssertions;	// 48 = 0x30
    id <PBOverlayLayoutAssertion> _fullScreenOverlayOcclusionAssertion;	// 56 = 0x38
    PBDialogHiddenAssertion *_systemConfigurationDialogHiddenAssertion;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x00200000000a0f35
+ (id)dependencyDescription;	// IMP=0x00100000000a0de6
- (void).cxx_destruct;	// IMP=0x00200000000a29b3
@property(readonly, nonatomic) PBDialogHiddenAssertion *systemConfigurationDialogHiddenAssertion; // @synthesize systemConfigurationDialogHiddenAssertion=_systemConfigurationDialogHiddenAssertion;
@property(readonly, nonatomic) id <PBOverlayLayoutAssertion> fullScreenOverlayOcclusionAssertion; // @synthesize fullScreenOverlayOcclusionAssertion=_fullScreenOverlayOcclusionAssertion;
@property(readonly, nonatomic) NSMutableArray *hiddenDialogAssertions; // @synthesize hiddenDialogAssertions=_hiddenDialogAssertions;
@property(readonly, nonatomic) PBSystemGestureHandle *dismissDialogGesture; // @synthesize dismissDialogGesture=_dismissDialogGesture;
@property(readonly, nonatomic) NSMutableDictionary *identifiersToContexts; // @synthesize identifiersToContexts=_identifiersToContexts;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)_updateSystemConfigurationDialogsHiddenAssertion;	// IMP=0x00100000000a28b4
- (void)_updateFullScreenOverlayOcclusion;	// IMP=0x00100000000a27ee
- (void)_deregisterDialogHiddenAssertion:(id)arg1;	// IMP=0x00100000000a26d7
- (void)_registerDialogHiddenAssertion:(id)arg1;	// IMP=0x00100000000a25bb
- (void)overlayController:(id)arg1 didCancelSession:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000a2390
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x00100000000a22de
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000a20d6
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x00100000000a20d0
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x00100000000a1ec0
- (void)_registerSystemAppSettingsObservers;	// IMP=0x00100000000a1e58
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000a1d8b
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000a1d36
- (void)addObserver:(id)arg1;	// IMP=0x00100000000a1ce1
- (_Bool)dismissActiveDialogAnimated:(_Bool)arg1;	// IMP=0x00100000000a1c1e
- (_Bool)dismissActiveDialog;	// IMP=0x00100000000a1c06
- (void)dismissDialogWithContext:(id)arg1 options:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a1a9c
- (void)dismissDialogWithContext:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a1a80
- (void)presentDialogWithContext:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a1437
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)dealloc;	// IMP=0x00100000000a136a
- (id)init;	// IMP=0x00100000000a0fbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

