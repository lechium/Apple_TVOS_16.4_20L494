//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSNumber, NSOrderedSet, NSString;

@interface GKTurnBasedSessionCacheObject
{
}

+ (id)sessionsWithSessionIDs:(id)arg1 inContext:(id)arg2;	// IMP=0x0040000000166369
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x001000000016635c
+ (id)uniqueAttributeName;	// IMP=0x001000000016634f
+ (id)sessionWithID:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x0010000000166257
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x00100000001642a9
+ (id)entityName;	// IMP=0x001000000016429c
- (id)internalRepresentation;	// IMP=0x00200000001669c6
- (id)participantAtIndex:(long long)arg1;	// IMP=0x00100000001667ad
- (void)expire;	// IMP=0x001000000016673c
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0010000000165101
- (id)participantWithPlayerID:(id)arg1;	// IMP=0x0010000000164dff
- (void)saveGameData:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0010000000164a94
- (void)expireGameData;	// IMP=0x00100000001648d2
- (void)deleteGameData;	// IMP=0x00100000001645bd
- (id)gameData;	// IMP=0x00100000001643aa
- (void)prepareForDeletion;	// IMP=0x001000000016436c
- (_Bool)isActive;	// IMP=0x00100000001642d5

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSString *currentGuestID; // @dynamic currentGuestID;
@property(nonatomic) int currentParticipant; // @dynamic currentParticipant;
@property(retain, nonatomic) NSString *currentPlayerID; // @dynamic currentPlayerID;
@property(retain, nonatomic) NSDate *dataExpirationDate; // @dynamic dataExpirationDate;
@property(retain, nonatomic) NSDate *deletionDate; // @dynamic deletionDate;
@property(retain, nonatomic) NSOrderedSet *exchanges; // @dynamic exchanges;
@property(retain, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(retain, nonatomic) NSString *lastTurnPlayerID; // @dynamic lastTurnPlayerID;
@property(retain, nonatomic) NSData *localizableMessage; // @dynamic localizableMessage;
@property(retain, nonatomic) NSString *matchDataVersion; // @dynamic matchDataVersion;
@property(nonatomic) int maxPlayers; // @dynamic maxPlayers;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) int minPlayers; // @dynamic minPlayers;
@property(retain, nonatomic) NSOrderedSet *participants; // @dynamic participants;
@property(retain, nonatomic) NSNumber *platform; // @dynamic platform;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) NSString *sessionID; // @dynamic sessionID;
@property(retain, nonatomic) NSString *shortBundleVersion; // @dynamic shortBundleVersion;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(nonatomic) int turnNumber; // @dynamic turnNumber;
@property(retain, nonatomic) NSString *unusedID; // @dynamic unusedID;

@end

