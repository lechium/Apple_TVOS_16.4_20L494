//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDConversationParticipant, CSDFaceTimeInviteDemuxer, CSDIDSGroupSession, CXCallFailureContext, FTDeviceSupport, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSUUID, TUCallScreenShareAttributes, TUConversation, TUConversationActivitySession, TUConversationHandoffEligibility, TUConversationLink, TUConversationMember, TUConversationParticipant, TUConversationParticipantAssociation, TUConversationProvider, TUConversationReport, TUHandle, TUVideoDeviceController;
@protocol CSDAVCSession, CSDConversationDelegate, CSDConversationServerBag, OS_dispatch_queue, TUFeatureFlags;

@interface CSDConversation : NSObject
{
    _Bool _relaying;	// 8 = 0x8
    _Bool _fromStorage;	// 9 = 0x9
    _Bool _video;	// 10 = 0xa
    _Bool _hasReceivedLetMeInRequest;	// 11 = 0xb
    _Bool _locallyCreated;	// 12 = 0xc
    _Bool _hasJoined;	// 13 = 0xd
    _Bool _ignoreLMIRequests;	// 14 = 0xe
    _Bool _captioningEnabled;	// 15 = 0xf
    _Bool _waitingToPruneParticipants;	// 16 = 0x10
    _Bool _avcSessionInProgress;	// 17 = 0x11
    _Bool _forceExpanseEnabled;	// 18 = 0x12
    unsigned long long _avMode;	// 24 = 0x18
    NSSet *_memberIdentifiers;	// 32 = 0x20
    id <CSDConversationDelegate> _delegate;	// 40 = 0x28
    NSUUID *_UUID;	// 48 = 0x30
    NSUUID *_groupUUID;	// 56 = 0x38
    TUConversationLink *_link;	// 64 = 0x40
    NSUUID *_messagesGroupUUID;	// 72 = 0x48
    long long _state;	// 80 = 0x50
    long long _letMeInRequestState;	// 88 = 0x58
    TUConversationMember *_localLightweightSecondaryMember;	// 96 = 0x60
    long long _splitSessionUserProfileState;	// 104 = 0x68
    TUHandle *_initiator;	// 112 = 0x70
    TUConversationMember *_localMember;	// 120 = 0x78
    NSSet *_remoteMembers;	// 128 = 0x80
    NSSet *_lightweightMembers;	// 136 = 0x88
    NSSet *_pendingMembers;	// 144 = 0x90
    NSSet *_kickedMembers;	// 152 = 0x98
    NSSet *_rejectedMembers;	// 160 = 0xa0
    NSSet *_otherInvitedHandles;	// 168 = 0xa8
    NSArray *_supportedMediaTypes;	// 176 = 0xb0
    NSSet *_tuActivitySessions;	// 184 = 0xb8
    TUConversationActivitySession *_stagedActivitySession;	// 192 = 0xc0
    NSString *_messagesGroupName;	// 200 = 0xc8
    TUConversationReport *_report;	// 208 = 0xd0
    TUConversationParticipantAssociation *_localParticipantAssociation;	// 216 = 0xd8
    TUConversationHandoffEligibility *_handoffEligibility;	// 224 = 0xe0
    id <TUFeatureFlags> _featureFlags;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_queue;	// 240 = 0xf0
    NSMutableDictionary *_activeRemoteParticipantsByIdentifier;	// 248 = 0xf8
    NSMutableDictionary *_activeLightweightParticipantsByIdentifier;	// 256 = 0x100
    NSMutableSet *_kickedParticipants;	// 264 = 0x108
    CSDIDSGroupSession *_idsSession;	// 272 = 0x110
    NSNumber *_expectedAudioEnabled;	// 280 = 0x118
    NSNumber *_expectedVideoEnabled;	// 288 = 0x120
    NSNumber *_expectedScreenEnabled;	// 296 = 0x128
    NSNumber *_expectedVideoPaused;	// 304 = 0x130
    NSNumber *_expectedAudioPaused;	// 312 = 0x138
    NSDictionary *_activeParticipantDestinationsByIdentifier;	// 320 = 0x140
    NSDictionary *_activeLightweightParticipantDestinationsByIdentifier;	// 328 = 0x148
    NSSet *_serverProvidedParticipantIdentifiers;	// 336 = 0x150
    NSSet *_serverProvidedLightweightParticipantIdentifiers;	// 344 = 0x158
    NSDate *_lastRebroadcastTime;	// 352 = 0x160
    unsigned long long _rebroadcastTimeThreshold;	// 360 = 0x168
    TUVideoDeviceController *_videoDeviceController;	// 368 = 0x170
    NSMutableDictionary *_virtualParticipantsByPluginName;	// 376 = 0x178
    CSDFaceTimeInviteDemuxer *_faceTimeInviteDemuxer;	// 384 = 0x180
    NSMutableDictionary *_pendingKickedMembersByIdentifier;	// 392 = 0x188
    NSMutableSet *_pendingAllowedMembers;	// 400 = 0x190
    unsigned long long _kickMemberRetryCount;	// 408 = 0x198
    NSArray *_currentParticipantPresentationContexts;	// 416 = 0x1a0
    CSDConversationParticipant *_splitSessionSecondary;	// 424 = 0x1a8
    CDUnknownBlockType _downgradeToOneToOneAfterDelayBlock;	// 432 = 0x1b0
    NSSet *_remoteMemberHandles;	// 440 = 0x1b8
    NSSet *_pendingMemberHandles;	// 448 = 0x1c0
    NSMutableArray *_memberHandlesAwaitingInvitesToLink;	// 456 = 0x1c8
    id <CSDConversationServerBag> _serverBag;	// 464 = 0x1d0
    CDUnknownBlockType _avcSessionCreationBlock;	// 472 = 0x1d8
    NSObject *_reportingHierarchyToken;	// 480 = 0x1e0
    NSObject *_reportingHierarchySubToken;	// 488 = 0x1e8
    NSMutableDictionary *_inflightAVCBlobRecoveryBlocksByIdentifier;	// 496 = 0x1f0
    CDUnknownBlockType _timeoutBlock;	// 504 = 0x1f8
    CDUnknownBlockType _participantRefreshBlock;	// 512 = 0x200
    CDUnknownBlockType _mirageHandshakeBlobCreationBlock;	// 520 = 0x208
    NSSet *_invitationPreferences;	// 528 = 0x210
    TUCallScreenShareAttributes *_screenShareAttributes;	// 536 = 0x218
    TUConversationProvider *_provider;	// 544 = 0x220
    NSMutableDictionary *_audioRoutesByParticipantIdentifier;	// 552 = 0x228
    CXCallFailureContext *_failureContext;	// 560 = 0x230
    id <CSDAVCSession> _avcSession;	// 568 = 0x238
    FTDeviceSupport *_deviceSupport;	// 576 = 0x240
    NSMutableSet *_recentlyLeftParticipantIdentifiers;	// 584 = 0x248
    NSMutableDictionary *_pendingConversationParticipantsByIdentifier;	// 592 = 0x250
}

