//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPushHandler, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_source;

@interface IDSQuickRelayAllocator : NSObject
{
    IDSPushHandler *_pushHandler;	// 8 = 0x8
    NSMutableDictionary *;	// 16 = 0x10
    NSMutableDictionary *_sessionToAllocations;	// 24 = 0x18
    NSMutableArray *_sessionInfoRequiredKeys;	// 32 = 0x20
    NSMutableSet *_pendingRecipientsAcceptedSessions;	// 40 = 0x28
    NSMutableDictionary *_initiatorsAcceptedSessionsWithToken;	// 48 = 0x30
    NSMutableDictionary *_requestIDToAllocateTime;	// 56 = 0x38
    NSMutableDictionary *_allocateResponses;	// 64 = 0x40
    NSMutableDictionary *_requestIDToPreferredLocalInterface;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_responseCleanupTimer;	// 80 = 0x50
    struct os_unfair_lock_s _lock;	// 88 = 0x58
    NSMutableDictionary *_sessionToLocalParticipantID;	// 96 = 0x60
    NSMutableDictionary *_pushTokenToURIForGroup;	// 104 = 0x68
    NSMutableDictionary *_idsSessionIDToqrSessionID;	// 112 = 0x70
    NSDate *_timeBase;	// 120 = 0x78
}

