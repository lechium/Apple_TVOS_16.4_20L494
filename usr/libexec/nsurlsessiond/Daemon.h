//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface Daemon : NSObject
{
    NSMutableDictionary *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 16 = 0x10
    _Bool _createdDataVault;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_archiveTimer;	// 32 = 0x20
    _Bool _privileged;	// 40 = 0x28
    _Bool _inSyncBubble;	// 41 = 0x29
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (id)sharedDaemon;	// IMP=0x0020000000043035
- (void).cxx_destruct;	// IMP=0x0020000000042421
@property(getter=isInSyncBubble) _Bool inSyncBubble; // @synthesize inSyncBubble=_inSyncBubble;
@property(getter=isPrivileged) _Bool privileged; // @synthesize privileged=_privileged;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)start;	// IMP=0x0010000000042283
- (void)waitUntilDeviceIsUnlocked;	// IMP=0x001000000004227d
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00100000000421f2
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0010000000042167
- (id)bundleIDsForAppProxies:(id)arg1;	// IMP=0x0010000000041dac
- (void)releaseTransaction;	// IMP=0x0010000000041d97
- (void)addTransaction;	// IMP=0x0010000000041d82
- (void)managerBecameEmpty:(id)arg1 bundleID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000041ccb
- (id)getSessionWithIdentifier:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0010000000041b94
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000412fb
- (void)setupArchiveTimer;	// IMP=0x0010000000041245
- (void)archiveState;	// IMP=0x00100000000410d5
- (void)restoreState;	// IMP=0x00100000000406ab
- (void)setupNewClassMappingsForUnarchiver;	// IMP=0x0010000000040672
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x0010000000040633
- (id)archivePath;	// IMP=0x00100000000405c1
- (id)init;	// IMP=0x0010000000040420
- (void)createDaemonDirectory;	// IMP=0x001000000004009c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

