//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSSet, NSString, NSURL, NSUUID, TUConversation, TUConversationActivity, TUConversationActivitySession, TUConversationLink, TUConversationMember, TUJoinConversationRequest, TUScreenShareAttributes;
@protocol TUConversationManagerDataSourceDelegate, TUConversationMediaControllerDataSourceDelegate;

@protocol TUConversationManagerDataSource <NSObject>
@property(nonatomic) __weak id <TUConversationMediaControllerDataSourceDelegate> mediaDelegate;
@property(nonatomic) __weak id <TUConversationManagerDataSourceDelegate> delegate;
@property(readonly, nonatomic) _Bool isScreenSharingAvailable;
@property(readonly, nonatomic) _Bool isSharePlayAvailable;
@property(nonatomic) _Bool autoSharePlayEnabled;
@property(readonly, copy, nonatomic) NSDictionary *activityAuthorizedBundleIdentifiers;
@property(readonly, copy, nonatomic) NSSet *activatedConversationLinks;
@property(readonly, copy, nonatomic) NSDictionary *pseudonymsByCallUUID;
@property(readonly, copy, nonatomic) NSDictionary *incomingPendingConversationsByGroupUUID;
@property(readonly, copy, nonatomic) NSDictionary *conversationsByGroupUUID;
- (void)getMessagesGroupDetailsForConversationUUID:(NSUUID *)arg1 completionHandler:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)setSupportsMessagesGroupProviding:(_Bool)arg1;
- (void)invalidate;
- (void)registerWithCompletionHandler:(void (^)(void))arg1;
- (void)setGridDisplayMode:(unsigned long long)arg1 conversation:(TUConversation *)arg2;
- (void)conversationUpdateMessagesGroupPhoto:(TUConversation *)arg1;
- (void)updateMessagesGroupName:(NSString *)arg1 onConversation:(TUConversation *)arg2;
- (void)updateConversationWithUUID:(NSUUID *)arg1 participantPresentationContexts:(NSArray *)arg2;
- (void)fetchUpcomingNoticeWithCompletionHandler:(void (^)(TUConversationNotice *, NSError *))arg1;
- (void)removeConversationNoticeWithUUID:(NSUUID *)arg1;
- (void)activateConversationNoticeWithActionURL:(NSURL *)arg1 bundleIdentifier:(NSString *)arg2;
- (void)setIgnoreLetMeInRequests:(_Bool)arg1 forConversation:(TUConversation *)arg2;
- (void)rejectPendingMember:(TUConversationMember *)arg1 forConversation:(TUConversation *)arg2;
- (void)approvePendingMember:(TUConversationMember *)arg1 forConversation:(TUConversation *)arg2;
- (void)leaveConversationWithUUID:(NSUUID *)arg1;
- (void)joinConversationWithRequest:(TUJoinConversationRequest *)arg1;
- (void)linkSyncStateIncludeLinks:(_Bool)arg1 WithCompletion:(void (^)(NSString *))arg2;
- (void)setScreenEnabled:(_Bool)arg1 withScreenShareAttributes:(TUScreenShareAttributes *)arg2 forConversationWithUUID:(NSUUID *)arg3;
- (void)scheduleConversationLinkCheckInInitial:(_Bool)arg1;
- (void)setLinkName:(NSString *)arg1 forConversationLink:(TUConversationLink *)arg2 completionHandler:(void (^)(TUConversationLink *, NSError *))arg3;
- (void)activateLink:(TUConversationLink *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)getInactiveLinkWithCompletionHandler:(void (^)(TUConversationLink *, NSError *))arg1;
- (void)checkLinkValidity:(TUConversationLink *)arg1 completionHandler:(void (^)(_Bool, NSDate *, NSError *))arg2;
- (void)renewLink:(TUConversationLink *)arg1 expirationDate:(NSDate *)arg2 reason:(unsigned long long)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)invalidateLink:(TUConversationLink *)arg1 userInteraction:(_Bool)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)addInvitedMemberHandles:(NSSet *)arg1 toConversationLink:(TUConversationLink *)arg2 completionHandler:(void (^)(TUConversationLink *, NSError *))arg3;
- (void)generateLinkWithInvitedMemberHandles:(NSSet *)arg1 linkLifetimeScope:(long long)arg2 completionHandler:(void (^)(TUConversationLink *, NSError *))arg3;
- (void)generateLinkForConversation:(TUConversation *)arg1 completionHandler:(void (^)(TUConversationLink *, NSError *))arg2;
- (void)getActiveLinksWithCreatedOnly:(_Bool)arg1 completionHandler:(void (^)(NSSet *, NSError *))arg2;
- (void)getLatestRemoteScreenShareAttributesWithCompletionHandler:(void (^)(id <TUScreenShareAttributes>))arg1;
- (void)refreshActiveConversations;
- (void)registerMessagesGroupUUIDForConversationUUID:(NSUUID *)arg1;
- (void)setLocalParticipantAudioVideoMode:(unsigned long long)arg1 forConversationUUID:(NSUUID *)arg2;
- (void)setVideoEnabled:(_Bool)arg1 forRemoteParticipantWithIdentifier:(unsigned long long)arg2 conversation:(TUConversation *)arg3;
- (void)setAudioEnabled:(_Bool)arg1 forRemoteParticipantWithIdentifier:(unsigned long long)arg2 conversation:(TUConversation *)arg3;
- (void)setDownlinkMuted:(_Bool)arg1 forRemoteParticipantsInConversation:(TUConversation *)arg2;
- (void)kickMember:(TUConversationMember *)arg1 conversation:(TUConversation *)arg2;
- (void)buzzMember:(TUConversationMember *)arg1 conversation:(TUConversation *)arg2;
- (void)setUsingAirplay:(_Bool)arg1 onActivitySession:(TUConversationActivitySession *)arg2 onConversationWithUUID:(NSUUID *)arg3;
- (void)launchApplicationForActivitySessionUUID:(NSUUID *)arg1 forceBackground:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)launchApplicationForActivitySessionUUID:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setActivityAuthorization:(_Bool)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)presentDismissalAlertForActivitySession:(TUConversationActivitySession *)arg1 onConversation:(TUConversation *)arg2;
- (void)endActivitySession:(TUConversationActivitySession *)arg1 onConversation:(TUConversation *)arg2;
- (void)leaveActivitySession:(TUConversationActivitySession *)arg1 onConversation:(TUConversation *)arg2;
- (void)createActivitySession:(TUConversationActivity *)arg1 onConversation:(TUConversation *)arg2;
- (void)addRemoteMembers:(NSSet *)arg1 otherInvitedHandles:(NSSet *)arg2 toConversation:(TUConversation *)arg3;
- (void)addRemoteMembers:(NSSet *)arg1 toConversation:(TUConversation *)arg2;
@end

