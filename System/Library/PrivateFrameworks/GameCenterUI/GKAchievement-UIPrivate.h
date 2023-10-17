//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKAchievement.h>

@interface GKAchievement (UIPrivate)
+ (void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00800000000e21bf
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007a2ff
- (void)showBanner;	// IMP=0x001000000007a2c2
- (id)imageURL;	// IMP=0x001000000007a272
- (void)selectChallengeablePlayers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e255d
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e2388
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;	// IMP=0x00100000000e21dc
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e2036
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e1d34
@end
