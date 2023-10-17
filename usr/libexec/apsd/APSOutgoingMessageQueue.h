//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSEnvironment, NSMutableArray, NSNumber, NSTimer;
@protocol APSOutgoingMessageQueueDelegate;

@interface APSOutgoingMessageQueue : NSObject
{
    id <APSOutgoingMessageQueueDelegate> _delegate;	// 8 = 0x8
    APSEnvironment *_environment;	// 16 = 0x10
    NSMutableArray *_queue;	// 24 = 0x18
    NSTimer *_timer;	// 32 = 0x20
    double _criticalMessageTimeout;	// 40 = 0x28
    NSTimer *_criticalMessageKeepAliveTimer;	// 48 = 0x30
    double _criticalMessageKeepAliveTimerDuration;	// 56 = 0x38
    unsigned long long _criticalMessageFlushCount;	// 64 = 0x40
    unsigned long long _numberOfCriticalMessageFlushesBeforeDisconnecting;	// 72 = 0x48
    unsigned long long _criticalMessageFlushSize;	// 80 = 0x50
    double _forcedShortTimeoutDuration;	// 88 = 0x58
    double _lastReceivedAckOrReconnect;	// 96 = 0x60
    void *_powerAssertion;	// 104 = 0x68
    NSNumber *_lastReversePushRTTMilliseconds[2];	// 112 = 0x70
    _Bool _shouldReportLastReversePushRTT[2];	// 128 = 0x80
    _Bool _powerOptimizationsForExpensiveNetworkingDisabled;	// 130 = 0x82
}

- (void).cxx_destruct;	// IMP=0x002000000006556a
@property(nonatomic) _Bool powerOptimizationsForExpensiveNetworkingDisabled; // @synthesize powerOptimizationsForExpensiveNetworkingDisabled=_powerOptimizationsForExpensiveNetworkingDisabled;
- (unsigned long long)count;	// IMP=0x001000000006553c
- (void)setForcedShortTimeoutInterval:(id)arg1;	// IMP=0x0010000000065428
- (void)setCriticalMessageTimeout:(id)arg1;	// IMP=0x0010000000065314
- (void)setCriticalMessageKeepAliveTimerDuration:(id)arg1;	// IMP=0x0010000000065200
- (void)setNumberOfCriticalMessageFlushesBeforeDisconnecting:(id)arg1;	// IMP=0x0010000000065112
@property(readonly, nonatomic) _Bool hasEagerMessages;
@property(readonly, nonatomic) _Bool hasPendingMessages;
- (void)_criticalMessageKeepAliveTimerFired;	// IMP=0x0010000000064e25
- (void)_clearCriticalMessageKeepAliveTimer;	// IMP=0x0010000000064d60
- (void)_clearCriticalMessageKeepAliveTimerIfAppropriate;	// IMP=0x0010000000064c05
- (void)_startCriticalMessageFlushTimerSendingFlush;	// IMP=0x0010000000064ad0
- (_Bool)_outgoingMessageIsLateCriticalMessage:(id)arg1;	// IMP=0x00100000000648a6
- (void)_timerFired:(id)arg1;	// IMP=0x0010000000064038
- (void)_recalculateDisableFastDormancy;	// IMP=0x0010000000063f25
- (void)_recalculatePowerAssertion;	// IMP=0x0010000000063d07
- (void)_recalculateTimer;	// IMP=0x0010000000063564
- (void)_queueChanged;	// IMP=0x00100000000634f1
- (void)_deliverResult:(id)arg1 forMessage:(id)arg2;	// IMP=0x00100000000633c5
- (void)handleConnectionClosedOnInterface:(long long)arg1;	// IMP=0x0010000000063055
- (void)handleConnectionClosed;	// IMP=0x001000000006303e
- (void)handleConnectionOpenedOnInterface:(long long)arg1;	// IMP=0x0010000000062c4b
- (void)handleAcknowledgmentForOutgoingMessageWithResult:(id)arg1 ackTimestamp:(unsigned long long)arg2 relevantInterfaceMonitor:(id)arg3 dualChannelState:(unsigned int)arg4 onInterface:(long long)arg5;	// IMP=0x00100000000621cb
- (void)handleAcknowledgmentForOutgoingMessageWithResult:(id)arg1 ackTimestamp:(unsigned long long)arg2;	// IMP=0x00100000000621a2
- (id)lastReversePushRTTMillisecondsOnInterface:(long long)arg1;	// IMP=0x0010000000062024
- (void)setShouldReportLastReversePushRTT:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000061e7a
- (_Bool)shouldReportLastReversePushRTTOnInterface:(long long)arg1;	// IMP=0x0010000000061db6
- (void)handleErrorSendingOutgoingMessage:(id)arg1 error:(id)arg2;	// IMP=0x0010000000061bde
- (void)handleSentOutgoingMessage:(id)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000061a11
- (void)handleSentOutgoingMessage:(id)arg1;	// IMP=0x00100000000619fa
- (void)transferOwnershipOfPendingMessagesToHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006183b
- (void)cancelOutgoingMessageWithID:(unsigned long long)arg1;	// IMP=0x0010000000061546
- (id)outgoingMessagesToSendForTokenState:(id)arg1;	// IMP=0x00100000000612d6
- (void)enqueueOutgoingMessage:(id)arg1 forOriginator:(id)arg2;	// IMP=0x00100000000611c4
- (void)dealloc;	// IMP=0x0010000000061124
- (id)initWithDelegate:(id)arg1 environment:(id)arg2;	// IMP=0x0010000000061058

@end

