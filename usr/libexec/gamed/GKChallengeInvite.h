//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKChallengeInternal, GKPlayerInternal, GKStoreItemInternal, NSDictionary, NSString;

@interface GKChallengeInvite : NSObject
{
    NSString *_challengeID;	// 8 = 0x8
    GKChallengeInternal *_challenge;	// 16 = 0x10
    GKPlayerInternal *_receivingPlayer;	// 24 = 0x18
    GKPlayerInternal *_issuingPlayer;	// 32 = 0x20
    GKStoreItemInternal *_storeItem;	// 40 = 0x28
    NSString *_goalText;	// 48 = 0x30
    NSDictionary *_pushDescriptor;	// 56 = 0x38
    NSString *_gameTitle;	// 64 = 0x40
    NSString *_resolvedBundleID;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000174132
- (void).cxx_destruct;	// IMP=0x00200000001759b6
@property(retain, nonatomic) NSDictionary *pushDescriptor; // @synthesize pushDescriptor=_pushDescriptor;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(retain, nonatomic) NSString *resolvedBundleID; // @synthesize resolvedBundleID=_resolvedBundleID;
@property(retain, nonatomic) NSString *gameTitle; // @synthesize gameTitle=_gameTitle;
@property(retain, nonatomic) NSString *goalText; // @synthesize goalText=_goalText;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) GKPlayerInternal *issuingPlayer; // @synthesize issuingPlayer=_issuingPlayer;
@property(retain, nonatomic) GKPlayerInternal *receivingPlayer; // @synthesize receivingPlayer=_receivingPlayer;
@property(retain, nonatomic) GKChallengeInternal *challenge; // @synthesize challenge=_challenge;
- (void)loadGoalTextForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000174cf7
- (void)loadDetailsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000174219
- (id)initWithChallenge:(id)arg1;	// IMP=0x00100000001741ae
- (id)challengeInternalObject;	// IMP=0x00100000001741a6
- (id)description;	// IMP=0x001000000017413a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000017404d
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000173e43

@end