- (void).cxx_destruct;	// IMP=0x002000000004089b
@property(retain, nonatomic) NSMutableDictionary *pendingConversationParticipantsByIdentifier; // @synthesize pendingConversationParticipantsByIdentifier=_pendingConversationParticipantsByIdentifier;
@property(retain, nonatomic) NSMutableSet *recentlyLeftParticipantIdentifiers; // @synthesize recentlyLeftParticipantIdentifiers=_recentlyLeftParticipantIdentifiers;
@property(retain, nonatomic) FTDeviceSupport *deviceSupport; // @synthesize deviceSupport=_deviceSupport;
@property(retain, nonatomic) id <CSDAVCSession> avcSession; // @synthesize avcSession=_avcSession;
@property(retain, nonatomic) CXCallFailureContext *failureContext; // @synthesize failureContext=_failureContext;
@property(retain, nonatomic) NSMutableDictionary *audioRoutesByParticipantIdentifier; // @synthesize audioRoutesByParticipantIdentifier=_audioRoutesByParticipantIdentifier;
@property(retain, nonatomic) TUConversationProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) TUCallScreenShareAttributes *screenShareAttributes; // @synthesize screenShareAttributes=_screenShareAttributes;
@property(copy, nonatomic) NSSet *invitationPreferences; // @synthesize invitationPreferences=_invitationPreferences;
@property(nonatomic) _Bool forceExpanseEnabled; // @synthesize forceExpanseEnabled=_forceExpanseEnabled;
@property(nonatomic) _Bool avcSessionInProgress; // @synthesize avcSessionInProgress=_avcSessionInProgress;
@property(copy, nonatomic) CDUnknownBlockType mirageHandshakeBlobCreationBlock; // @synthesize mirageHandshakeBlobCreationBlock=_mirageHandshakeBlobCreationBlock;
@property(copy, nonatomic) CDUnknownBlockType participantRefreshBlock; // @synthesize participantRefreshBlock=_participantRefreshBlock;
@property(copy, nonatomic) CDUnknownBlockType timeoutBlock; // @synthesize timeoutBlock=_timeoutBlock;
@property(readonly, copy, nonatomic) NSMutableDictionary *inflightAVCBlobRecoveryBlocksByIdentifier; // @synthesize inflightAVCBlobRecoveryBlocksByIdentifier=_inflightAVCBlobRecoveryBlocksByIdentifier;
@property(retain, nonatomic) NSObject *reportingHierarchySubToken; // @synthesize reportingHierarchySubToken=_reportingHierarchySubToken;
@property(retain, nonatomic) NSObject *reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(copy, nonatomic) CDUnknownBlockType avcSessionCreationBlock; // @synthesize avcSessionCreationBlock=_avcSessionCreationBlock;
@property(retain, nonatomic) id <CSDConversationServerBag> serverBag; // @synthesize serverBag=_serverBag;
@property(copy, nonatomic) NSMutableArray *memberHandlesAwaitingInvitesToLink; // @synthesize memberHandlesAwaitingInvitesToLink=_memberHandlesAwaitingInvitesToLink;
@property(copy, nonatomic) NSSet *pendingMemberHandles; // @synthesize pendingMemberHandles=_pendingMemberHandles;
@property(copy, nonatomic) NSSet *remoteMemberHandles; // @synthesize remoteMemberHandles=_remoteMemberHandles;
@property(copy, nonatomic) CDUnknownBlockType downgradeToOneToOneAfterDelayBlock; // @synthesize downgradeToOneToOneAfterDelayBlock=_downgradeToOneToOneAfterDelayBlock;
@property(retain, nonatomic) CSDConversationParticipant *splitSessionSecondary; // @synthesize splitSessionSecondary=_splitSessionSecondary;
@property(retain, nonatomic) NSArray *currentParticipantPresentationContexts; // @synthesize currentParticipantPresentationContexts=_currentParticipantPresentationContexts;
@property(nonatomic) unsigned long long kickMemberRetryCount; // @synthesize kickMemberRetryCount=_kickMemberRetryCount;
@property(retain, nonatomic) NSMutableSet *pendingAllowedMembers; // @synthesize pendingAllowedMembers=_pendingAllowedMembers;
@property(retain, nonatomic) NSMutableDictionary *pendingKickedMembersByIdentifier; // @synthesize pendingKickedMembersByIdentifier=_pendingKickedMembersByIdentifier;
@property(readonly, nonatomic) CSDFaceTimeInviteDemuxer *faceTimeInviteDemuxer; // @synthesize faceTimeInviteDemuxer=_faceTimeInviteDemuxer;
@property(readonly, nonatomic) NSMutableDictionary *virtualParticipantsByPluginName; // @synthesize virtualParticipantsByPluginName=_virtualParticipantsByPluginName;
@property(readonly, nonatomic) TUVideoDeviceController *videoDeviceController; // @synthesize videoDeviceController=_videoDeviceController;
@property(nonatomic) unsigned long long rebroadcastTimeThreshold; // @synthesize rebroadcastTimeThreshold=_rebroadcastTimeThreshold;
@property(copy, nonatomic) NSDate *lastRebroadcastTime; // @synthesize lastRebroadcastTime=_lastRebroadcastTime;
@property(nonatomic, getter=isWaitingToPruneParticipants) _Bool waitingToPruneParticipants; // @synthesize waitingToPruneParticipants=_waitingToPruneParticipants;
@property(copy, nonatomic) NSSet *serverProvidedLightweightParticipantIdentifiers; // @synthesize serverProvidedLightweightParticipantIdentifiers=_serverProvidedLightweightParticipantIdentifiers;
@property(copy, nonatomic) NSSet *serverProvidedParticipantIdentifiers; // @synthesize serverProvidedParticipantIdentifiers=_serverProvidedParticipantIdentifiers;
@property(copy, nonatomic) NSDictionary *activeLightweightParticipantDestinationsByIdentifier; // @synthesize activeLightweightParticipantDestinationsByIdentifier=_activeLightweightParticipantDestinationsByIdentifier;
@property(copy, nonatomic) NSDictionary *activeParticipantDestinationsByIdentifier; // @synthesize activeParticipantDestinationsByIdentifier=_activeParticipantDestinationsByIdentifier;
@property(retain, nonatomic) NSNumber *expectedAudioPaused; // @synthesize expectedAudioPaused=_expectedAudioPaused;
@property(retain, nonatomic) NSNumber *expectedVideoPaused; // @synthesize expectedVideoPaused=_expectedVideoPaused;
@property(retain, nonatomic) NSNumber *expectedScreenEnabled; // @synthesize expectedScreenEnabled=_expectedScreenEnabled;
@property(retain, nonatomic) NSNumber *expectedVideoEnabled; // @synthesize expectedVideoEnabled=_expectedVideoEnabled;
@property(retain, nonatomic) NSNumber *expectedAudioEnabled; // @synthesize expectedAudioEnabled=_expectedAudioEnabled;
@property(readonly, nonatomic) CSDIDSGroupSession *idsSession; // @synthesize idsSession=_idsSession;
@property(retain, nonatomic) NSMutableSet *kickedParticipants; // @synthesize kickedParticipants=_kickedParticipants;
@property(retain, nonatomic) NSMutableDictionary *activeLightweightParticipantsByIdentifier; // @synthesize activeLightweightParticipantsByIdentifier=_activeLightweightParticipantsByIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *activeRemoteParticipantsByIdentifier; // @synthesize activeRemoteParticipantsByIdentifier=_activeRemoteParticipantsByIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(copy, nonatomic) TUConversationHandoffEligibility *handoffEligibility; // @synthesize handoffEligibility=_handoffEligibility;
@property(copy, nonatomic) TUConversationParticipantAssociation *localParticipantAssociation; // @synthesize localParticipantAssociation=_localParticipantAssociation;
@property(readonly, nonatomic) TUConversationReport *report; // @synthesize report=_report;
@property(readonly, nonatomic, getter=isCaptioningEnable) _Bool captioningEnabled; // @synthesize captioningEnabled=_captioningEnabled;
@property(copy, nonatomic) NSString *messagesGroupName; // @synthesize messagesGroupName=_messagesGroupName;
@property(retain, nonatomic) TUConversationActivitySession *stagedActivitySession; // @synthesize stagedActivitySession=_stagedActivitySession;
@property(readonly, copy, nonatomic) NSSet *tuActivitySessions; // @synthesize tuActivitySessions=_tuActivitySessions;
@property(copy, nonatomic) NSArray *supportedMediaTypes; // @synthesize supportedMediaTypes=_supportedMediaTypes;
@property(nonatomic) _Bool ignoreLMIRequests; // @synthesize ignoreLMIRequests=_ignoreLMIRequests;
@property(copy, nonatomic) NSSet *otherInvitedHandles; // @synthesize otherInvitedHandles=_otherInvitedHandles;
@property(copy, nonatomic) NSSet *rejectedMembers; // @synthesize rejectedMembers=_rejectedMembers;
@property(copy, nonatomic) NSSet *kickedMembers; // @synthesize kickedMembers=_kickedMembers;
@property(copy, nonatomic) NSSet *pendingMembers; // @synthesize pendingMembers=_pendingMembers;
@property(copy, nonatomic) NSSet *lightweightMembers; // @synthesize lightweightMembers=_lightweightMembers;
@property(copy, nonatomic) NSSet *remoteMembers; // @synthesize remoteMembers=_remoteMembers;
@property(readonly, nonatomic) TUConversationMember *localMember; // @synthesize localMember=_localMember;
@property(readonly, nonatomic) TUHandle *initiator; // @synthesize initiator=_initiator;
@property(nonatomic, getter=hasJoined) _Bool hasJoined; // @synthesize hasJoined=_hasJoined;
@property(nonatomic) long long splitSessionUserProfileState; // @synthesize splitSessionUserProfileState=_splitSessionUserProfileState;
@property(retain, nonatomic) TUConversationMember *localLightweightSecondaryMember; // @synthesize localLightweightSecondaryMember=_localLightweightSecondaryMember;
@property(readonly, nonatomic, getter=isLocallyCreated) _Bool locallyCreated; // @synthesize locallyCreated=_locallyCreated;
@property(nonatomic) long long letMeInRequestState; // @synthesize letMeInRequestState=_letMeInRequestState;
@property(nonatomic) _Bool hasReceivedLetMeInRequest; // @synthesize hasReceivedLetMeInRequest=_hasReceivedLetMeInRequest;
// Error: Property attributes should begin with the type ('T') attribute, property name: state
// Property attributes: (null)

