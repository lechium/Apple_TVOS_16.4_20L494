//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __TVSUIFlatIconCache : NSObject
{
    NSObject<OS_dispatch_queue> *_appStateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_updateQueue;	// 16 = 0x10
    NSMutableDictionary *_appIdentifierToInstalledCacheKeys;	// 24 = 0x18
    NSMutableDictionary *_appIdentifierToIconName;	// 32 = 0x20
}

+ (id)_launchImagesCacheDirectory;	// IMP=0x00100000000361ce
+ (id)_smallIconsCacheDirectory;	// IMP=0x001000000003602b
+ (id)_iconsCacheDirectory;	// IMP=0x0010000000035e88
+ (void)_disableLSWorkspaceInstallHandling;	// IMP=0x0010000000035e7b
+ (void)_cleanStaleAssetsInCacheDirectory:(id)arg1 withInstalledCacheKeys:(id)arg2;	// IMP=0x001000000003543e
+ (id)sharedInstance;	// IMP=0x0010000000033fc0
- (void).cxx_destruct;	// IMP=0x00000000000369c8
- (_Bool)_createApplicationIcon:(id)arg1 size:(struct CGSize)arg2 cornerRadius:(double)arg3 destination:(id)arg4;	// IMP=0x0000000000036763
- (_Bool)_createApplicationIcon:(id)arg1 variant:(long long)arg2 maskCorners:(_Bool)arg3 destination:(id)arg4;	// IMP=0x00000000000366af
- (_Bool)_createSmallApplicationIcon:(id)arg1;	// IMP=0x0000000000036608
- (_Bool)_createApplicationIcon:(id)arg1 maskCorners:(_Bool)arg2;	// IMP=0x0000000000036563
- (id)_cacheLaunchImagePathWithCacheKey:(id)arg1;	// IMP=0x00000000000364bd
- (id)_cacheSmallIconPathWithCacheKey:(id)arg1;	// IMP=0x0000000000036417
- (id)_cacheIconPathWithCacheKey:(id)arg1;	// IMP=0x0000000000036371
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000000035dd3
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000000035d21
- (void)_removeCachedImagesForCacheKey:(id)arg1;	// IMP=0x0000000000035c53
- (void)_updateForUninstalledApplications:(id)arg1;	// IMP=0x0000000000035a09
- (void)_updateForInstalledApplications:(id)arg1;	// IMP=0x0000000000035770
- (void)_cleanStaleAssets;	// IMP=0x0000000000035158
- (void)_update;	// IMP=0x0000000000034f01
- (id)_iconImageFromPath:(id)arg1;	// IMP=0x0000000000034d38
- (id)smallFlatIconForAppProxy:(id)arg1;	// IMP=0x0000000000034cd9
- (id)_createSmallFlatApplicationIconIfNeeded:(id)arg1;	// IMP=0x0000000000034bee
- (id)flatIconForAppProxy:(id)arg1;	// IMP=0x0000000000034b8f
- (id)_createFlatApplicationIconIfNeeded:(id)arg1;	// IMP=0x0000000000034a9f
- (void)dealloc;	// IMP=0x0000000000034a2a
- (void)_queue_appStateMonitorDidChange:(id)arg1;	// IMP=0x0000000000034323
- (void)applicationIconDidChange:(id)arg1;	// IMP=0x000000000003427b
- (id)init;	// IMP=0x0000000000034015

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
