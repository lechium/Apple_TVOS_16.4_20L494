//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKTurnBasedMultiplayerInviteBulletin
{
}

+ (_Bool)shouldExpirePlayerList;	// IMP=0x00400000001eea0c
+ (_Bool)shouldLoadCacheList;	// IMP=0x00100000001eea04
+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001edd32
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00400000001ef7bf
- (void)handleDeclineAction;	// IMP=0x00100000001ef642
- (void)handleAcceptAction;	// IMP=0x00100000001ef46f
- (void)handleAction:(id)arg1;	// IMP=0x00100000001ef0d5
- (void)assembleBulletin;	// IMP=0x00100000001eea14

@end
