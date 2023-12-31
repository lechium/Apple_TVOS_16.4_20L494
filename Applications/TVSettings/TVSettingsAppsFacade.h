//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSSet, NSString, NSTimer;

@interface TVSettingsAppsFacade : NSObject
{
    unsigned long long _knockCount;	// 8 = 0x8
    _Bool _needsUpdate;	// 16 = 0x10
    struct os_unfair_lock_s _updateLock;	// 20 = 0x14
    NSArray *_systemAppsWithSettings;	// 24 = 0x18
    NSArray *_userAppsWithSettings;	// 32 = 0x20
    NSSet *_bundleIdentifiersWithSettings;	// 40 = 0x28
    NSTimer *_knockTimer;	// 48 = 0x30
}

+ (id)_allowedSystemApps;	// IMP=0x00200000000a82ea
+ (_Bool)isAppEnabledForBundleID:(id)arg1;	// IMP=0x00100000000a823f
+ (_Bool)crossAppTrackingSettingsNeededForBundleID:(id)arg1;	// IMP=0x00100000000a81b1
+ (_Bool)userAccessSettingsNeededForBundleID:(id)arg1;	// IMP=0x00100000000a80ec
+ (MISSING_TYPE *)bluetoothPrivacySettingsNeededForBundleID: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000a805e
+ (_Bool)photosSettingsNeededForBundleID:(id)arg1;	// IMP=0x00100000000a7fd0
+ (_Bool)MSOSettingsNeededForBundleID:(id)arg1;	// IMP=0x00100000000a7f42
+ (_Bool)mediaLibrarySettingsNeededForBundleID:(id)arg1;	// IMP=0x00100000000a7eb4
+ (_Bool)homeKitSettingsNeededForBundleID:(id)arg1;	// IMP=0x00100000000a7e26
+ (_Bool)backgroundAppRefreshSettingsNeededForBundleID:(id)arg1;	// IMP=0x00100000000a7d98
+ (_Bool)notificationSettingsNeededForBundleID:(id)arg1;	// IMP=0x00100000000a7d0a
+ (_Bool)locationSettingsNeededForBundleID:(id)arg1;	// IMP=0x00100000000a7c6c
+ (_Bool)settingsNeededForBundleID:(id)arg1;	// IMP=0x00100000000a7bd3
+ (id)sharedInstance;	// IMP=0x00100000000a75c9
- (void).cxx_destruct;	// IMP=0x00200000000a90cd
@property(retain, nonatomic) NSTimer *knockTimer; // @synthesize knockTimer=_knockTimer;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) struct os_unfair_lock_s updateLock; // @synthesize updateLock=_updateLock;
@property(copy, nonatomic) NSSet *bundleIdentifiersWithSettings; // @synthesize bundleIdentifiersWithSettings=_bundleIdentifiersWithSettings;
@property(readonly, copy, nonatomic) NSArray *userAppsWithSettings; // @synthesize userAppsWithSettings=_userAppsWithSettings;
@property(readonly, copy, nonatomic) NSArray *systemAppsWithSettings; // @synthesize systemAppsWithSettings=_systemAppsWithSettings;
- (void)_updateAppsCoalesced;	// IMP=0x00100000000a8f34
- (void)_updateApps;	// IMP=0x00100000000a8ad4
- (void)_trySomeStuffWithURLString:(id)arg1;	// IMP=0x00100000000a88c8
- (void)_cancelKnockTimer:(id)arg1;	// IMP=0x00100000000a88a1
- (_Bool)_shouldShowTCCSettingForBundleIdentifier:(id)arg1;	// IMP=0x00100000000a876b
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00100000000a8759
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000a86c7
- (void)knockForEntry;	// IMP=0x00100000000a8362
- (void)dealloc;	// IMP=0x00100000000a7920
- (id)_init;	// IMP=0x00100000000a762e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

