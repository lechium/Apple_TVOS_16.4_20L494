//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayerInternal, NSArray, NSString, NSURL;

@interface GKGameplayBulletin
{
    unsigned char _gameLocation;	// 16 = 0x10
    NSString *_receiverPlayerID;	// 24 = 0x18
    NSString *_originatorPlayerID;	// 32 = 0x20
    GKPlayerInternal *_receiverPlayer;	// 40 = 0x28
    GKPlayerInternal *_originatorPlayer;	// 48 = 0x30
    NSString *_receiverGuestPlayerID;	// 56 = 0x38
    NSString *_originatorGuestPlayerID;	// 64 = 0x40
    GKPlayerInternal *_receiverGuestPlayer;	// 72 = 0x48
    GKPlayerInternal *_originatorGuestPlayer;	// 80 = 0x50
    NSURL *_storeURL;	// 88 = 0x58
    NSArray *_compatibleVersions;	// 96 = 0x60
    NSArray *_compatibleShortVersions;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000001dedad
- (void).cxx_destruct;	// IMP=0x00200000001e3f7a
@property unsigned char gameLocation; // @synthesize gameLocation=_gameLocation;
@property(retain) NSArray *compatibleShortVersions; // @synthesize compatibleShortVersions=_compatibleShortVersions;
@property(retain) NSArray *compatibleVersions; // @synthesize compatibleVersions=_compatibleVersions;
@property(retain) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain) GKPlayerInternal *originatorGuestPlayer; // @synthesize originatorGuestPlayer=_originatorGuestPlayer;
@property(retain) GKPlayerInternal *receiverGuestPlayer; // @synthesize receiverGuestPlayer=_receiverGuestPlayer;
@property(retain) NSString *originatorGuestPlayerID; // @synthesize originatorGuestPlayerID=_originatorGuestPlayerID;
@property(retain) NSString *receiverGuestPlayerID; // @synthesize receiverGuestPlayerID=_receiverGuestPlayerID;
@property(retain) GKPlayerInternal *originatorPlayer; // @synthesize originatorPlayer=_originatorPlayer;
@property(retain) GKPlayerInternal *receiverPlayer; // @synthesize receiverPlayer=_receiverPlayer;
@property(retain) NSString *originatorPlayerID; // @synthesize originatorPlayerID=_originatorPlayerID;
@property(retain) NSString *receiverPlayerID; // @synthesize receiverPlayerID=_receiverPlayerID;
- (void)loadOriginatorPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e3743
- (void)loadStoreItemWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e2681
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e1ac6
- (void)determineGameLocationOnDeviceViaCompatibilityMatrixWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e08d5
- (void)determineGameLocationOnDeviceOnly;	// IMP=0x00100000001e027e
- (_Bool)isCompatibleWithGameDescriptor:(id)arg1;	// IMP=0x00100000001dfe88
- (_Bool)isPushFromLocalPlayers;	// IMP=0x00100000001dfcbd
- (_Bool)isPushForLocalPlayers;	// IMP=0x00100000001dfaf2
- (_Bool)playerIsLocal:(id)arg1;	// IMP=0x00100000001df768
@property(readonly, retain) NSString *URLContext;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001df2f1
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001dedb5

@end

