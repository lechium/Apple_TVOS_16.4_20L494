//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPushHandler, NSMapTable, NSMutableDictionary, NSString, PushConnection, PushDiagnostic;
@protocol OS_dispatch_queue;

@interface PushService : NSObject
{
    PushConnection *_connection;	// 8 = 0x8
    NSMapTable *_consumers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSString *_environment;	// 32 = 0x20
    NSMutableDictionary *_pendingMessages;	// 40 = 0x28
    AMSPushHandler *_pushHandler;	// 48 = 0x30
    PushDiagnostic *_pushDiagnostic;	// 56 = 0x38
    unsigned long long _stateHandle;	// 64 = 0x40
}

+ (id)_pushHandlerWithBagContract:(id)arg1;	// IMP=0x002000000007aae2
+ (id)sharedInstance;	// IMP=0x001000000007a48b
- (void).cxx_destruct;	// IMP=0x002000000007b77d
- (void)_unitTest_waitForSetup;	// IMP=0x001000000007b762
- (void)_queuePendingMessage:(id)arg1 withActionType:(id)arg2;	// IMP=0x001000000007b681
- (void)_processReceivedMessage:(id)arg1 withConnection:(id)arg2;	// IMP=0x001000000007b26d
- (void)_initializeConnectionsAndSkipEnvironmentCheck:(_Bool)arg1;	// IMP=0x001000000007aeed
- (void)_handleBagChangedNotification:(id)arg1;	// IMP=0x001000000007ae8a
- (void)_flushPendingMessagesWithActionType:(id)arg1;	// IMP=0x001000000007aba5
- (void)pushConnection:(id)arg1 didRecieveMessage:(id)arg2;	// IMP=0x001000000007aa02
- (void)unregisterConsumerForActionType:(unsigned long long)arg1;	// IMP=0x001000000007a8f5
- (void)registerConsumer:(id)arg1 forActionType:(unsigned long long)arg2;	// IMP=0x001000000007a77c
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000007a4f4
- (id)init;	// IMP=0x001000000007a4e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

