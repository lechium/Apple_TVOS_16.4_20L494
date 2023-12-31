//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSCachedURLResponse, NSString, NSURLRequest, NSURLSessionTask;

@interface __NSCFURLProxySessionConnection
{
    NSURLSessionTask *_proxyTask;	// 72 = 0x48
    NSURLSessionTask *_cacheTask;	// 80 = 0x50
    _Bool _shouldCancelOnCacheTaskCompletion;	// 88 = 0x58
    _Bool _clientWantsCacheOnly;	// 89 = 0x59
    _Bool _completedLocalCacheLookup;	// 90 = 0x5a
    _Bool _requestIsUncacheable;	// 91 = 0x5b
    _Bool _handledNeedNewBodyStream;	// 92 = 0x5c
    NSCachedURLResponse *_cachedResponseForConditionalRequest;	// 96 = 0x60
    NSURLRequest *_conditionalRequest;	// 104 = 0x68
    NSArray *_cachedResponseDataArray;	// 112 = 0x70
    NSString *_originalUploadFilePath;	// 120 = 0x78
}

- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000243f8a
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x0000000000243f3b
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x0000000000243f1f
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000243e8f
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;	// IMP=0x0000000000243e73
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000243b96
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x0000000000243aa5
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0000000000243a0f
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002439f0
- (void)URLSession:(id)arg1 dataTask:(id)arg2 _didReceiveData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000243996
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000243922
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002435aa
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x00000000002435a4
- (void)setIsDownload:(_Bool)arg1;	// IMP=0x000000000024359e
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x0000000000243556
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x000000000024350e
- (void)expectedProgressTargetChanged;	// IMP=0x00000000002434ca
- (void)setPriorityHint:(float)arg1 incremental:(_Bool)arg2;	// IMP=0x00000000002434c4
- (void)setPoolPriority:(long long)arg1;	// IMP=0x000000000024347c
- (void)resume;	// IMP=0x0000000000243438
- (void)suspend;	// IMP=0x00000000002433f4
- (void)cancel;	// IMP=0x00000000002433b0
- (void)dealloc;	// IMP=0x0000000000243320
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x0000000000243040

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

