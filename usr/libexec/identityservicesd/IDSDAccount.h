//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTDeferredTaskQueue, IDSGameCenterData, IDSRegistration, IDSRegistrationPushHandler, IDSServiceProperties, MISSING_TYPE, NSArray, NSDate, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IDSDAccount : NSObject
{
    NSMutableDictionary *_accountInfo;	// 8 = 0x8
    IDSRegistration *_registrationInfo;	// 16 = 0x10
    IDSServiceProperties *_service;	// 24 = 0x18
    NSString *_uniqueID;	// 32 = 0x20
    NSMutableArray *_setupHandlers;	// 40 = 0x28
    NSHashTable *_registrationListeners;	// 48 = 0x30
    IDSRegistrationPushHandler *_pushHandler;	// 56 = 0x38
    NSDate *_dateOfLastHandlesCheck;	// 64 = 0x40
    NSMutableSet *_localServices;	// 72 = 0x48
    unsigned int _disabledAutomatically:1;	// 80 = 0x50
    unsigned int _duringInit:1;	// 80 = 0x50
    unsigned int _shouldRequeryHandles:1;	// 80 = 0x50
    unsigned int _issuingDependentCheck:1;	// 80 = 0x50
    unsigned int _issuingHandlesCheck:1;	// 80 = 0x50
    unsigned int _pendingDependentCheck:1;	// 80 = 0x50
    unsigned int _pendingHandlesCheck:1;	// 80 = 0x50
    unsigned int _pendingReIdentify:1;	// 80 = 0x50
    unsigned int _pendingReRegister:1;	// 81 = 0x51
    unsigned int _isRegistrationActive:1;	// 81 = 0x51
    unsigned int _pendingAccountInfoBroadcast:1;	// 81 = 0x51
    unsigned int _isBeingRemoved:1;	// 81 = 0x51
    _Bool _isIssuingDependentCheck;	// 82 = 0x52
    CUTDeferredTaskQueue *_broadcastAccountInfoChangedTask;	// 88 = 0x58
}

