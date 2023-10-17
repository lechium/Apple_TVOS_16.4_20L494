//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

__attribute__((visibility("hidden")))
@interface AMSCookieService : NSObject
{
    _Bool _isObservingNotifications;	// 8 = 0x8
    struct os_unfair_lock_s _inMemoryStorageLock;	// 12 = 0xc
    NSCache *_inMemoryStorage;	// 16 = 0x10
}

+ (_Bool)_isEntitledForDirectCookieAccess;	// IMP=0x00100000001c8faa
+ (id)sharedService;	// IMP=0x00100000001c809d
- (void).cxx_destruct;	// IMP=0x00000000001cb45f
@property _Bool isObservingNotifications; // @synthesize isObservingNotifications=_isObservingNotifications;
@property(readonly) NSCache *inMemoryStorage; // @synthesize inMemoryStorage=_inMemoryStorage;
@property(readonly, nonatomic) struct os_unfair_lock_s inMemoryStorageLock; // @synthesize inMemoryStorageLock=_inMemoryStorageLock;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x00000000001cb23d
- (void)updateCookiesWithCookiesToAdd:(id)arg1 cookiesToRemove:(id)arg2 forAccount:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001cac80
- (id)getCookiesForAccount:(id)arg1 cookieDatabaseOnly:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000001c9f4c
- (id)getCookiesForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c9f35
- (void)getCookiesForAccount:(id)arg1 cookieDatabaseOnly:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c9ea0
- (void)getCookiesForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c9e89
- (void)_unregisterFromCookieChangeNotifications;	// IMP=0x00000000001c98e8
- (void)_registerForCookieChangeNotifications;	// IMP=0x00000000001c9026
- (id)_cachedCookiesForAccount:(id)arg1;	// IMP=0x00000000001c87e9
- (void)_cacheCookies:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000000001c80f2
- (id)init;	// IMP=0x00000000001c800f
- (void)clearCookieCacheForAccount:(id)arg1;	// IMP=0x00000000001c76cd
- (void)clearCookieCache;	// IMP=0x00000000001c71f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
