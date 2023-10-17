//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICMusicUserTokenCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    NSMutableDictionary *_cachedUserTokens;	// 24 = 0x18
}

+ (void)_getCacheKeyForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x004000000016d90e
+ (id)_decodeDeveloperTokenPart:(id)arg1;	// IMP=0x004000000016d58e
+ (id)sharedCache;	// IMP=0x004000000016d55e
- (void).cxx_destruct;	// IMP=0x000000000016ccf8
- (void)_postLocalChangeNotification;	// IMP=0x000000000016cc95
- (void)_persistCache;	// IMP=0x000000000016cc2b
- (void)_loadPersistedCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000016ca8e
- (void)_handleMusicUserTokensDidChangeDistributedNotification:(id)arg1;	// IMP=0x000000000016c9ba
- (void)setCachedUserToken:(id)arg1 forDeveloperToken:(id)arg2 requestContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000016c8b7
- (void)getCachedUserTokenForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000016c7e5
- (void)dealloc;	// IMP=0x000000000016c766
- (id)_init;	// IMP=0x000000000016c642

@end

