//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue, NSString, NSURLSession;
@protocol SWCDownloaderDelegate;

@interface SWCDownloader : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
    NSURLSession *_sessions[4];	// 16 = 0x10
    NSMapTable *_allTaskStates;	// 48 = 0x30
    id <SWCDownloaderDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x001000000000474e
@property __weak id <SWCDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0010000000004294
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x001000000000415e
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003448
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000002ffa
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000002973
- (void)enumerateActiveAASAFileDownloadsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002640
- (void)updateAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000024ee
- (void)updateAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002443
- (void)downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000022f4
- (void)downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002249
- (void)receiveSIGTERMSignal;	// IMP=0x0010000000002109
- (id)init;	// IMP=0x0010000000001f88
- (void)_invokeCompletionHandlerForState:(id)arg1 JSONObject:(id)arg2 error:(id)arg3;	// IMP=0x00100000000077d4
- (void)_processDownloadedDataForState:(id)arg1;	// IMP=0x0010000000007276
- (id)_replaceTaskState:(id)arg1;	// IMP=0x0010000000006f36
- (void)_resumePendingTasks;	// IMP=0x00100000000069b1
- (void)_enumerateTaskStatesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000067b5
- (id)_URLRequestWithDomain:(id)arg1 downloadRoute:(unsigned char)arg2;	// IMP=0x00100000000062ca
- (void)_downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 discretionary:(_Bool)arg4 completionHandlers:(id)arg5;	// IMP=0x00100000000057af
- (id)_taskStateForDomain:(id)arg1 downloadRoute:(unsigned char)arg2;	// IMP=0x00100000000054eb
- (unsigned long long)_maximumActiveTaskCountForSessionID:(unsigned char)arg1;	// IMP=0x00100000000054cc
- (id)_sessionForTaskState:(id)arg1;	// IMP=0x00100000000052cf
- (unsigned char)_sessionIDForTaskState:(id)arg1;	// IMP=0x0010000000005256

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
