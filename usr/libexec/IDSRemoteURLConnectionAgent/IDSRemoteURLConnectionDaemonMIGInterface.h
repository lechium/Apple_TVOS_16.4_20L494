//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface IDSRemoteURLConnectionDaemonMIGInterface : NSObject
{
    NSObject<OS_xpc_object> *_server;	// 8 = 0x8
    _Bool _shuttingDown;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000026ff
- (void).cxx_destruct;	// IMP=0x0020000000003db0
- (void)denyIncomingGrantRequests;	// IMP=0x0010000000003d76
- (void)acceptIncomingGrantRequests;	// IMP=0x0010000000003d08
- (void)__setupServer;	// IMP=0x0010000000002754

@end

