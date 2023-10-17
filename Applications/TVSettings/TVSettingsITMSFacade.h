//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, SSAccount, TVSStoreFrontLocale;

@interface TVSettingsITMSFacade : NSObject
{
    NSArray *_availableLocales;	// 8 = 0x8
    TVSStoreFrontLocale *_locale;	// 16 = 0x10
    _Bool _isManagedSubscriptionsURLLoaded;	// 24 = 0x18
    _Bool _autoDownloadApps;	// 25 = 0x19
    SSAccount *_preferredAccount;	// 32 = 0x20
}

+ (id);	// IMP=0x004000000006553e
- (void).cxx_destruct;	// IMP=0x00200000000667e0
@property(retain, nonatomic) SSAccount *preferredAccount; // @synthesize preferredAccount=_preferredAccount;
@property(nonatomic) _Bool autoDownloadApps; // @synthesize autoDownloadApps=_autoDownloadApps;
@property(nonatomic) _Bool isManagedSubscriptionsURLLoaded; // @synthesize isManagedSubscriptionsURLLoaded=_isManagedSubscriptionsURLLoaded;
- (void)_urlBagLoaded:(id)arg1;	// IMP=0x0010000000066745
- (void)killStoreApps;	// IMP=0x00100000000665cc
- (void)_updateAutoDownloadApps;	// IMP=0x00100000000664fd
- (void)_updateAutoDownloadAppsPerCloudSyncPreferences;	// IMP=0x0010000000066328
- (void)_automaticDownloadKindsChangedNotification:(id)arg1;	// IMP=0x001000000006623d
- (void)_availableLocalesUpdated;	// IMP=0x00100000000661c2
- (void)_localeUpdated;	// IMP=0x0010000000066147
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000066080
@property(readonly, retain, nonatomic) NSURL *manageSubscriptionsURL;
@property(readonly, copy, nonatomic) NSArray *availableLocales;
@property(retain, nonatomic) TVSStoreFrontLocale *locale;
- (void)dealloc;	// IMP=0x001000000006578d
- (id)init;	// IMP=0x0010000000065593

@end

