//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADOpportuneSpeakingModuleEdgeDetector, AFQueue, AFWatchdogTimer, NSString;
@protocol ADRequestDelayManagerDelegate, OS_dispatch_queue;

@interface ADRequestDelayManager : NSObject
{
    AFQueue *_delayedCommandHandlers;	// 8 = 0x8
    AFQueue *;	// 16 = 0x10
    long long _delayType;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    ADOpportuneSpeakingModuleEdgeDetector *_detector;	// 40 = 0x28
    CDUnknownBlockType _stopListeningCompletion;	// 48 = 0x30
    AFWatchdogTimer *_currentContextCommandsTimer;	// 56 = 0x38
    _Bool _isDelaying;	// 64 = 0x40
    id <ADRequestDelayManagerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000ef1f4
@property _Bool isDelaying; // @synthesize isDelaying=_isDelaying;
@property(nonatomic) __weak id <ADRequestDelayManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)interceptCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000eee16
- (_Bool)isInterceptingCommands;	// IMP=0x00100000000eee04
- (void)_delayForADOSMEDWithDelayType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ee8e0
- (float)_bargeInTimeThresholdForDelayType:(long long)arg1;	// IMP=0x00100000000ee897
- (void)_beginTimerForContextCommands;	// IMP=0x00100000000ee5ec
- (void)beginTimerForContextCommands;	// IMP=0x00100000000ee58b
- (void)releaseStoredContextCommandsAndSendCommands:(_Bool)arg1;	// IMP=0x00100000000ee39e
- (void)dequeueDelayedCommandsAndSend:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ee277
- (void)_resetDetector;	// IMP=0x00100000000ee0f9
- (void)stopDelayingAndSendCommands:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000edee2
- (void)sendMockInterruptedWithTypeSignal;	// IMP=0x00100000000edea8
- (void)startDelayingWithType:(long long)arg1 success:(CDUnknownBlockType)arg2;	// IMP=0x00100000000edbc7
- (id)_detector;	// IMP=0x00100000000edb1d
- (id)_delayedcontextCommandHandlers;	// IMP=0x00100000000edae2
- (id)_delayedCommandHandlers;	// IMP=0x00100000000edaa7
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000eda3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
