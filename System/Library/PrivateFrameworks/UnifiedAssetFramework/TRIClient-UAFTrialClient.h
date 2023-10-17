//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Trial/TRIClient.h>

@interface TRIClient (UAFTrialClient)
+ (id)_queryAssetsWithNamespaceName:(id)arg1 factorName:(id)arg2 language:(id)arg3 isRoot:(_Bool)arg4 withError:(id *)arg5;	// IMP=0x0050000000007d25
+ (id)_levelKeyForCache:(id)arg1 withFactorName:(id)arg2 withLanguage:(id)arg3;	// IMP=0x0050000000007d07
+ (void)_addLevelToCache:(id)arg1 namespaceName:(id)arg2 factorName:(id)arg3 withCache:(id)arg4;	// IMP=0x0050000000007b71
+ (void)_addFactorLevelsToCache:(id)arg1 namespaceName:(id)arg2 withFactorLevelsCache:(id)arg3 withLevelCache:(id)arg4;	// IMP=0x00500000000078c9
+ (void)UAFCacheUpdate;	// IMP=0x0050000000007191
+ (id)_factoryLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;	// IMP=0x0050000000007120
+ (id)_rootLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;	// IMP=0x0050000000007100
+ (id)_cachedLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3 withCache:(id)arg4;	// IMP=0x0050000000007025
+ (id)_factoryFactorLevelsWithNamespaceName:(id)arg1 onDemandClient:(id)arg2;	// IMP=0x0050000000006b1d
+ (id)_rootFactorLevelsWithNamespaceName:(id)arg1;	// IMP=0x00500000000061d5
- (void)_initOnce;	// IMP=0x0010000000008397
- (id)_trialLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;	// IMP=0x0010000000007140
- (id)UAFLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;	// IMP=0x0010000000006ef5
- (id)UAFFactorLevelsWithNamespaceName:(id)arg1;	// IMP=0x00100000000057c8
@end