@property(retain, nonatomic) NSUUID *messagesGroupUUID; // @synthesize messagesGroupUUID=_messagesGroupUUID;
@property(retain, nonatomic) TUConversationLink *link; // @synthesize link=_link;
@property(readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak id <CSDConversationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long avMode; // @synthesize avMode=_avMode;
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedRemoteVideoEnabled:(_Bool)arg2;	// IMP=0x001000000003ff57
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedRemoteAudioEnabled:(_Bool)arg2;	// IMP=0x001000000003fd45
- (void)session:(id)arg1 screenCaptureDidStart:(_Bool)arg2 withError:(id)arg3;	// IMP=0x001000000003fc0f
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 didChangeAudioPriority:(long long)arg2 videoPriority:(long long)arg3;	// IMP=0x001000000003fa6b
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedAudioPaused:(_Bool)arg2 streamToken:(long long)arg3;	// IMP=0x001000000003f8e5
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedAudioEnabled:(_Bool)arg2 updatedVideoEnabled:(_Bool)arg3 streamToken:(long long)arg4 screenToken:(long long)arg5 captionsToken:(long long)arg6;	// IMP=0x001000000003f6cd
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedScreenEnabled:(_Bool)arg2 streamToken:(long long)arg3 screenToken:(long long)arg4 captionsToken:(long long)arg5;	// IMP=0x001000000003f363
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedVideoEnabled:(_Bool)arg2 streamToken:(long long)arg3 screenToken:(long long)arg4 captionsToken:(long long)arg5;	// IMP=0x001000000003f196
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedAudioEnabled:(_Bool)arg2 streamToken:(long long)arg3 screenToken:(long long)arg4 captionsToken:(long long)arg5;	// IMP=0x001000000003efc9
- (void)sessionShouldReconnect:(id)arg1;	// IMP=0x001000000003ee62
- (void)session:(id)arg1 changedBytesOfDataUsed:(long long)arg2;	// IMP=0x001000000003ed60
- (void)session:(id)arg1 changedOneToOneModeEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000003eb19
- (void)session:(id)arg1 changedLocalVideoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000003e7d1
- (void)session:(id)arg1 changedLocalAudioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000003e489
- (void)session:(id)arg1 changedScreenEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000003dfbe
- (void)session:(id)arg1 changedLocalVideoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000003da69
- (void)session:(id)arg1 changedLocalAudioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000003d721
- (void)serverDisconnectedForSession:(id)arg1;	// IMP=0x001000000003d49f
- (void)session:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x001000000003cf4a
- (void)session:(id)arg1 didDetectError:(id)arg2;	// IMP=0x001000000003cca1
- (void)session:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000003c6c2
- (void)executeSessionDidStart;	// IMP=0x001000000003c529
- (int)_errorToAVCProviderEndedReason:(id)arg1 defaultProviderReason:(int)arg2;	// IMP=0x001000000003c2e1
- (id)session:(id)arg1 conversationParticipantWithParticipantIdentifier:(unsigned long long)arg2;	// IMP=0x001000000003c228
- (void)session:(id)arg1 didReceiveServerErrorCode:(unsigned int)arg2;	// IMP=0x001000000003c0c3
- (void)session:(id)arg1 didReceiveData:(id)arg2 dataType:(unsigned short)arg3 forParticipant:(id)arg4;	// IMP=0x001000000003bf9c
- (void)session:(id)arg1 didReceiveDataBlob:(id)arg2 forParticipant:(id)arg3;	// IMP=0x001000000003b788
- (void)sessionDidReceiveKeyUpdate:(id)arg1;	// IMP=0x001000000003b753
- (void)session:(id)arg1 didUnregisterPluginAllocationInfo:(id)arg2;	// IMP=0x001000000003b5e7
- (void)session:(id)arg1 didRegisterPluginAllocationInfo:(id)arg2;	// IMP=0x001000000003b4d8
- (void)session:(id)arg1 didReceiveKickedParticipantIDs:(id)arg2 withCode:(unsigned int)arg3 withType:(unsigned short)arg4 isTruncated:(_Bool)arg5;	// IMP=0x001000000003a157
- (void)session:(id)arg1 didReceiveReport:(id)arg2;	// IMP=0x001000000003a095
- (void)setParticipantType:(unsigned short)arg1 forRemoteMemberDestinations:(id)arg2;	// IMP=0x0010000000039fec
- (void)_updateParticipantTypesForAddedParticipant:(id)arg1;	// IMP=0x0010000000039d3a
- (void)session:(id)arg1 didReceiveLocalParticipantType:(unsigned short)arg2 error:(id)arg3;	// IMP=0x00100000000396ca
- (void)sessionDidTerminate:(id)arg1;	// IMP=0x001000000003960c
- (void)session:(id)arg1 receivedActiveLightweightParticipantDestinationsByIdentifier:(id)arg2;	// IMP=0x001000000003950a
- (void)session:(id)arg1 receivedActiveParticipantDestinationsByIdentifier:(id)arg2;	// IMP=0x00100000000390ec
- (void)reviveOrInvalidateCachedConversationIfNecessary;	// IMP=0x00100000000389c0
- (void)updateParticipantsWithDestinationIdentifiers:(id)arg1;	// IMP=0x001000000003877e
- (void)session:(id)arg1 endedWithError:(id)arg2 reason:(unsigned int)arg3;	// IMP=0x0010000000038477
- (void)session:(id)arg1 didLeaveGroupWithError:(id)arg2;	// IMP=0x0010000000037fb3
- (void)session:(id)arg1 didJoinGroup:(_Bool)arg2 participantIdentifiers:(id)arg3 error:(id)arg4;	// IMP=0x0010000000037ba1
- (void)updateConversationParticipantToHaveMatchingSiriDisplayName:(id)arg1;	// IMP=0x00100000000378b8
- (void)continueHandoffAudioRouteForIdentifier:(unsigned long long)arg1;	// IMP=0x001000000003763d
- (void)switchBackToOneToOneIfPossibleUsingDelay:(_Bool)arg1;	// IMP=0x0010000000036dd0
- (void)switchBackToOneToOneIfPossible;	// IMP=0x0010000000036dbc
- (void)_registerPluginsIfNecessary;	// IMP=0x0010000000036d7f
- (id)_stableExpanseIdentifier;	// IMP=0x00100000000369d7
- (void)_reportConversationFailedWithProviderEndedReason:(unsigned long long)arg1;	// IMP=0x0010000000036919
- (void)_reportConversationFailedWithFailureReason:(long long)arg1 providerEndedReason:(unsigned long long)arg2;	// IMP=0x0010000000036848
- (void)refreshActiveParticipantsList;	// IMP=0x00100000000365e4
- (void)_pruneRemoteParticipantsIfNecessary;	// IMP=0x0010000000036069
- (void)_cancelInFlightAVCBlobRecoveryIfNecessary;	// IMP=0x0010000000035ce4
- (void)_requestAVCBlobsIfNecessary;	// IMP=0x00100000000351ea
- (void)_cancelTimeoutForLeavingConversation;	// IMP=0x0010000000035128
- (void)_beginTimeoutForLeavingConversationWithReason:(id)arg1;	// IMP=0x0010000000034d83
- (void)cleanUpIDSSessionState;	// IMP=0x0010000000034c80
- (void)_cleanUpFromAVCSessionFailure;	// IMP=0x0010000000034c20
- (void)_startAVCSessionIfNecessary;	// IMP=0x00100000000347d4
- (void)_addParticipantsWaitingToBeAddedToAVCSession;	// IMP=0x0010000000034482
- (void)_addRemoteParticipantToAVCSessionIfPossible:(id)arg1;	// IMP=0x00100000000342d6
- (void)_startIDSSessionWithContext:(id)arg1;	// IMP=0x0010000000033c17
@property(readonly, nonatomic, getter=isMirageEnabled) _Bool mirageEnabled;
@property(readonly, nonatomic) _Bool allParticipantsSupportSharePlay;
- (void)setIDSAliasingSalt:(id)arg1 onContainer:(id)arg2;	// IMP=0x00100000000338b3
- (void)addAliasesToConversationContainer:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00100000000336a1
@property(readonly, nonatomic) TUConversationParticipant *localParticipant;
- (id)remoteMemberForHandle:(id)arg1;	// IMP=0x0010000000033404
- (id)remoteParticipantForIdentifier:(unsigned long long)arg1;	// IMP=0x00100000000332b6
- (id)remoteParticipantForHandle:(id)arg1;	// IMP=0x0010000000032f3d
- (void)addRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;	// IMP=0x0010000000032eb7
@property(readonly, nonatomic) NSDictionary *capabilitySendMessageOptions;
- (_Bool)containsMemberWithHandle:(id)arg1;	// IMP=0x0010000000032d12
- (id)memberWithHandle:(id)arg1;	// IMP=0x001000000003297d
- (void)updateLightweightMember:(id)arg1;	// IMP=0x0010000000032702
- (void)updateRemoteMember:(id)arg1;	// IMP=0x0010000000032487
- (_Bool)isRepresentedByRemoteMembers:(id)arg1 andLink:(id)arg2;	// IMP=0x001000000003224d
- (id)reducedInfoMembers:(id)arg1;	// IMP=0x0010000000031fc4
- (void)setVideoEnabled:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000031f1f
- (void)setAudioEnabled:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000031e7a
- (void)setRemoteParticipantsDownlinkMuted:(_Bool)arg1;	// IMP=0x0010000000031cb2
- (void)_allowMember:(id)arg1;	// IMP=0x0010000000031c12
- (void)kickMember:(id)arg1;	// IMP=0x0010000000031917
- (void)leaveUsingContext:(id)arg1;	// IMP=0x001000000003129d
- (void)leave;	// IMP=0x0010000000031220
@property(readonly, nonatomic) _Bool supportsLeaveContext;
- (void)startAudio;	// IMP=0x0010000000030de2
- (void)broadcastLocalParticipantData;	// IMP=0x0010000000030c5d
- (void)joinUsingContext:(id)arg1;	// IMP=0x001000000002f9c6
- (id)setupNewAVCSession:(_Bool)arg1;	// IMP=0x001000000002f571
- (void)stopSelectiveSharingSession;	// IMP=0x001000000002f56b
- (void)resetSelectiveSharingSessionContent;	// IMP=0x001000000002f565
- (void)createSelectiveSharingSessionIfNecessary;	// IMP=0x000000000002f55f
- (struct CGSize)localPortraitAspectRatio;	// IMP=0x001000000002f461
- (void)_launchApplicationsForActivitiesIfNecessary:(_Bool)arg1;	// IMP=0x001000000002f45b
- (void)removeActivitySessionIfNecessary;	// IMP=0x001000000002f455
- (void)_launchApplicationsForActivitiesIfNecessary;	// IMP=0x001000000002f42e
- (_Bool)setStagedActivitySessionForActivitySession:(id)arg1;	// IMP=0x001000000002f358
- (id)createStagedActivitySessionForActivity:(id)arg1;	// IMP=0x001000000002f282
- (_Bool)setConversationLink:(id)arg1 allowUpdate:(_Bool)arg2;	// IMP=0x001000000002ee44
- (void)removePendingMembers:(id)arg1 triggeredLocally:(_Bool)arg2;	// IMP=0x001000000002e8d9
- (void)addPendingMembers:(id)arg1 triggeredLocally:(_Bool)arg2;	// IMP=0x001000000002e348
- (void)updateMessagesGroupName:(id)arg1;	// IMP=0x001000000002e2ef
- (void)updateMemberValidationSource:(id)arg1 source:(long long)arg2;	// IMP=0x001000000002df4e
- (void)addRemoteMembers:(id)arg1 otherInvitedHandles:(id)arg2 invitationPreferences:(id)arg3 addingFromLetMeIn:(_Bool)arg4 triggeredLocally:(_Bool)arg5;	// IMP=0x001000000002c68d
- (void)addRemoteMembers:(id)arg1 otherInvitedHandles:(id)arg2 triggeredLocally:(_Bool)arg3;	// IMP=0x001000000002c5e5
- (void)removeRemoteMembers:(id)arg1 triggeredLocally:(_Bool)arg2;	// IMP=0x001000000002bb97
- (void)removeVirtualParticipant:(id)arg1;	// IMP=0x001000000002b84e
- (void)addVirtualParticipant:(id)arg1;	// IMP=0x001000000002b57e
- (void)updateParticipantPresentationContexts:(id)arg1;	// IMP=0x001000000002b20e
- (void)removeParticipantWithIdentifier:(unsigned long long)arg1 fromHandle:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x001000000002a472
- (_Bool)allowsScreenSharing;	// IMP=0x001000000002a422
- (void)setParticipantAudioVideoMode:(unsigned long long)arg1 forParticipant:(id)arg2;	// IMP=0x001000000002a206
- (void)removeParticipantsForMember:(id)arg1;	// IMP=0x0010000000029ec1
- (void)addActiveParticipant:(id)arg1;	// IMP=0x0010000000028f80
@property(copy, nonatomic) NSSet *memberIdentifiers; // @synthesize memberIdentifiers=_memberIdentifiers;
@property(nonatomic, getter=isFromStorage) _Bool fromStorage; // @synthesize fromStorage=_fromStorage;
- (void)updateLocalAspectRatiosForOneToOneModeEnabled:(_Bool)arg1;	// IMP=0x0010000000028d02
- (void)setConversationGridDisplayMode:(unsigned long long)arg1;	// IMP=0x0010000000028c7f
@property(nonatomic) struct CGRect presentationRect;
@property(nonatomic) int presentationState;
@property(nonatomic, getter=isOneToOneModeEnabled) _Bool oneToOneModeEnabled;
@property(readonly, nonatomic, getter=isOneToOneHandoffOngoing) _Bool oneToOneHandoffOngoing;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
- (void)registerMessagesGroupAssociation;	// IMP=0x0010000000027c6b
- (void)setLocalParticipantAudioVideoMode:(unsigned long long)arg1;	// IMP=0x00100000000279e4
@property(nonatomic, getter=isRelaying) _Bool relaying; // @synthesize relaying=_relaying;
@property(nonatomic, getter=isAudioPaused) _Bool audioPaused;
@property(nonatomic, getter=isVideoPaused) _Bool videoPaused;
- (void)setScreenEnabled:(_Bool)arg1 attributes:(id)arg2;	// IMP=0x0010000000026fce
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property(readonly, nonatomic, getter=isScreenEnabled) _Bool screenEnabled;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property(nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
@property(readonly, copy, nonatomic) NSSet *memberHandlesEligibleForLinkApproval;
@property(readonly, nonatomic) NSSet *virtualParticipants;
- (_Bool)_expanseEnabled;	// IMP=0x0010000000026530
- (id)localParticipantDataToSendToDestinationIDs:(id)arg1;	// IMP=0x001000000002643c
- (id)localParticipantData;	// IMP=0x00100000000261de
- (id)localConversationParticipantWithDataToSendToDestinationIDs:(id)arg1;	// IMP=0x00100000000260ce
@property(readonly, nonatomic, getter=isAudioReady) _Bool audioReady;
- (long long)maxVideoDecodesAllowed;	// IMP=0x0010000000025dd5
@property(readonly, nonatomic) unsigned long long localParticipantIdentifier;
@property(readonly, nonatomic) long long avcSessionToken;
- (id)avcSessionIdentifier;	// IMP=0x0010000000025c5e
@property(readonly, copy, nonatomic) TUConversation *tuConversation;
@property(readonly, nonatomic) _Bool isAnyOtherAccountDeviceActive;
@property(readonly, copy, nonatomic) NSSet *activeLightweightParticipants;
@property(readonly, copy, nonatomic) NSSet *activeRemoteParticipants;
- (id)activeParticipants;	// IMP=0x0010000000024d3d
@property(readonly, copy) NSString *description;
- (id)initWithQueue:(id)arg1 UUID:(id)arg2 groupUUID:(id)arg3 groupSession:(id)arg4 messagesGroupUUID:(id)arg5 locallyCreated:(_Bool)arg6 localMember:(id)arg7 initiator:(id)arg8 remoteMembers:(id)arg9 pendingMembers:(id)arg10 otherInvitedHandles:(id)arg11 lightweightMembers:(id)arg12 activity:(id)arg13 link:(id)arg14 report:(id)arg15 fromStorage:(_Bool)arg16 avMode:(unsigned long long)arg17 applicationController:(id)arg18 featureFlags:(id)arg19 systemStateObserver:(id)arg20 applicationPolicyManager:(id)arg21;	// IMP=0x00100000000232e8
- (id)initWithQueue:(id)arg1 UUID:(id)arg2 groupUUID:(id)arg3 groupSession:(id)arg4 messagesGroupUUID:(id)arg5 locallyCreated:(_Bool)arg6 localMember:(id)arg7 initiator:(id)arg8 remoteMembers:(id)arg9 pendingMembers:(id)arg10 otherInvitedHandles:(id)arg11 lightweightMembers:(id)arg12 activity:(id)arg13 link:(id)arg14 report:(id)arg15 fromStorage:(_Bool)arg16 avMode:(unsigned long long)arg17 applicationController:(id)arg18;	// IMP=0x0010000000023092

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

