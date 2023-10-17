//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, AFSettingsConnection, CDPContext, CDPTVUIController, MISSING_TYPE, NSSet, NSString, PBSIgnoreUserProfileAccountNotificationsAssertion, PBSUserProfileApplicationManager, PBSUserProfileManager, RBSAssertion, TVSAccountStoreObserver, TVSettingsPreferenceFacade, TVSettingsUser, UMUserPersonaContext;
@protocol OS_dispatch_queue;

@interface TVSettingsUserProfileFacade : NSObject
{
    _Bool _isRemovingUser;	// 8 = 0x8
    _Bool _isSigningInOrOutInProgress;	// 9 = 0x9
    _Bool _userHasBeenRemoved;	// 10 = 0xa
    MISSING_TYPE *_isSingleUserDevice;	// 11 = 0xb
    _Bool _iCloudPhotoLibraryEnabled;	// 12 = 0xc
    _Bool _iCloudSharedPhotosEnabled;	// 13 = 0xd
    _Bool _iCloudPhotoStreamEnabled;	// 14 = 0xe
    _Bool _iCloudPhotoStreamAvailable;	// 15 = 0xf
    _Bool _needsAuthenticationToChangeiCloudPhotoOptions;	// 16 = 0x10
    TVSettingsUser *_user;	// 24 = 0x18
    long long _recognizeMyVoiceState;	// 32 = 0x20
    long long _recognizeMyVoiceAvailability;	// 40 = 0x28
    PBSUserProfileManager *_profileManager;	// 48 = 0x30
    PBSUserProfileApplicationManager *_applicationManager;	// 56 = 0x38
    UMUserPersonaContext *_initialPersonaContext;	// 64 = 0x40
    CDPTVUIController *_cdpUIProvider;	// 72 = 0x48
    ACAccountStore *_accountStore;	// 80 = 0x50
    ACAccount *_iCloudAccount;	// 88 = 0x58
    PBSIgnoreUserProfileAccountNotificationsAssertion *_ignoreNotificationsAssertion;	// 96 = 0x60
    RBSAssertion *_processAssertion;	// 104 = 0x68
    TVSAccountStoreObserver *_accountStoreObserver;	// 112 = 0x70
    TVSettingsPreferenceFacade *_prefFacade;	// 120 = 0x78
    AFSettingsConnection *_siriSettingsConnection;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_siriQueue;	// 136 = 0x88
}

