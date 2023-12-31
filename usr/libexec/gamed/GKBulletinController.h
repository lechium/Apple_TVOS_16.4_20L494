//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKAcceptedInviteManager, MISSING_TYPE, NSMutableDictionary, NSString;
@protocol PBSBulletinServiceInterface;

@interface GKBulletinController : NSObject
{
    NSMutableDictionary *_bulletins;	// 8 = 0x8
    GKAcceptedInviteManager *_acceptedInviteManager;	// 16 = 0x10
    NSString *_defaultSoundPath;	// 24 = 0x18
    id <PBSBulletinServiceInterface> _bulletinServiceProxy;	// 32 = 0x20
}

+ (id)sharedController;	// IMP=0x002000000021d171
+ (void)startBulletinController;	// IMP=0x001000000021ce1a
+ (id)bulletinQueue;	// IMP=0x0010000000219eb7
- (void).cxx_destruct;	// IMP=0x0010000000220e6c
@property(retain, nonatomic) id <PBSBulletinServiceInterface> bulletinServiceProxy; // @synthesize bulletinServiceProxy=_bulletinServiceProxy;
@property(retain) NSString *defaultSoundPath; // @synthesize defaultSoundPath=_defaultSoundPath;
@property(retain) GKAcceptedInviteManager *acceptedInviteManager; // @synthesize acceptedInviteManager=_acceptedInviteManager;
@property(retain, nonatomic) NSMutableDictionary *bulletins; // @synthesize bulletins=_bulletins;
- (MISSING_TYPE *)bulletinService:didDismissBulletin:withReason: /* Error: Ran out of types for this method. */;	// IMP=0x00100000002200bf
- (id)callAction:(id)arg1 forBulletinDictionary:(id)arg2;	// IMP=0x001000000021fa79
- (void)clearBulletin:(id)arg1;	// IMP=0x001000000021f7a8
- (void)removeAllBulletins;	// IMP=0x001000000021f39e
- (void)expireBulletin:(id)arg1;	// IMP=0x001000000021f0cd
- (void)withdrawBulletin:(id)arg1;	// IMP=0x001000000021edfc
- (void)presentBulletin:(id)arg1;	// IMP=0x001000000021e597
- (id)bulletinFromGKBulletin:(id)arg1;	// IMP=0x001000000021e13f
- (void)launchBulletin:(id)arg1;	// IMP=0x001000000021d6d9
- (id)init;	// IMP=0x001000000021d365
- (void)dealloc;	// IMP=0x001000000021d321
- (void)clearChallengeBulletinsForChallengeID:(id)arg1;	// IMP=0x001000000021c1d0
- (void)clearTurnBasedBulletinsForMatchID:(id)arg1;	// IMP=0x001000000021bf49
- (void)loadBulletins;	// IMP=0x001000000021b089
- (void)updateSavedBulletins;	// IMP=0x001000000021a936
- (void)clearSavedBulletins;	// IMP=0x001000000021a222
- (id)bulletinStorageFilePathForEnvironment:(long long)arg1;	// IMP=0x001000000021a069
- (id)getBulletinsOfType:(Class)arg1;	// IMP=0x0010000000219b77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

