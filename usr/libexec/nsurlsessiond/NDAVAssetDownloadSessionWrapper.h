//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetDownloadSession, AVURLAsset, NSDictionary, NSURL;
@protocol NDAVAssetDownloadSessionWrapperDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NDAVAssetDownloadSessionWrapper : NSObject
{
    AVURLAsset *_asset;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    unsigned int _powerAssertion;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
    _Bool _progressTimerRunning;	// 40 = 0x28
    AVAssetDownloadSession *_downloadSession;	// 48 = 0x30
    id <NDAVAssetDownloadSessionWrapperDelegate> _delegate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 64 = 0x40
    NSURL *_URL;	// 72 = 0x48
    NSURL *_destinationURL;	// 80 = 0x50
    NSDictionary *_options;	// 88 = 0x58
    unsigned long long _downloadToken;	// 96 = 0x60
    unsigned long long _countOfBytesWritten;	// 104 = 0x68
    unsigned long long _countOfBytesExpectedToWrite;	// 112 = 0x70
    unsigned long long _taskIdentifier;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000000997b
@property _Bool progressTimerRunning; // @synthesize progressTimerRunning=_progressTimerRunning;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property unsigned long long countOfBytesExpectedToWrite; // @synthesize countOfBytesExpectedToWrite=_countOfBytesExpectedToWrite;
@property unsigned long long countOfBytesWritten; // @synthesize countOfBytesWritten=_countOfBytesWritten;
@property(readonly) unsigned long long downloadToken; // @synthesize downloadToken=_downloadToken;
@property(readonly, retain) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <NDAVAssetDownloadSessionWrapperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) AVAssetDownloadSession *downloadSession; // @synthesize downloadSession=_downloadSession;
- (void)assetDownloadSession:(id)arg1 willDownloadVariants:(id)arg2;	// IMP=0x001000000000980d
- (void)assetDownloadSession:(id)arg1 didUpdateProgressWithExpectedBytes:(unsigned long long)arg2 bytesDownloaded:(unsigned long long)arg3;	// IMP=0x00100000000097ba
- (void)assetDownloadSession:(id)arg1 didResolveMediaSelection:(id)arg2;	// IMP=0x001000000000972f
- (void)assetDownloadSession:(id)arg1 didFinishDownloadForMediaSelection:(id)arg2;	// IMP=0x0010000000009665
- (void)assetDownloadSession:(id)arg1 didLoadTimeRange:(CDStruct_3c1748cc)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg4 forMediaSelection:(id)arg5;	// IMP=0x0010000000009571
- (void)assetDownloadSession:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000000094a7
- (void)assetDownloadSessionDidFinishDownload:(id)arg1;	// IMP=0x0010000000009419
- (void)startLoadingMetadata;	// IMP=0x00100000000093c8
- (void)cancelAndDeliverError:(id)arg1;	// IMP=0x001000000000933d
- (void)cancel;	// IMP=0x00100000000092d0
- (void)suspend;	// IMP=0x0010000000009263
- (void)resume;	// IMP=0x00100000000091b8
- (void)releasePowerAssertion;	// IMP=0x00100000000090ce
- (void)takePowerAssertion;	// IMP=0x0010000000008e34
- (void)disavowSession;	// IMP=0x0010000000008d87
- (id)initWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 delegate:(id)arg4 queue:(id)arg5;	// IMP=0x00100000000082fc
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 delegate:(id)arg4 queue:(id)arg5;	// IMP=0x0010000000008113
- (_Bool)doesAVAssetDownloadSessionSupportMultipleDownloads;	// IMP=0x00100000000080f8

@end
