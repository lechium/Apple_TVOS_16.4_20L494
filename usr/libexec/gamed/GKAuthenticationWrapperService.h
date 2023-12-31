//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKService, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GKAuthenticationWrapperService
{
    GKService *_service;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_authQueue;	// 16 = 0x10
    NSDictionary *_signatureLookup;	// 24 = 0x18
}

+ (id)serviceForBundleID:(id)arg1 player:(id)arg2;	// IMP=0x00200000000bbbe8
+ (id)serviceForClient:(id)arg1 player:(id)arg2;	// IMP=0x00100000000bbacf
+ (id)authenticationWrapperForService:(id)arg1;	// IMP=0x00100000000bb9f3
- (void).cxx_destruct;	// IMP=0x00200000000c258c
- (void)forwardInvocation:(id)arg1;	// IMP=0x00100000000c2291
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00100000000c214d
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c1e1e
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000c1a96
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000c124d
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000c0a68
- (oneway void)notifyWidgetPlayerAuthenticationUpdated;	// IMP=0x00100000000c08e2
- (oneway void)getLastContactsIntegrationConsentVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c072e
- (oneway void)setLastContactsIntegrationConsentVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000c057a
- (oneway void)getLastProfilePrivacyVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c03c6
- (oneway void)setLastProfilePrivacyVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000c0212
- (oneway void)getLastFriendSuggestionsVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c005e
- (oneway void)setLastFriendSuggestionsVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000bfeaa
- (oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bfcf6
- (oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000bfb42
- (oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bf98e
- (oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x00100000000bf7fa
- (oneway void)getLastWelcomeWhatsNewCopyVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bf646
- (oneway void)setLastWelcomeWhatsNewCopyVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x00100000000bf4b2
- (oneway void)resetCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bf2fc
- (oneway void)authenticationCancelled;	// IMP=0x00100000000bf1a0
- (oneway void)isICloudAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bf01e
- (oneway void)getAccountAuthTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bee9c
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bec82
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000beabe
- (oneway void)switchLocalPlayerWithAltDSID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000be915
- (oneway void)authenticateNonActivePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000be705
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000be4f5
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 usingFastPath:(_Bool)arg4 displayAuthUI:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000be2ed
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000be2c7
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 altDSID:(id)arg5 usingFastPath:(_Bool)arg6 displayAuthUI:(_Bool)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x00100000000bd2e0
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 altDSID:(id)arg5 usingFastPath:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000bd2ba
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bcf76
- (oneway void)signOutPlayerWithOptOut:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bc94a
- (oneway void)authenticationWasCancelled;	// IMP=0x00100000000bc7ee
- (oneway void)fetchItemsForIdentityVerificationSignature:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bc379
- (oneway void)generateIdentityVerificationSignatureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bbf04
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bbd01
- (id)initWithService:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000bb85f
- (void)_buildSignatureLookupForProtocol:(id)arg1;	// IMP=0x00100000000bb68a
- (id)initWithClient:(id)arg1;	// IMP=0x00100000000bb568

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

