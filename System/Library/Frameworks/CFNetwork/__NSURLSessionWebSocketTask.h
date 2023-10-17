//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, NSMutableArray, NSObject, NSString;
@protocol OS_nw_protocol_options;

@interface __NSURLSessionWebSocketTask
{
    _Bool _webSocketHandshakeCompleted;	// 179 = 0xb3
    _Bool _readInProgress;	// 180 = 0xb4
    int _pingSeed;	// 184 = 0xb8
    long long _maximumMessageSize;	// 192 = 0xc0
    long long _closeCode;	// 200 = 0xc8
    NSData *_closeReason;	// 208 = 0xd0
    NSMutableArray *_pendingSendWork;	// 216 = 0xd8
    NSMutableArray *_pendingReceiveWork;	// 224 = 0xe0
    NSMutableArray *_highPriorityPendingWork;	// 232 = 0xe8
    NSMutableArray *_delegateWork;	// 240 = 0xf0
    NSError *_webSocketError;	// 248 = 0xf8
    NSString *_protocolPicked;	// 256 = 0x100
    NSObject<OS_nw_protocol_options> *_wsOptions;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00000000001dd113
@property(readonly, copy) NSData *closeReason; // @synthesize closeReason=_closeReason;
@property(readonly) long long closeCode; // @synthesize closeCode=_closeCode;
@property long long maximumMessageSize; // @synthesize maximumMessageSize=_maximumMessageSize;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;	// IMP=0x00000000001dd078
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001dc4ef
- (void)_onqueue_cancel;	// IMP=0x00000000001dc4dc
- (void)_onqueue_resume;	// IMP=0x00000000001dc38b
- (void)dealloc;	// IMP=0x00000000001dc272
- (void)cancel;	// IMP=0x00000000001dc201
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;	// IMP=0x00000000001dc136
- (void)_sendCloseCode:(long long)arg1 reason:(id)arg2;	// IMP=0x00000000001dc06b
- (void)sendPingWithPongReceiveHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001dbfab
- (void)receiveMessageWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001dbec1
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001dbd8d
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;	// IMP=0x00000000001dbc21
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00000000001dbbc6

@end

