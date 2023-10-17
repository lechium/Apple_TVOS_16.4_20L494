//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, VCControlChannel;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionMessageTopic : NSObject
{
    NSArray *associatedStrings;	// 8 = 0x8
    NSString *topicKey;	// 16 = 0x10
    _Bool allowConcurrent;	// 24 = 0x18
    _Bool requireReliable;	// 25 = 0x19
    NSObject<OS_dispatch_queue> *outMessageQueue;	// 32 = 0x20
    VCControlChannel *controlChannel;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *inMessageQueue;	// 48 = 0x30
    CDUnknownBlockType sendMessageCompletionBlock;	// 56 = 0x38
    CDUnknownBlockType sendMessageDataCompletionBlock;	// 64 = 0x40
    CDUnknownBlockType receiveMessageBlock;	// 72 = 0x48
    CDUnknownBlockType receiveMessageDictionaryBlock;	// 80 = 0x50
    long long latestOutgoingMessageIndex;	// 88 = 0x58
    _Bool isSendingEnabled;	// 96 = 0x60
    _Bool shouldEncodeTopicKeyInMessage;	// 97 = 0x61
    NSMutableDictionary *transactionCache;	// 104 = 0x68
}

@property(nonatomic, setter=setIsSendingEnabled:) _Bool isSendingEnabled; // @synthesize isSendingEnabled;
@property(readonly, nonatomic) NSString *topicKey; // @synthesize topicKey;
- (void)clearTransactionCacheForParticipant:(id)arg1;	// IMP=0x000000000039bd2f
- (void)passMessage:(id)arg1 sequence:(int)arg2 fromParticipant:(id)arg3;	// IMP=0x000000000039b7c2
- (void)purgeExpiredEntries:(double)arg1 messageHistory:(id)arg2 participantID:(id)arg3;	// IMP=0x000000000039b515
- (_Bool)isDuplicateMessageID:(id)arg1 messageHistory:(id)arg2 participantID:(id)arg3;	// IMP=0x000000000039b1d5
- (void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2 withSequence:(long long)arg3 numRetries:(long long)arg4;	// IMP=0x000000000039ac19
- (_Bool)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000039aa80
- (void)handleSendMessageDidSucceed:(_Bool)arg1 message:(id)arg2 participantID:(id)arg3;	// IMP=0x000000000039aa55
- (void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2;	// IMP=0x000000000039aa03
- (id)messageForCommand:(id)arg1;	// IMP=0x000000000039a9cc
- (void)sendMessage:(id)arg1;	// IMP=0x000000000039a9b8
- (_Bool)isPayloadAssociated:(id)arg1;	// IMP=0x000000000039a910
- (void)dealloc;	// IMP=0x000000000039a799
- (int)expectedMessageType;	// IMP=0x000000000039a789
- (id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(_Bool)arg3 requireReliable:(_Bool)arg4 controlChannel:(id)arg5 sendCompletionHandler:(CDUnknownBlockType)arg6 receiveHandler:(CDUnknownBlockType)arg7 sendMessageDataCompletionHandler:(CDUnknownBlockType)arg8 receiveMessageDictionaryHandler:(CDUnknownBlockType)arg9;	// IMP=0x000000000039a626
- (id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(_Bool)arg3 requireReliable:(_Bool)arg4 controlChannel:(id)arg5 sendMessageDataCompletionHandler:(CDUnknownBlockType)arg6 receiveMessageDictionaryHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000039a5f2
- (id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(_Bool)arg3 controlChannel:(id)arg4 sendCompletionHandler:(CDUnknownBlockType)arg5 receiveHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000039a5bc

@end

