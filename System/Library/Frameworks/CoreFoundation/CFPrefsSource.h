//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CFXPreferences, __CFPrefsWeakObservers;

__attribute__((visibility("hidden")))
@interface CFPrefsSource : NSObject
{
    _CFXPreferences *_containingPreferences;	// 8 = 0x8
    struct __CFDictionary *_dict;	// 16 = 0x10
    __CFPrefsWeakObservers *_observers;	// 24 = 0x18
    _Atomic long long _generationCount;	// 32 = 0x20
    _Atomic _Atomic unsigned int *shmemEntry;	// 40 = 0x28
    _Atomic unsigned int lastKnownShmemState;	// 48 = 0x30
    struct os_unfair_lock_s _lock;	// 52 = 0x34
    _Bool _isSearchList;	// 56 = 0x38
}

- (void)dealloc;	// IMP=0x00000000000e4f9a
- (struct __CFString *)copyOSLogDescription;	// IMP=0x00000000000e4eb5
- (id)description;	// IMP=0x00000000000e4d15
- (struct __CFString *)container;	// IMP=0x00000000000e4d0d
- (_Bool)isByHost;	// IMP=0x00000000000e4d0a
- (struct __CFString *)domainIdentifier;	// IMP=0x00000000000e4d02
- (struct __CFString *)userIdentifier;	// IMP=0x00000000000e4cfa
- (void)setFileProtectionClass:(int)arg1;	// IMP=0x00000000000e4cf9
- (void)setBackupDisabled:(_Bool)arg1;	// IMP=0x00000000000e4cf8
- (void)setAccessRestricted:(_Bool)arg1;	// IMP=0x00000000000e4cf7
- (void)setDaemonCacheEnabled:(_Bool)arg1;	// IMP=0x00000000000e4cf6
- (void)alreadylocked_clearCache;	// IMP=0x00000000000e4cf5
- (_Bool)isDirectModeEnabled;	// IMP=0x00000000000e4cf2
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e4cf1
- (_Bool)isVolatile;	// IMP=0x00000000000e4cee
- (_Bool)managed;	// IMP=0x00000000000e4ceb
- (void)unlock;	// IMP=0x00000000000e4ce2
- (void)lock;	// IMP=0x00000000000e4cd9
- (long long)generationCount;	// IMP=0x00000000000e4cd4
- (long long)alreadylocked_generationCount;	// IMP=0x00000000000e4ccf
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;	// IMP=0x00000000000e4cce
- (id)createRequestNewContentMessageForDaemon:(int)arg1;	// IMP=0x00000000000e4cbd
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e4cb4
- (void)mergeIntoDictionary:(struct __CFDictionary *)arg1 sourceDictionary:(struct __CFDictionary *)arg2 cloudKeyEvaluator:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e4bbf
- (struct __CFDictionary *)alreadylocked_copyDictionary;	// IMP=0x00000000000e4b37
- (struct __CFArray *)alreadylocked_copyKeyList;	// IMP=0x00000000000e4999
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000e4998
- (void)setStoreName:(struct __CFString *)arg1;	// IMP=0x00000000000e4997
- (void)setConfigurationPath:(struct __CFString *)arg1;	// IMP=0x00000000000e4996
- (_Bool)synchronize;	// IMP=0x00000000000e4993
- (void *)copyValueForKey:(struct __CFString *)arg1;	// IMP=0x00000000000e494b
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;	// IMP=0x00000000000e474f
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;	// IMP=0x00000000000e428c
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;	// IMP=0x00000000000e3b85
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int *)arg2;	// IMP=0x00000000000e3a5d
- (int)alreadylocked_updateObservingRemoteChanges;	// IMP=0x00000000000e3a5a
- (id)copyVolatileSourceWithContainingPreferences:(id)arg1;	// IMP=0x00000000000e371e
- (id)initWithContainingPreferences:(id)arg1;	// IMP=0x00000000000e36a8

@end
