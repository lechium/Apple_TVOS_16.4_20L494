//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUTools/DYBaseDaemon.h>

@class DYTransport, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface DYEmbeddedDaemon : DYBaseDaemon
{
    struct _CSTypeRef _symbolicator;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_symbolicatorQueue;	// 24 = 0x18
    DYTransport *_helperTransport;	// 32 = 0x20
    NSString *_guestAppIdentifier;	// 40 = 0x28
    CDUnknownBlockType _terminationHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000005c8a
- (void)terminate:(int)arg1;	// IMP=0x0010000000005b31
- (void)handleMessage:(id)arg1;	// IMP=0x0010000000004f57
- (id)getApplications;	// IMP=0x0010000000004c41
- (id)processApplication:(id)arg1;	// IMP=0x00100000000046c1
- (_Bool)launchInferior:(id)arg1 finalEnvironment:(id *)arg2 error:(id *)arg3;	// IMP=0x0010000000003c6b
- (_Bool)launchUIServer:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000003285
- (int)launchInferiorWithIdentifer:(id)arg1 environment:(id)arg2 arguments:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000002a63
- (int)launchInferiorWithPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 workingDirectory:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000001fe1
- (_Bool)bringAppToForeground:(id)arg1;	// IMP=0x0010000000001c73
- (void)cacheInferiorAppIdentifier;	// IMP=0x0010000000001b37
- (_Bool)createInferiorTransportAndSetEnvironment:(id)arg1 uniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000199a
- (id)initWithTransport:(id)arg1 terminationHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001704

@end

