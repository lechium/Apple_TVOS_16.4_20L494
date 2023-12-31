//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAnnouncementRequest, ADCallObserver, ADExternalNotificationRequestQueue, ADRequestDelayManager, AFNotifyObserver, AFWatchdogTimer, NSString;
@protocol AFBluetoothDevice, OS_dispatch_queue;

@interface ADExternalNotificationRequestHandler : NSObject
{
    AFWatchdogTimer *_currentNotificationTimer;	// 8 = 0x8
    AFWatchdogTimer *_stateTimer;	// 16 = 0x10
    AFWatchdogTimer *_triggerlessUserReplyTimer;	// 24 = 0x18
    _Bool _triggerlessUserReplyTimerTimedOut;	// 32 = 0x20
    _Bool _triggerlessRequestEnteredListeningState;	// 33 = 0x21
    long long _currentState;	// 40 = 0x28
    ADRequestDelayManager *_currentRequestDelayManager;	// 48 = 0x30
    AFNotifyObserver *_clientStateObserver;	// 56 = 0x38
    ADCallObserver *_callObserver;	// 64 = 0x40
    id <AFBluetoothDevice> _bluetoothDevice;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_instrumentationQueue;	// 88 = 0x58
    ADAnnouncementRequest *_previousRequest;	// 96 = 0x60
    ADAnnouncementRequest *_currentRequest;	// 104 = 0x68
    unsigned long long _synchronousBurstIndex;	// 112 = 0x70
    ADExternalNotificationRequestQueue *_requestQueue;	// 120 = 0x78
    NSString *_interruptedMediaType;	// 128 = 0x80
}

+ (id)sharedNotificationRequestHandler;	// IMP=0x0020000000293248
- (void).cxx_destruct;	// IMP=0x002000000029accc
- (void)_voicePromptStyleDidChange:(id)arg1;	// IMP=0x001000000029acc6
- (void)voicePromptStyleDidChange:(id)arg1;	// IMP=0x001000000029acc0
- (void)_adCallStateChangedCallIncoming:(_Bool)arg1;	// IMP=0x001000000029aa0e
- (void)adCallStateChangedCallIncoming:(_Bool)arg1;	// IMP=0x001000000029a9a3
- (void)adCallStateChangedCallInProcess:(_Bool)arg1;	// IMP=0x001000000029a99d
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x001000000029a7d6
- (void)audioPlaybackService:(id)arg1 didStopRequest:(id)arg2 error:(id)arg3;	// IMP=0x001000000029a7d0
- (void)audioPlaybackService:(id)arg1 didStartRequest:(id)arg2;	// IMP=0x001000000029a516
- (void)audioPlaybackService:(id)arg1 willStartRequest:(id)arg2;	// IMP=0x001000000029a510
- (void)requestDelayManager:(id)arg1 didStopUnexpectly:(_Bool)arg2;	// IMP=0x001000000029a457
- (_Bool)requestDelayManager:(id)arg1 interruptedWithType:(long long)arg2;	// IMP=0x001000000029a02d
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000029965e
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000029910b
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000029896d
- (void)bluetoothDeviceDidInvalidate:(id)arg1;	// IMP=0x00100000002988e8
- (void)bluetoothDevice:(id)arg1 headphoneListeningModeDidChangeFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x0010000000298863
- (void)bluetoothDevice:(id)arg1 headphoneInEarDetectionStateDidChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x00100000002985cd
- (void)bluetoothDevice:(id)arg1 deviceInfoDidChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x00100000002985c7
- (void)_startObservingBluetoothUpdatesForCurrentRoute;	// IMP=0x00100000002983a0
- (void)fetchUnreadNotificationsFromThreadAfterNotificationWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002981c0
- (void)_startTriggerlessFollowupRequestWithRequestDelayManager:(id)arg1 delayType:(long long)arg2;	// IMP=0x0010000000297b79
- (long long)announcePlatformForCurrentRequest;	// IMP=0x0010000000297a30
- (void)audioSessionDidEnd;	// IMP=0x0010000000297825
- (void)_withdrawalAnnouncementRequestForNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000297518
- (void)withdrawalAnnouncementRequestForNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000297440
- (void)_deactivateForReason:(long long)arg1 source:(long long)arg2 event:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002972ee
- (void)_deactivateCarPlayNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000296eb9
- (void)_deactivateNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 platform:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000296df8
- (void)deactivateNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 platform:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000296cc1
- (void)_stopCurrentRequestWithReason:(long long)arg1 shouldCancelRequest:(_Bool)arg2;	// IMP=0x0010000000296b3f
- (void)_clearCurrentNotificationTimer;	// IMP=0x0010000000296b0d
- (void)_startTimerToResetStateFrom:(long long)arg1;	// IMP=0x0010000000296a06
- (void)_startRequestDelayManagerIfNeededForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002965f3
- (void)_startAnnouncementRequest:(id)arg1;	// IMP=0x0010000000296410
- (void)_emitInstrumentationEventsForRequest:(id)arg1 currentlyPlayingMediaType:(id)arg2;	// IMP=0x00100000002963a4
- (void)emitIntrumentationEventsForRequest:(id)arg1;	// IMP=0x00100000002960e7
- (void)_startAnnouncementRequestWithRequestInfo:(id)arg1;	// IMP=0x0010000000295d6a
- (void)_handleNotification:(id)arg1 onPlatform:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000029560c
- (void)_handleAnnounceIncomingCallRequest:(id)arg1;	// IMP=0x0010000000295202
- (_Bool)_accessibleAnnounceIsEnabled;	// IMP=0x00100000002951d2
- (_Bool)_canAnnounceInCarPlay;	// IMP=0x00100000002950a0
- (void)_handleAnnounceNotificationRequest:(id)arg1;	// IMP=0x0010000000293be7
- (void)_handleAnnouncementRequest:(id)arg1;	// IMP=0x0010000000293b5e
- (void)handleAnnouncementRequest:(id)arg1;	// IMP=0x0010000000293a90
- (void)_changeCurrentStateToState:(long long)arg1;	// IMP=0x0010000000293788
- (void)_clearTriggerlessUserReplyTimer;	// IMP=0x00100000002936d5
- (void)_clearRequestState;	// IMP=0x0010000000293584
- (void)_completeNotificationsWithSuccess:(_Bool)arg1 forReason:(long long)arg2 shouldEmitInstrumentationEvent:(_Bool)arg3;	// IMP=0x00100000002934eb
- (id)_queue;	// IMP=0x00100000002934dd
- (void)_setCurrentRequest:(id)arg1;	// IMP=0x00100000002934cc
- (id)_currentRequest;	// IMP=0x00100000002934be
- (long long)_currentState;	// IMP=0x00100000002934b4
- (id)_requestQueue;	// IMP=0x00100000002934a6
- (id)_sharedCommandCenter;	// IMP=0x001000000029348d
- (id)_init;	// IMP=0x00100000002932ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

