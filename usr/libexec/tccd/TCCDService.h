//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSBundle, NSDictionary, NSNumber, NSSet, NSString, NSURL, TCCDAlertManager;

@interface TCCDService : NSObject
{
    _Bool _shouldTreatAsDeprecated;	// 8 = 0x8
    _Bool _mdm_isAuthorizationDenyOnly;	// 9 = 0x9
    _Bool _mdm_macos_allowedInPayloadDefition;	// 10 = 0xa
    _Bool _mdm_allowStandardUserToSetSystemService;	// 11 = 0xb
    _Bool _shouldUseADefaultDescriptionString;	// 12 = 0xc
    _Bool _shouldIssueSandboxExtension;	// 13 = 0xd
    _Bool _ios_useGenericSandboxExtension;	// 14 = 0xe
    _Bool _isRevocable;	// 15 = 0xf
    _Bool _isAccessAllowedByDefault;	// 16 = 0x10
    _Bool _isAccessDeniedByDefault;	// 17 = 0x11
    _Bool _allowPromptForPlatformBinaries;	// 18 = 0x12
    _Bool _shouldAllowUnrestrictedCheckAuditToken;	// 19 = 0x13
    _Bool _hasParanoidSecurityPolicy;	// 20 = 0x14
    _Bool _doNotStoreDefaultAllowAccess;	// 21 = 0x15
    _Bool _expireOnlyAllowedEntries;	// 22 = 0x16
    _Bool _saveExpiredEntries;	// 23 = 0x17
    _Bool _applyDevelopmentAuthorizationPolicy;	// 24 = 0x18
    _Bool _checkAllowEntitlementOnResponsibleProcess;	// 25 = 0x19
    _Bool _upgradeV1AuthorizationValue;	// 26 = 0x1a
    _Bool _ios_allowPromptFromAppClip;	// 27 = 0x1b
    _Bool _ios_allowRegionalPrompt;	// 28 = 0x1c
    _Bool _allowedForAvocadoWidget;	// 29 = 0x1d
    _Bool _macos_pardonMissingUsage;	// 30 = 0x1e
    _Bool _macos_isPerSystem;	// 31 = 0x1f
    _Bool _macos_compositionPromoteChildAuthorizationToParent;	// 32 = 0x20
    _Bool _macos_hasIndirectObject;	// 33 = 0x21
    _Bool _macos_shouldAllowSameTeam;	// 34 = 0x22
    NSDictionary *_platformAvailability;	// 40 = 0x28
    NSSet *_validOnPlatformNames;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    NSString *_externalName;	// 64 = 0x40
    NSString *_usageDescriptionKeyName;	// 72 = 0x48
    NSString *_secondaryUsageDescriptionKeyName;	// 80 = 0x50
    NSArray *_disallowedOnPlatformSubtypeNameList;	// 88 = 0x58
    long long _alertStyle;	// 96 = 0x60
    NSURL *_notificationActionURL;	// 104 = 0x68
    NSString *_sandboxOperationForDelegation;	// 112 = 0x70
    NSArray *_defaultAllowedPlatformIdentifiersList;	// 120 = 0x78
    NSNumber *_expirySeconds;	// 128 = 0x80
    long long _defaultDevelopmentAuthorizationValue;	// 136 = 0x88
    TCCDAlertManager *_alertManager;	// 144 = 0x90
    unsigned long long _authorizationValueType;	// 152 = 0x98
    unsigned long long _authorizationRightsMask;	// 160 = 0xa0
    unsigned long long _authorizationVersionNumber;	// 168 = 0xa8
    NSString *_localizedResourcesBundlePath;	// 176 = 0xb0
    NSBundle *_localizedResourcesBundle;	// 184 = 0xb8
    NSBundle *_defaultLocalizedResourcesBundle;	// 192 = 0xc0
    NSString *_allowAuthorizationButtonTitleLocalizationKey;	// 200 = 0xc8
    NSString *_denyAuthorizationButtonTitleLocalizationKey;	// 208 = 0xd0
    NSString *_limitedAuthorizationButtonTitleLocalizationKey;	// 216 = 0xd8
    NSString *_subsequentRequestAllowAuthorizationButtonTitleLocalizationKey;	// 224 = 0xe0
    NSString *_subsequentRequestDenyAuthorizationButtonTitleLocalizationKey;	// 232 = 0xe8
    NSString *_subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey;	// 240 = 0xf0
    NSString *_requestTitleTextLocalizationKey;	// 248 = 0xf8
    NSString *_requestTitleTextAfterV2UpgradeLocalizationKey;	// 256 = 0x100
    NSString *_requestTitleTextForSubsequentRequestsKey;	// 264 = 0x108
    NSString *_requestAdditionalTextLocalizationKey;	// 272 = 0x110
    NSString *_requestAdditionalTextAfterV2UpgradeLocalizationKey;	// 280 = 0x118
    NSString *_requestAdditionalTextForSubsequentRequestsLocalizationKey;	// 288 = 0x120
    TCCDService *_subsequentRequestStringsRelatedService;	// 296 = 0x128
    NSString *_notificationTitleTextLocalizationKey;	// 304 = 0x130
    NSString *_notificationButtonTitleLocalizationKey;	// 312 = 0x138
    NSNumber *_ios_watchKitUserNotificationNumber;	// 320 = 0x140
    NSNumber *_iOS_minimumSDKVersionNumber;	// 328 = 0x148
    NSNumber *_watchOS_minimumSDKVersionNumber;	// 336 = 0x150
    NSNumber *_tvOS_minimumSDKVersionNumber;	// 344 = 0x158
    NSNumber *_macos_minimumSDKVersionNumber;	// 352 = 0x160
    NSString *_macos_helpAnchor;	// 360 = 0x168
    TCCDService *_macos_compositionChildService;	// 368 = 0x170
    TCCDService *_macos_compositionParentService;	// 376 = 0x178
    NSString *_macos_hardenedRuntimeEntitlementName;	// 384 = 0x180
    long long _macos_AXControlComputerAccessType;	// 392 = 0x188
}

