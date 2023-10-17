//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKTurnBasedService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000000a6a27
+ (Class)interfaceClass;	// IMP=0x00100000000a6a16
- (void)saveRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00200000000ba2db
- (id)privateDatabase;	// IMP=0x00100000000ba27d
- (oneway void)reserveShareParticipantSlots:(long long)arg1 minPlayerCount:(long long)arg2 maxPlayerCount:(long long)arg3 andInvitePlayers:(id)arg4 withMessage:(id)arg5 forMatch:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000b99de
- (oneway void)loadURLWithTBGMatch:(id)arg1 player:(id)arg2 matchRequest:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b913b
- (oneway void)sendReminderToParticipants:(id)arg1 message:(id)arg2 match:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b8c52
- (oneway void)getNextTurnBasedEventWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b8803
- (oneway void)replyToExchange:(id)arg1 withMessage:(id)arg2 data:(id)arg3 match:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b8604
- (oneway void)cancelExchange:(id)arg1 withMessage:(id)arg2 match:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b848d
- (oneway void)sendRequest:(id)arg1 forBagKey:(id)arg2 exchange:(id)arg3 matchID:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b78ba
- (oneway void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 message:(id)arg3 timeout:(double)arg4 match:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000b6afa
- (oneway void)completeTurnBasedMatch:(id)arg1 scores:(id)arg2 achievements:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b55a3
- (id)_requestForTurnBasedSubmitValues:(id)arg1 withServerLabel:(id)arg2 sessionID:(id)arg3;	// IMP=0x00100000000b518e
- (oneway void)resignFromTurnBasedGame:(id)arg1 outcome:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b44ca
- (oneway void)saveDataForTurnBasedMatch:(id)arg1 resolvedExchangeIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b37c9
- (oneway void)submitTurnForTurnBasedMatch:(id)arg1 nextParticipantIndexes:(id)arg2 turnTimeout:(double)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b282a
- (oneway void)removeTurnBasedMatch:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b1e24
- (oneway void)declineInviteForTurnBasedMatch:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b0fd4
- (oneway void)acceptInviteForTurnBasedMatch:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000afc6a
- (oneway void)getDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000afc52
- (oneway void)getDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 prefetchOnly:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000af0fa
- (void)loadDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ae5d5
- (void)fetchDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000adae2
- (void)_updatePlayersForMatches:(id)arg1 group:(id)arg2;	// IMP=0x00100000000ad24b
- (oneway void)getTurnBasedMatchesAndCompatibleBundleID:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000abd69
- (void)fetchTurnBasedMatchesForGame:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ab5f4
- (void)loadTurnBasedMatchesForGame:(id)arg1 loadDetails:(_Bool)arg2 prefetchOnly:(_Bool)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000aa9e6
- (void)_determineTurnBasedBadgeCountFromList:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aa34d
- (void)_determineCompatibleBundleIDForAppID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 platform:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a96b9
- (void)_determineCompatibleGamesForMatches:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00100000000a8684
- (void)_updateGamesForTurnBasedMatches:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00100000000a826f
- (oneway void)createTurnBasedGameForMatchRequest:(id)arg1 individualMessages:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a6caf
- (id)turnsForParticipantIndexes:(id)arg1 turnTimeout:(double)arg2;	// IMP=0x00100000000a6a49
- (void)getTurnBasedMatchesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a6a32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

