//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUUID;
@protocol GTRemoteConnectionProvider, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface GTURLAccessProvider : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSMutableDictionary *_registeredURLs;	// 16 = 0x10
    NSUUID *_deviceUUID;	// 24 = 0x18
    id <GTRemoteConnectionProvider> _remoteConnectionProvider;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_urlProviderQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000ca36
- (void)transferIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c845
- (id)makeURL:(id)arg1;	// IMP=0x000000000000c771
- (void)securityScopedURLFromSandboxID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c586
- (id)urlForPath:(id)arg1;	// IMP=0x000000000000c37a
- (id)initWithDeviceUUID:(id)arg1 remoteConnectionProvider:(id)arg2;	// IMP=0x000000000000c28c

@end

