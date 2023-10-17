//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSObject, NSString, SSRemoteWebViewRequest;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface RemoteWebViewOperation : ISOperation
{
    _Bool _didActivate;	// 91 = 0x5b
    CDUnknownBlockType _activationHandler;	// 96 = 0x60
    SSRemoteWebViewRequest *_request;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_alertSemaphore;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_queue;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000173499
@property(nonatomic) _Bool didActivate; // @synthesize didActivate=_didActivate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *alertSemaphore; // @synthesize alertSemaphore=_alertSemaphore;
@property(readonly, nonatomic) SSRemoteWebViewRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType activationHandler; // @synthesize activationHandler=_activationHandler;
- (void)_sendActivationWithError:(id)arg1;	// IMP=0x00100000001732e4
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00100000001730e3
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x0010000000172f10
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x0010000000172d4d
- (void)run;	// IMP=0x0010000000172890
- (id)initWithWebViewRequest:(id)arg1;	// IMP=0x00100000001727ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

