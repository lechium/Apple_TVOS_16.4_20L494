//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCConnection;

@interface SOSClientRemote
{
    NSXPCConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000231420
@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)checkEntitlement:(id)arg1;	// IMP=0x00100000002312ad
- (id)initSOSConnectionWithConnection:(id)arg1 account:(id)arg2;	// IMP=0x001000000023123b

@end

