//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKFriendService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000037f49
+ (Class)interfaceClass;	// IMP=0x0010000000037f38
- (oneway void)createFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x002000000003a8a5
- (oneway void)establishNearbyRelationshipsUsingPlayerTokens:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a316
- (id)predicateForFriendPredicate:(id)arg1 withFilter:(id)arg2;	// IMP=0x001000000003a1e3
- (oneway void)getNearbyTokenForLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000039bc8
- (void)getFriendIDsForPlayer:(id)arg1 withPredicate:(CDUnknownBlockType)arg2 withFilter:(id)arg3 commonFriends:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000386d7
- (id)filterCachedFriendObjects:(id)arg1 filter:(id)arg2;	// IMP=0x00100000000383e2
- (void)getFriendIDsForPlayer:(id)arg1 withPredicate:(CDUnknownBlockType)arg2 commonFriends:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000383ba
- (oneway void)getChallengableFriendsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000381f7
- (void)getFriendIDsForPlayer:(id)arg1 commonFriends:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000381b3
- (void)getFriendsForPlayer:(id)arg1 commonFriends:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003801c
- (void)updateFriendsOfLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000037f71
- (oneway void)getFriendsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037f5a
- (oneway void)notifyWidgetFriendListUpdated;	// IMP=0x0010000000037f54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
