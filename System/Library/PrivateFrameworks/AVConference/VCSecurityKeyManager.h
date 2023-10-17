//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, VCMediaKeyIndex;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCSecurityKeyManager : NSObject
{
    id _delegate;	// 8 = 0x8
    id _reportingAgentWeak;	// 16 = 0x10
    NSMutableArray *_unknownKeyIndexList;	// 24 = 0x18
    NSMutableDictionary *_sendKeys;	// 32 = 0x20
    NSMutableDictionary *_receiveKeys;	// 40 = 0x28
    NSMutableDictionary *_prunePendingReceiveKeys;	// 48 = 0x30
    VCMediaKeyIndex *_latestSendKeyIndex;	// 56 = 0x38
    VCMediaKeyIndex *_latestReceiveKeyIndex;	// 64 = 0x40
    VCMediaKeyIndex *_keyIndexNotReceived;	// 72 = 0x48
    _Bool _isSendKeysCleanUpPending;	// 80 = 0x50
    _Bool _isReceiveKeysCleanUpPending;	// 81 = 0x51
    _Bool _forceRemoteMKMMissing;	// 82 = 0x52
    double _keyMaterialNotUsedTimeout;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_keyManagerQueue;	// 96 = 0x60
    double _lastKeyIndexNotReceived;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_pruneTimer;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_encryptionKeyRollTimer;	// 120 = 0x78
    _Bool _isRunning;	// 128 = 0x80
}

@property(nonatomic) struct opaqueRTCReporting *reportingAgent;
- (id)copyMKMWithPrefix:(id)arg1;	// IMP=0x00000000002c041a
- (_Bool)associateMKI:(id)arg1 withClientID:(id)arg2;	// IMP=0x00000000002bfcc1
- (void)scheduleEncryptionRollTimerWithDelay:(double)arg1;	// IMP=0x00000000002bfb13
- (void)handlePruneTimerEventAndReschedule;	// IMP=0x00000000002bf940
- (void)schedulePruneTimer:(double)arg1;	// IMP=0x00000000002bf634
- (double)firstExpirationTime;	// IMP=0x00000000002bf374
- (double)pruneAllExpiredKeys;	// IMP=0x00000000002bee24
- (void)pruneRecvKeyMaterialWithDelay:(double)arg1;	// IMP=0x00000000002be63f
- (void)pruneSendKeyMaterialWithDelay:(double)arg1;	// IMP=0x00000000002bdbd9
- (id)getLatestRecvKeyMaterial;	// IMP=0x00000000002bd713
- (id)getLatestSendKeyMaterial;	// IMP=0x00000000002bd24d
- (id)getRecvKeyMaterialWithIndex:(id)arg1;	// IMP=0x00000000002bcc1b
- (id)getSendKeyMaterialWithIndex:(id)arg1;	// IMP=0x00000000002bc709
- (_Bool)addSecurityKeyMaterial:(id)arg1;	// IMP=0x00000000002bbe4b
- (void)stopTimers;	// IMP=0x00000000002bbcdd
- (_Bool)startTimers;	// IMP=0x00000000002bb633
- (void)releaseTimers;	// IMP=0x00000000002bb5db
- (void)stop;	// IMP=0x00000000002bb40b
- (void)start;	// IMP=0x00000000002bb1fb
- (id)logPrefix;	// IMP=0x00000000002bb1d6
- (long long)getNotUsedTimeout;	// IMP=0x00000000002bb1ca
- (id)delegate;	// IMP=0x00000000002bb1af
- (void)dealloc;	// IMP=0x00000000002baf7b
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000002bacb7

@end
