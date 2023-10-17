//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol IMDaemonProtocol;

@interface (null) (IMCore)
- (void)requestSetupIfNeededWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x003000000016cec0
- (void)requestSetup;	// IMP=0x003000000016c500
- (void)waitForSetup;	// IMP=0x003000000016c300
- (void)disconnect;	// IMP=0x003000000016c2d0
- (void)connectWithCapabilities:(unsigned long long)arg1 context:(id)arg2 contextChanged:(_Bool)arg3;	// IMP=0x003000000016c250
@property(nonatomic, copy) CDUnknownBlockType onSetupComplete;
@property(nonatomic, readonly) id <IMDaemonProtocol> synchronousRemoteObjectProxy;
@property(nonatomic, readonly) id <IMDaemonProtocol> remoteObjectProxy;
@property(nonatomic, readonly) _Bool isConnected;
@end
