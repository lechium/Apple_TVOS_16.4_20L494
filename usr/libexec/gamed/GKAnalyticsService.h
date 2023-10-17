//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKAnalyticsService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000000c729d
+ (Class)interfaceClass;	// IMP=0x00100000000c728c
- (void)respondedToBulletin:(id)arg1;	// IMP=0x00200000000c7310
- (void)purchasedGame:(id)arg1;	// IMP=0x00100000000c730a
- (void)stoppedPlayingGame;	// IMP=0x00100000000c7304
- (void)beganPlayingGame;	// IMP=0x00100000000c72fe
- (void)quitMatch:(id)arg1 withOutcome:(long long)arg2;	// IMP=0x00100000000c72f8
- (void)disconnectedMatchWithID:(id)arg1;	// IMP=0x00100000000c72f2
- (void)rematchedWithMatchRequest:(id)arg1;	// IMP=0x00100000000c72ec
- (void)sentMatchRequest:(id)arg1;	// IMP=0x00100000000c72e6
- (void)declinedInvite:(id)arg1;	// IMP=0x00100000000c72e0
- (void)declinedInviteForTurnBasedMatch:(id)arg1;	// IMP=0x00100000000c72da
- (void)acceptedInviteForTurnBasedMatch:(id)arg1;	// IMP=0x00100000000c72d4
- (void)acceptedInvite:(id)arg1;	// IMP=0x00100000000c72ce
- (void)completedChallenge:(id)arg1;	// IMP=0x00100000000c72c8
- (void)wantsToPlayChallenge:(id)arg1;	// IMP=0x00100000000c72c2
- (void)declinedChallenge:(id)arg1;	// IMP=0x00100000000c72bc
- (void)postedScore:(id)arg1;	// IMP=0x00100000000c72b6
- (void)updatedAchievement:(id)arg1;	// IMP=0x00100000000c72b0
- (_Bool)requiresAuthentication;	// IMP=0x00100000000c72a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
