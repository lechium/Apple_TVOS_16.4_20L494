//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKBulletinAction, GKGameDescriptor, MISSING_TYPE, NSDate, NSString, NSURL;

@interface GKBulletin : NSObject
{
    GKGameDescriptor *_gameDescriptor;	// 8 = 0x8
    unsigned long long _bulletinRecordID;	// 16 = 0x10
    _Bool _hasSound;	// 24 = 0x18
    _Bool _showInListOnly;	// 25 = 0x19
    short _pushCommand;	// 26 = 0x1a
    NSString *_recordID;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_message;	// 48 = 0x30
    NSDate *_date;	// 56 = 0x38
    NSDate *_expirationDate;	// 64 = 0x40
    NSString *_soundPath;	// 72 = 0x48
    GKBulletinAction *_acceptAction;	// 80 = 0x50
    GKBulletinAction *_defaultAction;	// 88 = 0x58
    GKBulletinAction *_dismissAction;	// 96 = 0x60
    GKBulletinAction *_declineAction;	// 104 = 0x68
    NSString *_gameName;	// 112 = 0x70
    NSURL *_gameIcon;	// 120 = 0x78
    NSString *_categoryIdentifier;	// 128 = 0x80
    unsigned long long _bulletinType;	// 136 = 0x88
}

+ (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d910f
+ (_Bool)shouldProcessNotification;	// IMP=0x00100000001d8dc1
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001d89ae
+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d7d5e
+ (void)bulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d75b4
+ (id)syncQueue;	// IMP=0x00100000001d7533
+ (id)cacheTransactionGroup;	// IMP=0x00100000001da9a4
- (void).cxx_destruct;	// IMP=0x00200000001d9b7b
@property unsigned long long bulletinType; // @synthesize bulletinType=_bulletinType;
@property(retain) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain) GKGameDescriptor *gameDescriptor; // @synthesize gameDescriptor=_gameDescriptor;
@property(retain) NSURL *gameIcon; // @synthesize gameIcon=_gameIcon;
@property(retain) NSString *gameName; // @synthesize gameName=_gameName;
@property _Bool showInListOnly; // @synthesize showInListOnly=_showInListOnly;
@property(retain) GKBulletinAction *declineAction; // @synthesize declineAction=_declineAction;
@property(retain) GKBulletinAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(retain) GKBulletinAction *defaultAction; // @synthesize defaultAction=_defaultAction;
@property(retain) GKBulletinAction *acceptAction; // @synthesize acceptAction=_acceptAction;
@property(retain) NSString *soundPath; // @synthesize soundPath=_soundPath;
@property _Bool hasSound; // @synthesize hasSound=_hasSound;
@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *recordID; // @synthesize recordID=_recordID;
@property short pushCommand; // @synthesize pushCommand=_pushCommand;
- (id)description;	// IMP=0x00100000001d96ef
- (void)reportMetricsForActionID:(id)arg1 withAdditionalFields:(id)arg2;	// IMP=0x00100000001d9501
- (void)handleAction:(id)arg1;	// IMP=0x00100000001d92db
- (MISSING_TYPE *)executeBulletinWithBulletinController: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001d8f60
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00100000001d8b89
- (id)dataFrom64String:(id)arg1;	// IMP=0x00100000001d89b6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d8430
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001d7edd

@end

