//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDNowPlayingServer, NSArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MRDAutoConnectionController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    MRDNowPlayingServer *_nowPlayingServer;	// 16 = 0x10
    NSMutableDictionary *_pendingReconSessions;	// 24 = 0x18
    NSMutableDictionary *_pendingReconSessionCompletions;	// 32 = 0x20
    NSMutableDictionary *_pendingGroupReconSessions;	// 40 = 0x28
    NSMutableDictionary *_pendingGroupReconSessionCompletions;	// 48 = 0x30
    NSMutableSet *_connectedEndpoints;	// 56 = 0x38
    NSMutableDictionary *_connectingEndpoints;	// 64 = 0x40
    NSMutableDictionary *_pendingConnectingEndpointCompletions;	// 72 = 0x48
}

+ (id)sharedConnectionController;	// IMP=0x00400000000c2e25
- (void).cxx_destruct;	// IMP=0x00200000000c7836
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x00100000000c76b1
- (void)_handleEndpointDidInvalidateNotification:(id)arg1;	// IMP=0x00100000000c7575
- (void)_onSerialQueue_removeConnectedEndpoint:(id)arg1;	// IMP=0x00100000000c72b0
- (void)_onSerialQueue_addConnectedEndpoint:(id)arg1;	// IMP=0x00100000000c6dc0
- (void)_onSerialQueue_connectToEndpoint:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c5d8a
- (void)_onSerialQueue_discoverGroup:(id)arg1 connect:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c571a
- (void)_onSerialQueue_discoverOutputDevice:(id)arg1 connect:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c5055
- (void)_discoverGroup:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c4f47
- (void)_discoverOutputDevice:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c4e39
- (void)_connectToGroup:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c4d28
- (void)_connectToOutputDevice:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c4c17
- (void)_connectToAllOutputDevicesForReason:(id)arg1 comparator:(CDUnknownBlockType)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c4383
- (void)discoverGroup:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c4156
- (void)discoverOutputDevice:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c3f29
- (void)connectToGroup:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c3cfc
- (void)connectToOutputDevice:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c3acf
- (void)connectToAllOutputDevicesForReason:(id)arg1 comparator:(CDUnknownBlockType)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c387d
@property(readonly, nonatomic) NSArray *autoConnectedEndpoints;
@property(readonly, nonatomic) NSArray *autoConnectingEndpoints;
- (id)_init;	// IMP=0x00100000000c2e8a

@end
