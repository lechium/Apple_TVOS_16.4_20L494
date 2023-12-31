//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFCameraItem, HMCameraProfile, NSArray, NSDictionary, NSString, TVHMCameraContentView, TVSBVideoBulletinAnimationContext, UIAlertController, UIWindow;

@interface TVSBVideoBulletinViewController
{
    NSDictionary *_messageDictionary;	// 8 = 0x8
    TVHMCameraContentView *_contentView;	// 16 = 0x10
    TVSBVideoBulletinAnimationContext *_animationContext;	// 24 = 0x18
    HMCameraProfile *_cameraProfile;	// 32 = 0x20
    NSArray *_allCameraItems;	// 40 = 0x28
    HFCameraItem *_cameraItem;	// 48 = 0x30
    NSArray *_cameraViewControlProviders;	// 56 = 0x38
    UIAlertController *_snoozeAlert;	// 64 = 0x40
    UIWindow *_window;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000000ef70
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIAlertController *snoozeAlert; // @synthesize snoozeAlert=_snoozeAlert;
@property(copy, nonatomic) NSArray *cameraViewControlProviders; // @synthesize cameraViewControlProviders=_cameraViewControlProviders;
@property(retain, nonatomic) HFCameraItem *cameraItem; // @synthesize cameraItem=_cameraItem;
@property(retain, nonatomic) NSArray *allCameraItems; // @synthesize allCameraItems=_allCameraItems;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(retain, nonatomic) TVSBVideoBulletinAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property(retain, nonatomic) TVHMCameraContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSDictionary *messageDictionary; // @synthesize messageDictionary=_messageDictionary;
@property(readonly, nonatomic) TVHMCameraContentView *cameraContentView;
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x001000000000e810
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x001000000000e690
- (void)reloadControlProviders:(_Bool)arg1;	// IMP=0x001000000000e3b0
- (void)dismissPictureInPictureViewControllerFromFullScreen:(id)arg1;	// IMP=0x001000000000e350
- (void)restorePictureInPictureViewControllerToFullScreen:(id)arg1;	// IMP=0x001000000000e1a0
- (_Bool)shouldShowAccessoryControlsButton;	// IMP=0x001000000000e120
- (void)accessoryControlsButtonWasClicked;	// IMP=0x001000000000e0a0
- (_Bool)shouldShowPIPButton;	// IMP=0x001000000000e080
- (void)pipButtonWasClicked;	// IMP=0x001000000000df60
- (_Bool)shouldShowAllCamerasButton;	// IMP=0x001000000000df20
- (void)allCamerasButtonWasClicked;	// IMP=0x001000000000de40
- (_Bool)snoozeIsActive;	// IMP=0x001000000000dd60
- (_Bool)shouldShowSnoozeButton;	// IMP=0x001000000000dc80
- (void)snoozeButtonWasClicked;	// IMP=0x001000000000cec0
- (void)snoozeCameraUntil:(id)arg1;	// IMP=0x001000000000cdb0
- (id)_pressTVForFullScreenAttributedString;	// IMP=0x001000000000c8d0
- (id)_videoBulletinView;	// IMP=0x001000000000c8a0
- (id)preferredFocusEnvironments;	// IMP=0x001000000000c7b0
- (void)configureCameraViewForBulletinView:(id)arg1;	// IMP=0x001000000000b600
- (void)_configureVideoBulletinView:(id)arg1 forBulletin:(id)arg2 forUpdate:(_Bool)arg3;	// IMP=0x0010000000009820
- (void)updateBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x0010000000009780
- (id)bulletinViewForBulletin:(id)arg1;	// IMP=0x0010000000009650
- (void)hideBulletinViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000094c0
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009250
- (void)handleMenuButtonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008f80
- (void)bulletinServiceEndUserInteractionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008a90
- (void)bulletinServiceBeginUserInteraction;	// IMP=0x00100000000084c0
- (void)willEnterPIP:(id)arg1;	// IMP=0x00100000000083a0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000008300
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000008260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

