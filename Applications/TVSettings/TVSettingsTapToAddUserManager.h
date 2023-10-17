//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSArray, NSRecursiveLock, NSString, PBSIgnoreUserProfileAccountNotificationsAssertion, PBSUserProfile, RBSAssertion, SFAuthenticateAccountsService, TVCSHomeManager, TVSettingsUserProfilesValidator, UMUserPersonaContext;
@protocol TVSettingsTapToAddUserManagerDelegate;

@interface TVSettingsTapToAddUserManager : NSObject
{
    _Bool _isNewPersona;	// 8 = 0x8
    _Bool _isVoiceProfileAvailable;	// 9 = 0x9
    id <TVSettingsTapToAddUserManagerDelegate> _delegate;	// 16 = 0x10
    SFAuthenticateAccountsService *_authService;	// 24 = 0x18
    NSString *_personaIdentifier;	// 32 = 0x20
    UMUserPersonaContext *_initialPersonaContext;	// 40 = 0x28
    long long _userProfileType;	// 48 = 0x30
    NSArray *_signedInAccounts;	// 56 = 0x38
    NSArray *_homeUserIdentifiers;	// 64 = 0x40
    long long _state;	// 72 = 0x48
    PBSIgnoreUserProfileAccountNotificationsAssertion *_ignoreAccountNotificationAssertion;	// 80 = 0x50
    RBSAssertion *_processAssertion;	// 88 = 0x58
    TVSettingsUserProfilesValidator *_userProfilesValidator;	// 96 = 0x60
    NSRecursiveLock *_lock;	// 104 = 0x68
    ACAccountStore *_accountStore;	// 112 = 0x70
    TVCSHomeManager *_homeManager;	// 120 = 0x78
    PBSUserProfile *_addedUserProfile;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000000e2a72
@property(nonatomic) _Bool isVoiceProfileAvailable; // @synthesize isVoiceProfileAvailable=_isVoiceProfileAvailable;
@property(retain, nonatomic) PBSUserProfile *addedUserProfile; // @synthesize addedUserProfile=_addedUserProfile;
@property(retain, nonatomic) TVCSHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) TVSettingsUserProfilesValidator *userProfilesValidator; // @synthesize userProfilesValidator=_userProfilesValidator;
@property(retain, nonatomic) RBSAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) PBSIgnoreUserProfileAccountNotificationsAssertion *ignoreAccountNotificationAssertion; // @synthesize ignoreAccountNotificationAssertion=_ignoreAccountNotificationAssertion;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *homeUserIdentifiers; // @synthesize homeUserIdentifiers=_homeUserIdentifiers;
@property(retain, nonatomic) NSArray *signedInAccounts; // @synthesize signedInAccounts=_signedInAccounts;
@property(nonatomic) long long userProfileType; // @synthesize userProfileType=_userProfileType;
@property(nonatomic) _Bool isNewPersona; // @synthesize isNewPersona=_isNewPersona;
@property(retain, nonatomic) UMUserPersonaContext *initialPersonaContext; // @synthesize initialPersonaContext=_initialPersonaContext;
@property(retain, nonatomic) NSString *personaIdentifier; // @synthesize personaIdentifier=_personaIdentifier;
@property(retain, nonatomic) SFAuthenticateAccountsService *authService; // @synthesize authService=_authService;
@property(nonatomic) __weak id <TVSettingsTapToAddUserManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_result;	// IMP=0x00100000000e2887
- (void)_cancelIfNotConnectedYet;	// IMP=0x00100000000e2774
- (void)_cleanUp;	// IMP=0x00100000000e2581
- (void)_deletePersonaIfNeeded;	// IMP=0x00100000000e226a
- (void)_finishWithError:(id)arg1;	// IMP=0x00100000000e199a
- (void)_handleHomeConfigurationStateChange;	// IMP=0x00100000000e14ba
- (void)_beginHomeKitSetup;	// IMP=0x00100000000e1138
- (void)_finish;	// IMP=0x00100000000e02b4
- (void)_handleSetupServiceProgressEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x00100000000df795
- (void)_restorePersona;	// IMP=0x00100000000df5fa
- (void)_adoptPersona;	// IMP=0x00100000000df2ac
- (void)_start;	// IMP=0x00100000000deb5a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000deb10
- (void)authenticateAccountsService:(id)arg1 didFinishAuthentication:(id)arg2;	// IMP=0x00100000000de9c9
- (void)authenticateAccountsService:(id)arg1 didAttemptSignInWithAccountType:(unsigned int)arg2;	// IMP=0x00100000000de922
- (void)authenticateAccountsService:(id)arg1 willAttemptSignInWithAccountType:(unsigned int)arg2;	// IMP=0x00100000000de87b
- (_Bool)authenticateAccountsService:(id)arg1 shouldSignInAccounts:(id)arg2;	// IMP=0x00100000000de473
- (void)stop;	// IMP=0x00100000000de09c
- (void)start;	// IMP=0x00100000000ddbbc
- (void)dealloc;	// IMP=0x00100000000ddb7e
- (id)initWithUserProfileType:(long long)arg1;	// IMP=0x00100000000ddab8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

