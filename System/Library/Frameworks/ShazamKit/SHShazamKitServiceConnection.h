//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, SHShazamKitServiceConnectionClient, SHShazamKitServiceConnectionProvider;

__attribute__((visibility("hidden")))
@interface SHShazamKitServiceConnection : NSObject
{
    struct os_unfair_lock_s _connectionLock;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    SHShazamKitServiceConnectionProvider *_connectionProvider;	// 24 = 0x18
    SHShazamKitServiceConnectionClient *_shazamKitClient;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000019ef3
@property(nonatomic) struct os_unfair_lock_s connectionLock; // @synthesize connectionLock=_connectionLock;
@property(readonly, nonatomic) SHShazamKitServiceConnectionClient *shazamKitClient; // @synthesize shazamKitClient=_shazamKitClient;
@property(readonly, nonatomic) SHShazamKitServiceConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
- (oneway void)sendEventSignal:(id)arg1;	// IMP=0x0000000000019e3d
- (void)mediaItemForShazamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019c8c
- (void)_queryLibraryWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019b30
- (void)_libraryInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000199f4
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x0000000000019774
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x00000000000196e4
- (void)stopRecognition;	// IMP=0x000000000001967a
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x0000000000019583
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x0000000000019419
- (CDUnknownBlockType)matcherDelegateErrorHandlerForSignature:(id)arg1;	// IMP=0x0000000000019182
- (void)tearDownConnection;	// IMP=0x000000000001908d
- (void)attachDefaultConnectionHandlers;	// IMP=0x0000000000018ddb
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id delegate;
- (id)initWithConnectionProvider:(id)arg1;	// IMP=0x0000000000018bb0
- (void)dealloc;	// IMP=0x0000000000018b72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

