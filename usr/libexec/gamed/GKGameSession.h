//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKCloudPlayer, NSArray, NSDate, NSMutableDictionary, NSString;

@interface GKGameSession : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    GKCloudPlayer *_owner;	// 24 = 0x18
    NSArray *_players;	// 32 = 0x20
    NSDate *_lastModifiedDate;	// 40 = 0x28
    GKCloudPlayer *_lastModifiedPlayer;	// 48 = 0x30
    long long _maxNumberOfConnectedPlayers;	// 56 = 0x38
    NSString *_serverChangeTag;	// 64 = 0x40
    NSMutableDictionary *_playerStates;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000022437a
+ (void)removeSessionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000224374
+ (void)loadSessionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000022436e
+ (void)loadSessionsInContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000224368
+ (void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000224362
+ (void)getSessionsForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000225e9e
+ (void)getZonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000225e98
- (void).cxx_destruct;	// IMP=0x0020000000225e2e
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
@property(retain, nonatomic) NSString *serverChangeTag; // @synthesize serverChangeTag=_serverChangeTag;
@property(nonatomic) long long maxNumberOfConnectedPlayers; // @synthesize maxNumberOfConnectedPlayers=_maxNumberOfConnectedPlayers;
@property(retain, nonatomic) GKCloudPlayer *lastModifiedPlayer; // @synthesize lastModifiedPlayer=_lastModifiedPlayer;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
@property(retain, nonatomic) GKCloudPlayer *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSArray *badgedPlayers;
- (void)clearBadgeForPlayers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000225ad3
- (void)sendMessageWithLocalizedFormatKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 toPlayers:(id)arg4 badgePlayers:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000225acd
- (void)sendData:(id)arg1 withTransportType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000225ac7
- (id)playersWithConnectionState:(long long)arg1;	// IMP=0x0010000000225856
- (void)setConnectionState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000225850
- (void)saveData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000022584a
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000225844
- (void)getShareURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000022583e
- (void)updateWithSession:(id)arg1;	// IMP=0x0010000000225660
- (id)description;	// IMP=0x0010000000225560
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x00100000002249a3
- (id)descriptionSubstitutionMap;	// IMP=0x0010000000224996
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000224763
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000224382

@end