+ (id)sharedInstance;	// IMP=0x002000000047e300
- (void).cxx_destruct;	// IMP=0x00200000004b8cb0
- (void)setRequestIDToSession:(id)arg1 idsSessionID:(id)arg2;	// IMP=0x00100000004b8ad0
- (unsigned long long)getCountOfSessionToAllocations;	// IMP=0x00100000004b8aa0
- (unsigned long long)getCountOfPendingRecipientsAcceptedSessions;	// IMP=0x00100000004b8a70
- (id)_getQuickRelayIPPreference:(unsigned long long)arg1;	// IMP=0x00100000004b89e0
- (void)_startCleanupTimer;	// IMP=0x00100000004b8690
- (void)_cleanupResponses;	// IMP=0x00100000004b7a00
- (void)stopKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00100000004b73e0
- (void)startKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00100000004b6d90
- (id)_getResponse:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00100000004b63e0
- (id)_uuidFromNSStringToNSData:(id)arg1;	// IMP=0x00100000004b6230
- (id)_getGroupID:(id)arg1;	// IMP=0x00100000004b5de0
- (void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3;	// IMP=0x00100000004b5b10
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;	// IMP=0x00100000004b5690
- (unsigned long long)getLocalParticipantIDForRelaySessionID:(id)arg1;	// IMP=0x00100000004b5600
- (void)enablePushHandler:(_Bool)arg1;	// IMP=0x00100000004b4fa0
- (id)_parseQuickRelayDefaults:(id)arg1 gropuID:(id)arg2;	// IMP=0x00100000004b2b40
- (id)getSessionInfoFromDefaults:(id)arg1 groupID:(id)arg2;	// IMP=0x00100000004b2a90
- (id)_findAllocationForSessionID:(id)arg1 requestIDStr:(id)arg2;	// IMP=0x00100000004b2550
- (id)_findAllocationListForSessionID:(id)arg1;	// IMP=0x00100000004b24b0
- (id)_filterSelfAllocationsForSessionID:(id)arg1;	// IMP=0x00100000004b2280
- (void)_removeAllAllocationsForSessionID:(id)arg1;	// IMP=0x00100000004b18b0
- (void)_discardAllocation:(id)arg1;	// IMP=0x00100000004b1150
- (void)_addAllocationForSession:(id)arg1 allocation:(id)arg2;	// IMP=0x00100000004b0a90
- (void)invalidateAllocation:(id)arg1;	// IMP=0x00100000004b08d0
- (void)_invalidateSession:(id)arg1 isExpiryPurging:(_Bool)arg2;	// IMP=0x00100000004b0550
- (void)invalidateSession:(id)arg1 isExpiryPurging:(_Bool)arg2;	// IMP=0x00100000004b0410
- (void)cleanUpCachedMappings:(id)arg1;	// IMP=0x00100000004b01d0
- (void)reportAWDAllocatorEvent:(unsigned int)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned int)arg4 duration:(unsigned long long)arg5 idsSessionID:(id)arg6 reportingDataBlob:(id)arg7 isInitiator:(_Bool)arg8;	// IMP=0x00100000004af260
- (long long)getServerProviderForIDSSessionID:(id)arg1;	// IMP=0x00100000004aeff0
- (void)setInitiatorsAcceptedToken:(id)arg1 pushToken:(id)arg2;	// IMP=0x00100000004aeae0
- (void)requestAllocationForRecipient:(id)arg1;	// IMP=0x00100000004ad420
- (id)getPushTokenForRelaySessionID:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00100000004acd30
- (id)getRelaySessionIDForIDSSessionID:(id)arg1 pushToken:(id)arg2;	// IMP=0x00100000004ac540
- (id)_uriToParticipantID:(id)arg1;	// IMP=0x00100000004abad0
- (void)_storeMappingFromPushTokenToURIs:(id)arg1 fromID:(id)arg2 service:(id)arg3 cert:(id)arg4 forGroup:(id)arg5;	// IMP=0x00100000004ab410
- (void)_startQRConnectionForSession:(id)arg1 isInitiatorsAcceptedSession:(_Bool)arg2 withLocalInterfacePreference:(int)arg3;	// IMP=0x00100000004a9b90
- (id)_getStatusMessageFromStatusCode:(unsigned long long)arg1;	// IMP=0x00100000004a9a20
- (void)_sendAWDMetricsForAllocation:(id)arg1 status:(long long)arg2 hasRecipientAccepted:(_Bool)arg3;	// IMP=0x00100000004a8eb0
- (void)_processAllocationStatusResult:(id)arg1;	// IMP=0x00100000004a7af0
- (unsigned int)_getErrorCodeFromAllocationStatus:(int)arg1;	// IMP=0x00100000004a79d0
- (_Bool)_hasSessionInfoRequiredKeys:(id)arg1;	// IMP=0x00100000004a74c0
- (void)_setSessionInfoRequiredKeys;	// IMP=0x00100000004a72f0
- (id)_createSessionInfoFromResponsePayload:(id)arg1;	// IMP=0x00100000004a26f0
- (id)_getCombinedSoftwareID:(id)arg1;	// IMP=0x00100000004a2360
- (void)_processSelfAllocations:(id)arg1 allocation:(id)arg2;	// IMP=0x00100000004a1710
- (_Bool)_isDuplicateResponse:(id)arg1 newResponse:(id)arg2;	// IMP=0x00100000004a10d0
- (void)_handleIncomingAllocateResponse:(id)arg1 isFromCache:(_Bool)arg2 requestOptions:(id)arg3;	// IMP=0x001000000049a240
- (id)getAdditionalAllocationForAddress:(id)arg1 selfAddress:(unsigned int)arg2 relaySessionID:(id)arg3 allocateType:(long long)arg4 qrReason:(unsigned short)arg5 previousTime:(unsigned long long)arg6 previousError:(unsigned short)arg7 previousRelayIP:(unsigned int)arg8 previousAccessToken:(id)arg9 requestSelfAllocation:(_Bool)arg10 isSessionIDRemoteDeviceID:(_Bool)arg11 withPreferredRemoteInterface:(int)arg12 withPreferredLocalInterface:(int)arg13;	// IMP=0x0010000000497bb0
- (_Bool)isURIAvailabeInAllocateResponse:(id)arg1 uri:(id)arg2;	// IMP=0x00100000004973b0
- (id)getURIFromParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x00100000004966b0
- (id)getPushTokenFromParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x0010000000495bc0
- (id)getPushTokensFromParticipantIDs:(id)arg1 participantIDs:(id)arg2;	// IMP=0x0010000000494f00
- (id)_getPushTokenFromParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x00100000004948d0
- (_Bool)_startQRConnectionWithDefaults:(id)arg1;	// IMP=0x0010000000493ff0
- (id)setupNewAllocation:(id)arg1 sessionID:(id)arg2 fromIdentity:(id)arg3 fromURI:(id)arg4 fromService:(id)arg5 options:(id)arg6 connectReadyHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000493de0
- (id)_tokenURIForToken:(id)arg1 uri:(id)arg2;	// IMP=0x0010000000493ca0
- (id)_setupNewAllocation:(id)arg1 sessionID:(id)arg2 isSessionIDRemoteDeviceID:(_Bool)arg3 fromIdentity:(id)arg4 fromURI:(id)arg5 fromService:(id)arg6 options:(id)arg7 connectReadyHandler:(CDUnknownBlockType)arg8 withPreferredLocalInterface:(int)arg9 forAdditionalAllocation:(_Bool)arg10;	// IMP=0x001000000048fb40
- (_Bool)_responseHasCachedURI:(id)arg1 groupID:(id)arg2 sessionID:(id)arg3;	// IMP=0x001000000048f5a0
- (void)_sendIDQueryRequest:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000048f240
- (id)_getSelfAllocationFromCache:(id)arg1;	// IMP=0x001000000048eba0
- (void)_dispatchIncomingAllocateResponse:(id)arg1 isFromCache:(_Bool)arg2 requestOptions:(id)arg3;	// IMP=0x001000000048e9f0
- (_Bool)invalidateLatestResponse:(id)arg1 qrReason:(unsigned short)arg2 previousError:(unsigned short)arg3;	// IMP=0x001000000048e2e0
- (_Bool)_addConnectStatus:(id)arg1 relaySessionID:(id)arg2 previousTime:(unsigned long long)arg3 qrReason:(unsigned short)arg4 previousError:(unsigned short)arg5 previousRelayIP:(unsigned int)arg6 previousAccessToken:(id)arg7;	// IMP=0x001000000048d450
- (_Bool)_addResponseToCache:(id)arg1 sessionInfo:(id)arg2 modifiedMessage:(id *)arg3;	// IMP=0x001000000048b0d0
- (void)_notifyURIToParticipantIDMappingChange:(id)arg1;	// IMP=0x001000000048aa90
- (void)_notifyParticipantID2PushTokenMappingChange:(id)arg1;	// IMP=0x001000000048a4a0
- (id)_mergeParticipantID2PushTokenMapping:(id)arg1 sourceResponse:(id)arg2 mappingChange:(_Bool *)arg3;	// IMP=0x0010000000489580
- (_Bool)hasParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x0010000000489220
- (id)_getResponseForQRSessionID:(id)arg1 sessionID:(id)arg2 index:(long long *)arg3;	// IMP=0x0010000000488e40
- (_Bool)_shouldUseCurrentResponse:(id)arg1 cachedMessage:(id)arg2;	// IMP=0x0010000000486f90
- (id)getAllocateResponse:(id)arg1 groupID:(id)arg2;	// IMP=0x0010000000486b50
- (id)findAllocateResponseForSessionID:(id)arg1 FromURI:(id)arg2;	// IMP=0x00100000004862f0
- (void)_setResponseForQRGroupID:(id)arg1 groupID:(id)arg2;	// IMP=0x00100000004860d0
- (id)_getResponseFromQRGroupID:(id)arg1;	// IMP=0x0010000000485e10
- (id)setupNewAllocationToDevice:(id)arg1 options:(id)arg2 connectReadyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000004849d0
- (id)_setupAllocation:(id)arg1 fromURI:(id)arg2 sessionID:(id)arg3 isSessionIDRemoteDeviceID:(_Bool)arg4 options:(id)arg5 prevConnectStatus:(CDStruct_b3ab6eb3 *)arg6 requestUUID:(id)arg7 connectReadyHandler:(CDUnknownBlockType)arg8 withPreferredLocalInterface:(int)arg9;	// IMP=0x00100000004802e0
- (void)_sendAllocateRequest:(id)arg1;	// IMP=0x001000000047fc20
- (_Bool)_sendKeepAliveRequest:(id)arg1;	// IMP=0x001000000047e8e0
- (id)_queryPolicy;	// IMP=0x001000000047e860
- (id)_peerIDManager;	// IMP=0x001000000047e830
- (id)_getIDSAWDLoggingInstance;	// IMP=0x001000000047e800
- (void)dealloc;	// IMP=0x001000000047e540
- (id)init;	// IMP=0x001000000047e3c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

