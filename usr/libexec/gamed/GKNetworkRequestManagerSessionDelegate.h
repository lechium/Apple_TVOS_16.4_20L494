//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKNetworkRequestManager, NSString;

@interface GKNetworkRequestManagerSessionDelegate : NSObject
{
    GKNetworkRequestManager *_networkManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000103517
@property(readonly, nonatomic) __weak GKNetworkRequestManager *networkManager; // @synthesize networkManager=_networkManager;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x0010000000103331
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0010000000102dd2
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00100000001018ac
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001015a9
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;	// IMP=0x00100000001013ba
- (id)initWithNetworkManager:(id)arg1;	// IMP=0x0010000000101356

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

