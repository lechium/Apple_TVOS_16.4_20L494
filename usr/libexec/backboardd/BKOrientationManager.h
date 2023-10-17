//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKIOHIDService, BKIOHIDServiceMatcher, CMDeviceOrientationManager, NSHashTable, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface BKOrientationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;	// 16 = 0x10
    NSHashTable *_queue_observers;	// 24 = 0x18
    NSMutableDictionary *_queue_processDeathWatchers;	// 32 = 0x20
    double _queue_updateInterval;	// 40 = 0x28
    float _queue_interruptEventThresholds;	// 48 = 0x30
    _Bool _queue_isOrientationEventsEnabled;	// 52 = 0x34
    long long _queue_lastUnambiguousRawAccelerometerDeviceOrientation;	// 56 = 0x38
    long long _queue_currentUserInterfaceOrientation;	// 64 = 0x40
    long long _queue_currentRawAccelerometerDeviceOrientation;	// 72 = 0x48
    long long _queue_lastEffectiveInterfaceOrientation;	// 80 = 0x50
    long long _queue_effectiveDeviceOrientation;	// 88 = 0x58
    unsigned long long _queue_orientationLocksEnabled;	// 96 = 0x60
    _Bool _queue_ignoreAccelerometerAndOrientationEventsForTesting;	// 104 = 0x68
    NSOperationQueue *_queue_orientationManagerOperationQueue;	// 112 = 0x70
    CMDeviceOrientationManager *_queue_orientationManager;	// 120 = 0x78
    BKIOHIDService *_queue_HIDService;	// 128 = 0x80
    BKIOHIDServiceMatcher *_queue_HIDServiceMatcher;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 144 = 0x90
}

+ (id)sharedInstance;	// IMP=0x002000000006b9a0
- (void).cxx_destruct;	// IMP=0x002000000006b006
@property(retain, nonatomic, getter=_queue_HIDService, setter=_queue_setHIDService:) BKIOHIDService *queue_HIDService; // @synthesize queue_HIDService=_queue_HIDService;
- (void)_queue_postDeviceOrientationLockChangedNotification:(_Bool)arg1;	// IMP=0x001000000006af9e
- (void)_queue_postUpdatedLastUnambiguousDeviceOrientation:(long long)arg1;	// IMP=0x001000000006af4c
- (void)_queue_postUpdatedRawAccelerometerDeviceOrientation:(long long)arg1;	// IMP=0x001000000006aefa
- (void)_queue_postUpdatedOrientation:(long long)arg1;	// IMP=0x001000000006aea8
- (void)_queue_unlockDeviceOrientationForType:(unsigned long long)arg1 versionedPID:(long long)arg2;	// IMP=0x001000000006ad96
- (_Bool)_queue_isDeviceLockedForAtLeastOneType:(unsigned long long)arg1;	// IMP=0x001000000006ad89
- (_Bool)_queue_isDeviceLockedForAllTypes:(unsigned long long)arg1;	// IMP=0x001000000006ad76
- (void)_queue_lockDeviceOrientation:(unsigned long long)arg1 deviceOrientation:(long long)arg2 versionedPID:(long long)arg3;	// IMP=0x001000000006aa68
- (void)_queue_invalidateEntryForSystemLockProcess:(int)arg1;	// IMP=0x001000000006a9e0
- (void)_queue_postDeviceOrientationLockChangedNotification;	// IMP=0x001000000006a9af
- (void)_queue_noteUserInterfaceOrientationDidChange:(long long)arg1;	// IMP=0x001000000006a7f7
- (void)_queue_noteEffectiveOrRawDeviceOrientationDidChange:(long long)arg1 changeSource:(long long)arg2;	// IMP=0x001000000006a62d
- (void)_queue_updateDeviceOrientation:(long long)arg1 changeSource:(long long)arg2;	// IMP=0x001000000006a5b2
- (void)_queue_updateDeviceOrientationFromCoreMotion:(id)arg1;	// IMP=0x001000000006a4d5
- (void)_queue_updateDeviceOrientationWithTemporaryManager;	// IMP=0x001000000006a39a
- (void)_queue_updateDeviceOrientationSynchronously;	// IMP=0x001000000006a2d2
- (void)_queue_setLastUnambiguousDeviceOrientation:(long long)arg1;	// IMP=0x001000000006a2b4
- (void)_queue_setCurrentRawAccelerometerDeviceOrientation:(long long)arg1;	// IMP=0x001000000006a296
- (void)_queue_setEffectiveDeviceOrientation:(long long)arg1 affectingLastEffectiveInterfaceOrientation:(_Bool)arg2;	// IMP=0x001000000006a187
- (void)_queue_setCurrentUserInterfaceOrientation:(long long)arg1;	// IMP=0x0010000000069fd7
- (void)_queue_resetDeviceOrientation;	// IMP=0x0010000000069f2b
- (void)_queue_setOrientationEventsEnabled:(_Bool)arg1;	// IMP=0x0010000000069e04
- (_Bool)_queue_isOrientationLocked;	// IMP=0x0010000000069df6
- (void)_queue_setUpdateInterval:(double)arg1;	// IMP=0x0010000000069c92
- (void)_queue_setInterruptEventThresholds:(float)arg1;	// IMP=0x0010000000069a90
- (void)_systemAppDidCheckin:(id)arg1;	// IMP=0x0010000000069a45
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000699b6
- (void)addObserver:(id)arg1;	// IMP=0x0010000000069927
- (void)refreshEffectiveDeviceOrientation;	// IMP=0x00100000000698dc
- (void)updateDeviceOrientation:(long long)arg1 changeSource:(long long)arg2;	// IMP=0x0010000000069889
- (void)unlockDeviceOrientation:(unsigned long long)arg1 versionedPID:(long long)arg2;	// IMP=0x0010000000069836
- (void)lockDeviceOrientation:(unsigned long long)arg1 deviceOrientation:(long long)arg2 versionedPID:(long long)arg3;	// IMP=0x00100000000697df
- (_Bool)isDeviceOrientationLockedForType:(unsigned long long)arg1;	// IMP=0x001000000006974d
- (_Bool)isDeviceOrientationLocked:(long long *)arg1;	// IMP=0x00100000000696bb
- (_Bool)isDeviceOrientationLocked;	// IMP=0x001000000006962d
@property(readonly, nonatomic) long long effectiveDeviceOrientation;
@property(readonly, nonatomic) long long currentRawAccelerometerDeviceOrientation;
@property(readonly, nonatomic) long long lastEffectiveInterfaceOrientation;
@property(nonatomic) long long currentUserInterfaceOrientation;
@property(nonatomic, getter=isOrientationEventsEnabled) _Bool orientationEventsEnabled;
@property(nonatomic) double updateInterval;
@property(nonatomic) float interruptEventThresholds;
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x001000000006906b
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x0010000000068fd0
- (void)dealloc;	// IMP=0x0010000000068f4a
- (id)_initWithDeviceOrientationManager:(id)arg1;	// IMP=0x0010000000068cec
- (id)init;	// IMP=0x0010000000068cac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
