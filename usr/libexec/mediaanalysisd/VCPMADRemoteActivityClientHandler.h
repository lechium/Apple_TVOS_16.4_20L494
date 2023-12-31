//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCConnection;

@interface VCPMADRemoteActivityClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    struct atomic<unsigned int> _taskID;	// 16 = 0x10
    struct atomic<double> _progress;	// 24 = 0x18
}

+ (void)notifyServicePID;	// IMP=0x00400000000986da
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x00100000000985c1
+ (id)serviceName;	// IMP=0x0010000000098200
- (void).cxx_destruct;	// IMP=0x0020000000099fc0
- (void)cancelActivity;	// IMP=0x0010000000099e9c
- (void)startActivityWithType:(unsigned long long)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000098951
- (void)handleLostConnection;	// IMP=0x0010000000098626
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000098214

@end

