//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol AFAnnouncementRequestCapabilityProviding, OS_dispatch_queue;

@interface AFSiriUserNotificationRequestCapabilityManager : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <AFAnnouncementRequestCapabilityProviding> _capabilityProvider;	// 24 = 0x18
    long long _platform;	// 32 = 0x20
}

+ (_Bool)supportedByApplicationWithBundleID:(id)arg1;	// IMP=0x00200000001ba0a3
+ (Class)_classForPlatform:(long long)arg1;	// IMP=0x00100000001ba00a
+ (id)sharedManager;	// IMP=0x00100000001b9e4c
- (void).cxx_destruct;	// IMP=0x00200000001bad7b
- (void)provider:(id)arg1 availableAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x00100000001bad2e
- (void)provider:(id)arg1 eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x00100000001bace1
- (void)notifyObserversOfCurrentRequestCanBeHandledState:(_Bool)arg1 onPlatform:(long long)arg2;	// IMP=0x00100000001bab1c
- (void)notifyObserversOfCurrentEligibleSetupState:(_Bool)arg1 onPlatform:(long long)arg2;	// IMP=0x00100000001ba98d
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001ba977
- (void)addObserver:(id)arg1;	// IMP=0x00100000001ba961
- (_Bool)requestCanBeHandled;	// IMP=0x00100000001ba6e7
- (void)fetchRequestCanBeHandledStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ba5d1
- (_Bool)hasEligibleSetup;	// IMP=0x00100000001ba287
- (void)fetchEligibleSetupStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ba171
- (id)_initWithPlatform:(long long)arg1;	// IMP=0x00100000001b9eee

@end

