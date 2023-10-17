//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKActivity, GKDispatchGroup, NSData, NSDate, NSDictionary, NSError, NSNumber, NSSet, NSURL;
@protocol OS_dispatch_queue;

@interface GKStoreBag : NSObject
{
    NSObject<OS_dispatch_queue> *_syncQueue;	// 8 = 0x8
    GKDispatchGroup *_fetchGroup;	// 16 = 0x10
    int _playerIDHashMod;	// 24 = 0x18
    int _playerIDHashAdd;	// 28 = 0x1c
    NSURL *_url;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSSet *_APNSRequired;	// 48 = 0x30
    NSSet *_signatureRequired;	// 56 = 0x38
    NSSet *_responseSignatureRequired;	// 64 = 0x40
    NSNumber *_metricsPassthroughPercentage;	// 72 = 0x48
    NSData *_mockSAPSign;	// 80 = 0x50
    NSDictionary *_internalBag;	// 88 = 0x58
    NSDate *_expiration;	// 96 = 0x60
    double _mescalSetupStartTimeStamp;	// 104 = 0x68
    GKActivity *_activity;	// 112 = 0x70
}

+ (void)addAuthHeadersToRequest:(id)arg1;	// IMP=0x00400000001c3356
+ (id)deviceInfo;	// IMP=0x00100000001c32df
+ (id)appleIdSession;	// IMP=0x00100000001c3283
+ (id)mockSignURLForEnvironment:(long long)arg1;	// IMP=0x00100000001c28a9
+ (id)storeBagURLForEnvironment:(long long)arg1;	// IMP=0x00100000001c18d3
+ (id)storeBagForURL:(id)arg1;	// IMP=0x00100000001bfc71
+ (id)storeBagForEnvironment:(long long)arg1;	// IMP=0x00100000001bfc34
@property(retain, nonatomic) GKActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) double mescalSetupStartTimeStamp; // @synthesize mescalSetupStartTimeStamp=_mescalSetupStartTimeStamp;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSDictionary *internalBag; // @synthesize internalBag=_internalBag;
@property(retain) NSData *mockSAPSign; // @synthesize mockSAPSign=_mockSAPSign;
@property(retain, nonatomic) NSNumber *metricsPassthroughPercentage; // @synthesize metricsPassthroughPercentage=_metricsPassthroughPercentage;
@property(retain) NSSet *responseSignatureRequired; // @synthesize responseSignatureRequired=_responseSignatureRequired;
@property(retain) NSSet *signatureRequired; // @synthesize signatureRequired=_signatureRequired;
@property(retain) NSSet *APNSRequired; // @synthesize APNSRequired=_APNSRequired;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)readDataForURL:(id)arg1 postData:(id)arg2 client:(id)arg3 credential:(id)arg4 includeUDID:(_Bool)arg5 includeAPNS:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00100000001c6566
- (void)readDataForBagKey:(id)arg1 method:(id)arg2 postData:(id)arg3 client:(id)arg4 credential:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001c62f5
- (void)writeDataForBagKey:(id)arg1 postData:(id)arg2 client:(id)arg3 credential:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001c60e3
- (void)_loadDataForBagKey:(id)arg1 method:(id)arg2 postData:(id)arg3 client:(id)arg4 credential:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001c4b89
- (id)_networkSynchonizationQueue;	// IMP=0x00100000001c4b3d
- (_Bool)isLoadValidForBagKey:(id)arg1 date:(id)arg2;	// IMP=0x00100000001c4ada
- (void)invalidateBagKeys:(id)arg1;	// IMP=0x00100000001c492a
- (id)_bagKeyValidationDict;	// IMP=0x00100000001c48ce
- (void)_sendOneAsyncTryWithRequest:(id)arg1 responseMustBeSigned:(_Bool)arg2 session:(id)arg3 retryCount:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001c35b5
- (void)_sendAsynchronousRequest:(id)arg1 responseMustBeSigned:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c341b
- (id)requestWithURL:(id)arg1 method:(id)arg2 playerID:(id)arg3 authToken:(id)arg4 pushToken:(id)arg5 client:(id)arg6 postData:(id)arg7 includeUDID:(_Bool)arg8 includeAPNS:(_Bool)arg9 sapSession:(id)arg10;	// IMP=0x00100000001c3142
- (void)signRequest:(id)arg1 sapSession:(id)arg2 postData:(id)arg3;	// IMP=0x00100000001c30d5
- (int)hashForPlayerID:(id)arg1;	// IMP=0x00100000001c309c
- (void)_updatePlayerIDHashParameters;	// IMP=0x00100000001c2fd6
- (void)updateURLPatternCache;	// IMP=0x00100000001c28e6
- (id)_storeBagForData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c248a
- (long long)_scoresThrottleThreshold;	// IMP=0x00100000001c2447
- (long long)scoresThrottleThreshold;	// IMP=0x00100000001c2379
- (long long)_achievementsThrottleThreshold;	// IMP=0x00100000001c2336
- (long long)achievementsThrottleThreshold;	// IMP=0x00100000001c2268
- (long long)_gkSessionRateLimiting;	// IMP=0x00100000001c2225
- (long long)gkSessionRateLimiting;	// IMP=0x00100000001c2157
- (_Bool)_shouldUseHTTPPipelining;	// IMP=0x00100000001c20f0
- (_Bool)shouldUseHTTPPipelining;	// IMP=0x00100000001c2021
- (id)omnitureQueryParametersForContext:(id)arg1;	// IMP=0x00100000001c1fda
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00100000001c1e51
- (void)getValuesForKeys:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c1c47
- (void)getURLForKey:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c19e8
- (void)_setupResponseSignatureRequired:(id)arg1;	// IMP=0x00100000001c1848
- (void)_metricsThrottleThreshold:(id)arg1;	// IMP=0x00100000001c180a
- (void)_setupSignatureRequired:(id)arg1;	// IMP=0x00100000001c177f
- (void)_setupAPNSRequired:(id)arg1;	// IMP=0x00100000001c163a
- (void)getBagWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c13e6
- (void)_fetchBagWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c0e0f
- (void)_fetchFromServerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c0576
- (void)_fetchFromCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c0103
- (_Bool)_isLastProtocolVersionUsedValid;	// IMP=0x00100000001c0092
- (_Bool)_isFetching;	// IMP=0x00100000001c0084
- (_Bool)_isValidAndNotExpired;	// IMP=0x00100000001c003e
- (_Bool)_isValid;	// IMP=0x00100000001c0021
- (_Bool)_isExpired;	// IMP=0x00100000001bffff
- (void)dealloc;	// IMP=0x00100000001bff74
- (id)initWithURL:(id)arg1;	// IMP=0x00100000001bfed7
- (id)description;	// IMP=0x00100000001bfbbd
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bfbac
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bfaa0

@end

