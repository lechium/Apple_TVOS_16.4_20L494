//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSStallDetector, IDSUTunControlChannelIdentityPair, NSDictionary, NSMutableArray, NSMutableData, NSString;
@protocol OS_dispatch_queue, OS_nw_connection;

@interface IDSUTunControlChannel : NSObject
{
    NSString *_deviceUniqueID;	// 8 = 0x8
    NSString *_cbuuid;	// 16 = 0x10
    int _sd;	// 24 = 0x18
    CDUnknownBlockType _receiveHandler;	// 32 = 0x20
    _Bool _receiveHandlerBeingCalled;	// 40 = 0x28
    NSMutableData *_pendingDataReceive;	// 48 = 0x30
    NSMutableData *_pendingDataSend;	// 56 = 0x38
    NSMutableArray *_outgoingMessages;	// 64 = 0x40
    NSMutableArray *_outgoingPriorityMessages;	// 72 = 0x48
    _Bool _sendingPriorityMessage;	// 80 = 0x50
    _Bool _sendSuspended;	// 81 = 0x51
    _Bool _newSocket;	// 82 = 0x52
    int _fairplayAuthState;	// 84 = 0x54
    unsigned int _grappaHostSessionID;	// 88 = 0x58
    unsigned int _grappaDeviceSessionID;	// 92 = 0x5c
    _Bool _isDefaultPairedDevice;	// 96 = 0x60
    _Bool _isReadyForEncrypting;	// 97 = 0x61
    _Bool _isDefaultPairedDevicePairedLocally;	// 98 = 0x62
    _Bool _isDefaultPairedDevicePairedRemotely;	// 99 = 0x63
    IDSUTunControlChannelIdentityPair *_identityPair;	// 104 = 0x68
    _Bool _disableEncryption;	// 112 = 0x70
    _Bool _didReceiveReestablishmentRequest;	// 113 = 0x71
    double _reestablishmentRequestReceiveTime;	// 120 = 0x78
    int _dataReceivedWithoutMessageCount;	// 128 = 0x80
    NSObject<OS_nw_connection> *_serviceConnection;	// 136 = 0x88
    NSObject<OS_nw_connection> *_connection;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 152 = 0x98
    IDSStallDetector *_outgoingStallDetector;	// 160 = 0xa0
    _Bool _shouldCallbackOnCancel;	// 168 = 0xa8
    NSObject<OS_nw_connection> *_canceledConnection;	// 176 = 0xb0
    _Bool _callbackResetDataConnections;	// 184 = 0xb8
    _Bool _callbackShouldObliterate;	// 185 = 0xb9
    _Bool _callbackEncryptionFailed;	// 186 = 0xba
    _Bool _callbackShouldTriggerCorruptionRecovery;	// 187 = 0xbb
    _Bool _checksumEnabled;	// 188 = 0xbc
    _Bool _avoidMainQueueOverrideToNO;	// 189 = 0xbd
    _Bool _connecting;	// 190 = 0xbe
    NSDictionary *_remoteDeviceEncryptionInfo;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x002000000020c5d0
@property(nonatomic) _Bool connecting; // @synthesize connecting=_connecting;
@property(retain, nonatomic) IDSStallDetector *outgoingStallDetector; // @synthesize outgoingStallDetector=_outgoingStallDetector;
@property(retain, nonatomic) IDSUTunControlChannelIdentityPair *identityPair; // @synthesize identityPair=_identityPair;
@property(nonatomic) _Bool avoidMainQueueOverrideToNO; // @synthesize avoidMainQueueOverrideToNO=_avoidMainQueueOverrideToNO;
@property(nonatomic) _Bool checksumEnabled; // @synthesize checksumEnabled=_checksumEnabled;
@property(nonatomic) double reestablishmentRequestReceiveTime; // @synthesize reestablishmentRequestReceiveTime=_reestablishmentRequestReceiveTime;
@property(nonatomic) _Bool didReceiveReestablishmentRequest; // @synthesize didReceiveReestablishmentRequest=_didReceiveReestablishmentRequest;
// Error: Property attributes should begin with the type ('T') attribute, property name: remoteDeviceEncryptionInfo
// Property attributes: (null)

@property(copy, nonatomic) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(nonatomic) _Bool disableEncryption; // @synthesize disableEncryption=_disableEncryption;
@property(nonatomic) _Bool isDefaultPairedDevicePairedRemotely; // @synthesize isDefaultPairedDevicePairedRemotely=_isDefaultPairedDevicePairedRemotely;
@property(nonatomic) _Bool isDefaultPairedDevicePairedLocally; // @synthesize isDefaultPairedDevicePairedLocally=_isDefaultPairedDevicePairedLocally;
@property(nonatomic) _Bool isReadyForEncrypting; // @synthesize isReadyForEncrypting=_isReadyForEncrypting;
- (void)resumeOTRNegotiation;	// IMP=0x001000000020c1b0
- (void)suspendOTRNegotiation:(id)arg1;	// IMP=0x001000000020c170
- (_Bool)processSuspendOTRNegotiationMessage:(id)arg1;	// IMP=0x001000000020c120
- (void)sendSuspendOTRNegotiationMessage:(id)arg1;	// IMP=0x001000000020c0e0
- (_Bool)processOTRNegotiationMessage:(id)arg1;	// IMP=0x001000000020b540
- (void)sendOTRNegotiationMessage:(id)arg1 negotiationCount:(unsigned int)arg2 negotiationData:(id)arg3;	// IMP=0x001000000020b4d0
- (void)_destroyFairplayDeviceSession;	// IMP=0x001000000020b4c0
- (void)_destroyFairplayHostSession;	// IMP=0x001000000020b4b0
- (void)_handleFairplayAuthenticationFailure;	// IMP=0x001000000020b3e0
- (_Bool)processFairplayDeviceSessionInfo:(id)arg1;	// IMP=0x001000000020b390
- (_Bool)processFairplayDeviceInfo:(id)arg1;	// IMP=0x001000000020b340
- (_Bool)processFairplayHostSessionInfo:(id)arg1;	// IMP=0x001000000020b2f0
- (id)_utunControlMessageFairplayDeviceSessionInfo:(char *)arg1 grappaDeviceSessionInfoSize:(unsigned int)arg2;	// IMP=0x001000000020b2d0
- (id)_utunControlMessageFairplayHostSessionInfo:(unsigned char)arg1 deviceType:(unsigned char)arg2 protocolVersion:(unsigned int)arg3;	// IMP=0x001000000020b2b0
- (id)_utunControlMessageFairplayDeviceInfo;	// IMP=0x001000000020b2a0
- (void)dealloc;	// IMP=0x001000000020b250
- (void)invalidate;	// IMP=0x001000000020b1e0
- (void)sendPriorityMessage:(id)arg1;	// IMP=0x001000000020b130
- (void)sendMessage:(id)arg1;	// IMP=0x001000000020b080
- (void)_checkSendNewMessage;	// IMP=0x0010000000209940
- (void)_clearChannel;	// IMP=0x0010000000209780
@property(readonly, nonatomic) _Bool connected;
- (void)cancelConnection;	// IMP=0x0010000000209720
- (void)_cancelConnectionAndResetDataConnections:(_Bool)arg1 shouldObliterate:(_Bool)arg2 encryptionFailure:(_Bool)arg3 shouldTriggerCorruptionRecovery:(_Bool)arg4;	// IMP=0x00100000002094a0
- (void)_callHandlerWithMessage:(id)arg1 resetDataConnections:(_Bool)arg2 shouldObliterate:(_Bool)arg3 decryptionFailed:(_Bool)arg4 shouldTriggerCorruptionRecovery:(_Bool)arg5;	// IMP=0x00100000002093d0
- (void)useConnection:(id)arg1 withFirstMessage:(id)arg2;	// IMP=0x0010000000207e30
- (void)writeToConnection;	// IMP=0x0010000000207240
- (void)readFromConnection;	// IMP=0x00100000002051c0
@property(readonly, nonatomic) _Bool isDefaultPairedDeviceStartingToEncrypt;
- (void)encryptControlChannelForStoredIdentities;	// IMP=0x0010000000205190
- (void)simulateDecryptionFailure;	// IMP=0x00100000002050a0
- (void)_cleanupConnection;	// IMP=0x0010000000204ff0
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 receiveHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000204d00
- (id)description;	// IMP=0x0010000000204bf0

@end

