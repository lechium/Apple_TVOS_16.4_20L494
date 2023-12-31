//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVAssetCache.h"

@class AVManagedAssetCacheInternal;

__attribute__((visibility("hidden")))
@interface AVManagedAssetCache : AVAssetCache
{
    AVManagedAssetCacheInternal *_priv;	// 8 = 0x8
}

+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)arg1;	// IMP=0x00600000000fd640
+ (id)assetCacheForProgressiveDownloadWithURL:(id)arg1;	// IMP=0x00600000000fd602
+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)arg1;	// IMP=0x00600000000fd5c4
+ (id)assetCacheWithURL:(id)arg1;	// IMP=0x00600000000fd58e
- (_Bool)isHTTPLiveStreamingCacheEnabled;	// IMP=0x00000000000fda77
- (_Bool)isProgressiveDownloadCacheEnabled;	// IMP=0x00000000000fda63
- (_Bool)isPlayableOffline;	// IMP=0x00000000000fda5b
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;	// IMP=0x00000000000fda42
- (id)allKeys;	// IMP=0x00000000000fd9fb
- (id)lastModifiedDateOfEntryForKey:(id)arg1;	// IMP=0x00000000000fd9a7
- (long long)sizeOfEntryForKey:(id)arg1;	// IMP=0x00000000000fd958
- (void)removeEntryForKey:(id)arg1;	// IMP=0x00000000000fd922
- (id)URL;	// IMP=0x00000000000fd90d
- (long long)currentSize;	// IMP=0x00000000000fd8c4
- (void)setMaxEntrySize:(long long)arg1;	// IMP=0x00000000000fd886
- (long long)maxEntrySize;	// IMP=0x00000000000fd83d
- (void)setMaxSize:(long long)arg1;	// IMP=0x00000000000fd7ff
- (long long)maxSize;	// IMP=0x00000000000fd7b6
- (void)dealloc;	// IMP=0x00000000000fd74f
- (id)initWithURL:(id)arg1 enableCRABSCache:(_Bool)arg2 enableHLSCache:(_Bool)arg3;	// IMP=0x00000000000fd69b
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000fd681

@end

