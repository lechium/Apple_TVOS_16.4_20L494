//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper, IDSRateLimiter, IDSUserStore, NSArray, NSMutableArray, NSMutableSet, NSString;

@interface IDSRegistrationController : NSObject
{
    NSString *_deviceName;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    NSMutableArray *_activeRegistrations;	// 24 = 0x18
    NSMutableArray *_trackedRegistrations;	// 32 = 0x20
    NSMutableSet *_deferredRegisters;	// 40 = 0x28
    int _screenSharingToken;	// 48 = 0x30
    int _iMessageToken;	// 52 = 0x34
    int _faceTimeToken;	// 56 = 0x38
    int;	// 60 = 0x3c
    _Bool _displayingAddNumberPrompt;	// 64 = 0x40
    IDSKeychainWrapper *_keychainWrapper;	// 72 = 0x48
    IDSUserStore *_userStore;	// 80 = 0x50
    IDSRateLimiter *_simDeactivationRequestRateLimiter;	// 88 = 0x58
}

+ (_Bool)systemSupportsPhoneNumberRegistration;	// IMP=0x0020000000098f70
+ (_Bool)systemSupportsRegistrationInfo:(id)arg1;	// IMP=0x0010000000098dd0
+ (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(int)arg2;	// IMP=0x0010000000098240
+ (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(_Bool)arg3;	// IMP=0x00100000000980e0
+ (id)sharedInstance;	// IMP=0x0010000000097460
+ (id)registeredPhoneNumbers;	// IMP=0x0010000000097060
+ (_Bool)validSIMStateForRegistration;	// IMP=0x0010000000096e60
+ (_Bool)_isPhoneNumberAuthenticationDuringBuddyAllowed;	// IMP=0x0010000000096d70
+ (_Bool)canCompleteRegistration;	// IMP=0x0010000000096c70
+ (_Bool)canStartRegistrationForAccountType:(int)arg1;	// IMP=0x0010000000096870
+ (_Bool)isBuddyShowing;	// IMP=0x00100000000967e0
+ (void)initialize;	// IMP=0x0010000000096780
- (void).cxx_destruct;	// IMP=0x00200000000aa140
@property(retain, nonatomic) IDSRateLimiter *simDeactivationRequestRateLimiter; // @synthesize simDeactivationRequestRateLimiter=_simDeactivationRequestRateLimiter;
@property(nonatomic) _Bool displayingAddNumberPrompt; // @synthesize displayingAddNumberPrompt=_displayingAddNumberPrompt;
@property(retain, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(readonly, nonatomic) NSArray *activeRegistrations; // @synthesize activeRegistrations=_activeRegistrations;
@property(readonly, nonatomic) NSArray *trackedRegistrations; // @synthesize trackedRegistrations=_trackedRegistrations;
- (void)noteManateeAvailabilityTime;	// IMP=0x00100000000a9f90
- (void)noteiCloudSignInTime;	// IMP=0x00100000000a9f40
- (void)SIM:(id)arg1 didDeactivateWithInfo:(id)arg2;	// IMP=0x00100000000a9aa0
- (double)simDeactivationInfoRateLimitInterval;	// IMP=0x00100000000a99a0
- (long long)simDeactivationInfoRateLimitCount;	// IMP=0x00100000000a98b0
- (void)_alertForHomeNumberIfNeededForSIMIdentifier:(id)arg1 withPhoneNumber:(id)arg2;	// IMP=0x00100000000a8f10
- (void)_notifyHomeNumberSuccessForUser:(id)arg1;	// IMP=0x00100000000a8e40
- (id)_phoneUserWithCredentials;	// IMP=0x00100000000a8af0
- (id)_provisionedTemporaryUser;	// IMP=0x00100000000a87c0
- (_Bool)_pnrOngoing;	// IMP=0x00100000000a8530
- (void)_postHomeNumberNotificationBeforeAlertForIdentifier:(id)arg1 forcefully:(_Bool)arg2;	// IMP=0x00100000000a80c0
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x00100000000a7cc0
- (void)_systemConfigurationPrefsChanged;	// IMP=0x00100000000a7560
@property(readonly, nonatomic) NSArray *activeRegistrationsToRegister;
- (id)activeRegistrationsOfType:(int)arg1;	// IMP=0x00100000000a72e0
- (id)activeRegistrationsMatchingUserID:(id)arg1;	// IMP=0x00100000000a7070
- (void)stopTrackingActiveRegistration:(id)arg1;	// IMP=0x00100000000a6ec0
- (void)startTrackingActiveRegistration:(id)arg1;	// IMP=0x00100000000a6c50
- (void)stopTrackingRegistration:(id)arg1;	// IMP=0x00100000000a6a60
- (void)startTrackingRegistration:(id)arg1;	// IMP=0x00100000000a67a0
- (void)_updateNotifyState;	// IMP=0x00100000000a6110
- (void)removeListener:(id)arg1;	// IMP=0x00100000000a6080
- (void)addListener:(id)arg1;	// IMP=0x00100000000a5fc0
- (void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3;	// IMP=0x00100000000a5d90
- (void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x00100000000a57c0
- (void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(_Bool)arg6;	// IMP=0x00100000000a5450
- (void)center:(id)arg1 succeededAuthentication:(id)arg2;	// IMP=0x00100000000a51f0
- (void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;	// IMP=0x00100000000a4f80
- (_Bool)_sendIDSAuthenticationForRegistration:(id)arg1;	// IMP=0x00100000000a4c10
- (void)_ensureProfileQueriesAreReadyForRegistratration:(id)arg1;	// IMP=0x00100000000a4620
- (void)center:(id)arg1 failedCurrentEmailsRequest:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x00100000000a4510
- (void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;	// IMP=0x00100000000a41b0
- (_Bool)_sendIDSAuthenticationOrRegistrationIfNeeded:(id)arg1;	// IMP=0x00100000000a39c0
- (void)center:(id)arg1 failedIDSAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x00100000000a2180
- (void)center:(id)arg1 succeededIDSAuthentication:(id)arg2;	// IMP=0x00100000000a1dc0
- (void)centerNeedsNewIdentification:(id)arg1;	// IMP=0x00100000000a1cd0
- (void)center:(id)arg1 failedIdentification:(id)arg2 error:(long long)arg3;	// IMP=0x00100000000a1aa0
- (void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4;	// IMP=0x00100000000a1750
- (void)center:(id)arg1 allSucceededRegistrations:(id)arg2;	// IMP=0x00100000000a1660
- (void)center:(id)arg1 failedRegistration:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x00100000000a14b0
- (void)center:(id)arg1 succeededRegistration:(id)arg2;	// IMP=0x00100000000a0d00
- (void)_captureDiagnosticsForFailedRegistration:(id)arg1 registrationError:(long long)arg2;	// IMP=0x00100000000a0910
- (_Bool)_shouldSubmitRegistrationCompletedMetricForRegistration:(id)arg1;	// IMP=0x00100000000a0880
- (void)_submitRegistrationCompletedMetricWithRegistration:(id)arg1 success:(_Bool)arg2 registrationError:(long long)arg3;	// IMP=0x00100000000a0600
- (void)_notifyDeregistrationStarting:(id)arg1;	// IMP=0x00100000000a0250
- (void)_notifyAllRegistrationSuccess:(id)arg1;	// IMP=0x001000000009fbd0
- (void)_notifyRegistrationSuccess:(id)arg1;	// IMP=0x001000000009f4e0
- (void)_notifyRegistrationFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;	// IMP=0x001000000009eca0
- (void)_notifyRegistrationStarting:(id)arg1;	// IMP=0x001000000009e7e0
- (void)_notifyRegistrationUpdated:(id)arg1;	// IMP=0x001000000009e320
- (void)_notifyNeedsNewRegistration;	// IMP=0x001000000009dfb0
- (_Bool)_performCorrectServerRequestForTemporaryPhoneRegistration:(id)arg1 sentAuthentication:(_Bool *)arg2 sentIDSAction:(_Bool *)arg3;	// IMP=0x001000000009d650
- (_Bool)_performCorrectServerRequestForDeviceIDRegistration:(id)arg1;	// IMP=0x001000000009d2f0
- (void)reportSpamMessage:(id)arg1 toURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000009d210
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 isJunked:(_Bool)arg4 messageServerTimestamp:(id)arg5 toURI:(id)arg6 registration:(id)arg7;	// IMP=0x001000000009d090
- (void)reportSpamWithMessages:(id)arg1 toURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000009cfb0
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x001000000009cea0
- (_Bool)unregisterInfo:(id)arg1;	// IMP=0x001000000009cbc0
- (_Bool)registerInfo:(id)arg1 requireSilentAuth:(_Bool)arg2;	// IMP=0x00100000000992f0
- (_Bool)registerInfo:(id)arg1;	// IMP=0x0010000000099280
- (_Bool)systemSupportsRegistrationInfo:(id)arg1;	// IMP=0x0010000000099210
- (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(int)arg2;	// IMP=0x0010000000099190
- (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(_Bool)arg3;	// IMP=0x0010000000099100
- (_Bool)systemSupportsPhoneNumberRegistration;	// IMP=0x00100000000990c0
- (_Bool)registrationSupportedForRegistration:(id)arg1;	// IMP=0x0010000000097df0
- (void)dealloc;	// IMP=0x0010000000097cb0
- (id)initWithUserStore:(id)arg1;	// IMP=0x0010000000097690
- (id)init;	// IMP=0x0010000000097520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

