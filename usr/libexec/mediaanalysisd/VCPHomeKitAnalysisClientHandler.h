//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, VCPHomeKitAnalysisClientProtocol;

@interface VCPHomeKitAnalysisClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPHomeKitAnalysisClientProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    NSMutableDictionary *_taskIDMapping;	// 32 = 0x20
}

+ (id)errorForStatus:(int)arg1;	// IMP=0x0020000000014dad
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x0010000000014d48
- (void).cxx_destruct;	// IMP=0x000000000001796f
- (void)cancelAllRequests;	// IMP=0x0010000000017620
- (void)cancelRequest:(int)arg1;	// IMP=0x001000000001737f
- (void)requestResidentMaintenance:(int)arg1 withOptions:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016bde
- (void)requestIdentification:(int)arg1 forFaceCrop:(id)arg2 withOptions:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001643d
- (void)requestAnalysis:(unsigned long long)arg1 ofFragmentSurface:(id)arg2 withRequestID:(int)arg3 properties:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000015a8e
- (void)requestAnalysis:(unsigned long long)arg1 ofFragmentData:(id)arg2 withRequestID:(int)arg3 properties:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000015079
- (void)logStatusForRequest:(int)arg1 withError:(id)arg2;	// IMP=0x0010000000014ea0
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000001462f
- (id)init;	// IMP=0x0010000000014621

@end

