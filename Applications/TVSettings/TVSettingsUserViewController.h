//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class AFSettingsConnection, FLTVSettingsAccountItemsController, NSArray, NSString, NSURL, TSKSettingItem, TVApplicationController, TVSettingsITMSFacade, TVSettingsPreferenceFacade, TVSettingsUser, TVSettingsUserProfileFacade, _TtC10TVSettings34TVSettingsTapToRepairUserPresenter;

@interface TVSettingsUserViewController : TSKViewController
{
    _Bool _shouldPresentManageSubscriptionsWhenURLBagLoads;	// 8 = 0x8
    NSURL *_lastDeepLinkURL;	// 16 = 0x10
    TVSettingsITMSFacade *_itmsFacade;	// 24 = 0x18
    TVSettingsUserProfileFacade *_userProfileFacade;	// 32 = 0x20
    TVSettingsUser *_user;	// 40 = 0x28
    TVApplicationController *_subscriptionsAppController;	// 48 = 0x30
    TSKSettingItem *_editNameItem;	// 56 = 0x38
    TSKSettingItem *_asnPaidItem;	// 64 = 0x40
    TSKSettingItem *_asnFreeItem;	// 72 = 0x48
    TVSettingsPreferenceFacade *_groupRecommendationsPrefsFacade;	// 80 = 0x50
    FLTVSettingsAccountItemsController *_followUpController;	// 88 = 0x58
    _TtC10TVSettings34TVSettingsTapToRepairUserPresenter *_tapToRepairUserPresenter;	// 96 = 0x60
    AFSettingsConnection *_siriSettingsConnection;	// 104 = 0x68
    NSArray *_supportedMultiUserLanguageCodes;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000055a9f
@property(retain, nonatomic) NSArray *supportedMultiUserLanguageCodes; // @synthesize supportedMultiUserLanguageCodes=_supportedMultiUserLanguageCodes;
@property(retain, nonatomic) AFSettingsConnection *siriSettingsConnection; // @synthesize siriSettingsConnection=_siriSettingsConnection;
@property(retain, nonatomic) _TtC10TVSettings34TVSettingsTapToRepairUserPresenter *tapToRepairUserPresenter; // @synthesize tapToRepairUserPresenter=_tapToRepairUserPresenter;
@property(retain, nonatomic) FLTVSettingsAccountItemsController *followUpController; // @synthesize followUpController=_followUpController;
@property(retain, nonatomic) TVSettingsPreferenceFacade *groupRecommendationsPrefsFacade; // @synthesize groupRecommendationsPrefsFacade=_groupRecommendationsPrefsFacade;
@property(nonatomic) _Bool shouldPresentManageSubscriptionsWhenURLBagLoads; // @synthesize shouldPresentManageSubscriptionsWhenURLBagLoads=_shouldPresentManageSubscriptionsWhenURLBagLoads;
@property(retain, nonatomic) TSKSettingItem *asnFreeItem; // @synthesize asnFreeItem=_asnFreeItem;
@property(retain, nonatomic) TSKSettingItem *asnPaidItem; // @synthesize asnPaidItem=_asnPaidItem;
@property(retain, nonatomic) TSKSettingItem *editNameItem; // @synthesize editNameItem=_editNameItem;
@property(retain, nonatomic) TVApplicationController *subscriptionsAppController; // @synthesize subscriptionsAppController=_subscriptionsAppController;
@property(retain, nonatomic) TVSettingsUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TVSettingsUserProfileFacade *userProfileFacade; // @synthesize userProfileFacade=_userProfileFacade;
@property(retain, nonatomic) TVSettingsITMSFacade *itmsFacade; // @synthesize itmsFacade=_itmsFacade;
@property(copy, nonatomic) NSURL *lastDeepLinkURL; // @synthesize lastDeepLinkURL=_lastDeepLinkURL;
- (void)_showRMVErrorAlertForError:(id)arg1;	// IMP=0x0010000000055609
- (void)_startTapToRepairThenEnableRMVWithPrompt:(_Bool)arg1;	// IMP=0x0010000000055342
- (void)_startTapToRepairUserWithConfiguration:(id)arg1;	// IMP=0x0010000000055289
- (void)_startTapToRepairUserWithCopyStyle:(long long)arg1 needsCDPRepair:(_Bool)arg2;	// IMP=0x0010000000055215
- (void)_completeUser:(id)arg1;	// IMP=0x00100000000551fc
- (void)_handleFollowUpItem:(id)arg1;	// IMP=0x0010000000055050
- (void)_toggleGroupRecommendationsConsent;	// IMP=0x0010000000054fda
- (id)_manage;	// IMP=0x0010000000054346
- (void)_togglePasswordFreeSetting;	// IMP=0x0010000000054287
- (id)_requirePassword;	// IMP=0x00100000000539e9
- (void)_enableSharedWithYou:(id)arg1;	// IMP=0x00100000000539e3
- (id)_sharedWithYou;	// IMP=0x001000000005357d
- (id)_iCloudPhotoSectionValueUsingUserProfileFacade:(id)arg1;	// IMP=0x00100000000534b5
- (id)_primaryiCloudOptions;	// IMP=0x0010000000052f2c
- (id)_appleIDs;	// IMP=0x00100000000527ce
- (id)_followUps;	// IMP=0x00100000000524cf
- (void)tapToRepairUserPresenterDidDismiss:(id)arg1;	// IMP=0x001000000005248e
- (void)tapToRepairUserDidFinish:(id)arg1;	// IMP=0x0010000000052329
- (void)presentActionForDisplayedDeepLinkURL;	// IMP=0x0010000000052076
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x0010000000051f11
- (id)_manageSubscriptionsViewController;	// IMP=0x0010000000051d28
- (void)_removeUser;	// IMP=0x0010000000051929
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000051772
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x00100000000516d0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000005143a
- (id)loadSettingGroups;	// IMP=0x00100000000512e8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000005129f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000005120c
- (void)dealloc;	// IMP=0x0010000000051140
- (id)initWithUser:(id)arg1;	// IMP=0x0010000000050e1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
