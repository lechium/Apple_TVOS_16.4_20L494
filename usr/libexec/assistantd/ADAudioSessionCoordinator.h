//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFAssertionCoordinator, AFAudioSessionCoordinationSystemInfo, AFHeartBeat, AFInstanceContext, NSDateInterval, NSMutableSet, NSString;
@protocol ADAudioSessionCoordinatorDelegate, OS_dispatch_queue;

@interface ADAudioSessionCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    id <ADAudioSessionCoordinatorDelegate> _delegate;	// 24 = 0x18
    AFHeartBeat *_heartBeat;	// 32 = 0x20
    NSDateInterval *_currentOrUpNextDateInterval;	// 40 = 0x28
    unsigned long long _audioSessionState;	// 48 = 0x30
    NSMutableSet *_keepAliveDeviceIDs;	// 56 = 0x38
    AFAudioSessionCoordinationSystemInfo *_localSystemInfo;	// 64 = 0x40
    AFAssertionCoordinator *_localAssertionCoordinator;	// 72 = 0x48
    AFAssertionCoordinator *_remoteAssertionCoordinator;	// 80 = 0x50
    _Bool _hasLoggedAudioSessionCoordinationDisablement;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00100000002436e5
- (id)_qualifiedOutOfRangeDeviceIDs;	// IMP=0x00100000002436dd
- (id)_qualifiedInRangeDeviceIDs;	// IMP=0x00100000002436d5
- (id)_qualifiedDeviceIDs;	// IMP=0x00100000002436cd
- (void)_handleRelinquishedRemoteAssertion:(id)arg1 isLast:(_Bool)arg2;	// IMP=0x00100000002433c7
- (void)_handleAcquiredRemoteAssertion:(id)arg1 isFirst:(_Bool)arg2;	// IMP=0x0010000000242fb0
- (void)_handleUpdatedLocalAssertionsForReason:(id)arg1 pendingAssertions:(id)arg2 activeAssertions:(id)arg3;	// IMP=0x0010000000242cc7
- (void)_handleRemovedLocalAssertion:(id)arg1 isLast:(_Bool)arg2;	// IMP=0x0010000000242b9c
- (void)_handleRelinquishedLocalAssertion:(id)arg1 isLast:(_Bool)arg2;	// IMP=0x001000000024282d
- (void)_handleAcquiredLocalAssertion:(id)arg1 isFirst:(_Bool)arg2;	// IMP=0x00100000002423a8
- (void)_handleAddedLocalAssertion:(id)arg1 isFirst:(_Bool)arg2;	// IMP=0x001000000024227d
- (void)_heartBeatFired;	// IMP=0x001000000024205d
- (void)_stopHeartBeat;	// IMP=0x0010000000241f94
- (void)_startHeartBeatWithEffectiveDate:(id)arg1;	// IMP=0x0010000000241d09
- (void)_endAudioSessionOnAllRemoteDevicesForReason:(id)arg1 effectiveDate:(id)arg2;	// IMP=0x00100000002418b1
- (void)_endAudioSessionOnOutOfRangeRemoteDevicesForReason:(id)arg1 effectiveDate:(id)arg2;	// IMP=0x0010000000241568
- (void)_keepAudioSessionAliveOnRemoteDevicesForReason:(id)arg1 expirationDuration:(double)arg2;	// IMP=0x0010000000241331
- (void)_beginAudioSessionOnInRangeRemoteDevicesForReason:(id)arg1 effectiveDate:(id)arg2 expirationDuration:(double)arg3;	// IMP=0x0010000000240fc2
- (void)_handleUpdatedCurrentOrUpNextDateIntervalForReason:(id)arg1;	// IMP=0x0010000000240d42
- (void)_handleUpdatedLocalSystemInfoForReason:(id)arg1;	// IMP=0x0010000000240ac2
- (void)_updateCurrentOrUpNextDateInterval:(id)arg1 reason:(id)arg2;	// IMP=0x001000000024092b
- (void)_updateMediaRemoteRouteIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x00100000002406f7
- (void)_updateMediaRemoteGroupIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x00100000002404c3
- (void)_updateHomeKitMediaSystemIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x001000000024028f
- (void)_updateHomeKitRoomName:(id)arg1 reason:(id)arg2;	// IMP=0x001000000024005b
- (void)_handleDidSetAudioSessionActive:(_Bool)arg1;	// IMP=0x001000000023ff85
- (void)_handleWillSetAudioSessionActive:(_Bool)arg1;	// IMP=0x001000000023fe0e
- (void)_enumerateKeepAliveListUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000023fd70
- (void)_resetKeepAliveListForReason:(id)arg1;	// IMP=0x001000000023fc51
- (void)_removeDeviceIDFromKeepAliveList:(id)arg1 reason:(id)arg2;	// IMP=0x001000000023fac6
- (void)_addDeviceIDToKeepAliveList:(id)arg1 reason:(id)arg2;	// IMP=0x001000000023f940
- (void)_invalidate;	// IMP=0x001000000023f806
- (void)mediaRemoteDeviceInfoGroupIdentifierDidChange:(id)arg1;	// IMP=0x001000000023f610
- (void)mediaRemoteDeviceInfoRouteIdentifierDidChange:(id)arg1;	// IMP=0x001000000023f41a
- (void)assertionCoordinator:(id)arg1 didRemoveAssertion:(id)arg2 isLastAssertion:(_Bool)arg3;	// IMP=0x001000000023f04e
- (void)assertionCoordinator:(id)arg1 didDeactivateAssertion:(id)arg2 isLastAssertion:(_Bool)arg3;	// IMP=0x001000000023ed7b
- (void)assertionCoordinator:(id)arg1 didActivateAssertion:(id)arg2 isFirstAssertion:(_Bool)arg3;	// IMP=0x001000000023eaa4
- (void)assertionCoordinator:(id)arg1 didAddAssertion:(id)arg2 isFirstAssertion:(_Bool)arg3;	// IMP=0x001000000023e847
- (void)invalidate;	// IMP=0x001000000023e7e6
- (void)fetchAndUpdateMediaRemoteGroupIdentifierForReason:(id)arg1;	// IMP=0x001000000023e512
- (void)fetchAndUpdateMediaRemoteRouteIdentifierForReason:(id)arg1;	// IMP=0x001000000023e23e
- (_Bool)_relinquishRemoteAssertionForSenderID:(id)arg1 reason:(id)arg2 effectiveDate:(id)arg3 error:(id *)arg4;	// IMP=0x001000000023d973
- (id)_acquireRemoteAssertionForSenderID:(id)arg1 reason:(id)arg2 effectiveDate:(id)arg3 expirationDuration:(double)arg4 error:(id *)arg5;	// IMP=0x001000000023cc07
- (void)_unregisterRequestID:(id)arg1;	// IMP=0x001000000023cc01
- (void)_registerRequestID:(id)arg1 requestHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000023cbfb
- (void)_sendRequestID:(id)arg1 request:(id)arg2 recipientID:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000023cb8a
- (id)_queue;	// IMP=0x001000000023cb7c
- (void)handleDidSetAudioSessionActive:(_Bool)arg1;	// IMP=0x001000000023ca7f
- (void)handleWillSetAudioSessionActive:(_Bool)arg1;	// IMP=0x001000000023c982
- (void)getSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023bfa1
- (_Bool)hasActiveAudioSessionAssertions;	// IMP=0x001000000023be34
- (id)acquireAudioSessionAssertionWithContext:(id)arg1 relinquishmentHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000023b900
- (id)initWithInstanceContext:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000023b473
- (void)dealloc;	// IMP=0x001000000023b435
- (void)_sendEndAudioSessionRequest:(id)arg1 toDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001edf3a
- (void)_sendKeepAudioSessionAliveRequest:(id)arg1 toDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001edb45
- (void)_sendBeginAudioSessionRequest:(id)arg1 toDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ed750
- (void)_sendMessage:(id)arg1 toDeviceWithID:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ed13b
- (void)_handleEndAudioSessionRequest:(id)arg1 fromDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ece84
- (void)_handleKeepAudioSessionAliveRequest:(id)arg1 fromDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ecbf7
- (void)_handleBeginAudioSessionRequest:(id)arg1 fromDeviceWithID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ec955
- (void)_handleMessage:(id)arg1 fromDeviceWithID:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ebfae
- (void)_tearDownRequestHandlers;	// IMP=0x00100000001ebf63
- (void)_setUpRequestHandlers;	// IMP=0x00100000001ebbf7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

