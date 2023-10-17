//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TVSettingsBackgroundAppRefreshFacade : NSObject
{
    _Bool _needsUpdate;	// 8 = 0x8
    struct os_unfair_lock_s _updateLock;	// 12 = 0xc
    NSArray *_backgroundAppRefreshSettings;	// 16 = 0x10
}

+ (id)_allowedSystemApps;	// IMP=0x0020000000023563
+ (id)sharedInstance;	// IMP=0x001000000002350e
- (void).cxx_destruct;	// IMP=0x0020000000023d59
@property(readonly, nonatomic) struct os_unfair_lock_s updateLock; // @synthesize updateLock=_updateLock;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) NSArray *backgroundAppRefreshSettings; // @synthesize backgroundAppRefreshSettings=_backgroundAppRefreshSettings;
- (void)_updateAppsCoalesced;	// IMP=0x0010000000023bfe
- (void)_updateApps;	// IMP=0x00100000000239b9
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00100000000239a7
@property(readonly, nonatomic) _Bool backgroundAppRefreshEnabled;
- (void)setBackgroundAppRefreshEnabled:(_Bool)arg1;	// IMP=0x001000000002383a
- (id)backgroundAppRefreshSettingForIdentifier:(id)arg1;	// IMP=0x0010000000023667
- (id)init;	// IMP=0x00100000000235d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

