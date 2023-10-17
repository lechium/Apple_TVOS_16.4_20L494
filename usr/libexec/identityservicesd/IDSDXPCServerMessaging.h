//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, IDSPushHandler, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCServerMessaging : NSObject
{
    _Bool _entitledForAllTopics;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSArray *_serverMessagingEntitlements;	// 24 = 0x18
    NSMutableDictionary *_clientRemoteObjectsByTopic;	// 32 = 0x20
    FTMessageDelivery *_messageDelivery;	// 40 = 0x28
    IDSPushHandler *_pushHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000044dbd0
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(retain, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property(retain, nonatomic) NSMutableDictionary *clientRemoteObjectsByTopic; // @synthesize clientRemoteObjectsByTopic=_clientRemoteObjectsByTopic;
@property(retain, nonatomic) NSArray *serverMessagingEntitlements; // @synthesize serverMessagingEntitlements=_serverMessagingEntitlements;
@property(nonatomic) _Bool entitledForAllTopics; // @synthesize entitledForAllTopics=_entitledForAllTopics;
- (void)setQueue:(id)arg1;	// IMP=0x001000000044da10
- (id)queue;	// IMP=0x001000000044d9f0
- (void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3;	// IMP=0x001000000044d810
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;	// IMP=0x001000000044c300
- (void)sendCertifiedDeliveryReceipt:(id)arg1;	// IMP=0x001000000044beb0
- (void)sendMessageData:(id)arg1 onTopic:(id)arg2 withOptions:(id)arg3 identifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000044b030
- (void)setupServerMessagingClient:(id)arg1 withUUID:(id)arg2 forTopic:(id)arg3;	// IMP=0x001000000044a850
- (void)_recalculateTopics;	// IMP=0x001000000044a6a0
- (id)_topics;	// IMP=0x001000000044a600
- (id)_commands;	// IMP=0x001000000044a5b0
- (_Bool)_entitledForTopic:(id)arg1;	// IMP=0x001000000044a390
- (id)initWithQueue:(id)arg1 connection:(id)arg2 messageDelivery:(id)arg3 pushHandler:(id)arg4;	// IMP=0x0010000000449980

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