+ (_Bool)dependentRegistration:(id)arg1 hasDependentRegistrationWithURI:(id)arg2 token:(id)arg3;	// IMP=0x0020000000272e90
+ (void)dependentRegistration:(id)arg1 findDeviceUniqueID:(id *)arg2 btID:(id *)arg3 forURI:(id)arg4 token:(id)arg5 supportsLiveDelivery:(_Bool *)arg6;	// IMP=0x0010000000271f80
+ (void)sendMessageWithSendParameters:(id)arg1 service:(id)arg2 threadContext:(id)arg3 willSendBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000507700
+ (void)_sendLocallyWithSendParameters:(id)arg1 service:(id)arg2 uriToLocalDestination:(id)arg3 data:(id)arg4 protobuf:(id)arg5 threadContext:(id)arg6 progressBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x0010000000502110
+ (void)_splitDestinations:(id)arg1 intoLocalDestinations:(id *)arg2 remoteDestinations:(id *)arg3 threadContext:(id)arg4 sendParameters:(id)arg5;	// IMP=0x00100000004fd610
- (void).cxx_destruct;	// IMP=0x00100000002813d0
@property(readonly, nonatomic) CUTDeferredTaskQueue *broadcastAccountInfoChangedTask; // @synthesize broadcastAccountInfoChangedTask=_broadcastAccountInfoChangedTask;
@property(nonatomic) _Bool isBeingRemoved; // @synthesize isBeingRemoved=_isBeingRemoved;
@property(readonly, nonatomic) _Bool isIssuingDependentCheck; // @synthesize isIssuingDependentCheck=_isIssuingDependentCheck;
@property(nonatomic) _Bool pendingDependentCheck; // @synthesize pendingDependentCheck=_pendingDependentCheck;
@property(nonatomic) _Bool wasDisabledAutomatically; // @synthesize wasDisabledAutomatically=_disabledAutomatically;
@property(readonly, nonatomic) NSDictionary *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(readonly, nonatomic) IDSRegistration *registration; // @synthesize registration=_registrationInfo;
- (void)didUpdateProtocolForPairedDevice:(id)arg1;	// IMP=0x0010000000280e00
- (void)didUpdatePairedDevice:(id)arg1;	// IMP=0x00100000002808d0
- (void)didRemovePairedDevice:(id)arg1;	// IMP=0x0010000000280380
- (void)didAddPairedDevice:(id)arg1;	// IMP=0x00100000002802d0
- (void)_notifyDelegatesAddedLocalDevice:(id)arg1;	// IMP=0x001000000027fd00
- (void)_notifyClientDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027fb90
@property(readonly, retain, nonatomic) NSDictionary *accountSetupInfo;
- (id)smallDescription;	// IMP=0x001000000027f810
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *linkedAccounts;
- (id)adHocAccounts;	// IMP=0x001000000027e590
- (_Bool)forEachAdhocAccount:(CDUnknownBlockType)arg1;	// IMP=0x001000000027d7a0
- (id)accountAndAdHocAccounts;	// IMP=0x001000000027d6e0
- (void)_updateAccountWithAccountInfo:(id)arg1;	// IMP=0x001000000027c930
- (void)writeAccountDefaults:(id)arg1;	// IMP=0x001000000027c8d0
- (void)_writeAccountDefaults:(id)arg1 force:(_Bool)arg2 interestedSubservices:(id)arg3;	// IMP=0x001000000027b680
- (void)_writeAccountDefaults:(id)arg1 force:(_Bool)arg2;	// IMP=0x001000000027b610
- (void)_broadcastAccountInfoChanged;	// IMP=0x001000000027b380
- (void)_notifyListenersWithChanges:(id)arg1;	// IMP=0x0010000000279ae0
- (void)_broadcastAccountMessageBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000279890
- (_Bool)isAdHocAccount;	// IMP=0x0010000000279800
- (id)primaryServiceName;	// IMP=0x0010000000279720
@property(readonly, nonatomic) IDSRegistration *primaryRegistration;
- (id)primaryAccountUniqueID;	// IMP=0x0010000000279580
- (id)primaryAccount;	// IMP=0x00100000002794c0
@property(readonly, nonatomic) long long lastRegistrationFailureError;
@property(readonly, nonatomic) NSDate *lastRegistrationFailureDate;
@property(readonly, nonatomic) NSDate *lastRegistrationSuccessDate;
@property(readonly, nonatomic) NSDate *lastGDRDate;
- (id)dependentRegistrationMatchingUUID:(id)arg1;	// IMP=0x00100000002792e0
- (id)dependentRegistrationMatchingUUID:(id)arg1 includingTinker:(_Bool)arg2;	// IMP=0x0010000000278ec0
@property(readonly, nonatomic) NSArray *registeredDevices;
@property(readonly, nonatomic) NSArray *dependentRegistrationsIncludingCurrentDevice;
- (id)dependentRegistrationsIncludingTinker:(_Bool)arg1;	// IMP=0x0010000000278b60
@property(readonly, nonatomic) NSArray *dependentRegistrations;
- (id)_dependentRegistrationsForDefaultPairedDevice:(_Bool)arg1 includingCurrentDevice:(_Bool)arg2 includingTinker:(_Bool)arg3;	// IMP=0x00100000002766f0
- (id)_dependentRegistrationsForDefaultPairedDevice:(_Bool)arg1 includingTinker:(_Bool)arg2;	// IMP=0x0010000000276670
@property(readonly, nonatomic) IDSDAccount *superAccount;
@property(readonly, nonatomic) NSDictionary *defaultPairedDependentRegistration;
- (id)defaultPairedDependentRegistrationIncludingTinker:(_Bool)arg1;	// IMP=0x0010000000275ab0
- (id)_fromIDFromDevice:(id)arg1 withCBUUID:(id)arg2 uniqueID:(id)arg3;	// IMP=0x00100000002752f0
- (id)fromIDForCBUUID:(id)arg1 deviceID:(id)arg2;	// IMP=0x0010000000273b70
- (_Bool)hasDependentRegistrationWithURI:(id)arg1 token:(id)arg2;	// IMP=0x0010000000273920
- (void)findDeviceUniqueID:(id *)arg1 btID:(id *)arg2 forURI:(id)arg3 token:(id)arg4 supportsLiveDelivery:(_Bool *)arg5;	// IMP=0x00100000002728e0
@property(readonly, nonatomic) _Bool isUsableForSending;
@property(readonly, nonatomic) _Bool hasEverRegistered;
- (id)_certForFromURI:(id)arg1;	// IMP=0x0010000000271bd0
- (_Bool)hasVettedAliasURI:(id)arg1;	// IMP=0x0010000000271b10
- (_Bool)hasAliasURI:(id)arg1;	// IMP=0x0010000000271a10
@property(readonly, nonatomic) NSArray *uris;
@property(readonly, nonatomic) NSArray *aliasStrings;
- (void)setupAccountWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000270f60
@property(readonly, nonatomic) _Bool isEnabled;
@property(readonly, nonatomic) _Bool shouldRegisterUsingDSHandle;
@property(readonly, nonatomic) _Bool shouldAutoRegisterAllHandles;
@property(readonly, nonatomic) _Bool isRegistered;
- (void)authenticationChanged;	// IMP=0x0010000000270d80
@property(retain, nonatomic) NSDate *expirationDate;
@property(nonatomic) _Bool isTemporary;
@property(readonly, nonatomic) int manateeRetryCount;
@property(readonly, nonatomic) _Bool shouldRegisterOnManateeAvailability;
@property(readonly, nonatomic) long long registrationError;
@property(readonly, nonatomic) int registrationErrorReason;
@property(readonly, nonatomic) int registrationStatus;
@property(retain, nonatomic) NSString *loginID;
@property(readonly, nonatomic) NSString *dsID;
@property(readonly, nonatomic) NSString *dsHandle;
@property(readonly, nonatomic) int accountType;
@property(nonatomic) _Bool isUserDisabled;
- (void)clearDisplayName;	// IMP=0x001000000026fab0
@property(retain, nonatomic) NSString *displayName;
@property(retain, nonatomic) IDSGameCenterData *gameCenterData;
@property(retain, nonatomic) NSString *userUniqueIdentifier;
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) IDSServiceProperties *service;
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000026eec0
- (void)dealloc;	// IMP=0x001000000026ea40
- (void)cleanupAccount;	// IMP=0x001000000026ea10
- (id)initWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5;	// IMP=0x001000000026e8d0
- (id)initAdHocAccountWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5 primaryAccount:(id)arg6;	// IMP=0x001000000026e770
- (id)_initWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5 primaryAccount:(id)arg6 isAdHocAccount:(_Bool)arg7;	// IMP=0x001000000026db70
- (id)initWithDictionary:(id)arg1 service:(id)arg2 uniqueID:(id)arg3;	// IMP=0x001000000026d050
- (void)_setupAccount;	// IMP=0x001000000026bae0
- (void)_resetVariables;	// IMP=0x001000000026ba50
- (void)_cleanupAccount;	// IMP=0x0010000000269080
- (void)_notifyRegistrationListenersAccountDidUpdateRegisteredDevices;	// IMP=0x0010000000361570
- (void)removeRegistrationListener:(id)arg1;	// IMP=0x00100000003614c0
- (void)addRegistrationListener:(id)arg1;	// IMP=0x0010000000361400
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x0010000000360ea0
- (id)pushHandler;	// IMP=0x0010000000360e70
- (id)serviceType;	// IMP=0x0010000000360e10
- (void)reportSpamMessage:(id)arg1 toURI:(id)arg2;	// IMP=0x0010000000360d20
- (void)reportAction:(long long)arg1 ofTempURI:(id)arg2 fromURI:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000360c30
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 isJunked:(_Bool)arg4 messageServerTimestamp:(id)arg5 toURI:(id)arg6;	// IMP=0x0010000000360ad0
- (void)reportSpamWithMessages:(id)arg1 toURI:(id)arg2;	// IMP=0x0010000000360a10
- (long long)validationStatusForAlias:(id)arg1;	// IMP=0x00100000003609b0
- (id)aliases;	// IMP=0x0010000000360980
- (double)_maxSelectedButVettedGracePeriod;	// IMP=0x0010000000360620
- (id)_allUserIntentWithDefaultReason:(_Bool)arg1;	// IMP=0x001000000035fa80
- (void)_stopTrackingUserIntentOfAlias:(id)arg1;	// IMP=0x001000000035f720
- (void)_setUserIntentState:(unsigned char)arg1 forAlias:(id)arg2 withReason:(unsigned char)arg3;	// IMP=0x001000000035f000
- (id)_userIntentDictForAlias:(id)arg1;	// IMP=0x001000000035eb50
- (unsigned char)unselectReasonForAlias:(id)arg1;	// IMP=0x001000000035ea10
- (void)loadAliasUserIntentMetadataIfNeeded;	// IMP=0x001000000035e9d0
- (unsigned char)currentAliasState:(id)arg1;	// IMP=0x001000000035e910
- (_Bool)wasRecentlySelectedAlias:(id)arg1;	// IMP=0x001000000035e8a0
- (void)markAsWasSelectedAlias:(id)arg1;	// IMP=0x001000000035e840
- (void)markAsVettedAlias:(id)arg1;	// IMP=0x001000000035e790
- (void)markAsUnvettedAlias:(id)arg1;	// IMP=0x001000000035e6e0
- (void)markAsUnselectedAlias:(id)arg1 withReason:(unsigned char)arg2;	// IMP=0x001000000035e670
- (void)markAsSelectedAlias:(id)arg1;	// IMP=0x001000000035e610
- (MISSING_TYPE *)invisibleAliases;	// IMP=0x001000000035e590
- (id)vettedAliases;	// IMP=0x001000000035e510
- (void)reIdentify;	// IMP=0x001000000035e4e0
- (void)reregister;	// IMP=0x001000000035e4b0
- (void)_refreshRegistration;	// IMP=0x001000000035e0d0
- (void)validateProfile;	// IMP=0x001000000035d780
- (void)_handleKTOptInStatusUpdateError:(long long)arg1;	// IMP=0x001000000035d6e0
- (_Bool)updateKTOptInStatus:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035d1c0
@property(readonly, nonatomic) NSDictionary *pseudonymURIMap;
@property(readonly, nonatomic) NSArray *pseudonyms;
- (id)pseudonymForPseudonymURIString:(id)arg1;	// IMP=0x001000000035be80
- (void)_removePseudonyms:(id)arg1;	// IMP=0x001000000035b5b0
- (void)_removePseudonym:(id)arg1;	// IMP=0x001000000035b4e0
- (void)_addPseudonym:(id)arg1;	// IMP=0x001000000035aa60
- (void)_removeAllPseudonyms;	// IMP=0x001000000035a980
- (_Bool)revokePseudonym:(id)arg1 requestProperties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000035a2b0
- (_Bool)renewPseudonym:(id)arg1 forUpdatedExpiryEpoch:(double)arg2 requestProperties:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000359c40
- (_Bool)provisionPseudonymForURI:(id)arg1 properties:(id)arg2 requestProperties:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000359290
- (void)_handlePseudonymProvisionError:(long long)arg1;	// IMP=0x0010000000359170
- (void)refreshVettedAliases;	// IMP=0x0010000000358fa0
- (void)validateCredentialsWithDeliveryCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000358ef0
- (void)deactivateAndPurgeIdentify;	// IMP=0x0010000000358830
- (void)unvalidateAliases:(id)arg1;	// IMP=0x0010000000358250
- (void)_unvalidateAliases:(id)arg1;	// IMP=0x0010000000357530
- (void)validateAliases:(id)arg1;	// IMP=0x0010000000356f50
- (void)_validateAliases:(id)arg1;	// IMP=0x0010000000356940
- (void)_validateAliases:(id)arg1 validateAlreadyValid:(_Bool)arg2;	// IMP=0x00100000003553c0
- (void)addAliases:(id)arg1;	// IMP=0x0010000000355240
- (void)_addAliases:(id)arg1;	// IMP=0x0010000000354470
- (void)removeAliases:(id)arg1;	// IMP=0x0010000000354340
- (void)_removeAliases:(id)arg1 withReason:(unsigned char)arg2;	// IMP=0x0010000000353350
- (void)_setValidationStatus:(long long)arg1 error:(int)arg2 forAlias:(id)arg3 info:(id)arg4 addToCurrentHandlesIfNeeded:(_Bool)arg5 forceAdd:(_Bool)arg6;	// IMP=0x0010000000353270
- (void)_setValidationStatus:(long long)arg1 error:(int)arg2 forAlias:(id)arg3 info:(id)arg4 addToCurrentHandlesIfNeeded:(_Bool)arg5 forceAdd:(_Bool)arg6 aliasProperties:(id)arg7;	// IMP=0x0010000000352b10
- (long long)_validationStatusForAlias:(id)arg1;	// IMP=0x00100000003526e0
- (id)_aliases;	// IMP=0x0010000000352580
- (id)_aliasStrings;	// IMP=0x0010000000352270
- (void)_ignoreIncomingPushes;	// IMP=0x0010000000352230
- (void)_acceptIncomingPushes;	// IMP=0x00100000003521f0
- (void)center:(id)arg1 failedRegionValidation:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x00100000003518a0
- (void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(_Bool)arg6;	// IMP=0x0010000000350d10
- (void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;	// IMP=0x00100000003505d0
- (void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000034fc00
- (void)center:(id)arg1 succeededAuthentication:(id)arg2;	// IMP=0x001000000034f370
- (void)center:(id)arg1 startedAuthenticating:(id)arg2;	// IMP=0x001000000034ed90
- (void)registrationControllerNeedsNewRegistration:(id)arg1;	// IMP=0x001000000034ea30
- (void)registrationController:(id)arg1 deregistrationSucceeded:(id)arg2;	// IMP=0x001000000034e3b0
- (void)registrationController:(id)arg1 deregistrationWillStart:(id)arg2;	// IMP=0x001000000034deb0
- (void)registrationController:(id)arg1 registrationFailed:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000034b610
- (void)registrationController:(id)arg1 registrationSucceeded:(id)arg2;	// IMP=0x00100000003494a0
- (void)registrationController:(id)arg1 registrationUpdated:(id)arg2;	// IMP=0x0010000000348ec0
- (void)registrationController:(id)arg1 registrationWillStart:(id)arg2;	// IMP=0x00100000003488a0
- (void)centerNeedsNewIdentification:(id)arg1;	// IMP=0x0010000000348860
- (void)center:(id)arg1 failedIdentification:(id)arg2 error:(long long)arg3;	// IMP=0x00100000003487e0
- (void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4;	// IMP=0x00100000003483e0
- (unsigned long long)_unregistered130RetryInterval;	// IMP=0x00100000003483b0
- (void)_updateSessionsWithRegisteredURIs:(id)arg1 retryIfNotRegistered:(_Bool)arg2;	// IMP=0x0010000000347790
- (void)_updateSessionsWithRegisteredURIs:(id)arg1;	// IMP=0x0010000000347730
- (void)_updateSessionsForAllRegisteredURIs;	// IMP=0x00100000003476b0
- (void)_flushTokensForRegisteredURIs:(id)arg1;	// IMP=0x0010000000346ed0
- (void)_processReceivedDependentRegistration:(id)arg1 oldDependentRegistrations:(id)arg2;	// IMP=0x0010000000345a00
- (void)_issueDependentCheck;	// IMP=0x00100000003440f0
- (void)_issueCriticalDependentCheck;	// IMP=0x00100000003440b0
- (_Bool)_issueForcedDependentCheckIfPossible;	// IMP=0x0010000000344020
- (void)_saveAndNotifyGDRUpdate;	// IMP=0x00100000003437e0
- (void)_notifyListenersAndSetDependentRegistrations:(id)arg1 onRegistrationInfo:(id)arg2;	// IMP=0x0010000000343440
- (void)gdrReAuthenticateIfNecessary;	// IMP=0x0010000000342b90
- (void)_clearGDRState;	// IMP=0x0010000000342a40
- (void)handler:(id)arg1 flushCacheForURIs:(id)arg2;	// IMP=0x0010000000342490
- (void)handler:(id)arg1 profileHandlesUpdated:(id)arg2 status:(id)arg3 allowGDR:(id)arg4;	// IMP=0x0010000000341120
- (void)handler:(id)arg1 profile:(id)arg2 deviceUpdated:(id)arg3 service:(id)arg4;	// IMP=0x001000000033faf0
- (void)_updateHandles:(_Bool)arg1;	// IMP=0x001000000033ea70
- (void)_parseHandlesInfo:(id)arg1 currentAliases:(id)arg2 currentVettedAliases:(id)arg3;	// IMP=0x001000000033b7a0
- (void)handler:(id)arg1 reloadBag:(id)arg2;	// IMP=0x001000000033ab00
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;	// IMP=0x001000000033a100
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;	// IMP=0x00100000003397e0
- (void)passwordUpdated;	// IMP=0x0010000000339040
- (void)unregisterAccount;	// IMP=0x0010000000338ab0
- (void)_unregisterAccount;	// IMP=0x0010000000338130
- (void)registerAccount;	// IMP=0x0010000000337cc0
- (void)_registerAccount;	// IMP=0x0010000000336600
- (_Bool)_migrateRegistrationIfNeeded;	// IMP=0x00100000003358b0
- (void)_retryRegister;	// IMP=0x0010000000335630
- (void)authenticateAccount;	// IMP=0x00100000003350a0
- (_Bool)_isPasswordPromptPermissibleDuringAuthentication;	// IMP=0x0010000000334f60
- (void)_authenticateAccount;	// IMP=0x0010000000334540
- (void)deactivateRegistration;	// IMP=0x0010000000333720
- (void)activateRegistration;	// IMP=0x0010000000331c50
- (void)systemRestoreStateDidChange;	// IMP=0x00100000003319f0
- (void)systemDidStartBackup;	// IMP=0x0010000000331900
- (void)systemDidFinishMigration;	// IMP=0x0010000000331820
- (void)_reregister;	// IMP=0x00100000003317f0
- (void)_reregisterAndReidentify:(_Bool)arg1;	// IMP=0x0010000000330e00
- (void)_removeAuthenticationCredentialsIncludingAuthToken:(_Bool)arg1;	// IMP=0x00100000003306a0
- (void)_removeAuthenticationCredentials;	// IMP=0x0010000000330670
- (void)_reregisterAndReProvision;	// IMP=0x00100000003300c0
- (void)_reAuthenticate;	// IMP=0x0010000000330030
- (_Bool)_stopRegistrationAgent;	// IMP=0x001000000032fd70
- (void)_updateRegistrationStatusWithError:(long long)arg1 info:(id)arg2;	// IMP=0x001000000032db70
- (void)setRegistrationStatus:(int)arg1 error:(long long)arg2 alertInfo:(id)arg3;	// IMP=0x001000000032d480
- (void)_checkRegistration;	// IMP=0x001000000032bab0
- (void)_updateVettedAliases:(id)arg1 emailInfo:(id)arg2 addToCurrentHandlesIfNeeded:(_Bool)arg3;	// IMP=0x001000000032ac90
- (void)_updatePseudonymsFromEmailInfo:(id)arg1;	// IMP=0x0010000000329fe0
- (void)_keychainMigrationComplete:(id)arg1;	// IMP=0x0010000000329870
- (void)_needsEncryptionIdentityRoll:(id)arg1;	// IMP=0x0010000000329750
- (void)_identityGenerated:(id)arg1;	// IMP=0x0010000000329630
- (void)_identityRebuilt:(id)arg1;	// IMP=0x0010000000329510
- (void)_deregisterDeviceCenterNotifications;	// IMP=0x0010000000329370
- (void)_registerForDeviceCenterNotifications;	// IMP=0x0010000000329190
- (void)_registrationAbilityChanged:(id)arg1;	// IMP=0x0010000000328ed0
- (_Bool)isRegistrationActive;	// IMP=0x0010000000328ea0
- (_Bool)isDeviceAuthenticated;	// IMP=0x0010000000328e40
- (_Bool)isDeviceRegistered;	// IMP=0x0010000000328d40
- (void)refreshAdHocServiceNames;	// IMP=0x0010000000328510
- (_Bool)_rebuildRegistrationInfo:(_Bool)arg1;	// IMP=0x0010000000323730
- (int)_neededRegistrationType;	// IMP=0x00100000003236a0
- (void)_updateCallerIDToTemporaryPhone;	// IMP=0x0010000000323290
- (void)_updatePhoneNumberCallerID;	// IMP=0x0010000000322a70
- (_Bool)_hasBudgetForForcedGDR;	// IMP=0x0010000000322300
- (void)_updatePerformedForcedGDRDate;	// IMP=0x0010000000322160
- (id)_performedForcedGDRDatePeriod;	// IMP=0x0010000000321fd0
- (void)_clearForcedGDRDate;	// IMP=0x0010000000321f70
- (void)_clearForcedGDRCount;	// IMP=0x0010000000321f10
- (void)_incrementForcedGDRCount;	// IMP=0x0010000000321e60
- (int)_currentForcedGDRCount;	// IMP=0x0010000000321dd0
- (_Bool)_isBuddyShowing;	// IMP=0x0010000000321da0
- (id)userDefaults;	// IMP=0x0010000000321d70
- (id)systemMonitor;	// IMP=0x0010000000321d40
- (id)peerIDManager;	// IMP=0x0010000000321d10
- (id)serviceController;	// IMP=0x0010000000321ce0
- (id)accountController;	// IMP=0x0010000000321cb0
- (id)appleIDNotificationCenter;	// IMP=0x0010000000321c80
- (id)registrationCenter;	// IMP=0x0010000000321c50
- (_Bool)shouldIncludeDefaultDeviceAsDestinationForMessageForFromID:(id)arg1;	// IMP=0x001000000052de60
- (id)pairingManager;	// IMP=0x001000000052de30
- (void)decryptMessageData:(id)arg1 myURI:(id)arg2 fromURI:(id)arg3 token:(id)arg4 groupID:(id)arg5 encryptionType:(long long)arg6 isLiveRetry:(_Bool)arg7 replayKey:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;	// IMP=0x001000000052d090
- (void)sendMessage:(id)arg1 params:(id)arg2 bulkedPayload:(id)arg3 fromID:(id)arg4 toDestinations:(id)arg5 useDictAsTopLevel:(_Bool)arg6 dataToEncrypt:(id)arg7 encryptPayload:(_Bool)arg8 wantsResponse:(_Bool)arg9 expirationDate:(id)arg10 command:(id)arg11 wantsDeliveryStatus:(_Bool)arg12 wantsCertifiedDelivery:(_Bool)arg13 deliveryStatusContext:(id)arg14 messageUUID:(id)arg15 priority:(long long)arg16 localDelivery:(_Bool)arg17 disallowRefresh:(_Bool)arg18 willSendBlock:(CDUnknownBlockType)arg19 completionBlock:(CDUnknownBlockType)arg20;	// IMP=0x001000000052c7c0
- (void)sendMessageWithSendParameters:(id)arg1 willSendBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000526a10
- (void)_rapportSendWithSendParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000005264d0
- (void)_sendRemotelyWithSendParameters:(id)arg1 data:(id)arg2 protobuf:(id)arg3 willSendBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000051d1f0
- (void)_sendLocallyWithSendParameters:(id)arg1 uriToLocalDestination:(id)arg2 data:(id)arg3 protobuf:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000518400
- (id)utunDeliveryController;	// IMP=0x00100000005183d0
- (void)_splitDestinations:(id)arg1 intoLocalDestinations:(id *)arg2 remoteDestinations:(id *)arg3 rapportDestinations:(id *)arg4 sendParameters:(id)arg5;	// IMP=0x00100000005134f0
- (void)sendServerMessage:(id)arg1 command:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000512b00
- (void)_sendMessageWithSendParametersOnMainThread:(id)arg1 filteredDestinations:(id)arg2 data:(id)arg3 compressedData:(id)arg4 protobufToSend:(id)arg5 willSendBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00100000005103f0
- (id)newSendMessageContext;	// IMP=0x001000000050fb70
- (long long)maxRemoteMessagingPayloadSize;	// IMP=0x001000000050fad0

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

