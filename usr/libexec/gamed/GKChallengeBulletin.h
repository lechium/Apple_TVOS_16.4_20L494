//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKChallengeInternal, GKStoreItemInternal, NSString;

@interface GKChallengeBulletin
{
    GKChallengeInternal *_challenge;	// 16 = 0x10
    NSString *_challengeID;	// 24 = 0x18
    GKStoreItemInternal *_storeItem;	// 32 = 0x20
}

+ (void)expireChallengeList;	// IMP=0x0040000000201259
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002010d8
- (void).cxx_destruct;	// IMP=0x0020000000203ebc
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(retain, nonatomic) GKChallengeInternal *challenge; // @synthesize challenge=_challenge;
- (void)handleAcceptAction;	// IMP=0x0010000000203777
- (unsigned long long)launchEventType;	// IMP=0x001000000020362a
- (id)customChallengeSoundPathForBundleID:(id)arg1;	// IMP=0x0010000000203428
- (void)assembleBulletin;	// IMP=0x0010000000203159
- (void)notifyClient:(id)arg1;	// IMP=0x0010000000202f8d
- (void)notifyApp;	// IMP=0x0010000000202c26
- (_Bool)isAppRunning;	// IMP=0x0010000000202853
- (void)refreshData;	// IMP=0x00100000002025c0
- (void)setGameName:(id)arg1;	// IMP=0x001000000020255b
- (_Bool)supportsChallenges;	// IMP=0x00100000002024ed
- (id)gameName;	// IMP=0x0010000000202473
- (void)setOriginatorPlayer:(id)arg1;	// IMP=0x001000000020240e
- (id)originatorPlayer;	// IMP=0x00100000002023be
- (void)setOriginatorPlayerID:(id)arg1;	// IMP=0x0010000000202359
- (id)originatorPlayerID;	// IMP=0x00100000002022df
- (void)setReceiverPlayer:(id)arg1;	// IMP=0x001000000020227a
- (id)receiverPlayer;	// IMP=0x001000000020222a
- (void)setReceiverPlayerID:(id)arg1;	// IMP=0x00100000002021c5
- (id)receiverPlayerID;	// IMP=0x001000000020214b
- (id)gameDescriptor;	// IMP=0x0010000000201de4
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000201537
- (id)URLContext;	// IMP=0x0010000000201245
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002011aa
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000020110f
- (id)init;	// IMP=0x00100000002010e0

@end

