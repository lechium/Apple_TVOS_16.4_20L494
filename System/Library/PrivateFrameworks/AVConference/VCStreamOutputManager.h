//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamOutputManager : NSObject
{
    NSMutableDictionary *_streamOutputSourceForStreamToken;	// 8 = 0x8
    NSMutableDictionary *_streamOutputs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;	// 32 = 0x20
    _Bool _useFigRemoteQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00100000002b8b90
- (void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002bacb1
- (void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002bacab
- (void)releaseQueueForStreamToken:(long long)arg1;	// IMP=0x00000000002baca5
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;	// IMP=0x00000000002bac9f
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;	// IMP=0x00000000002bac99
- (void)remoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002bac03
- (void)remoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002bab6d
- (void)remoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002baad7
- (void)remoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002baa41
- (void)dispatchedRemoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002ba89f
- (void)dispatchedRemoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002ba6fd
- (void)dispatchedRemoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002ba55b
- (void)dispatchedRemoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002ba3b9
- (void)deregisterBlocksForService;	// IMP=0x00000000002ba321
- (void)registerBlocksForService;	// IMP=0x00000000002b9f44
- (id)serviceHandlerStreamOutputSetTimeSyncOffsetWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b9d08
- (id)serviceHandlerStreamOutputTerminateWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b9c26
- (id)serviceHandlerStreamOutputNotifyCacheWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b9a9e
- (id)serviceHandlerStreamOutputInitializeWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b96e9
- (_Bool)sourceExistsForStreamToken:(long long)arg1;	// IMP=0x00000000002b95d9
- (id)allocDispatchedStreamOutputWithStreamToken:(long long)arg1 clientPid:(int)arg2 options:(id)arg3 errorCode:(int *)arg4;	// IMP=0x00000000002b9592
- (id)allocStreamOutputWithStreamToken:(long long)arg1 clientPid:(int)arg2 options:(id)arg3 errorCode:(int *)arg4;	// IMP=0x00000000002b944f
- (void)dispatchedDeregisterStreamOutputSourceForStreamToken:(long long)arg1;	// IMP=0x00000000002b90a0
- (void)deregisterStreamOutputSourceForStreamToken:(long long)arg1;	// IMP=0x00000000002b9011
- (void)dispatchedRegisterStreamOutputSource:(id)arg1 forStreamToken:(long long)arg2;	// IMP=0x00000000002b8c6c
- (void)registerStreamOutputSource:(id)arg1 forStreamToken:(long long)arg2;	// IMP=0x00000000002b8bd5
- (void)dispatchedCleanupStreamOutput:(id)arg1;	// IMP=0x00000000002b8b0f
- (void)cleanupStreamOutput:(id)arg1;	// IMP=0x00000000002b8a80
- (void)dealloc;	// IMP=0x00000000002b89f7
- (id)init;	// IMP=0x00000000002b87cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

