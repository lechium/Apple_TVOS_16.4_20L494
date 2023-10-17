//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNRPNTrackerEspressoResourcesCache : NSObject
{
    NSMutableDictionary *_rpnEspressoResourcesKeyToEspressoResourcesCache;	// 8 = 0x8
    NSLock *_rpnEspressoResourcesKeyToEspressoResourcesCacheLock;	// 16 = 0x10
}

+ (id)cacheKeyFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002578af
+ (id)cacheOptionsKeys;	// IMP=0x006000000025787f
- (void).cxx_destruct;	// IMP=0x000000000025777d
- (void)releaseCachedResources;	// IMP=0x00000000002574f6
- (id)createRPNTrackerResourcesConfiguredWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000256df2
- (id)locateRPNTrackerResourcesConfiguredForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000256ce0
- (_Bool)addRPNTrackerResourcesConfiguredForOptions:(id)arg1 resources:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000256b63
- (id)init;	// IMP=0x0000000000256aa8

@end

