//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, TVISScreenSaverServiceController, TVPhotoCollection, TVPhotoCollectionGroup, TVSPreferences, TVSettingsUserProfileListFacade;
@protocol OS_dispatch_queue;

@interface TVSettingsScreenSaverFacade : NSObject
{
    NSArray *_availablePhotoCollections;	// 8 = 0x8
    NSArray *_availablePhotoCollectionGroups;	// 16 = 0x10
    TVPhotoCollection *_selectedPhotoCollection;	// 24 = 0x18
    TVSPreferences *_screenSaverAppPrefs;	// 32 = 0x20
    TVSPreferences *_airPlayAppPrefs;	// 40 = 0x28
    id _screenSaverObserverToken;	// 48 = 0x30
    _Bool _isFetchingCollections;	// 56 = 0x38
    id _didBecomeActiveObserver;	// 64 = 0x40
    NSMutableDictionary *_idleScreenThemes;	// 72 = 0x48
    TVISScreenSaverServiceController *_serviceController;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_serialQueue;	// 88 = 0x58
    TVSettingsUserProfileListFacade *_userProfileListFacade;	// 96 = 0x60
}

+ (id)keyPathsForValuesAffectingScreenSaverName;	// IMP=0x00200000000a33c2
+ (id)sharedInstance;	// IMP=0x00100000000a2c89
- (void).cxx_destruct;	// IMP=0x00200000000a5d59
@property(readonly, nonatomic) TVSettingsUserProfileListFacade *userProfileListFacade; // @synthesize userProfileListFacade=_userProfileListFacade;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) TVISScreenSaverServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(copy, nonatomic) NSMutableDictionary *idleScreenThemes; // @synthesize idleScreenThemes=_idleScreenThemes;
- (void)_updateUserPhotoCollections;	// IMP=0x00100000000a5c0a
- (void)_fetchPhotoCollections;	// IMP=0x00100000000a5a58
- (void)_openApplicationWithIdentifer:(id)arg1;	// IMP=0x00100000000a5822
- (void)_photoSourcesUpdated:(id)arg1;	// IMP=0x00100000000a5810
- (void)launchPhotoSourcesDaemon;	// IMP=0x00100000000a57ff
- (void)killPhotoSourcesDaemon;	// IMP=0x00100000000a57ee
- (void)disableScreenSaverProviders;	// IMP=0x00100000000a547e
- (void)screenSaverService:(id)arg1 didUpdateActiveScreenSaver:(id)arg2;	// IMP=0x00100000000a53c2
- (void)setIdleScreenThemeWithIdentifier:(id)arg1 toActiveState:(_Bool)arg2;	// IMP=0x00100000000a5325
- (void)resetToIdleScreensaver;	// IMP=0x00100000000a52dc
@property(copy, nonatomic) NSString *selectedIdleScreenRefreshInterval;
@property(readonly, copy, nonatomic) NSArray *availableIdleScreenRefreshIntervals;
@property(nonatomic) _Bool useIdleScreen;
- (void)_updateActiveThemes;	// IMP=0x00100000000a4cd4
@property(copy, nonatomic) NSURL *conferenceRoomDisplayBackgroundPhotoURL;
@property(nonatomic, getter=isConferenceRoomDisplayEnabled) _Bool conferenceRoomDisplayEnabled;
@property(copy, nonatomic) NSString *conferenceRoomDisplayMessage;
@property(copy, nonatomic) NSString *transitionType;
@property(nonatomic) long long timePerSlide;
@property(readonly, copy, nonatomic) NSArray *availableTimesPerSlide;
@property(readonly, nonatomic) NSString *screenSaverName;
@property(copy, nonatomic) NSString *screenSaverStyle;
@property(readonly, nonatomic) NSString *screenSaverPhotoCollectionIdentifier;
@property(readonly, nonatomic) id screenSaverType;
- (id)photoCollectionGroupForIdentifier:(id)arg1;	// IMP=0x00100000000a452f
- (void)invalidateCachedAvailablePhotoCollectionGroupIdentifiers;	// IMP=0x00100000000a4515
@property(readonly, copy, nonatomic) NSArray *availablePhotoCollectionGroupIdentifiers;
@property(readonly, copy, nonatomic) NSArray *availablePhotoCollectionGroups;
@property(readonly, nonatomic) TVPhotoCollectionGroup *selectedPhotoCollectionGroup;
@property(retain, nonatomic) TVPhotoCollection *selectedPhotoCollection;
@property(readonly, copy, nonatomic) NSArray *availablePhotoCollections;
@property(nonatomic) _Bool allowsScreenSaverOverMusic;
@property(nonatomic) long long activationDelay;
@property(readonly, copy, nonatomic) NSArray *availableActivationDelays;
- (void)prefetchScreensaverCollections;	// IMP=0x00100000000a3217
- (void)dealloc;	// IMP=0x00100000000a3155
- (id)init;	// IMP=0x00100000000a2d5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