+ (id)defaultLocalizedResourcesBundlePath;	// IMP=0x004000000002c3cf
+ (id)requestDenyNotificationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002b055
+ (id)requestDenyNotificationTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002b039
+ (id)subsequentRequestLimitedAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002b01d
+ (id)subsequentRequestDenyAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002b001
+ (id)subsequentRequestAllowAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002afe5
+ (id)requestLimitedAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002afc9
+ (id)requestDenyAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002afad
+ (id)requestAllowAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002af91
+ (id)requestAdditionalTextForSubsequentRequestsKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002af75
+ (id)requestAdditionalTextAfterV2UpgradeLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002af59
+ (id)requestAdditionalTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002af3d
+ (id)requestTitleTextForSubsequentRequestsLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002af21
+ (MISSING_TYPE *)requestTitleTextAfterV2UpgradeLocalizationKeyNameForServiceName: /* Error: Ran out of types for this method. */;	// IMP=0x001000000002af05
+ (id)requestTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x001000000002aee9
+ (id)localizationKeyName:(id)arg1 forServiceName:(id)arg2;	// IMP=0x001000000002aec1
+ (id)versionStringFromDYLDVersionNumber:(id)arg1;	// IMP=0x001000000002ae49
+ (id)tccdPlatformNameForDYLDPlatformName:(id)arg1;	// IMP=0x001000000002ad83
+ (id)serviceDescriptionsForPlatformName:(id)arg1;	// IMP=0x001000000002aa3d
+ (id)serviceAll;	// IMP=0x001000000002a9bb
+ (id)allServices;	// IMP=0x001000000002742a
- (void).cxx_destruct;	// IMP=0x002000000002ce0d
@property(nonatomic) long long macos_AXControlComputerAccessType; // @synthesize macos_AXControlComputerAccessType=_macos_AXControlComputerAccessType;
@property(retain, nonatomic) NSString *macos_hardenedRuntimeEntitlementName; // @synthesize macos_hardenedRuntimeEntitlementName=_macos_hardenedRuntimeEntitlementName;
@property(nonatomic) _Bool macos_shouldAllowSameTeam; // @synthesize macos_shouldAllowSameTeam=_macos_shouldAllowSameTeam;
@property(nonatomic) _Bool macos_hasIndirectObject; // @synthesize macos_hasIndirectObject=_macos_hasIndirectObject;
@property(nonatomic) __weak TCCDService *macos_compositionParentService; // @synthesize macos_compositionParentService=_macos_compositionParentService;
@property(nonatomic) _Bool macos_compositionPromoteChildAuthorizationToParent; // @synthesize macos_compositionPromoteChildAuthorizationToParent=_macos_compositionPromoteChildAuthorizationToParent;
@property(nonatomic) __weak TCCDService *macos_compositionChildService; // @synthesize macos_compositionChildService=_macos_compositionChildService;
@property(nonatomic) _Bool macos_isPerSystem; // @synthesize macos_isPerSystem=_macos_isPerSystem;
@property(retain, nonatomic) NSString *macos_helpAnchor; // @synthesize macos_helpAnchor=_macos_helpAnchor;
@property(nonatomic) _Bool macos_pardonMissingUsage; // @synthesize macos_pardonMissingUsage=_macos_pardonMissingUsage;
@property(retain, nonatomic) NSNumber *macos_minimumSDKVersionNumber; // @synthesize macos_minimumSDKVersionNumber=_macos_minimumSDKVersionNumber;
@property(nonatomic) _Bool allowedForAvocadoWidget; // @synthesize allowedForAvocadoWidget=_allowedForAvocadoWidget;
@property(nonatomic) _Bool ios_allowRegionalPrompt; // @synthesize ios_allowRegionalPrompt=_ios_allowRegionalPrompt;
@property(nonatomic) _Bool ios_allowPromptFromAppClip; // @synthesize ios_allowPromptFromAppClip=_ios_allowPromptFromAppClip;
@property(retain, nonatomic) NSNumber *tvOS_minimumSDKVersionNumber; // @synthesize tvOS_minimumSDKVersionNumber=_tvOS_minimumSDKVersionNumber;
@property(retain, nonatomic) NSNumber *watchOS_minimumSDKVersionNumber; // @synthesize watchOS_minimumSDKVersionNumber=_watchOS_minimumSDKVersionNumber;
@property(retain, nonatomic) NSNumber *iOS_minimumSDKVersionNumber; // @synthesize iOS_minimumSDKVersionNumber=_iOS_minimumSDKVersionNumber;
@property(retain) NSNumber *ios_watchKitUserNotificationNumber; // @synthesize ios_watchKitUserNotificationNumber=_ios_watchKitUserNotificationNumber;
@property(retain, nonatomic) NSString *notificationButtonTitleLocalizationKey; // @synthesize notificationButtonTitleLocalizationKey=_notificationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *notificationTitleTextLocalizationKey; // @synthesize notificationTitleTextLocalizationKey=_notificationTitleTextLocalizationKey;
@property(nonatomic) __weak TCCDService *subsequentRequestStringsRelatedService; // @synthesize subsequentRequestStringsRelatedService=_subsequentRequestStringsRelatedService;
@property(retain, nonatomic) NSString *requestAdditionalTextForSubsequentRequestsLocalizationKey; // @synthesize requestAdditionalTextForSubsequentRequestsLocalizationKey=_requestAdditionalTextForSubsequentRequestsLocalizationKey;
@property(retain, nonatomic) NSString *requestAdditionalTextAfterV2UpgradeLocalizationKey; // @synthesize requestAdditionalTextAfterV2UpgradeLocalizationKey=_requestAdditionalTextAfterV2UpgradeLocalizationKey;
@property(retain, nonatomic) NSString *requestAdditionalTextLocalizationKey; // @synthesize requestAdditionalTextLocalizationKey=_requestAdditionalTextLocalizationKey;
@property(retain, nonatomic) NSString *requestTitleTextForSubsequentRequestsKey; // @synthesize requestTitleTextForSubsequentRequestsKey=_requestTitleTextForSubsequentRequestsKey;
@property(retain, nonatomic) NSString *requestTitleTextAfterV2UpgradeLocalizationKey; // @synthesize requestTitleTextAfterV2UpgradeLocalizationKey=_requestTitleTextAfterV2UpgradeLocalizationKey;
@property(retain, nonatomic) NSString *requestTitleTextLocalizationKey; // @synthesize requestTitleTextLocalizationKey=_requestTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey; // @synthesize subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey=_subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *subsequentRequestDenyAuthorizationButtonTitleLocalizationKey; // @synthesize subsequentRequestDenyAuthorizationButtonTitleLocalizationKey=_subsequentRequestDenyAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *subsequentRequestAllowAuthorizationButtonTitleLocalizationKey; // @synthesize subsequentRequestAllowAuthorizationButtonTitleLocalizationKey=_subsequentRequestAllowAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *limitedAuthorizationButtonTitleLocalizationKey; // @synthesize limitedAuthorizationButtonTitleLocalizationKey=_limitedAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *denyAuthorizationButtonTitleLocalizationKey; // @synthesize denyAuthorizationButtonTitleLocalizationKey=_denyAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *allowAuthorizationButtonTitleLocalizationKey; // @synthesize allowAuthorizationButtonTitleLocalizationKey=_allowAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSBundle *defaultLocalizedResourcesBundle; // @synthesize defaultLocalizedResourcesBundle=_defaultLocalizedResourcesBundle;
@property(retain, nonatomic) NSBundle *localizedResourcesBundle; // @synthesize localizedResourcesBundle=_localizedResourcesBundle;
@property(retain, nonatomic) NSString *localizedResourcesBundlePath; // @synthesize localizedResourcesBundlePath=_localizedResourcesBundlePath;
@property(nonatomic) unsigned long long authorizationVersionNumber; // @synthesize authorizationVersionNumber=_authorizationVersionNumber;
@property(nonatomic) _Bool upgradeV1AuthorizationValue; // @synthesize upgradeV1AuthorizationValue=_upgradeV1AuthorizationValue;
@property(nonatomic) unsigned long long authorizationRightsMask; // @synthesize authorizationRightsMask=_authorizationRightsMask;
@property(nonatomic) unsigned long long authorizationValueType; // @synthesize authorizationValueType=_authorizationValueType;
@property(retain, nonatomic) TCCDAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(nonatomic) _Bool checkAllowEntitlementOnResponsibleProcess; // @synthesize checkAllowEntitlementOnResponsibleProcess=_checkAllowEntitlementOnResponsibleProcess;
@property(nonatomic) long long defaultDevelopmentAuthorizationValue; // @synthesize defaultDevelopmentAuthorizationValue=_defaultDevelopmentAuthorizationValue;
@property(nonatomic) _Bool applyDevelopmentAuthorizationPolicy; // @synthesize applyDevelopmentAuthorizationPolicy=_applyDevelopmentAuthorizationPolicy;
@property(nonatomic) _Bool saveExpiredEntries; // @synthesize saveExpiredEntries=_saveExpiredEntries;
@property(nonatomic) _Bool expireOnlyAllowedEntries; // @synthesize expireOnlyAllowedEntries=_expireOnlyAllowedEntries;
@property(retain, nonatomic) NSNumber *expirySeconds; // @synthesize expirySeconds=_expirySeconds;
@property(nonatomic) _Bool doNotStoreDefaultAllowAccess; // @synthesize doNotStoreDefaultAllowAccess=_doNotStoreDefaultAllowAccess;
@property(retain, nonatomic) NSArray *defaultAllowedPlatformIdentifiersList; // @synthesize defaultAllowedPlatformIdentifiersList=_defaultAllowedPlatformIdentifiersList;
@property(retain, nonatomic) NSString *sandboxOperationForDelegation; // @synthesize sandboxOperationForDelegation=_sandboxOperationForDelegation;
@property(retain, nonatomic) NSURL *notificationActionURL; // @synthesize notificationActionURL=_notificationActionURL;
@property(nonatomic) _Bool hasParanoidSecurityPolicy; // @synthesize hasParanoidSecurityPolicy=_hasParanoidSecurityPolicy;
@property(nonatomic) _Bool shouldAllowUnrestrictedCheckAuditToken; // @synthesize shouldAllowUnrestrictedCheckAuditToken=_shouldAllowUnrestrictedCheckAuditToken;
@property(nonatomic) _Bool allowPromptForPlatformBinaries; // @synthesize allowPromptForPlatformBinaries=_allowPromptForPlatformBinaries;
@property(nonatomic) _Bool isAccessDeniedByDefault; // @synthesize isAccessDeniedByDefault=_isAccessDeniedByDefault;
@property(nonatomic) _Bool isAccessAllowedByDefault; // @synthesize isAccessAllowedByDefault=_isAccessAllowedByDefault;
@property(nonatomic) long long alertStyle; // @synthesize alertStyle=_alertStyle;
@property(nonatomic) _Bool isRevocable; // @synthesize isRevocable=_isRevocable;
@property(nonatomic) _Bool ios_useGenericSandboxExtension; // @synthesize ios_useGenericSandboxExtension=_ios_useGenericSandboxExtension;
@property(nonatomic) _Bool shouldIssueSandboxExtension; // @synthesize shouldIssueSandboxExtension=_shouldIssueSandboxExtension;
@property(retain, nonatomic) NSArray *disallowedOnPlatformSubtypeNameList; // @synthesize disallowedOnPlatformSubtypeNameList=_disallowedOnPlatformSubtypeNameList;
@property(nonatomic) _Bool shouldUseADefaultDescriptionString; // @synthesize shouldUseADefaultDescriptionString=_shouldUseADefaultDescriptionString;
@property(retain, nonatomic) NSString *secondaryUsageDescriptionKeyName; // @synthesize secondaryUsageDescriptionKeyName=_secondaryUsageDescriptionKeyName;
@property(retain, nonatomic) NSString *usageDescriptionKeyName; // @synthesize usageDescriptionKeyName=_usageDescriptionKeyName;
@property(nonatomic) _Bool mdm_allowStandardUserToSetSystemService; // @synthesize mdm_allowStandardUserToSetSystemService=_mdm_allowStandardUserToSetSystemService;
@property(nonatomic) _Bool mdm_macos_allowedInPayloadDefition; // @synthesize mdm_macos_allowedInPayloadDefition=_mdm_macos_allowedInPayloadDefition;
@property(nonatomic) _Bool mdm_isAuthorizationDenyOnly; // @synthesize mdm_isAuthorizationDenyOnly=_mdm_isAuthorizationDenyOnly;
@property(nonatomic) _Bool shouldTreatAsDeprecated; // @synthesize shouldTreatAsDeprecated=_shouldTreatAsDeprecated;
@property(retain, nonatomic) NSString *externalName; // @synthesize externalName=_externalName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSSet *validOnPlatformNames; // @synthesize validOnPlatformNames=_validOnPlatformNames;
@property(retain, nonatomic) NSDictionary *platformAvailability; // @synthesize platformAvailability=_platformAvailability;
- (id)localizedTextWithKey:(id)arg1;	// IMP=0x001000000002c5a0
- (long long)developmentAuthorizationValue;	// IMP=0x001000000002c088
@property(readonly, nonatomic) unsigned long long authorizationPromptRightsMask;
@property(readonly, nonatomic) _Bool pardonMissingUsage;
- (id)descriptionForAuthorizationValue:(unsigned long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x001000000002bfbf
- (id)authorizationRightStateForValue:(unsigned long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x001000000002bf51
- (_Bool)isAuthorizationValue:(unsigned long long)arg1 equalToRight:(unsigned long long)arg2;	// IMP=0x001000000002bf25
- (long long)compare:(id)arg1;	// IMP=0x001000000002be94
- (id)descriptionDictionary;	// IMP=0x001000000002b58c
- (id)description;	// IMP=0x001000000002b57a
- (id)initWithName:(id)arg1 availability:(id)arg2;	// IMP=0x001000000002b071

@end

