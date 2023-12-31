//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLSessionTask.h"

@class NSInputStream, NSObject, NSOperationQueue, NSOutputStream, NSString, NSURL, __NSCFURLSessionConnection;
@protocol OS_dispatch_data, OS_dispatch_source;

@interface __NSCFLocalSessionTask : NSURLSessionTask
{
    __NSCFURLSessionConnection *_cfConn;	// 8 = 0x8
    NSURL *_uploadFile;	// 16 = 0x10
    NSObject<OS_dispatch_data> *_dataTaskData;	// 24 = 0x18
    CDUnknownBlockType _dataTaskCompletion;	// 32 = 0x20
    NSObject<OS_dispatch_data> *_pendingResponseBytes;	// 40 = 0x28
    unsigned long long _suspendCount;	// 48 = 0x30
    CDUnknownBlockType _async_initialization;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_resourceTimeout;	// 64 = 0x40
    struct os_unfair_lock_s _connKeyLock;	// 72 = 0x48
    void *_connKey;	// 80 = 0x50
    double _startTimeoutTime;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_startTimeoutTimer;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_payloadTransmissionTimer;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_willSendRequestTimer;	// 112 = 0x70
    NSInputStream *_socketReadStreamForUpgrade;	// 120 = 0x78
    NSOutputStream *_socketWriteStreamForUpgrade;	// 128 = 0x80
    shared_ptr_8da4e70b _connectionForUpgrade;	// 136 = 0x88
    NSObject<OS_dispatch_data> *_extraBytes;	// 152 = 0x98
    NSOperationQueue *_connectionWorkQueue;	// 160 = 0xa0
    int _connectionWorkQueueSuspensionCount;	// 168 = 0xa8
    _Bool _pendingResponseDisposition;	// 172 = 0xac
    _Bool _pendingResponseDisposition_didFinish;	// 173 = 0xad
    _Bool _didIssueWaitingForConnectivity;	// 174 = 0xae
    _Bool _didIssueDidFinish;	// 175 = 0xaf
    _Bool _suspendedForDisposition;	// 176 = 0xb0
    _Bool _didCheckMixedReplace;	// 177 = 0xb1
    _Bool _isMixedReplace;	// 178 = 0xb2
    _Bool _sentDidFinishCollectingMetrics;	// 179 = 0xb3
}

- (id).cxx_construct;	// IMP=0x00000000000242d3
- (void).cxx_destruct;	// IMP=0x00000000000242c2
@property(retain) __NSCFURLSessionConnection *cfConn; // @synthesize cfConn=_cfConn;
- (void)connection:(id)arg1 didReceiveTCPConnection:(shared_ptr_8da4e70b)arg2 extraBytes:(id)arg3;	// IMP=0x00000000000241ca
- (void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x00000000000240bd
- (void)connection:(id)arg1 alternatePathAvailable:(int)arg2;	// IMP=0x0000000000024041
- (void)connection:(id)arg1 _conditionalRequirementsChanged:(_Bool)arg2;	// IMP=0x0000000000023fc4
- (void)connection:(id)arg1 waitingWithReason:(long long)arg2;	// IMP=0x0000000000023f46
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023ec1
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;	// IMP=0x0000000000023dde
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023d59
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023ca0
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023c1b
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;	// IMP=0x0000000000023b9d
- (void)connectionWillFinishLoading:(id)arg1;	// IMP=0x0000000000023b26
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023aa1
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023968
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(CDUnknownBlockType)arg4;	// IMP=0x00000000000238dc
- (void)set_timeoutIntervalForResource:(double)arg1;	// IMP=0x00000000000237fa
- (void)_didSendMetrics;	// IMP=0x00000000000237e9
- (_Bool)_needSendingMetrics;	// IMP=0x00000000000237d5
- (void)startResourceTimer;	// IMP=0x0000000000023772
- (void)_setConnectionCacheKey:(void *)arg1;	// IMP=0x000000000002370a
- (void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x000000000002366f
- (void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x00000000000235d4
- (id)resourceTimeoutError;	// IMP=0x00000000000235c5
- (id)error:(id)arg1 code:(long long)arg2;	// IMP=0x000000000002357c
- (void)_onqueue_completeInitialization;	// IMP=0x0000000000023517
- (void)cancel_with_error:(id)arg1;	// IMP=0x00000000000234a9
- (void)_onSessionQueue_disavow;	// IMP=0x000000000002344f
- (void)didReceiveInformationalResponse:(id)arg1;	// IMP=0x00000000000233e1
- (void)_onqueue_expectedProgressTargetChanged;	// IMP=0x000000000002338b
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;	// IMP=0x0000000000023332
- (void)_onqueue_adjustPriorityHint:(float)arg1 incremental:(_Bool)arg2;	// IMP=0x00000000000232c2
- (void)_onqueue_adjustLoadingPoolPriority;	// IMP=0x00000000000232b0
- (void)_onqueue_adjustPoolPriority;	// IMP=0x0000000000023247
- (void)_onqueue_resume;	// IMP=0x0000000000023190
- (void)_onqueue_suspend;	// IMP=0x000000000002310b
- (void)_onqueue_cancel;	// IMP=0x00000000000230bf
- (void)_onqueue_cancel_with_error:(id)arg1;	// IMP=0x0000000000022fb4
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;	// IMP=0x0000000000022f3b
- (void)_onqueue_alternatePathAvailable:(int)arg1;	// IMP=0x0000000000022f12
- (void)_onqueue_conditionalRequirementsChanged:(_Bool)arg1;	// IMP=0x0000000000022ee6
- (void)_onqueue_connectionWaitingWithReason:(long long)arg1;	// IMP=0x0000000000022e00
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022b26
- (void)_onqueue_needNewBodyStream:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022afa
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022a40
- (void)_onqueue_didReceiveDispatchData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022961
- (void)_onqueue_didFinishWithError:(id)arg1;	// IMP=0x0000000000022904
- (void)_task_onqueue_didFinish;	// IMP=0x0000000000022654
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000225de
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022524
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000224b7
- (void)_onqueue_setupNextEffectiveConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022430
- (void)_private_onqueue_didReceiveResponseDisposition:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021e0f
- (id)_onqueue_strippedMutableRequest;	// IMP=0x0000000000021d8b
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021d82
- (void)dealloc;	// IMP=0x0000000000021be6
- (id)initWithBackgroundTaskInfo:(id)arg1 taskGroup:(id)arg2;	// IMP=0x00000000000219c4
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;	// IMP=0x000000000002191e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

