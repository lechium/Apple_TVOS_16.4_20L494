//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationController, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface AppPurgeCoordinator : NSObject
{
    AKAuthorizationController *_authorizationController;	// 8 = 0x8
    NSArray *_cachedBundleIDDenyList;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    double _lastDuetSync;	// 32 = 0x20
    NSArray *_managedBundleIDs;	// 40 = 0x28
    NSArray *_watchAppList;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000004e6e2
- (long long)purgeForVolume:(id)arg1 urgency:(long long)arg2 desiredPurge:(id)arg3 client:(id)arg4;	// IMP=0x001000000004d37f
- (long long)purgeableForVolume:(id)arg1 urgency:(long long)arg2 client:(id)arg3;	// IMP=0x001000000004d367
- (void)cacheInvalidated;	// IMP=0x001000000004d11f
- (id)allPurgeablesForVolume:(id)arg1 reason:(id)arg2 client:(id)arg3;	// IMP=0x001000000004c999
- (id)init;	// IMP=0x0010000000047c8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

