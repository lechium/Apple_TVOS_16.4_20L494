//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CFPDDataBuffer, CFPrefsDaemon;
@protocol OS_os_transaction, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CFPDSource : NSObject
{
    CFPrefsDaemon *_cfprefsd;	// 8 = 0x8
    CFPDDataBuffer *_plist;	// 16 = 0x10
    NSObject<OS_xpc_object> *_pendingChangesQueue;	// 24 = 0x18
    unsigned long long _pendingChangesSize;	// 32 = 0x20
    struct __CFString *_userName;	// 40 = 0x28
    struct __CFString *_domain;	// 48 = 0x30
    char *_actualPath;	// 56 = 0x38
    char *_fileName;	// 64 = 0x40
    struct __CFSet *_observingConnections;	// 72 = 0x48
    NSObject<OS_os_transaction> *_dirtyTransaction;	// 80 = 0x50
    struct __CFString *_uncanonicalizedPathCache;	// 88 = 0x58
    struct os_unfair_lock_s _uncanonicalizedPathCacheLock;	// 96 = 0x60
    struct os_unfair_lock_s _observingConnectionsLock;	// 100 = 0x64
    struct os_unfair_lock_s _writeLock;	// 104 = 0x68
    struct os_unfair_lock_s _lock;	// 108 = 0x6c
    unsigned int _plistFileOwner;	// 112 = 0x70
    unsigned int _lastEuid;	// 116 = 0x74
    unsigned int _lastEgid;	// 120 = 0x78
    int _fileProtectionClass;	// 124 = 0x7c
    int _parentFD;	// 128 = 0x80
    int _cachedPlistFD;	// 132 = 0x84
    short _generationShmemIndex;	// 136 = 0x88
    _Bool _byHost;	// 138 = 0x8a
    _Bool _managed;	// 139 = 0x8b
    _Bool _managedUsesContainer;	// 140 = 0x8c
    _Bool _watchingParentDirectory;	// 141 = 0x8d
    unsigned int _handlingRequest:1;	// 142 = 0x8e
    unsigned int _dirty:1;	// 142 = 0x8e
    unsigned int _neverCache:1;	// 142 = 0x8e
    unsigned int _checkedForNonPrefsPlist:1;	// 142 = 0x8e
    unsigned int _restrictedReadability:1;	// 142 = 0x8e
    unsigned int _waitingForDeviceUnlock:1;	// 142 = 0x8e
    unsigned int _disableBackup:1;	// 142 = 0x8e
    unsigned int _plistFileOwnerReadable:1;	// 142 = 0x8e
    unsigned int _plistFileWorldReadable:1;	// 143 = 0x8f
    unsigned int _actualPathRedirectedByTerminalSymlink:1;	// 143 = 0x8f
}

- (void)dealloc;	// IMP=0x0000000000183bc2
- (void)cleanUpAfterAcceptingMessage:(id)arg1;	// IMP=0x0000000000183bc1
- (void)processEndOfMessageIntendingToRemoveSource:(_Bool *)arg1;	// IMP=0x0000000000183811
- (id)acceptMessage:(id)arg1;	// IMP=0x00000000001829b1
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(_Bool)arg4 containerPath:(const char *)arg5 fileUID:(unsigned int)arg6 mode:(unsigned short)arg7 diagnosticMessage:(const char **)arg8;	// IMP=0x0000000000182363
- (void)lockedSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000181468
- (void)lockedAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000018137a
- (void)unlock;	// IMP=0x0000000000181371
- (void)lock;	// IMP=0x0000000000181368
- (void)clearCacheForReason:(struct __CFString *)arg1;	// IMP=0x0000000000181268
- (struct __CFString *)debugDump;	// IMP=0x0000000000181176
- (_Bool)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(_Bool)arg4 fromMessage:(id)arg5;	// IMP=0x0000000000180f07
- (void)drainPendingChanges;	// IMP=0x0000000000180c43
- (void)observingConnectionWasInvalidated:(id)arg1;	// IMP=0x0000000000180b1d
- (void)asyncNotifyObserversOfWriteFromConnection:(id)arg1 message:(id)arg2;	// IMP=0x00000000001806a5
- (id)copyPropertyListValidatingPlist:(_Bool)arg1;	// IMP=0x0000000000180493
- (id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(_Bool)arg1 andReturnFileUID:(unsigned int *)arg2 andMode:(unsigned short *)arg3;	// IMP=0x000000000017fe94
- (void)syncWriteToDisk;	// IMP=0x000000000017fc00
- (void)syncWriteToDiskAndFlushCacheForReason:(struct __CFString *)arg1;	// IMP=0x000000000017fbc3
- (void)finishedNonRequestWriteWithResult:(struct __CFDictionary *)arg1;	// IMP=0x000000000017fac9
- (void)handleWritingResult:(struct __CFDictionary *)arg1;	// IMP=0x000000000017f998
- (CDUnknownBlockType)createDiskWrite;	// IMP=0x000000000017f590
- (void)setDirty:(_Bool)arg1;	// IMP=0x000000000017f2ad
- (void)updateShmemEntry;	// IMP=0x000000000017f29a
- (short)shmemIndex;	// IMP=0x000000000017f292
- (id)description;	// IMP=0x000000000017f278
- (_Bool)byHost;	// IMP=0x000000000017f271
- (void)respondToFileWrittenToBehindOurBack;	// IMP=0x000000000017f1b6
- (struct __CFString *)cloudConfigurationPath;	// IMP=0x000000000017f1b3
- (struct __CFString *)container;	// IMP=0x000000000017f1b0
- (struct __CFString *)user;	// IMP=0x000000000017f1ab
- (struct __CFString *)domain;	// IMP=0x000000000017f1a6
- (void)setManagedPreferencesUseContainer:(_Bool)arg1;	// IMP=0x000000000017f19f
- (_Bool)managed;	// IMP=0x000000000017f198
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 byHost:(_Bool)arg3 managed:(_Bool)arg4 shmemIndex:(short)arg5 daemon:(id)arg6;	// IMP=0x000000000017f0cb
- (void)setUncanonicalizedPathCached:(_Bool)arg1;	// IMP=0x000000000017f066
- (struct __CFString *)copyUncanonicalizedPath;	// IMP=0x000000000017f007
- (int)cacheFileInfoForWriting:(_Bool)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3 didCreate:(_Bool *)arg4;	// IMP=0x000000000017e4e4
- (void)cacheFileInfo;	// IMP=0x000000000017e4c7
- (unsigned long long)hash;	// IMP=0x000000000017e243
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017e0dc

@end

