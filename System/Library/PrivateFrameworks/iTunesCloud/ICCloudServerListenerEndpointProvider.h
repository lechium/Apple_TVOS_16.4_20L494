//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface ICCloudServerListenerEndpointProvider : NSObject
{
    NSXPCConnection *_listenerEndpointProviderConnection;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012b8a8
- (id)_listenerEndpointProviderConnection;	// IMP=0x000000000012b6ec
- (void)notifyDeviceSetupFinishedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000012b5c2
- (id)listenerEndpointForService:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000012b182
- (void)dealloc;	// IMP=0x000000000012b140
- (id)init;	// IMP=0x000000000012b105

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

