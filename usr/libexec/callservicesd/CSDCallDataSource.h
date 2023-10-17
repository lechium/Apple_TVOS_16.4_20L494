//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallStateController, NSMapTable, NSMutableOrderedSet;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CSDCallDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSDCallStateController *_callStateController;	// 16 = 0x10
    NSMapTable *_uniqueProxyIdentifierToCallTable;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_uniqueProxyIdentifierToCallTableSemaphore;	// 32 = 0x20
    NSMutableOrderedSet *_currentCallSet;	// 40 = 0x28
}

+ (Class)callClass;	// IMP=0x00200000001c2235
- (void).cxx_destruct;	// IMP=0x00200000001c432f
@property(retain, nonatomic) NSMutableOrderedSet *currentCallSet; // @synthesize currentCallSet=_currentCallSet;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *uniqueProxyIdentifierToCallTableSemaphore; // @synthesize uniqueProxyIdentifierToCallTableSemaphore=_uniqueProxyIdentifierToCallTableSemaphore;
@property(retain, nonatomic) NSMapTable *uniqueProxyIdentifierToCallTable; // @synthesize uniqueProxyIdentifierToCallTable=_uniqueProxyIdentifierToCallTable;
@property(readonly, nonatomic) __weak CSDCallStateController *callStateController; // @synthesize callStateController=_callStateController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_postClientNotificationName:(id)arg1 forCall:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000001c4229
- (void)postClientNotificationName:(id)arg1 forCall:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000001c4217
- (void)postClientNotificationName:(id)arg1 forCall:(id)arg2;	// IMP=0x00100000001c4202
- (void)postClientNotificationName:(id)arg1;	// IMP=0x00100000001c41eb
- (void)handleMeterLevelChanged:(float)arg1 inDirection:(int)arg2 forCalls:(id)arg3;	// IMP=0x00100000001c4169
- (void)handleFrequencyDataChanged:(id)arg1 inDirection:(int)arg2 forCalls:(id)arg3;	// IMP=0x00100000001c40dd
- (void)handleBytesOfDataUsedChanged:(long long)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 callHistoryIdentifier:(id)arg3;	// IMP=0x00100000001c3fa7
- (void)handleCallStatusChanged:(id)arg1;	// IMP=0x00100000001c3eb9
- (void)setUplinkMuted:(_Bool)arg1 forCalls:(id)arg2;	// IMP=0x00100000001c3d10
- (void)setTTYType:(int)arg1 forCalls:(id)arg2;	// IMP=0x00100000001c3b5e
- (void)disconnectCalls:(id)arg1 whileHoldingCalls:(id)arg2 andUnholdingCalls:(id)arg3 andUngroupingCalls:(id)arg4;	// IMP=0x00100000001c36b0
- (void)disconnectAllCalls:(id)arg1;	// IMP=0x00100000001c35e4
- (void)disconnectCall:(id)arg1 whileUngroupingCall:(id)arg2;	// IMP=0x00100000001c348d
- (void)ungroupCall:(id)arg1 fromOtherCallsInGroup:(id)arg2;	// IMP=0x00100000001c3232
- (void)groupCalls:(id)arg1 withCalls:(id)arg2;	// IMP=0x00100000001c2ecd
- (void)holdCalls:(id)arg1 whileUnholdingCalls:(id)arg2;	// IMP=0x00100000001c2c2e
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileHoldingActiveCalls:(id)arg3;	// IMP=0x00100000001c2c12
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileDisconnectingActiveCalls:(id)arg3;	// IMP=0x00100000001c2bf9
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileDisconnectingHeldCalls:(id)arg3 andHoldingCalls:(id)arg4;	// IMP=0x00100000001c2be7
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileDisconnectingCalls:(id)arg3 andHoldingCalls:(id)arg4;	// IMP=0x00100000001c28f1
- (void)stopTrackingCall:(id)arg1;	// IMP=0x00100000001c2762
- (void)startTrackingCall:(id)arg1;	// IMP=0x00100000001c25d3
- (void)registerCall:(id)arg1;	// IMP=0x00100000001c24b7
- (_Bool)shouldRegisterCall:(id)arg1;	// IMP=0x00100000001c2413
- (_Bool)shouldTrackCall:(id)arg1;	// IMP=0x00100000001c2390
- (id)callWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x00100000001c22b2
// Error: Property attributes should begin with the type ('T') attribute, property name: calls
// Property attributes: (null)

- (id)initWithCallStateController:(id)arg1 queue:(id)arg2;	// IMP=0x00100000001c20be
- (id)init;	// IMP=0x00100000001c208c

@end