+ (_Bool)automaticallyNotifiesObserversOfUserHasBeenRemoved;	// IMP=0x00200000000d0ef2
+ (id)keyPathsForValuesAffectingCanEnableRecognizeMyVoice;	// IMP=0x00100000000d0dcf
+ (id)keyPathsForValuesAffectingRecognizeMyVoiceAvailability;	// IMP=0x00100000000d0d77
+ (id)keyPathsForValuesAffectingRecognizeMyVoiceState;	// IMP=0x00100000000d0d1f
+ (id)keyPathsForValuesAffectingIsSigningInOrOutInProgress;	// IMP=0x00100000000ce324
- (void).cxx_destruct;	// IMP=0x00200000000d6184
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *siriQueue; // @synthesize siriQueue=_siriQueue;
@property(retain, nonatomic) AFSettingsConnection *siriSettingsConnection; // @synthesize siriSettingsConnection=_siriSettingsConnection;
@property(retain, nonatomic) TVSettingsPreferenceFacade *prefFacade; // @synthesize prefFacade=_prefFacade;
@property(retain, nonatomic) TVSAccountStoreObserver *accountStoreObserver; // @synthesize accountStoreObserver=_accountStoreObserver;
@property(nonatomic) _Bool needsAuthenticationToChangeiCloudPhotoOptions; // @synthesize needsAuthenticationToChangeiCloudPhotoOptions=_needsAuthenticationToChangeiCloudPhotoOptions;
@property(retain, nonatomic) RBSAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) PBSIgnoreUserProfileAccountNotificationsAssertion *ignoreNotificationsAssertion; // @synthesize ignoreNotificationsAssertion=_ignoreNotificationsAssertion;
@property(retain, nonatomic) ACAccount *iCloudAccount; // @synthesize iCloudAccount=_iCloudAccount;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) CDPTVUIController *cdpUIProvider; // @synthesize cdpUIProvider=_cdpUIProvider;
@property(retain, nonatomic) UMUserPersonaContext *initialPersonaContext; // @synthesize initialPersonaContext=_initialPersonaContext;
@property(retain, nonatomic) PBSUserProfileApplicationManager *applicationManager; // @synthesize applicationManager=_applicationManager;
@property(retain, nonatomic) PBSUserProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(nonatomic) long long recognizeMyVoiceAvailability; // @synthesize recognizeMyVoiceAvailability=_recognizeMyVoiceAvailability;
@property(nonatomic) long long recognizeMyVoiceState; // @synthesize recognizeMyVoiceState=_recognizeMyVoiceState;
@property(readonly, nonatomic) _Bool iCloudPhotoStreamAvailable; // @synthesize iCloudPhotoStreamAvailable=_iCloudPhotoStreamAvailable;
@property(readonly, nonatomic) _Bool iCloudPhotoStreamEnabled; // @synthesize iCloudPhotoStreamEnabled=_iCloudPhotoStreamEnabled;
@property(readonly, nonatomic) _Bool iCloudSharedPhotosEnabled; // @synthesize iCloudSharedPhotosEnabled=_iCloudSharedPhotosEnabled;
@property(readonly, nonatomic) _Bool iCloudPhotoLibraryEnabled; // @synthesize iCloudPhotoLibraryEnabled=_iCloudPhotoLibraryEnabled;
@property(nonatomic) _Bool isSingleUserDevice; // @synthesize isSingleUserDevice=_isSingleUserDevice;
@property(nonatomic) _Bool userHasBeenRemoved; // @synthesize userHasBeenRemoved=_userHasBeenRemoved;
@property(nonatomic) _Bool isSigningInOrOutInProgress; // @synthesize isSigningInOrOutInProgress=_isSigningInOrOutInProgress;
@property(nonatomic) _Bool isRemovingUser; // @synthesize isRemovingUser=_isRemovingUser;
@property(readonly, nonatomic) TVSettingsUser *user; // @synthesize user=_user;
- (void)_sendAnalyticsEventCausedByActionType:(unsigned long long)arg1 newValue:(_Bool)arg2;	// IMP=0x00100000000d5efd
- (void)_manateeAvailabilityChanged;	// IMP=0x00100000000d5e54
- (void)_updateRecognizeMyVoiceAvailability;	// IMP=0x00100000000d5613
- (void)_updateRecognizeMyVoiceState;	// IMP=0x00100000000d5151
- (void)_setIsRecognizeMyVoiceEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d4c4c
- (_Bool)_isHSA2AltDSID:(id)arg1;	// IMP=0x00100000000d4ba6
- (void)_acquireAssertionsWithName:(id)arg1;	// IMP=0x00100000000d4966
- (void)_presentDialogWithError:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x00100000000d4880
- (void)_cleanUpAfterSigningInOrOut;	// IMP=0x00100000000d4816
- (void)_restorePersona;	// IMP=0x00100000000d471c
- (_Bool)_adoptPersona;	// IMP=0x00100000000d43aa
- (void)_signInGameCenterWithPresentingViewController:(id)arg1;	// IMP=0x00100000000d3bc6
- (void)_signIniTunesWithPresentingViewController:(id)arg1;	// IMP=0x00100000000d35ec
- (void)_signIniCloudWithPresentingViewController:(id)arg1;	// IMP=0x00100000000d2f86
- (void)_authenticateForServiceType:(long long)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d2b42
- (void)_updateProfileWithServiceType:(long long)arg1 toAltDSID:(id)arg2;	// IMP=0x00100000000d2549
- (void)_updateiCloudPhotoValues;	// IMP=0x00100000000d23f1
- (void)_usePasswordAuthWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d1ebb
- (void)_updateiCloudPhotoSettingWithEnabled:(_Bool)arg1 dataclass:(id)arg2 presentingViewController:(id)arg3;	// IMP=0x00100000000d1870
- (void)_updateGroupRecommendationsConsentToAuthorized:(_Bool)arg1;	// IMP=0x00100000000d1450
- (void)groupRecommendationsConsentViewController:(id)arg1 didUpdateConsentWithAuthorized:(_Bool)arg2;	// IMP=0x00100000000d143c
- (void)groupRecommendationsConsentViewControllerDidCancel:(id)arg1;	// IMP=0x00100000000d13c3
- (void)signInFlowController:(id)arg1 presentGenericTermsUIForAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d12d3
- (void)accountWasModified:(id)arg1;	// IMP=0x00100000000d115b
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x00100000000d0f5c
- (void)toggleRecognizeMyVoiceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d0e59
- (void)enableRecognizeMyVoiceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d0e53
- (void)disableRecognizeMyVoiceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d0e3c
@property(readonly, nonatomic) _Bool canEnableRecognizeMyVoice;
- (void)updateGroupRecommendationsConsentToAuthorized:(_Bool)arg1 presentingViewController:(id)arg2;	// IMP=0x00100000000d0a37
@property(nonatomic) _Bool memoriesContentEnabled;
- (void)setiCloudPhotoStreamEnabled:(_Bool)arg1 presentingViewController:(id)arg2;	// IMP=0x00100000000d0918
- (void)setiCloudSharedPhotosEnabled:(_Bool)arg1 presentingViewController:(id)arg2;	// IMP=0x00100000000d08f9
- (void)setiCloudPhotoLibraryEnabled:(_Bool)arg1 presentingViewController:(id)arg2;	// IMP=0x00100000000d08da
- (void)setAuthenticationNeededToChangeiCloudPhotoOptions;	// IMP=0x00100000000d08d0
@property(readonly, nonatomic) _Bool userSupportsiCloudPhotoOptions;
- (void)presentTermsUIForiCloudAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d03d0
- (void)_afterTerminatingAppsRemoveUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cf463
- (void)removeUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cf156
- (_Bool)canSignOutOfServiceType:(long long)arg1;	// IMP=0x00100000000cefa1
- (void)signOutOfServiceType:(long long)arg1;	// IMP=0x00100000000ce777
- (void)signInServiceType:(long long)arg1 presentingViewController:(id)arg2;	// IMP=0x00100000000ce45c
@property(readonly, nonatomic) _Bool userHasActiveiTunes;
- (void)dealloc;	// IMP=0x00100000000ce214
- (id)initWithUser:(id)arg1;	// IMP=0x00100000000cd7e7

// Remaining properties
@property(nonatomic) _Bool backgroundDataclassEnablement;
@property(retain, nonatomic) CDPContext *cdpContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFastSignInEnabled) _Bool fastSignInEnabled;
@property(nonatomic) unsigned long long findMyActivationAction;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSSet *requiredTerms;
@property(nonatomic) _Bool shouldStashLoginResponse;
@property(nonatomic) _Bool skipCDPEnablement;
@property(nonatomic) _Bool skipDataclassEnablement;
@property(readonly) Class superclass;

@end
