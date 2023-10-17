//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PBSystemServiceConnection;
@protocol OS_dispatch_queue;

@interface PBUserPresentationService : NSObject
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    NSMutableDictionary *_queueDialogContextByRequest;	// 24 = 0x18
    NSMutableDictionary *_queueDismissalCompletionByRequest;	// 32 = 0x20
    NSMutableDictionary *_queueViewControllersByRequest;	// 40 = 0x28
    NSMutableDictionary *_queuePendingMessagesByRequest;	// 48 = 0x30
    NSMutableDictionary *_queuePendingMessageRepliesByRequest;	// 56 = 0x38
}

+ (void)_getViewServiceInfoForRequest:(id)arg1 serviceName:(id *)arg2 className:(id *)arg3;	// IMP=0x002000000013dce1
- (void).cxx_destruct;	// IMP=0x002000000013f38d
@property(readonly, nonatomic) NSMutableDictionary *queuePendingMessageRepliesByRequest; // @synthesize queuePendingMessageRepliesByRequest=_queuePendingMessageRepliesByRequest;
@property(readonly, nonatomic) NSMutableDictionary *queuePendingMessagesByRequest; // @synthesize queuePendingMessagesByRequest=_queuePendingMessagesByRequest;
@property(readonly, nonatomic) NSMutableDictionary *queueViewControllersByRequest; // @synthesize queueViewControllersByRequest=_queueViewControllersByRequest;
@property(readonly, nonatomic) NSMutableDictionary *queueDismissalCompletionByRequest; // @synthesize queueDismissalCompletionByRequest=_queueDismissalCompletionByRequest;
@property(readonly, nonatomic) NSMutableDictionary *queueDialogContextByRequest; // @synthesize queueDialogContextByRequest=_queueDialogContextByRequest;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void)_queueCallHandlersForRequest:(id)arg1 withReason:(unsigned long long)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x001000000013ee38
- (void)_queueSendPendingMessagesForRequest:(id)arg1;	// IMP=0x001000000013e66c
- (void)_callMessageReply:(CDUnknownBlockType)arg1 forRequest:(id)arg2 success:(_Bool)arg3 result:(id)arg4 error:(id)arg5;	// IMP=0x001000000013e2ed
- (void)_handleClientDismissalWithContext:(id)arg1 dismissalContext:(id)arg2;	// IMP=0x001000000013df86
- (void)_handleCreatedRemoteViewController:(id)arg1 forRequest:(id)arg2;	// IMP=0x001000000013de0c
- (void)dialogManager:(id)arg1 didCancelDialogWithContext:(id)arg2 dismissalContext:(id)arg3;	// IMP=0x001000000013dc30
- (void)dialogManager:(id)arg1 willDismissDialogWithContext:(id)arg2 dismissalContext:(id)arg3;	// IMP=0x001000000013db7f
- (void)dismissUIWithRequest:(id)arg1;	// IMP=0x001000000013d842
- (void)messageUIWithRequest:(id)arg1 message:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000013d451
- (void)presentUIWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000013c710
- (void)invalidate;	// IMP=0x001000000013c1f9
- (void)dealloc;	// IMP=0x001000000013c184
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x001000000013bf2a
- (id)init;	// IMP=0x001000000013bf1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

