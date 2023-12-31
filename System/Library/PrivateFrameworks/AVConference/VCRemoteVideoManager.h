//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, VCRemoteVideoManagerDelegate, VCRemoteVideoManagerStreamOutputDelegate;

__attribute__((visibility("hidden")))
@interface VCRemoteVideoManager : NSObject
{
    NSMutableDictionary *_queuesForStreamTokenDict;	// 8 = 0x8
    NSMutableDictionary *_stateCacheForStreamTokenDict;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;	// 32 = 0x20
    id <VCRemoteVideoManagerDelegate> _delegate;	// 40 = 0x28
    id _streamOutputDelegate;	// 48 = 0x30
}

+ (id)defaultManager;	// IMP=0x00100000002807ac
@property(nonatomic) id <VCRemoteVideoManagerStreamOutputDelegate> streamOutputDelegate; // @synthesize streamOutputDelegate=_streamOutputDelegate;
- (void)registerBlocksForService;	// IMP=0x00000000002829a7
- (void)dispatchedNotifyCachedStateForStreamToken:(id)arg1;	// IMP=0x000000000028262b
- (void)notifyCachedStateForStreamToken:(id)arg1;	// IMP=0x000000000028259c
- (id)setLayerBoundsForStreamTokenWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x000000000028243f
- (id)contextIdForStreamTokenWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002821f0
- (void)cleanupDictionaries;	// IMP=0x00000000002821b5
- (unsigned int)slotForStreamToken:(long long)arg1 videoMode:(int)arg2;	// IMP=0x00000000002821ad
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;	// IMP=0x000000000028210e
- (void)dispatchedConnectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;	// IMP=0x0000000000281fca
- (void)remoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000281f34
- (void)dispatchedRemoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000281d5b
- (void)remoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000281cc5
- (void)dispatchedRemoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000281aec
- (void)remoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000281a56
- (void)dispatchedRemoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000028187d
- (void)remoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002817e7
- (void)dispatchedRemoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000028160e
- (void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000281577
- (void)dispatchedRemoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;	// IMP=0x000000000028138c
- (void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002812f5
- (void)dispatchedRemoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;	// IMP=0x000000000028110a
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;	// IMP=0x000000000028107b
- (void)dispatchedDidReceiveFirstRemoteFrameForStreamToken:(long long)arg1;	// IMP=0x0000000000280ee1
- (void)releaseQueueForStreamToken:(long long)arg1;	// IMP=0x0000000000280add
- (_Bool)doesQueueExistForStreamToken:(id)arg1;	// IMP=0x00000000002809f8
- (_Bool)queueExistsForStreamToken:(id)arg1;	// IMP=0x00000000002809db
- (id)getQueueForStreamToken:(unsigned int)arg1 videoMode:(int)arg2;	// IMP=0x0000000000280966
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2 imageQueueProtected:(_Bool)arg3;	// IMP=0x000000000028095e
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2;	// IMP=0x0000000000280949
@property(nonatomic) id <VCRemoteVideoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000000280899
- (id)init;	// IMP=0x00000000002807fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

