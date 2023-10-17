//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class ICMusicSubscriptionLeaseSession, ICStoreRequestContext, MPCModelGenericAVItemAssetLoadProperties, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCModelGenericAVItemSubscriptionAssetLoadOperation : MPAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    CDUnknownBlockType _cancellationHandler;	// 16 = 0x10
    MPCModelGenericAVItemAssetLoadProperties *_assetLoadProperties;	// 24 = 0x18
    long long _operationType;	// 32 = 0x20
    ICStoreRequestContext *_requestContext;	// 40 = 0x28
    CDUnknownBlockType _responseHandler;	// 48 = 0x30
    ICMusicSubscriptionLeaseSession *_subscriptionLeaseSession;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000023e56a
@property(retain, nonatomic) ICMusicSubscriptionLeaseSession *subscriptionLeaseSession; // @synthesize subscriptionLeaseSession=_subscriptionLeaseSession;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(nonatomic) long long operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // @synthesize assetLoadProperties=_assetLoadProperties;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000023e428
- (CDUnknownBlockType)cancellationHandler;	// IMP=0x000000000023e369
- (id)_handlePlaybackResponse:(id)arg1 withPlaybackCacheRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023de18
- (id)_loadResultsFromServerObjectDatabaseAssets:(id)arg1 hlsAsset:(id)arg2 playbackAuthorizationToken:(id)arg3;	// IMP=0x000000000023d6cc
- (id)_loadResultsFromServerObjectDatabaseAssetsWithMiniSinf:(id)arg1 playbackAuthorizationToken:(id)arg2;	// IMP=0x000000000023d088
- (_Bool)_canRetrieveLoadResultsFromServerObjectDatabaseWithAssets:(id *)arg1 hlsAsset:(id *)arg2;	// IMP=0x000000000023cacd
- (_Bool)_canRetrieveLoadResultsFromMiniSinfWithAssets:(id *)arg1;	// IMP=0x000000000023c70a
- (void)execute;	// IMP=0x000000000023b52e
- (void)cancel;	// IMP=0x000000000023b4ce
- (id)description;	// IMP=0x000000000023b414
- (id)init;	// IMP=0x000000000023b3b0

@end

