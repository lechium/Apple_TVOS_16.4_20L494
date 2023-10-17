//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCControlChannelMultiWay
{
    unsigned int _transportSessionID;	// 112 = 0x70
    int _vfdMessage;	// 116 = 0x74
    int _vfdCancel;	// 120 = 0x78
    _Bool _isRunning;	// 124 = 0x7c
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_pidReceiveProc;	// 128 = 0x80
    NSMutableDictionary *_dialogs;	// 136 = 0x88
    NSMutableDictionary *_activeParticipants;	// 144 = 0x90
    _Bool _isEncryptionEnabled;	// 152 = 0x98
    NSMutableDictionary *_cryptors;	// 160 = 0xa0
    void *_currentSendMKI;	// 168 = 0xa8
    void *_currentReceiveMKI;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_sequentialKeyMaterialQueue;	// 184 = 0xb8
    long long _transactionID;	// 192 = 0xc0
    _Bool _didSubmitCCReliableDataNotReceivedSymptom;	// 200 = 0xc8
}

+ (id)allocPayoadDataFromVTPPacket:(struct VCBlockBuffer_t *)arg1 vpktFlags:(struct tagVPKTFLAG *)arg2 channelDataFormat:(struct tagVCIDSChannelDataFormat **)arg3;	// IMP=0x00100000002f6210
@property(readonly) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(readonly) _Bool isEncryptionEnabled; // @synthesize isEncryptionEnabled=_isEncryptionEnabled;
@property(readonly, nonatomic) NSMutableDictionary *dialogs; // @synthesize dialogs=_dialogs;
@property(nonatomic) int vfdCancel; // @synthesize vfdCancel=_vfdCancel;
@property(nonatomic) int vfdMessage; // @synthesize vfdMessage=_vfdMessage;
@property(nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
- (void)flushReportingStats;	// IMP=0x00000000002fa149
- (void)flushRealTimeReportingStats;	// IMP=0x00000000002fa0ee
- (void)deregisterPeriodicTask;	// IMP=0x00000000002fa0cf
- (void)registerPeriodicTask;	// IMP=0x00000000002fa07c
- (void)periodicTask:(void *)arg1;	// IMP=0x00000000002f9dcd
@property(readonly, nonatomic) unsigned long long nextTransactionID;
- (void)reportSignificantHandshakeDelaySymptomForParticipantID:(id)arg1;	// IMP=0x00000000002f9d24
- (int)protocolVersionforParticipantID:(id)arg1;	// IMP=0x00000000002f9cab
- (id)lastUsedMKIBytes;	// IMP=0x00000000002f9af7
- (_Bool)isParticipantActive:(unsigned long long)arg1;	// IMP=0x00000000002f9a80
- (void)addToReceivedStats:(int)arg1;	// IMP=0x00000000002f9a6c
- (void)addToSentStats:(int)arg1;	// IMP=0x00000000002f9a58
- (void)setEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;	// IMP=0x00000000002f994e
- (void)addNewKeyMaterial:(id)arg1;	// IMP=0x00000000002f988d
- (void)updateTransactionIDWithKeyMaterial:(id)arg1;	// IMP=0x00000000002f946f
- (void)scheduleAfter:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f93c8
- (void)removeAllActiveParticipants;	// IMP=0x00000000002f900a
- (void)removeActiveParticipant:(unsigned long long)arg1;	// IMP=0x00000000002f8d16
- (void)processParticipantRemoval:(id)arg1;	// IMP=0x00000000002f8c80
- (_Bool)addActiveParticipant:(unsigned long long)arg1 participantUUID:(id)arg2 withConfiguration:(CDStruct_c24deb19 *)arg3;	// IMP=0x00000000002f8362
- (void)sendUnreliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x00000000002f7e8f
- (void)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x00000000002f7ac5
- (_Bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 timeout:(unsigned int)arg4 withOptions:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000002f7780
- (_Bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 timeout:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002f7764
- (_Bool)sendReliableMessageAndWait:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 timeout:(id)arg4 withOptions:(id)arg5;	// IMP=0x00000000002f723e
- (id)copyDialogForParticipantID:(id)arg1;	// IMP=0x00000000002f6ee3
- (_Bool)sendReliableMessageAndWait:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x00000000002f6e6d
- (void)messageReceived:(id)arg1 participantInfo:(struct tagVCIDSChannelDataFormat *)arg2;	// IMP=0x00000000002f6868
- (id)remoteParticipantIDFromChannelDataFormat:(struct tagVCIDSChannelDataFormat *)arg1;	// IMP=0x00000000002f66a2
- (void)flushActiveMessages;	// IMP=0x00000000002f64f0
- (void)stop;	// IMP=0x00000000002f5d86
- (void)start;	// IMP=0x00000000002f4be2
- (void)dealloc;	// IMP=0x00000000002f4659
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;	// IMP=0x00000000002f4644
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2 mode:(int)arg3;	// IMP=0x00000000002f4166
- (_Bool)decryptWithMKI:(void *)arg1 data:(char *)arg2 size:(int)arg3 sequenceNumber:(unsigned short)arg4;	// IMP=0x000000000007bf8c
- (_Bool)encryptData:(char *)arg1 size:(int)arg2 sequenceNumber:(unsigned short)arg3;	// IMP=0x000000000007bdc6
- (int)updateEncryption:(CDStruct_5b6da142 *)arg1 derivedSSRC:(unsigned int)arg2;	// IMP=0x000000000007b9ca
- (int)getKeyDerivationCryptoSet:(CDStruct_5b6da142 *)arg1 withKeyMaterial:(id)arg2 derivedSSRC:(unsigned int *)arg3;	// IMP=0x000000000007b7d2
- (void)setCurrentSendMKIWithKeyMaterial:(id)arg1;	// IMP=0x000000000007b69f
- (void)updateEncryptionWithKeyMaterial:(id)arg1;	// IMP=0x000000000007b3fd
- (void)updateEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;	// IMP=0x000000000007af7a
- (void)initializeSRTPInfo:(struct tagSRTPINFO *)arg1;	// IMP=0x000000000007af47
- (void)finalizeEncryption;	// IMP=0x000000000007af00
- (void)initializeEncryption;	// IMP=0x000000000007aea3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

