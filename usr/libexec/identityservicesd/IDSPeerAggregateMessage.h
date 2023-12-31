//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSMessage.h>

@class NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSString;

@interface IDSPeerAggregateMessage : IDSMessage
{
    _Bool _fireAndForget;	// 257 = 0x101
    _Bool _hasReceivedAPSDAck;	// 258 = 0x102
    _Bool _isFinalMessage;	// 259 = 0x103
    NSString *_sourcePeerID;	// 264 = 0x108
    NSString *_encryptionType;	// 272 = 0x110
    NSString *_messageID;	// 280 = 0x118
    NSString *_targetService;	// 288 = 0x120
    NSNumber *_priority;	// 296 = 0x128
    NSDate *_expirationDate;	// 304 = 0x130
    NSData *_fromIdentity;	// 312 = 0x138
    NSDictionary *_additionalDictionary;	// 320 = 0x140
    NSMutableSet *_individualPeerMessages;	// 328 = 0x148
    NSMutableSet *_pendingResponseTokens;	// 336 = 0x150
    long long _maxSize;	// 344 = 0x158
    long long _currentSize;	// 352 = 0x160
    NSNumber *_chunkNumber;	// 360 = 0x168
    NSData *_groupPayload;	// 368 = 0x170
    NSData *_groupIdentifer;	// 376 = 0x178
    NSNumber *_deliveryTime;	// 384 = 0x180
    NSNumber *_deliveryMinimumTime;	// 392 = 0x188
}

- (void).cxx_destruct;	// IMP=0x00200000000b09d0
@property(copy) NSNumber *deliveryMinimumTime; // @synthesize deliveryMinimumTime=_deliveryMinimumTime;
@property(copy) NSNumber *deliveryTime; // @synthesize deliveryTime=_deliveryTime;
@property(copy, nonatomic) NSData *groupIdentifer; // @synthesize groupIdentifer=_groupIdentifer;
@property(copy, nonatomic) NSData *groupPayload; // @synthesize groupPayload=_groupPayload;
@property _Bool isFinalMessage; // @synthesize isFinalMessage=_isFinalMessage;
@property(copy) NSNumber *chunkNumber; // @synthesize chunkNumber=_chunkNumber;
@property _Bool hasReceivedAPSDAck; // @synthesize hasReceivedAPSDAck=_hasReceivedAPSDAck;
@property _Bool fireAndForget; // @synthesize fireAndForget=_fireAndForget;
@property long long currentSize; // @synthesize currentSize=_currentSize;
@property long long maxSize; // @synthesize maxSize=_maxSize;
@property(retain) NSMutableSet *pendingResponseTokens; // @synthesize pendingResponseTokens=_pendingResponseTokens;
@property(retain) NSMutableSet *individualPeerMessages; // @synthesize individualPeerMessages=_individualPeerMessages;
@property(copy) NSDictionary *additionalDictionary; // @synthesize additionalDictionary=_additionalDictionary;
@property(copy) NSData *fromIdentity; // @synthesize fromIdentity=_fromIdentity;
@property(copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) NSNumber *priority; // @synthesize priority=_priority;
@property(copy) NSString *targetService; // @synthesize targetService=_targetService;
@property(copy) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy) NSString *encryptionType; // @synthesize encryptionType=_encryptionType;
@property(copy) NSString *sourcePeerID; // @synthesize sourcePeerID=_sourcePeerID;
- (id)messageBody;	// IMP=0x00100000000af1a0
- (id)requiredKeys;	// IMP=0x00100000000af0c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000aeaa0
- (unsigned long long)sizeOfKeysWithValues;	// IMP=0x00100000000ae5f0
- (void)logFailureInfo;	// IMP=0x00100000000add90
- (_Bool)expectingMoreResponses;	// IMP=0x00100000000add50
- (id)_processMessageResponseForMessage:(id)arg1 withError:(id)arg2 resultCode:(long long)arg3 toURI:(id)arg4 fromURI:(id)arg5 service:(id)arg6 fromIdentity:(id)arg7;	// IMP=0x00100000000ac730
- (void)noteResponseForToken:(id)arg1;	// IMP=0x00100000000abad0
- (void)callAllAckBlocks;	// IMP=0x00100000000ab880
- (void)clearAllPendingResponseTokens;	// IMP=0x00100000000ab800
- (void)callAllIndividualCompletionBlocksWithDeliveryContext:(id)arg1;	// IMP=0x00100000000ab590
- (_Bool)removeAllAggregatableMessages;	// IMP=0x00100000000ab450
- (_Bool)addAggregatableMessage:(id)arg1;	// IMP=0x00100000000ab2c0
- (_Bool)hasSpaceForAggregatableMessage:(id)arg1;	// IMP=0x00100000000ab200
- (id)initWithPeerMessage:(id)arg1 service:(id)arg2 fromIdentity:(id)arg3 maxSize:(unsigned long long)arg4;	// IMP=0x00100000000aaab0
- (id)initWithHighPriority:(_Bool)arg1;	// IMP=0x00100000000aa9e0
- (id)init;	// IMP=0x00100000000aa940

@end

