//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMBiomeScheduler, BPSSink, NSMutableSet, NSString;
@protocol OS_dispatch_queue, StoreKitAppLaunchObserverDelegate;

@interface StoreKitAppLaunchObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    NSMutableSet *_bundleIDsToObserve;	// 24 = 0x18
    BMBiomeScheduler *_scheduler;	// 32 = 0x20
    BPSSink *_sink;	// 40 = 0x28
    NSString *_logKey;	// 48 = 0x30
    id <StoreKitAppLaunchObserverDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000007942f
@property(nonatomic) __weak id <StoreKitAppLaunchObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_appDidLaunch:(id)arg1;	// IMP=0x00100000000792e1
- (void)_stopObservingIfNecessary;	// IMP=0x00100000000792a5
- (void)_startObservingIfNecessary;	// IMP=0x0010000000078ad0
- (void)_stopObserving;	// IMP=0x0010000000078a46
- (void)stopObserving;	// IMP=0x00100000000789e5
- (void)removeObservationForBundleIDs:(id)arg1;	// IMP=0x0010000000078713
- (void)observeAppLaunchForBundleIDs:(id)arg1;	// IMP=0x0010000000078445
- (id)init;	// IMP=0x00100000000782d0

@end
