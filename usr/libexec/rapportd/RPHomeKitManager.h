//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMHome, HMHomeManager, HMUser, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface RPHomeKitManager : NSObject
{
    _Bool _invalidateCalled;	// 8 = 0x8
    HMUser *_currentUser;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    CDUnknownBlockType _mediaGroupsChangedHandler;	// 32 = 0x20
    CDUnknownBlockType _personalRequestsStateChangedHandler;	// 40 = 0x28
    CDUnknownBlockType _roomUpdatedHandler;	// 48 = 0x30
    HMHomeManager *_homeManager;	// 56 = 0x38
    HMHome *_currentHome;	// 64 = 0x40
    NSArray *_homeKitCurrentUserIDs;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000495fa
@property(nonatomic) _Bool invalidateCalled; // @synthesize invalidateCalled=_invalidateCalled;
@property(retain, nonatomic) NSArray *homeKitCurrentUserIDs; // @synthesize homeKitCurrentUserIDs=_homeKitCurrentUserIDs;
@property(retain, nonatomic) HMHome *currentHome; // @synthesize currentHome=_currentHome;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(copy, nonatomic) CDUnknownBlockType roomUpdatedHandler; // @synthesize roomUpdatedHandler=_roomUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType personalRequestsStateChangedHandler; // @synthesize personalRequestsStateChangedHandler=_personalRequestsStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType mediaGroupsChangedHandler; // @synthesize mediaGroupsChangedHandler=_mediaGroupsChangedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) HMUser *currentUser; // @synthesize currentUser=_currentUser;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;	// IMP=0x00100000000492fc
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;	// IMP=0x0010000000049165
- (void)_setupHome;	// IMP=0x0010000000048f99
- (_Bool)personalRequestsStateForAccessory:(id)arg1;	// IMP=0x0010000000048b21
- (id)homeHubDeviceWithIdentifier:(id)arg1;	// IMP=0x0010000000048a9a
- (void)resetHomeKitUserIdentifiers;	// IMP=0x0010000000048a70
- (id)filterHomeKitUserIdentifiers:(id)arg1;	// IMP=0x00100000000484cd
- (id)homeKitUserIdentifiers;	// IMP=0x00100000000481af
- (void)invalidate;	// IMP=0x00100000000480a6
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000047fd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

