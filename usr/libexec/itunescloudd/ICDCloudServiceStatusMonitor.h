//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol NSCopying;

@interface ICDCloudServiceStatusMonitor : NSObject
{
    NSMutableDictionary *_activeObservationTokenToClientConnectionMapping;	// 8 = 0x8
    NSMutableArray *_cancellableCapabilitiesRequestOperations;	// 16 = 0x10
    unsigned long long _capabilities;	// 24 = 0x18
    _Bool _hasValidCapabilities;	// 32 = 0x20
    NSMutableArray *_capabilitiesRequestContexts;	// 40 = 0x28
    unsigned long long _privilegedCapabilities;	// 48 = 0x30
    _Bool _hasValidPrivilegedCapabilities;	// 56 = 0x38
    NSString *_storefrontCountryCode;	// 64 = 0x40
    NSMutableArray *_storefrontCountryCodeRequestCompletionHandlers;	// 72 = 0x48
    NSString *_storefrontIdentifier;	// 80 = 0x50
    NSMutableArray *_storefrontIdentifierRequestCompletionHandlers;	// 88 = 0x58
    id <NSCopying> _bagObservationToken;	// 96 = 0x60
    id <NSCopying> _subscriptionStatusObservationToken;	// 104 = 0x68
    struct os_unfair_lock_s _lock;	// 112 = 0x70
}

+ (id)_requestingBundleIdentifierForOriginatingClientConnection:(id)arg1 clientInfo:(id)arg2 error:(id *)arg3;	// IMP=0x00200000000357f4
+ (id)_clientInfoForUserTokenRequestWithRequestingApplicationBundleIdentifier:(id)arg1;	// IMP=0x00100000000357db
+ (id)_clientInfoForDeveloperTokenRequestWithRequestingApplicationBundleIdentifier:(id)arg1;	// IMP=0x00100000000357b8
+ (_Bool)_shouldBypassEnforcementOfPrivacyAcknowledgementForClientConnection:(id)arg1 forIncomingCloudServiceCapabilitiesRequest:(_Bool)arg2;	// IMP=0x00100000000356a3
+ (_Bool)_isClientAllowedToRequestRestrictedInformationForConnection:(id)arg1;	// IMP=0x0010000000035684
+ (_Bool)_isClientAllowedToRequestCapabilitiesForConnection:(id)arg1;	// IMP=0x0010000000035665
- (void).cxx_destruct;	// IMP=0x0020000000034154
- (void)_updateWithStorefrontIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0010000000033c66
- (void)_updateWithCapabilities:(unsigned long long)arg1 error:(id)arg2 privacyAcknowledgementPolicy:(long long)arg3 capabilitiesRequestOperation:(id)arg4;	// IMP=0x0010000000033396
- (void)_updateWithBag:(id)arg1 error:(id)arg2;	// IMP=0x0010000000032dd1
- (void)_refreshStorefrontIdentifier;	// IMP=0x0010000000032c98
- (void)_refreshStorefrontCountryCode;	// IMP=0x00100000000329f5
- (void)_refreshCapabilitiesWithPrivacyAcknowledgementPolicy:(long long)arg1;	// IMP=0x00100000000327f3
- (void)_refreshCloudServiceStatus;	// IMP=0x00100000000327aa
- (void)_notifyObserversForActiveUserIdentityChanged;	// IMP=0x00100000000325fb
- (void)_endObservingCloudServiceStatus;	// IMP=0x0010000000032349
- (void)_beginObservingCloudServiceStatus;	// IMP=0x0010000000031ff1
- (void)_handleUpdatedSubscriptionStatus:(id)arg1;	// IMP=0x0010000000031f19
- (void)_handleUpdatedBag:(id)arg1;	// IMP=0x0010000000031e2d
- (void)_handleUserIdentityStoreLocalStoreAccountPropertiesDidChangeNotification:(id)arg1;	// IMP=0x0010000000031bee
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x0010000000031af4
- (void)_handleActiveUserIdentityDidChangeNotification:(id)arg1;	// IMP=0x00100000000319e9
- (void)_handleClientConnectionSevered:(id)arg1;	// IMP=0x0010000000031576
- (void)_handleClientConnectionInvalidated:(id)arg1;	// IMP=0x001000000003149d
- (void)_handleClientConnectionInterrupted:(id)arg1;	// IMP=0x00100000000313c4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000310c4
- (void)requestMusicKitTokensWithOptions:(unsigned long long)arg1 clientInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030d19
- (void)requestUserTokenForDeveloperToken:(id)arg1 options:(unsigned long long)arg2 clientInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000309a2
- (void)requestDeveloperTokenWithOptions:(unsigned long long)arg1 clientInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003062d
- (void)requestStorefrontIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000303c4
- (void)requestStorefrontCountryCodeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003015b
- (void)requestCapabilitiesWithPrivacyPromptPolicy:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fe83
- (void)endObservingCloudServiceStatusWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fca7
- (void)beginObservingCloudServiceStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002fb15
- (void)dealloc;	// IMP=0x001000000002fab4
- (id)init;	// IMP=0x001000000002fa57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

