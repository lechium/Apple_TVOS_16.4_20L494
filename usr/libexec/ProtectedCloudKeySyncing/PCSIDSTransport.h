//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_transaction, PCSIDSMessagingDelegate;

@interface PCSIDSTransport : NSObject
{
    _Bool _serviceDelegateSet;	// 8 = 0x8
    id <PCSIDSMessagingDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_pendingReplies;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    IDSService *_service;	// 40 = 0x28
    NSObject<OS_os_transaction> *_transaction;	// 48 = 0x30
}

+ (id)transportWithIDSServiceName:(id)arg1;	// IMP=0x0020000000001c5d
- (void).cxx_destruct;	// IMP=0x0020000000003700
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property _Bool serviceDelegateSet; // @synthesize serviceDelegateSet=_serviceDelegateSet;
@property(readonly) IDSService *service; // @synthesize service=_service;
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly) NSMutableDictionary *pendingReplies; // @synthesize pendingReplies=_pendingReplies;
@property(nonatomic) __weak id <PCSIDSMessagingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)copyLocalPairedDevices;	// IMP=0x001000000000366f
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000003538
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000000313d
- (void)sendResponse:(id)arg1 toMessage:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 logDescription:(id)arg5;	// IMP=0x0010000000002a62
- (void)sendMessage:(id)arg1 toDevice:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 logDescription:(id)arg5 handleReply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000022a1
- (id)initWithServiceName:(id)arg1;	// IMP=0x0010000000001f12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

