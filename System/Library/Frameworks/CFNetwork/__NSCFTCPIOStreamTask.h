//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLSessionTask.h"

@class CFNetworkTimer, NSData, NSMutableArray, NSObject, __NSCFURLLocalStreamTaskWorkRead, __NSCFURLLocalStreamTaskWorkWrite;
@protocol OS_dispatch_queue;

@interface __NSCFTCPIOStreamTask : NSURLSessionTask
{
    CDUnknownBlockType _disavow;	// 8 = 0x8
    struct shared_ptr<TCPIO_EstablishBase> _establish;	// 16 = 0x10
    struct shared_ptr<TransportConnectionObjCPP> _ios;	// 32 = 0x20
    unsigned char _captureStreamsUponCompletion;	// 48 = 0x30
    unsigned char _secure;	// 49 = 0x31
    NSData *__initialDataPayload;	// 56 = 0x38
    struct shared_ptr<HTTPProtocol> _httpProtocol;	// 64 = 0x40
    NSMutableArray *_pendingWork;	// 80 = 0x50
    NSMutableArray *_completedSuspendedWork;	// 88 = 0x58
    _Bool _doingWorkOnThisQueue;	// 96 = 0x60
    int _connectionState;	// 100 = 0x64
    _Bool _goneSecure;	// 104 = 0x68
    _Bool _streamsCaptured;	// 105 = 0x69
    CDStruct_59046461 _readError;	// 112 = 0x70
    _Bool _readInProgress;	// 128 = 0x80
    _Bool _readClosed;	// 129 = 0x81
    CDStruct_59046461 _writeError;	// 136 = 0x88
    _Bool _writeEOF;	// 152 = 0x98
    _Bool _writeInProgress;	// 153 = 0x99
    _Bool _writeClosed;	// 154 = 0x9a
    _Bool _receivedServerTrustChallenge;	// 155 = 0x9b
    _Bool _receivedEof;	// 156 = 0x9c
    CFNetworkTimer *_writeTimer;	// 160 = 0xa0
    CFNetworkTimer *_readTimer;	// 168 = 0xa8
    __NSCFURLLocalStreamTaskWorkWrite *_currentWriteTask;	// 176 = 0xb0
    __NSCFURLLocalStreamTaskWorkRead *_currentReadTask;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_workQueueForStreamTask;	// 192 = 0xc0
}

- (id).cxx_construct;	// IMP=0x0000000000110267
- (void).cxx_destruct;	// IMP=0x0000000000110227
@property(copy) NSData *_initialDataPayload; // @synthesize _initialDataPayload=__initialDataPayload;
- (void)_onSessionQueue_cleanupAndBreakCycles;	// IMP=0x000000000011015b
- (void)_onSessionQueue_disavow;	// IMP=0x000000000011011f
- (void)_onqueue_adjustLoadingPoolPriority;	// IMP=0x0000000000110079
- (void)_onqueue_adjustPoolPriority;	// IMP=0x000000000010ffd3
- (void)_onqueue_suspend;	// IMP=0x000000000010ff84
- (void)_onqueue_connectionEstablishedWithError:(CDStruct_59046461)arg1 callbackReferent:(id)arg2;	// IMP=0x000000000010fa40
- (void)_onqueue_cleanUpConnectionEstablishmentState;	// IMP=0x000000000010f880
- (void)_onqueue_tlsDisabled;	// IMP=0x000000000010f80d
- (void)_onqueue_tlsCompletion;	// IMP=0x000000000010f79a
- (void)_onqueue_setTransportConnection:(shared_ptr_8da4e70b)arg1;	// IMP=0x000000000010f654
- (void)_onqueue_postConnectConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010f649
- (void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010f448
- (void)_onqueue_needClientCert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010f3a6
- (void)_onqueue_needServerTrust:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010f2f2
- (_Bool)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010f233
- (void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010f1c2
- (void)_onqueue_preConnectionConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010f07a
- (void)_task_onqueue_didFinish;	// IMP=0x000000000010f074
- (void)cancel;	// IMP=0x000000000010f01b
- (void)_onqueue_checkForCompletion;	// IMP=0x000000000010ee68
- (void)_onqueue_cancel;	// IMP=0x000000000010edbd
- (void)_onqueue_resume;	// IMP=0x000000000010e8f0
- (_Bool)_onqueue_usingProxy;	// IMP=0x000000000010e720
- (id)_onqueue_errorOrCancelError;	// IMP=0x000000000010e6ac
- (void)_onqueue_processReadWork:(id)arg1;	// IMP=0x000000000010e4f1
- (void)_onqueue_processWriteWork:(id)arg1;	// IMP=0x000000000010e34b
- (void)_onqueue_callbackCompletedWork;	// IMP=0x000000000010e1a3
- (void)_onqueue_timeoutOccured;	// IMP=0x000000000010e090
- (void)_onqueue_ioTick;	// IMP=0x000000000010dc9a
- (_Bool)shouldDoWorkConsideringTlsState;	// IMP=0x000000000010dc75
- (void)_onqueue_addBlockOp:(CDUnknownBlockType)arg1 description:(const char *)arg2 shouldWaitForTls:(_Bool)arg3;	// IMP=0x000000000010dc27
- (void)_onqueue_addBlockOp:(CDUnknownBlockType)arg1 description:(const char *)arg2;	// IMP=0x000000000010dbeb
- (void)_onqueue_captureStreams;	// IMP=0x000000000010db4f
- (void)_onqueue_closeWrite;	// IMP=0x000000000010dabd
- (void)_onqueue_closeRead;	// IMP=0x000000000010da2b
- (void)_onqueue_startSecureConnection;	// IMP=0x000000000010d9b3
- (void)_onqueue_stopSecureConnection;	// IMP=0x000000000010d93b
- (void)stopSecureConnection;	// IMP=0x000000000010d886
- (void)startSecureConnection;	// IMP=0x000000000010d779
- (void)copyStreamProperty:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010d70a
- (void)closeRead;	// IMP=0x000000000010d655
- (void)closeWrite;	// IMP=0x000000000010d5a0
- (void)captureStreams;	// IMP=0x000000000010d4a6
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010d428
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000010d39f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010d394
- (void)dealloc;	// IMP=0x000000000010d275
- (id)initWithTask:(id)arg1 connection:(shared_ptr_8da4e70b)arg2 extraBytes:(id)arg3 disavow:(CDUnknownBlockType)arg4;	// IMP=0x000000000010ced2
- (id)workQueue;	// IMP=0x000000000010ce93
- (id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(CDUnknownBlockType)arg4;	// IMP=0x000000000010c9f0
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000000010c995

@end

