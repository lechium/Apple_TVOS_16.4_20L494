//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDConversationLinkManager, CSDConversationNoticeManager, CSDConversationPersistenceController, CSDConversationProviderManager, CSDDeviceLockStateObserver, CSDIDSService, CSDPendingMembershipTracker, CSDReportingController, CSDSecureImageTranscoder, CSDSharedConversationServerBag, FTDeviceSupport, NSDictionary, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, TUCallProviderManager;
@protocol CSDConversationInvitationResolving, CSDParticipantUpdateSanitizer, CSDVoucherManager, OS_dispatch_queue, OS_dispatch_source, TUFeatureFlags;

@interface CSDConversationManager : NSObject
{
    CSDPendingMembershipTracker *_pendingMembershipTracker;	// 8 = 0x8
    NSMutableDictionary *_mutableConversationsByUUID;	// 16 = 0x10
    NSMutableDictionary *_mutablePendingConversationsByPseudonym;	// 24 = 0x18
    NSMutableDictionary *_mutablePseudonymsByCallUUID;	// 32 = 0x20
    NSMutableDictionary *_mutablePseudonymsByRequestIdentifiers;	// 40 = 0x28
    NSMutableDictionary *_mutableSendDataCallbacksByRequestIdentifiers;	// 48 = 0x30
    NSMutableSet *_mutableConversationsRequestingUpgrade;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_pendingConversationCleanupTimer;	// 64 = 0x40
    NSMapTable *_delegateToQueue;	// 72 = 0x48
    CSDConversationPersistenceController *_persistenceController;	// 80 = 0x50
    CSDDeviceLockStateObserver *_lockStateObserver;	// 88 = 0x58
    TUCallProviderManager *_callProviderManager;	// 96 = 0x60
    CSDConversationLinkManager *_linkManager;	// 104 = 0x68
    CSDReportingController *_reportingController;	// 112 = 0x70
    id <TUFeatureFlags> _featureFlags;	// 120 = 0x78
    CSDConversationNoticeManager *_conversationNoticeManger;	// 128 = 0x80
    CSDSharedConversationServerBag *_serverBag;	// 136 = 0x88
    id <CSDConversationInvitationResolving> _invitationResolver;	// 144 = 0x90
    NSMutableDictionary *_screenCaptureQueue;	// 152 = 0x98
    id <CSDVoucherManager> _voucherManager;	// 160 = 0xa0
    id <CSDParticipantUpdateSanitizer> _participantUpdateSanitizer;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_queue;	// 176 = 0xb0
    CSDIDSService *_service;	// 184 = 0xb8
    CDUnknownBlockType _groupSessionProviderCreationBlock;	// 192 = 0xc0
    FTDeviceSupport *_deviceSupport;	// 200 = 0xc8
    CDUnknownBlockType _conversationCreationBlock;	// 208 = 0xd0
    CDUnknownBlockType _sendDataBlock;	// 216 = 0xd8
    CSDConversationProviderManager *_conversationProviderManager;	// 224 = 0xe0
    CDUnknownBlockType _lockdownModeEnabled;	// 232 = 0xe8
    CDUnknownBlockType _activeLocalHandles;	// 240 = 0xf0
    CDUnknownBlockType _activeLocalHandlesForProvider;	// 248 = 0xf8
    CDUnknownBlockType _localCallerID;	// 256 = 0x100
    CDUnknownBlockType _localCallerIDForProvider;	// 264 = 0x108
    CSDSecureImageTranscoder *_imageTranscoder;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x002000000011926d
@property(retain, nonatomic) CSDSecureImageTranscoder *imageTranscoder; // @synthesize imageTranscoder=_imageTranscoder;
@property(copy, nonatomic) CDUnknownBlockType localCallerIDForProvider; // @synthesize localCallerIDForProvider=_localCallerIDForProvider;
@property(copy, nonatomic) CDUnknownBlockType localCallerID; // @synthesize localCallerID=_localCallerID;
@property(copy, nonatomic) CDUnknownBlockType activeLocalHandlesForProvider; // @synthesize activeLocalHandlesForProvider=_activeLocalHandlesForProvider;
@property(copy, nonatomic) CDUnknownBlockType activeLocalHandles; // @synthesize activeLocalHandles=_activeLocalHandles;
@property(copy, nonatomic) CDUnknownBlockType lockdownModeEnabled; // @synthesize lockdownModeEnabled=_lockdownModeEnabled;
@property(retain, nonatomic) CSDConversationProviderManager *conversationProviderManager; // @synthesize conversationProviderManager=_conversationProviderManager;
@property(copy, nonatomic) CDUnknownBlockType sendDataBlock; // @synthesize sendDataBlock=_sendDataBlock;
@property(copy, nonatomic) CDUnknownBlockType conversationCreationBlock; // @synthesize conversationCreationBlock=_conversationCreationBlock;
@property(retain, nonatomic) FTDeviceSupport *deviceSupport; // @synthesize deviceSupport=_deviceSupport;
@property(copy, nonatomic) CDUnknownBlockType groupSessionProviderCreationBlock; // @synthesize groupSessionProviderCreationBlock=_groupSessionProviderCreationBlock;
@property(retain, nonatomic) CSDIDSService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <CSDParticipantUpdateSanitizer> participantUpdateSanitizer; // @synthesize participantUpdateSanitizer=_participantUpdateSanitizer;
@property(retain, nonatomic) id <CSDVoucherManager> voucherManager; // @synthesize voucherManager=_voucherManager;
@property(readonly, nonatomic) NSMutableDictionary *screenCaptureQueue; // @synthesize screenCaptureQueue=_screenCaptureQueue;
@property(retain, nonatomic) id <CSDConversationInvitationResolving> invitationResolver; // @synthesize invitationResolver=_invitationResolver;
@property(retain, nonatomic) CSDSharedConversationServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(readonly, nonatomic) CSDConversationNoticeManager *conversationNoticeManger; // @synthesize conversationNoticeManger=_conversationNoticeManger;
@property(retain, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) CSDReportingController *reportingController; // @synthesize reportingController=_reportingController;
@property(retain, nonatomic) CSDConversationLinkManager *linkManager; // @synthesize linkManager=_linkManager;
@property(retain, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(readonly, nonatomic) CSDDeviceLockStateObserver *lockStateObserver; // @synthesize lockStateObserver=_lockStateObserver;
@property(readonly, nonatomic) CSDConversationPersistenceController *persistenceController; // @synthesize persistenceController=_persistenceController;
@property(retain, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pendingConversationCleanupTimer; // @synthesize pendingConversationCleanupTimer=_pendingConversationCleanupTimer;
@property(readonly, nonatomic) NSMutableSet *mutableConversationsRequestingUpgrade; // @synthesize mutableConversationsRequestingUpgrade=_mutableConversationsRequestingUpgrade;
@property(readonly, nonatomic) NSMutableDictionary *mutableSendDataCallbacksByRequestIdentifiers; // @synthesize mutableSendDataCallbacksByRequestIdentifiers=_mutableSendDataCallbacksByRequestIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *mutablePseudonymsByRequestIdentifiers; // @synthesize mutablePseudonymsByRequestIdentifiers=_mutablePseudonymsByRequestIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *mutablePseudonymsByCallUUID; // @synthesize mutablePseudonymsByCallUUID=_mutablePseudonymsByCallUUID;
@property(readonly, nonatomic) NSMutableDictionary *mutablePendingConversationsByPseudonym; // @synthesize mutablePendingConversationsByPseudonym=_mutablePendingConversationsByPseudonym;
@property(readonly, nonatomic) NSMutableDictionary *mutableConversationsByUUID; // @synthesize mutableConversationsByUUID=_mutableConversationsByUUID;
@property(retain, nonatomic) CSDPendingMembershipTracker *pendingMembershipTracker; // @synthesize pendingMembershipTracker=_pendingMembershipTracker;
- (void)_sendDelegationMessageTo:(id)arg1 conversation:(id)arg2 link:(id)arg3 transactionUUID:(id)arg4 forMember:(id)arg5 withMessage:(id)arg6;	// IMP=0x00100000001187e3
- (void)sendDelegationResponseMessageTo:(id)arg1 conversation:(id)arg2 transactionUUID:(id)arg3 forMember:(id)arg4 withResponse:(_Bool)arg5;	// IMP=0x001000000011860e
- (void)sendDelegationMessageTo:(id)arg1 conversation:(id)arg2 link:(id)arg3 transactionUUID:(id)arg4 forMember:(id)arg5;	// IMP=0x0010000000118475
- (void)pendingMembershipTracker:(id)arg1 willNotAdd:(id)arg2 to:(id)arg3 using:(id)arg4;	// IMP=0x0010000000118219
- (void)pendingMembershipTracker:(id)arg1 didTrack:(id)arg2 forGroupUUID:(id)arg3;	// IMP=0x0010000000118091
- (void)pendingMembershipTracker:(id)arg1 willAdd:(id)arg2 to:(id)arg3 using:(id)arg4;	// IMP=0x0010000000117d6a
- (void)handleRemovedLinkDescriptors:(id)arg1;	// IMP=0x0010000000117b8b
- (void)linkManager:(id)arg1 removedLinkDescriptorsFromValidityCheck:(id)arg2;	// IMP=0x0010000000117a26
- (void)linkManager:(id)arg1 updatedLinkDescriptorsFromIDSSignal:(id)arg2;	// IMP=0x00100000001178c1
- (void)linkManager:(id)arg1 removedLinkDescriptorsFromIDSSignal:(id)arg2;	// IMP=0x001000000011775c
- (void)linkManager:(id)arg1 updatedLinkDescriptorsFromSync:(id)arg2;	// IMP=0x00100000001175f7
- (id)pickInitiatorFromParticipants:(id)arg1 forUpdate:(id)arg2;	// IMP=0x0010000000117263
- (void)prepareAdditionOfActiveParticipant:(id)arg1 toInvitedMembersForLinkOnConversation:(id)arg2;	// IMP=0x00100000001169a9
- (void)removePendingMemberMatchingActiveParticipant:(id)arg1 conversation:(id)arg2;	// IMP=0x00100000001165f6
- (void)handleParticipantWithIdentifier:(unsigned long long)arg1 leftConversationWithGroupUUID:(id)arg2 fromHandle:(id)arg3 withGroupSessionUpdate:(id)arg4;	// IMP=0x0010000000116291
- (void)handleParticipants:(id)arg1 joinedConversationWithUpdate:(id)arg2 joinContext:(id)arg3 fromHandle:(id)arg4;	// IMP=0x0010000000112ee3
- (void)processParticipantDataUpdate:(id)arg1 fromHandle:(id)arg2;	// IMP=0x0010000000112a39
- (void)processUpdateMembersUpdate:(id)arg1 fromHandle:(id)arg2;	// IMP=0x0010000000112559
- (id)pushTokenForSelf;	// IMP=0x0010000000112502
- (void)processJoinUpdate:(id)arg1 fromHandle:(id)arg2 senderCorrelationIdentifier:(id)arg3;	// IMP=0x0010000000111e88
- (void)processGroupSessionParticipantUpdate:(id)arg1 context:(id)arg2;	// IMP=0x0010000000111663
- (void)sanitizeAndProcessParticipantUpdate:(id)arg1 context:(id)arg2;	// IMP=0x0010000000111421
- (void)service:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantDataUpdate:(id)arg3;	// IMP=0x00100000001113a5
- (void)service:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3 context:(id)arg4;	// IMP=0x0010000000111310
- (void)_service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 attemptCount:(unsigned long long)arg6;	// IMP=0x001000000010fd3a
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000010fd1e
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x001000000010f951
- (void)service:(id)arg1 account:(id)arg2 incomingPendingMessageOfType:(long long)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000010f5fd
- (void)_runCallbackIfNecessaryForMessage:(id)arg1;	// IMP=0x001000000010f4c2
- (void)service:(id)arg1 account:(id)arg2 messageIdentifier:(id)arg3 alternateCallbackID:(id)arg4 updatedWithResponseCode:(long long)arg5 error:(id)arg6 lastCall:(_Bool)arg7 messageContext:(id)arg8;	// IMP=0x001000000010f448
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000010f299
- (void)conversationDidTriggerJoin:(id)arg1;	// IMP=0x001000000010f062
- (void)conversation:(id)arg1 addedMembers:(id)arg2 triggeredLocally:(_Bool)arg3;	// IMP=0x001000000010ec2b
- (void)conversation:(id)arg1 activitySessionRemoved:(id)arg2 userOriginated:(_Bool)arg3;	// IMP=0x001000000010ebf6
- (void)conversation:(id)arg1 changedBytesOfDataUsed:(long long)arg2;	// IMP=0x001000000010e78e
- (void)conversation:(id)arg1 activityChangedOnSession:(id)arg2;	// IMP=0x001000000010e2fa
- (void)conversation:(id)arg1 appLaunchState:(unsigned long long)arg2 forActivitySession:(id)arg3;	// IMP=0x001000000010ddae
- (void)conversation:(id)arg1 activitySessionChanged:(id)arg2;	// IMP=0x001000000010dda8
- (void)conversation:(id)arg1 remoteParticipantWithIdentifier:(unsigned long long)arg2 updatedVideoEnabled:(_Bool)arg3;	// IMP=0x001000000010d8fe
- (void)conversation:(id)arg1 remoteParticipantWithIdentifier:(unsigned long long)arg2 updatedAudioEnabled:(_Bool)arg3;	// IMP=0x001000000010d454
- (void)conversation:(id)arg1 receivedActivitySessionEvent:(id)arg2;	// IMP=0x001000000010d44e
- (void)conversation:(id)arg1 failedWithContext:(id)arg2;	// IMP=0x001000000010cfc8
- (void)conversation:(id)arg1 sendDeclineMessageToParticipantDestination:(id)arg2;	// IMP=0x001000000010ce32
- (void)conversation:(id)arg1 requestBlobRecoveryForParticipantDestination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000010cc68
- (void)conversation:(id)arg1 mediaPrioritiesChangedForParticipant:(id)arg2;	// IMP=0x001000000010c7a0
- (void)conversation:(id)arg1 updatedActiveParticipantWithScreenSharing:(id)arg2;	// IMP=0x001000000010c2e5
- (void)conversation:(id)arg1 updatedActiveParticipant:(id)arg2;	// IMP=0x001000000010be33
- (void)conversation:(id)arg1 removedActiveParticipant:(id)arg2 withLeaveReason:(unsigned long long)arg3;	// IMP=0x001000000010b6d1
- (void)conversation:(id)arg1 didChangeLocalParticipant:(id)arg2;	// IMP=0x001000000010b0e3
- (void)conversation:(id)arg1 addedActiveParticipant:(id)arg2;	// IMP=0x001000000010a069
- (void)conversationInvalidated:(id)arg1;	// IMP=0x0010000000109ce6
- (void)conversationConnectionDidStart:(id)arg1;	// IMP=0x0010000000109829
- (void)conversationChanged:(id)arg1;	// IMP=0x0010000000109281
- (void)cleanupExpiredPendingConversations;	// IMP=0x0010000000108e37
- (void)setupPendingConversationCleanupTimer;	// IMP=0x0010000000108b53
- (void)registerMessagesGroupUUIDForConversationUUID:(id)arg1;	// IMP=0x00100000001087d9
- (void)setLocalParticipantAudioVideoMode:(unsigned long long)arg1 forConversationUUID:(id)arg2;	// IMP=0x0010000000108632
- (void)includeMetricsReport:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000010831d
- (void)addAliasesToConversationContainer:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000010809a
- (void)removeConversationWithUUID:(id)arg1;	// IMP=0x0010000000107e29
- (void)removeNonIndefiniteLinks;	// IMP=0x00100000001077d7
- (void)setMessagesGroupName:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000010752c
- (void)removeConversationNoticeWithUUID:(id)arg1;	// IMP=0x001000000010742a
- (void)activateConversationNoticeWithActionURL:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00100000001072f9
- (void)fetchUpcomingNoticeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001071d9
- (oneway void)setIgnoreLetMeInRequests:(_Bool)arg1 forConversationUUID:(id)arg2;	// IMP=0x0010000000106bb1
- (void)rejectPendingMember:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x00100000001068c5
- (void)approvePendingMember:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x00100000001065c6
- (void)linkSyncStateIncludeLinks:(_Bool)arg1 WithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000106408
- (void)recoverLinksForPseudonyms:(id)arg1;	// IMP=0x0010000000106269
- (void)scheduleConversationLinkCheckInInitial:(_Bool)arg1;	// IMP=0x00000000001060eb
- (id)undeleteConversationLinkIfNecessary:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000106062
- (void)setLinkName:(id)arg1 forConversationLink:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000105aeb
- (void)activateLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000010583e
- (void)getInactiveLinkWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001054ac
- (void)generateAllInactiveLinks;	// IMP=0x001000000010532c
- (void)checkLinkValidity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000010519e
- (void)renewLink:(id)arg1 expirationDate:(id)arg2 reason:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000104c12
- (void)invalidateLink:(id)arg1 userInteraction:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001046ce
- (void)addInvitedMemberHandles:(id)arg1 toConversationLink:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001040ea
- (void)generateLinkWithInvitedMemberHandles:(id)arg1 linkLifetimeScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001035c5
- (void)setConversationLink:(id)arg1 forConversation:(id)arg2 replyToCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001033b3
- (id)_getActivatedLinkWithHandle:(id)arg1 updateGroupUUID:(id)arg2 updateInvitedHandles:(id)arg3;	// IMP=0x00100000001030f1
- (void)generateLinkForConversationUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001026fb
- (void)getActiveLinksWithCreatedOnly:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000102349
- (void)getLatestRemoteScreenShareAttributesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000102278
- (void)updateLocalMemberNickname:(id)arg1 conversationUUID:(id)arg2;	// IMP=0x0010000000101e37
- (void)setVideoEnabled:(_Bool)arg1 forRemoteParticipantWithIdentifier:(unsigned long long)arg2 conversationUUID:(id)arg3;	// IMP=0x0010000000101b84
- (void)setAudioEnabled:(_Bool)arg1 forRemoteParticipantWithIdentifier:(unsigned long long)arg2 conversationUUID:(id)arg3;	// IMP=0x00100000001018d1
- (void)setDownlinkMuted:(_Bool)arg1 forRemoteParticipantsOnConversationWithUUID:(id)arg2;	// IMP=0x0010000000101649
- (void)noticeManager:(id)arg1 conversation:(id)arg2 participant:(id)arg3 addedNotice:(id)arg4;	// IMP=0x00100000001010fb
- (void)processUpdatedNickname:(id)arg1 forHandle:(id)arg2 conversationUUID:(id)arg3;	// IMP=0x0010000000100838
- (void)kickMember:(id)arg1 conversationUUID:(id)arg2;	// IMP=0x0010000000100547
- (void)buzzMember:(id)arg1 conversationUUID:(id)arg2;	// IMP=0x00100000000ffe7c
- (void)updateParticipantPresentationContexts:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x00100000000ffbd1
- (void)handleConversation:(id)arg1 updateGuestMode:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000000ff41b
- (void)handleConversation:(id)arg1 receivedActivitySession:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000000ff3e6
- (void)handleConversation:(id)arg1 receivedEndorsementForMember:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000000ff273
- (void)handleConversation:(id)arg1 updateActivityImage:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000000ff23e
- (void)handleConversation:(id)arg1 removeHighlight:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000000ff209
- (void)handleConversation:(id)arg1 addHighlight:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000000ff1d4
- (void)handleConversation:(id)arg1 updateActivity:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000000ff19f
- (void)handleConversation:(id)arg1 removeActivitySession:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000000ff16a
- (void)handleConversation:(id)arg1 registerMessagesGroupUUIDMessage:(id)arg2 fromNormalizedHandle:(id)arg3;	// IMP=0x00100000000ff061
- (void)handleConversation:(id)arg1 participantUpdateMessage:(id)arg2 fromNormalizedHandle:(id)arg3;	// IMP=0x00100000000fda4f
- (void)revokeBackgroundPipAuthorizationsForBundleID:(id)arg1;	// IMP=0x00100000000fda49
- (void)launchApplicationForActivitySessionUUID:(id)arg1 forceBackground:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fda43
- (void)joinConversationWithRequest:(id)arg1;	// IMP=0x00100000000fd715
- (void)launchApplicationForActivitySessionUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fd6fe
- (void)setAutoSharePlayEnabled:(_Bool)arg1;	// IMP=0x00100000000fd6f8
- (void)setActivityAuthorization:(_Bool)arg1 forBundleID:(id)arg2;	// IMP=0x00100000000fd6f2
- (void)setUsingAirplay:(_Bool)arg1 onActivitySession:(id)arg2 onConversationWithUUID:(id)arg3;	// IMP=0x00100000000fd51c
- (void)presentDismissalAlertForActivitySessionWithUUID:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x00100000000fd3a8
- (void)endActivitySession:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x00100000000fd234
- (void)leaveActivitySession:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x00100000000fd0c0
- (void)updateMessagesGroupPhotoOnConversationWithUUID:(id)arg1;	// IMP=0x00100000000fca4a
- (void)updateMessagesGroupName:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x00100000000fc3f6
- (void)_displaySharePlayUnableToStartWithMessage:(id)arg1;	// IMP=0x00100000000fc0d1
- (void)displaySharePlayUnableToStartAlert;	// IMP=0x00100000000fbfe0
@property(readonly, nonatomic, getter=isScreenSharingAvailable) _Bool screenSharingAvailable;
@property(readonly, nonatomic, getter=isSharePlayAvailable) _Bool sharePlayAvailable;
@property(readonly, nonatomic) _Bool allActiveConversationParticipantsSupportSharePlay;
- (void)addInvitedMemberHandlesFromAddedRemoteMembers:(id)arg1 toConversationLink:(id)arg2;	// IMP=0x00100000000fb60b
- (void)maybeAddComplementaryAssociationVoucherFor:(id)arg1 toLocalMemberOf:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fabfd
- (void)addRemoteMembers:(id)arg1 otherInvitedHandles:(id)arg2 toConversationWithUUID:(id)arg3;	// IMP=0x00100000000fa2ad
- (void)addRemoteMembers:(id)arg1 toConversationWithUUID:(id)arg2;	// IMP=0x00100000000fa21b
- (void)removeRemoteMembers:(id)arg1 fromConversationWithUUID:(id)arg2;	// IMP=0x00100000000f9f6e
- (void)setScreenShareAttributes:(id)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f9e11
- (void)setGridDisplayMode:(unsigned long long)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f9cd9
- (void)setPresentationRect:(struct CGRect)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f9b87
- (void)setPresentationState:(int)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f9a50
- (int)presentationStateForConversationWithUUID:(id)arg1;	// IMP=0x00100000000f98bd
- (void)setSplitSessionUserProfileState:(long long)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f9785
- (_Bool)isConversationWithUUIDRelaying:(id)arg1;	// IMP=0x00100000000f95f5
- (void)setRelaying:(_Bool)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f94bd
- (void)setAudioPaused:(_Bool)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f9385
- (void)setVideoPaused:(_Bool)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f924d
- (void)setScreenEnabled:(_Bool)arg1 screenShareAttributes:(id)arg2 forConversationWithUUID:(id)arg3;	// IMP=0x00100000000f89ce
- (void)setScreenEnabled:(_Bool)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f894d
- (void)setVideoEnabled:(_Bool)arg1 forPendingConversationWithUUID:(id)arg2;	// IMP=0x00100000000f84b2
- (void)setUplinkMuted:(_Bool)arg1 forPendingConversationWithUUID:(id)arg2;	// IMP=0x00100000000f8017
- (void)setVideoEnabled:(_Bool)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f7edf
- (void)sendVideoUpgradeMessageforConversationWithUUID:(id)arg1;	// IMP=0x00100000000f7be5
- (void)setVideo:(_Bool)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f7aad
- (void)setUplinkMuted:(_Bool)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x00100000000f7975
- (void)removePseudonym:(id)arg1 forCallUUID:(id)arg2;	// IMP=0x00100000000f7873
- (void)addPseudonym:(id)arg1 forCallUUID:(id)arg2;	// IMP=0x00100000000f7740
- (void)leaveAllConversations;	// IMP=0x00100000000f7564
- (void)leaveConversationWithUUID:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000000f7403
- (void)leaveConversationWithUUID:(id)arg1;	// IMP=0x00100000000f7391
- (void)_leaveConversation:(id)arg1;	// IMP=0x00100000000f72f0
- (void)_leaveConversation:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000000f719d
- (void)startAudioForConversationWithUUID:(id)arg1;	// IMP=0x00100000000f6f30
- (void)sendInvitationMessageToMember:(id)arg1 forConversation:(id)arg2 includeAllAttributes:(_Bool)arg3 invitationPreferences:(id)arg4 additionalOptions:(id)arg5;	// IMP=0x00100000000f6816
- (void)updateLetMeInRequestState:(long long)arg1 addLink:(id)arg2 forConversationWithUUID:(id)arg3;	// IMP=0x00100000000f61ab
- (void)sendLetMeInResponseToPendingMember:(id)arg1 forConversation:(id)arg2 usingResponseKeyData:(id)arg3 approved:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x00100000000f5a08
- (void)requestLetMeInApprovalForPseudonym:(id)arg1;	// IMP=0x00100000000f4bd3
- (id)initiatePendingConversationForLink:(id)arg1 localMember:(id)arg2 isVideoEnabled:(_Bool)arg3;	// IMP=0x00100000000f43df
- (void)joinExistingConversationWithUUID:(id)arg1 context:(id)arg2;	// IMP=0x00100000000f38e7
- (id)findOrCreateConversationWithGroupUUID:(id)arg1 messagesGroupUUID:(id)arg2 remoteMembers:(id)arg3 otherInvitedHandles:(id)arg4 localMember:(id)arg5 remotePushTokens:(id)arg6 link:(id)arg7 activity:(id)arg8 avMode:(unsigned long long)arg9 conversationProvider:(id)arg10;	// IMP=0x00100000000f2bd0
- (void)removeAllConversations;	// IMP=0x00100000000f2b93
- (void)retreiveActiveConversations;	// IMP=0x00100000000f23cf
- (void)beginListeningOnService:(id)arg1;	// IMP=0x00100000000f217d
- (void)removeDelegate:(id)arg1;	// IMP=0x00100000000f207a
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000f1f49
@property(readonly, copy, nonatomic) NSDictionary *activityAuthorizedBundleIdentifierState;
- (id)deletedConversationLinksWithError:(id *)arg1;	// IMP=0x00100000000f1eb2
- (id)activatedConversationLinksWithError:(id *)arg1;	// IMP=0x00100000000f1e34
- (id)conversationsByUUIDIncludingStorageConversations:(_Bool)arg1;	// IMP=0x00100000000f18b6
@property(readonly, copy, nonatomic) NSDictionary *pseudonymsByCallUUID;
@property(readonly, copy, nonatomic) NSDictionary *conversationsByUUID;
- (id)_incomingPendingConversationsByGroupUUID;	// IMP=0x00100000000f11a6
@property(readonly, copy, nonatomic) NSDictionary *incomingPendingConversationsByGroupUUID;
@property(readonly, copy, nonatomic) NSDictionary *conversationsByGroupUUID;
- (void)refreshActiveParticipantsList;	// IMP=0x00100000000f0860
- (_Bool)verifyEndorseRepresentsMemberFromHandle:(id)arg1 message:(id)arg2 existingConversation:(id)arg3;	// IMP=0x00100000000f0385
- (_Bool)verifyLightweightMessageTypeFromHandle:(id)arg1 message:(id)arg2 existingConversation:(id)arg3;	// IMP=0x00100000000f01ed
- (_Bool)verifyGroupSessionParticipantUpdateAllowedFromHandle:(id)arg1 participantUpdate:(id)arg2 message:(id)arg3 existingConversation:(id)arg4 lightweightMembers:(id)arg5;	// IMP=0x00100000000efd7a
- (_Bool)verifyAllLightweightmembersAssociated:(id)arg1 remoteMembers:(id)arg2;	// IMP=0x00100000000efa76
- (_Bool)verifyBlobResponseFromHandle:(id)arg1 message:(id)arg2 existingConversation:(id)arg3;	// IMP=0x00100000000ef524
- (_Bool)verifyMessageIntentKeyFromContext:(id)arg1 message:(id)arg2;	// IMP=0x00100000000ef416
- (_Bool)verifyActivitySessionOriginatorFromHandle:(id)arg1 message:(id)arg2;	// IMP=0x00100000000ef079
- (_Bool)verifyKickMemberPermittedFromHandle:(id)arg1 message:(id)arg2;	// IMP=0x00100000000eed5d
- (_Bool)shouldAcceptMembershipUpdateFromHandle:(id)arg1 joinContext:(id)arg2 participantUpdate:(id)arg3 existingConversation:(id)arg4;	// IMP=0x00100000000ee762
- (_Bool)shouldAcceptMessageFromHandle:(id)arg1 messageContext:(id)arg2 message:(id)arg3 existingConversation:(id)arg4;	// IMP=0x00100000000ee4ec
- (id)memberExistsForParticipantDestination:(id)arg1 groupSessionParticipantUpdate:(id)arg2;	// IMP=0x00100000000ee051
- (id)memberExistsForParticipantDestination:(id)arg1 members:(id)arg2;	// IMP=0x00100000000edce3
- (void)broadcastLightweightEndorsementForAddedMembers:(id)arg1 onConversation:(id)arg2;	// IMP=0x00100000000ed97e
- (void)broadcastImageForSession:(id)arg1 onConversation:(id)arg2;	// IMP=0x00100000000ed0e9
- (_Bool)broadcastData:(id)arg1 onConversation:(id)arg2;	// IMP=0x00100000000ed0d4
- (_Bool)broadcastData:(id)arg1 onConversation:(id)arg2 additionalOptions:(id)arg3;	// IMP=0x00100000000eca83
- (_Bool)broadcastFile:(id)arg1 onConversation:(id)arg2 additionalOptions:(id)arg3;	// IMP=0x00100000000ec375
- (_Bool)sendData:(id)arg1 onConversation:(id)arg2 toMember:(id)arg3;	// IMP=0x00100000000ec360
- (_Bool)sendData:(id)arg1 onConversation:(id)arg2 toMember:(id)arg3 additionalOptions:(id)arg4;	// IMP=0x00100000000ec1b1
- (_Bool)sendData:(id)arg1 onConversation:(id)arg2 toHandle:(id)arg3 isBlobResponse:(_Bool)arg4;	// IMP=0x00100000000ec044
- (_Bool)sendData:(id)arg1 onConversation:(id)arg2 toHandle:(id)arg3;	// IMP=0x00100000000ec02f
- (_Bool)sendData:(id)arg1 onConversation:(id)arg2 toDestinationID:(id)arg3;	// IMP=0x00100000000ebf79
- (_Bool)sendData:(id)arg1 onConversation:(id)arg2 toDestinationID:(id)arg3 fromMember:(id)arg4;	// IMP=0x00100000000ebf58
- (_Bool)sendData:(id)arg1 onConversation:(id)arg2 toDestinationID:(id)arg3 fromMember:(id)arg4 additionalOptions:(id)arg5 isBlobResponse:(_Bool)arg6 callback:(CDUnknownBlockType)arg7;	// IMP=0x00100000000eb91b
- (void)handleReceivedUpdateJoinedMetadataMessage:(id)arg1 fromHandle:(id)arg2;	// IMP=0x00100000000eaf80
- (_Bool)sendMessagesForInvalidatedLink:(id)arg1;	// IMP=0x00100000000eab15
- (_Bool)sendMessagesForCreatedOrChangedLink:(id)arg1 conversation:(id)arg2 messageType:(int)arg3;	// IMP=0x00100000000e9f56
- (void)handleReceivedLMIDelegateMessage:(id)arg1 fromHandle:(id)arg2;	// IMP=0x00100000000e96b1
- (void)handleReceivedLinkInvalidatedMessage:(id)arg1 fromHandle:(id)arg2;	// IMP=0x00100000000e8e98
- (void)handleReceivedLinkCreatedOrChangedMessage:(id)arg1 fromHandle:(id)arg2;	// IMP=0x00100000000e7f0d
- (void)handleReceivedLetMeInResponse:(id)arg1 pendingConversation:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000000e77e7
- (void)handleReceivedLetMeInRequest:(id)arg1 toPseudonym:(id)arg2 fromHandle:(id)arg3 responseKeyData:(id)arg4 dateInitiated:(id)arg5;	// IMP=0x00100000000e65ac
- (void)handleEncryptedLetMeInResponse:(id)arg1 fromHandle:(id)arg2 context:(id)arg3;	// IMP=0x00100000000e5eda
- (void)handleEncryptedLetMeInRequest:(id)arg1 fromHandle:(id)arg2 context:(id)arg3;	// IMP=0x00100000000e5851
- (void)handleEncryptedMessageWithin:(id)arg1 fromHandle:(id)arg2 context:(id)arg3;	// IMP=0x00100000000e569e
- (id)temporaryFilePath;	// IMP=0x00100000000e5622
- (_Bool)_linksEnabled;	// IMP=0x00100000000e5615
- (void)handleConversationHandoffRouteIdentifierChangedNotification:(id)arg1;	// IMP=0x00100000000e4c4a
- (void)updateConversationHandoffEligibility:(id)arg1;	// IMP=0x00100000000e41b3
- (void)handleConversationHandoffRecommendationChangedNotification:(id)arg1;	// IMP=0x00100000000e40dc
- (void)handleSplitSessionConversationAnsweredNotification:(id)arg1;	// IMP=0x00100000000e3f44
- (void)handleConversation:(id)arg1 receivedBlobRecoveryResponse:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000000e3bb7
- (void)handleConversation:(id)arg1 receivedBlobRecoveryRequest:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000000e380e
- (void)notifyDelegatesOfInvalidLinkForPendingConversation:(id)arg1;	// IMP=0x00100000000e33d9
- (void)notifyDelegatesOfLetMeInRejectedForPendingConversation:(id)arg1;	// IMP=0x00100000000e2fa4
- (void)notifyDelegatesOfChangedLink:(id)arg1 conversation:(id)arg2;	// IMP=0x00100000000e292b
- (void)notifyDelegatesOfChangedLinkDescriptors:(id)arg1;	// IMP=0x00100000000e2827
- (void)notifyDelegatesOfUpdatePendingConversations;	// IMP=0x00100000000e2554
- (void)notifyDelegatesOfTrackedPendingMember:(id)arg1 forConversationLink:(id)arg2;	// IMP=0x00100000000e2256
- (void)notifyDelegatesOfRemovedConversationWithUUID:(id)arg1;	// IMP=0x00100000000e1fb5
- (void)notifyDelegatesOfAVModeChanged:(unsigned long long)arg1 toAVMode:(unsigned long long)arg2 forConversation:(id)arg3;	// IMP=0x00100000000e1b45
- (void)notifyDelegatesOfNewConversation:(id)arg1 fromHandle:(id)arg2;	// IMP=0x00100000000e1689
- (void)notifyDelegatesOfMessage:(id)arg1 fromHandle:(id)arg2 forConversation:(id)arg3 withUpdate:(id)arg4;	// IMP=0x00100000000e110e
- (id)conversationWithGroupUUID:(id)arg1 orMemberIdentifiers:(id)arg2 orRemoteMembers:(id)arg3 andLink:(id)arg4 andVideo:(_Bool)arg5;	// IMP=0x00100000000e0ca6
- (id)createConversationIfNecessaryWithUUID:(id)arg1 groupUUID:(id)arg2 messagesGroupUUID:(id)arg3 locallyCreated:(_Bool)arg4 localMember:(id)arg5 remoteMembers:(id)arg6 pendingMembers:(id)arg7 otherInvitedHandles:(id)arg8 remotePushTokens:(id)arg9 lightweightMembers:(id)arg10 link:(id)arg11 activity:(id)arg12 avMode:(unsigned long long)arg13 provider:(id)arg14;	// IMP=0x00100000000e08fd
- (id)conversationLinkForGroupUUID:(id)arg1;	// IMP=0x00100000000e06fd
- (id)conversationLinkForPseudonym:(id)arg1;	// IMP=0x00100000000e057e
- (id)findConversationLinkMatchingPseudonym:(id)arg1;	// IMP=0x00100000000e037e
- (id)pendingConversationWithPseudonym:(id)arg1;	// IMP=0x00100000000e011c
- (id)activeApprovedConversationWithLink:(id)arg1;	// IMP=0x00100000000dfd7f
- (id)conversationRepresentedByRemoteMembers:(id)arg1 andLink:(id)arg2;	// IMP=0x00100000000dfa25
- (id)conversationWithGroupUUID:(id)arg1 orRepresentedByRemoteMembers:(id)arg2 andLink:(id)arg3;	// IMP=0x00100000000df7c5
- (id)conversationWithGroupUUID:(id)arg1;	// IMP=0x00100000000df5a2
- (id)conversationWithGroupUUID:(id)arg1 andProvider:(id)arg2;	// IMP=0x00100000000df37f
- (id);	// IMP=0x00100000000df1d3
- (void)removeAllPendingConversations;	// IMP=0x00100000000df121
- (id)_removePendingConversationWithPseudonym:(id)arg1;	// IMP=0x00100000000defef
- (id)removePendingConversationWithPseudonym:(id)arg1;	// IMP=0x00100000000dee70
- (id)pendingConversationUUIDWithPseudonym:(id)arg1;	// IMP=0x00100000000deaca
- (id)createConversationWithUUID:(id)arg1 groupUUID:(id)arg2 messagesGroupUUID:(id)arg3 locallyCreated:(_Bool)arg4 localMember:(id)arg5 initiator:(id)arg6 remoteMembers:(id)arg7 pendingMembers:(id)arg8 otherInvitedHandles:(id)arg9 remotePushTokens:(id)arg10 lightweightMembers:(id)arg11 activity:(id)arg12 link:(id)arg13 report:(id)arg14 fromStorage:(_Bool)arg15 avMode:(unsigned long long)arg16 provider:(id)arg17;	// IMP=0x00100000000ddb43
- (id)localMemberForProvider:(id)arg1 fromHandle:(id)arg2 members:(id)arg3 lightweightMembers:(id)arg4 activeLocalHandles:(id)arg5;	// IMP=0x00100000000dd5f0
- (id)callerIDForLocalMember:(id)arg1;	// IMP=0x00100000000dd5dc
- (id)callerIDForLocalMember:(id)arg1 forProvider:(id)arg2;	// IMP=0x00100000000dd4c0
- (id)callerIDHandleForSenderIdentityUUID:(id)arg1;	// IMP=0x00100000000dd296
- (id)senderIdentityUUIDForCallerIDHandle:(id)arg1;	// IMP=0x00100000000dd06c
- (_Bool)isHandleStringLocalPseudonym:(id)arg1 provider:(id)arg2;	// IMP=0x00100000000dcf82
- (_Bool)isHandleStringLocalPseudonym:(id)arg1;	// IMP=0x00100000000dcf6e
- (_Bool)isHandleLocalPseudonym:(id)arg1 provider:(id)arg2;	// IMP=0x00100000000dcef1
- (_Bool)isValidLocalHandle:(id)arg1 activeLocalHandles:(id)arg2 provider:(id)arg3;	// IMP=0x00100000000dce6c
- (_Bool)isValidLocalHandle:(id)arg1;	// IMP=0x00100000000dcdd5
- (_Bool)isValidLocalHandle:(id)arg1 forProvider:(id)arg2;	// IMP=0x00100000000dcd3e
- (id)initWithQueue:(id)arg1 reportingController:(id)arg2 persistenceController:(id)arg3 linkManager:(id)arg4 cpApplicationController:(id)arg5 invitationResolver:(id)arg6 pendingMembershipTracker:(id)arg7 featureFlags:(id)arg8 applicationPolicyManager:(id)arg9;	// IMP=0x00100000000db388
- (id)initWithQueue:(id)arg1 reportingController:(id)arg2 persistenceController:(id)arg3 linkManager:(id)arg4 invitationResolver:(id)arg5 pendingMembershipTracker:(id)arg6 featureFlags:(id)arg7;	// IMP=0x00100000000db350
- (id)init;	// IMP=0x00100000000db325
- (id)initWithReportingController:(id)arg1 cpApplicationController:(id)arg2 invitationResolver:(id)arg3;	// IMP=0x00100000000db1f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

