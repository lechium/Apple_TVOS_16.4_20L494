//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDHostedRoutingController, MRDNowPlayingServer, MROrigin, MSVPersistentTimer, NSDictionary, NSMutableDictionary, NSUserDefaults;
@protocol MRDAVSystemEndpointControllerDelegate, OS_dispatch_queue;

@interface MRDAVSystemEndpointController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    MRDNowPlayingServer *_nowPlayingServer;	// 16 = 0x10
    MRDHostedRoutingController *_routingController;	// 24 = 0x18
    NSMutableDictionary *_systemEndpointEntries;	// 32 = 0x20
    _Bool _cachedHasPersonalDevices;	// 40 = 0x28
    NSUserDefaults *_userDefaults;	// 48 = 0x30
    MSVPersistentTimer *_userSelectedTimer;	// 56 = 0x38
    MSVPersistentTimer *_playbackTimer;	// 64 = 0x40
    MROrigin *_activeOrigin;	// 72 = 0x48
    id <MRDAVSystemEndpointControllerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000007565
@property(nonatomic) __weak id <MRDAVSystemEndpointControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_deviceInfoDidChange:(id)arg1;	// IMP=0x0010000000006f38
- (void)_initializeSystemEndpointInfo;	// IMP=0x0010000000006afc
- (void)_writeSystemEndpointInfo:(id)arg1;	// IMP=0x0010000000006968
- (_Bool)_hasPersonalDeviceForContext:(id)arg1;	// IMP=0x00100000000067d4
- (void)_onSerialQueue_maybeSetupPlaybackTimerForEvent:(long long)arg1;	// IMP=0x001000000000636e
- (void)_onSerialQueue_maybeSetupUserSelectedTimerForEvent:(long long)arg1;	// IMP=0x0010000000005ec8
- (void)_onSerialQueue_reconnectToOutputDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000059b9
- (void)_onSerialQueue_updateSystemEndpoint:(id)arg1 type:(long long)arg2 event:(long long)arg3 eventReason:(id)arg4;	// IMP=0x0010000000004b22
- (id)_onSerialQueue_calculateProactiveEndpoint:(id *)arg1;	// IMP=0x0010000000004922
- (id)_onSerialQueue_calculateUserSelectedEndpointForEvent:(long long)arg1 reason:(id *)arg2;	// IMP=0x001000000000448f
- (id)_onSerialQueue_calculateActiveEndpoint:(long long)arg1 event:(long long)arg2 reason:(id *)arg3;	// IMP=0x0010000000004415
- (void)_onSerialQueue_reevaluateActiveEndpoint:(long long)arg1 event:(long long)arg2 changeType:(long long)arg3 eventReason:(id)arg4 clientBundleIdentifier:(id)arg5;	// IMP=0x00100000000042a9
- (void)_onSerialQueue_reevaluateActiveEndpoint:(long long)arg1 event:(long long)arg2 eventReason:(id)arg3 clientBundleIdentifier:(id)arg4;	// IMP=0x001000000000427e
- (void)_handleIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x00100000000040bb
- (void)_handleOutputContextDidAddOutputDeviceNotification:(id)arg1;	// IMP=0x0010000000003fa9
- (void)_handleOriginDidUnregisterNotification:(id)arg1;	// IMP=0x0010000000003e28
- (void)_handleOriginDidRegisterNotification:(id)arg1;	// IMP=0x0010000000003c0c
- (id)originClientForDeviceUID:(id)arg1;	// IMP=0x00100000000038af
- (void)clearUserSelectedOutputDeviceUID:(id)arg1 event:(long long)arg2 reason:(id)arg3 clientBundleIdentifier:(id)arg4;	// IMP=0x0010000000003508
- (void)updateUserSelectedSystemEndpoint:(id)arg1;	// IMP=0x0010000000003497
- (void)updateUserSelectedSystemEndpoint:(id)arg1 event:(long long)arg2 eventReason:(id)arg3;	// IMP=0x00100000000033ac
- (id)activeOutputDeviceUID:(long long)arg1;	// IMP=0x0010000000003212
@property(readonly, nonatomic) NSDictionary *systemEndpointInfo;
- (void)dealloc;	// IMP=0x0010000000002bb3
- (id)initWithRoutingController:(id)arg1;	// IMP=0x00100000000028fb

@end

