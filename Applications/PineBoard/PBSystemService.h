//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener, PBAssertionServiceListener, PBCaptiveNetworkServiceListener, PBHomeUIServiceListener, PBPreferencesServiceListener, PBSuggestedUserProfileManagerServiceListener, PBSystemServiceConnection, PBUserProfileApplicationManagerListener, PBUserProfileManagerServiceListener, PBUserProfilePictureServiceListener, PBVolumeControlServiceListener, _TtC9PineBoard30PBTVUserManagerServiceListener;
@protocol OS_dispatch_queue;

@interface PBSystemService : NSObject
{
    NSObject<OS_dispatch_queue> *_acceptSerialQueue;	// 8 = 0x8
    NSXPCListener *_serviceListener;	// 16 = 0x10
    NSMutableSet *_activeConnections;	// 24 = 0x18
    PBSystemServiceConnection *_defaultKioskConnection;	// 32 = 0x20
    PBAssertionServiceListener *_assertionServiceListener;	// 40 = 0x28
    PBCaptiveNetworkServiceListener *_captiveNetworkListener;	// 48 = 0x30
    PBHomeUIServiceListener *_homeUIListener;	// 56 = 0x38
    PBPreferencesServiceListener *_preferencesServiceListener;	// 64 = 0x40
    PBSuggestedUserProfileManagerServiceListener *_suggestedUserProfileManagerListener;	// 72 = 0x48
    _TtC9PineBoard30PBTVUserManagerServiceListener *_tvUserManagerServiceListener;	// 80 = 0x50
    PBUserProfileApplicationManagerListener *_userProfileApplicationListener;	// 88 = 0x58
    PBUserProfileManagerServiceListener *_userProfileManagerListener;	// 96 = 0x60
    PBUserProfilePictureServiceListener *_userProfilePictureListener;	// 104 = 0x68
    PBVolumeControlServiceListener *_volumeControlListener;	// 112 = 0x70
}

+ (id)activeConnections;	// IMP=0x00200000000e5ec8
+ (void)notifyDefaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x00100000000e5e57
+ (void)start;	// IMP=0x00100000000e5dbd
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e5b22
+ (id)_singleton;	// IMP=0x00100000000e5a8b
- (void).cxx_destruct;	// IMP=0x00200000000e65ec
@property(retain, nonatomic) PBVolumeControlServiceListener *volumeControlListener; // @synthesize volumeControlListener=_volumeControlListener;
@property(retain, nonatomic) PBUserProfilePictureServiceListener *userProfilePictureListener; // @synthesize userProfilePictureListener=_userProfilePictureListener;
@property(retain, nonatomic) PBUserProfileManagerServiceListener *userProfileManagerListener; // @synthesize userProfileManagerListener=_userProfileManagerListener;
@property(retain, nonatomic) PBUserProfileApplicationManagerListener *userProfileApplicationListener; // @synthesize userProfileApplicationListener=_userProfileApplicationListener;
@property(retain, nonatomic) _TtC9PineBoard30PBTVUserManagerServiceListener *tvUserManagerServiceListener; // @synthesize tvUserManagerServiceListener=_tvUserManagerServiceListener;
@property(retain, nonatomic) PBSuggestedUserProfileManagerServiceListener *suggestedUserProfileManagerListener; // @synthesize suggestedUserProfileManagerListener=_suggestedUserProfileManagerListener;
@property(retain, nonatomic) PBPreferencesServiceListener *preferencesServiceListener; // @synthesize preferencesServiceListener=_preferencesServiceListener;
@property(retain, nonatomic) PBHomeUIServiceListener *homeUIListener; // @synthesize homeUIListener=_homeUIListener;
@property(retain, nonatomic) PBCaptiveNetworkServiceListener *captiveNetworkListener; // @synthesize captiveNetworkListener=_captiveNetworkListener;
@property(retain, nonatomic) PBAssertionServiceListener *assertionServiceListener; // @synthesize assertionServiceListener=_assertionServiceListener;
@property(nonatomic) __weak PBSystemServiceConnection *defaultKioskConnection; // @synthesize defaultKioskConnection=_defaultKioskConnection;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000e6209
- (void)_handleInvalidationForConnection:(id)arg1;	// IMP=0x00100000000e6144
- (void)_startServices;	// IMP=0x00100000000e6039
- (void)_notifyDefaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x00100000000e5f5c
- (id)_activeConnections;	// IMP=0x00100000000e5f4d
- (void)dealloc;	// IMP=0x00100000000e5d12
- (id)init;	// IMP=0x00100000000e5d04
- (id)_init;	// IMP=0x00100000000e5bd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
