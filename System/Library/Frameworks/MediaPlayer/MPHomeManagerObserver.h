//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAccessory, HMHome, HMHomeManager, HMUser, MPHomeUserMonitor, NSMutableDictionary, NSSet, NSString;
@protocol MPHomeManagerObserverDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPHomeManagerObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    HMHomeManager *_homeManager;	// 24 = 0x18
    HMHome *_currentHome;	// 32 = 0x20
    HMUser *_currentUser;	// 40 = 0x28
    NSSet *_homeUsers;	// 48 = 0x30
    NSMutableDictionary *_userMonitorMap;	// 56 = 0x38
    _Bool _soundCheckCachedValue;	// 64 = 0x40
    _Bool _setupDidComplete;	// 65 = 0x41
    unsigned long long _homekitInitSignpostId;	// 72 = 0x48
    id <MPHomeManagerObserverDelegate> _delegate;	// 80 = 0x50
}

+ (id)sharedObserver;	// IMP=0x0010000000090db2
- (void).cxx_destruct;	// IMP=0x00000000000900e6
@property(nonatomic) __weak id <MPHomeManagerObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)homeManagerDidRemoveCurrentAccessory:(id)arg1;	// IMP=0x000000000008ffec
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x000000000008fef4
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x000000000008fdfc
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;	// IMP=0x000000000008fd29
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x000000000008fbea
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x000000000008fb09
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;	// IMP=0x000000000008fa36
- (void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;	// IMP=0x000000000008f98c
- (void)homeDidUpdateSoundCheck:(id)arg1;	// IMP=0x000000000008f8b8
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x000000000008f80e
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x000000000008f764
- (void)_soundCheckDidChange;	// IMP=0x000000000008f6f2
- (void)_usersDidChange;	// IMP=0x000000000008f687
- (void)_currentUserDidChange;	// IMP=0x000000000008f61c
- (void)_currentHomeDidChange;	// IMP=0x000000000008f5b1
- (void)_updateAsyncOnQueue;	// IMP=0x000000000008f566
- (void)_update;	// IMP=0x000000000008f108
- (void)_updateSoundCheck;	// IMP=0x000000000008f0fa
- (id)_userMonitorWithHomeIdentifiers:(id)arg1;	// IMP=0x000000000008f020
- (id)homeAccesssoryWithRouteID:(id)arg1;	// IMP=0x000000000008ee02
- (id)userMonitorWithHomeIdentifiers:(id)arg1;	// IMP=0x000000000008ec5f
- (id)userMonitorWithHomeIdentifier:(id)arg1;	// IMP=0x000000000008eba3
@property(readonly, nonatomic) MPHomeUserMonitor *monitorForCurrentUser;
@property(nonatomic, getter=isSoundCheckEnabled) _Bool soundCheckEnabled;
@property(readonly, nonatomic) HMAccessory *currentAccessory;
@property(readonly, nonatomic) HMHome *currentHome;
@property(readonly, nonatomic) HMUser *currentUser;
@property(readonly, nonatomic) _Bool hasCurrentAccessory;
@property(readonly, nonatomic) _Bool hasCurrentHome;
@property(readonly, nonatomic) _Bool hasCurrentUser;
@property(readonly, nonatomic) _Bool setupDidComplete;
- (id)init;	// IMP=0x000000000008e525

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
