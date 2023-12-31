//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOperationQueue, NSString, NSURL, NSURLConnection, NSURLRequest;

@interface NSURLConnectionInternal : NSObject
{
    NSURLConnection *_connection;	// 8 = 0x8
    NSOperationQueue *_delegateQueue;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSURLRequest *_originalRequest;	// 32 = 0x20
    NSURLRequest *_currentRequest;	// 40 = 0x28
    id _delegate;	// 48 = 0x30
    NSDictionary *_connectionProperties;	// 56 = 0x38
    _Bool _connectionActive;	// 64 = 0x40
}

- (id)_timingData;	// IMP=0x00000000002499fc
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;	// IMP=0x00000000002499f6
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;	// IMP=0x00000000002499f0
- (void)cancelAuthenticationChallenge:(id)arg1;	// IMP=0x00000000002499ea
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;	// IMP=0x00000000002499e4
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;	// IMP=0x00000000002499de
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;	// IMP=0x00000000002499d8
- (void)_invalidate;	// IMP=0x00000000002499d2
- (void)_setDelegateQueue:(id)arg1;	// IMP=0x00000000002499a4
- (void)dealloc;	// IMP=0x0000000000249945
- (id)initWithInfo:(const struct InternalInit *)arg1;	// IMP=0x00000000002498a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

