//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, NSURL, TVSUIUserPickerSelectedUserController, TVSettingsHomeSetupController, TVSettingsIMAccountsFacade, TVSettingsITMSSandboxFacade, TVSettingsUserProfileListFacade, _TtC10TVSettings31TVSettingsTapToAddUserPresenter;

@interface TVSettingsUserProfilesViewController : TSKViewController
{
    NSURL *_lastDeepLinkURL;	// 8 = 0x8
    TVSettingsUserProfileListFacade *_userProfilesFacade;	// 16 = 0x10
    TVSUIUserPickerSelectedUserController *_selectedUserController;	// 24 = 0x18
    TVSettingsITMSSandboxFacade *_sandboxFacade;	// 32 = 0x20
    TVSettingsIMAccountsFacade *_imAccountsFacade;	// 40 = 0x28
    TVSettingsHomeSetupController *_homeSetupController;	// 48 = 0x30
    _TtC10TVSettings31TVSettingsTapToAddUserPresenter *_tapToAddUserPresenter;	// 56 = 0x38
}

+ (id)_addUserDeepLinkKeyForSuggestedUser:(id)arg1;	// IMP=0x00200000000289e4
+ (id)_addGuestUserDeepLinkKey;	// IMP=0x0010000000028968
+ (id)_addPrimaryUserDeepLinkKey;	// IMP=0x00100000000288ec
+ (id)_deepLinkKeyForUser:(id)arg1;	// IMP=0x0010000000028597
- (void).cxx_destruct;	// IMP=0x0020000000028f61
@property(retain, nonatomic) _TtC10TVSettings31TVSettingsTapToAddUserPresenter *tapToAddUserPresenter; // @synthesize tapToAddUserPresenter=_tapToAddUserPresenter;
@property(retain, nonatomic) TVSettingsHomeSetupController *homeSetupController; // @synthesize homeSetupController=_homeSetupController;
@property(retain, nonatomic) TVSettingsIMAccountsFacade *imAccountsFacade; // @synthesize imAccountsFacade=_imAccountsFacade;
@property(retain, nonatomic) TVSettingsITMSSandboxFacade *sandboxFacade; // @synthesize sandboxFacade=_sandboxFacade;
@property(retain, nonatomic) TVSUIUserPickerSelectedUserController *selectedUserController; // @synthesize selectedUserController=_selectedUserController;
@property(retain, nonatomic) TVSettingsUserProfileListFacade *userProfilesFacade; // @synthesize userProfilesFacade=_userProfilesFacade;
@property(copy, nonatomic) NSURL *lastDeepLinkURL; // @synthesize lastDeepLinkURL=_lastDeepLinkURL;
- (_Bool)_isRMVEnabledInHome:(id)arg1 homeUserInfo:(id)arg2;	// IMP=0x0010000000028e59
- (void)_promptRMVForUserProfile:(id)arg1;	// IMP=0x0010000000028bb6
- (_Bool)shouldHideExpanse;	// IMP=0x0010000000028b54
- (id)_location;	// IMP=0x0010000000028113
- (void)_signOutSandboxAccount:(id)arg1;	// IMP=0x0010000000027df6
- (void)_signIntoSandboxAccount:(id)arg1;	// IMP=0x0010000000027dd6
- (id)_sandboxAccount;	// IMP=0x00100000000276f7
- (void)_handleSeedRecognizer:(id)arg1;	// IMP=0x00100000000276b9
- (id)_appleConnect;	// IMP=0x00100000000274d1
- (void)_menuPressed:(id)arg1;	// IMP=0x0010000000027487
- (void)_startTapToAddFlowWithPresenter:(id)arg1;	// IMP=0x001000000002741b
- (void)_addUserWithProfileType:(long long)arg1;	// IMP=0x0010000000027301
- (void)_addSuggestedUser:(id)arg1;	// IMP=0x00100000000271ea
- (void)_addGuestUser:(id)arg1;	// IMP=0x00100000000270d3
- (void)_addPrimaryUser:(id)arg1;	// IMP=0x00100000000270b3
- (void)_switchUser:(id)arg1;	// IMP=0x0010000000026fb8
- (void)_toggleExpanse:(id)arg1;	// IMP=0x0010000000026f6d
- (id)_deviceAccountsGroup;	// IMP=0x00100000000269f1
- (id)_suggestedUserGroup;	// IMP=0x00100000000266e4
- (id)_guestUsersGroup;	// IMP=0x0010000000026100
- (id)_primaryUserGroup;	// IMP=0x0010000000025bc0
- (id)_currentUserGroup;	// IMP=0x001000000002597d
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x001000000002593b
- (void)tapToAddUserPresenterDidDismiss:(id)arg1;	// IMP=0x00100000000258fa
- (void)tapToAddUserPresenterDidSuppressSuggestion:(id)arg1;	// IMP=0x001000000002586a
- (void)tapToAddUserPresenter:(id)arg1 finishHomeKitSetupWithResult:(id)arg2;	// IMP=0x00100000000253eb
- (void)tapToAddUserPresenter:(id)arg1 didFinishWithResult:(id)arg2;	// IMP=0x00100000000250ea
- (void)tapToAddUserPresenterManualSignInTriggered:(id)arg1;	// IMP=0x001000000002509c
- (id)loadSettingGroups;	// IMP=0x0010000000024dca
- (void)viewDidLoad;	// IMP=0x0010000000024c7d
- (id)initWithUserProfilesFacade:(id)arg1;	// IMP=0x0010000000024bb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

