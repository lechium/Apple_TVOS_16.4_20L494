//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DTXConnection, DTXProxyChannel, NSArray, NSDate, NSString, NSUUID, XCTCapabilities, XCTDAuthorizedProcessTracker, XCUIRecorderService_iOS;
@protocol OS_dispatch_queue, OS_os_transaction, XCIDESessionDelegate, XCTDDiagnosticsProviding, XCTMessagingChannel_DaemonRecorderToIDE, XCTMessagingChannel_DaemonToIDE;

@interface XCIDESession : NSObject
{
    _Bool _valid;	// 8 = 0x8
    int _connectedSocket;	// 12 = 0xc
    unsigned int _effectiveUserIdentifier;	// 16 = 0x10
    NSUUID *_sessionIdentifier;	// 24 = 0x18
    XCTCapabilities *_IDECapabilities;	// 32 = 0x20
    id <XCTMessagingChannel_DaemonToIDE> _IDEProxy;	// 40 = 0x28
    id <XCIDESessionDelegate> _delegate;	// 48 = 0x30
    NSDate *_creationTimestamp;	// 56 = 0x38
    id <XCTDDiagnosticsProviding> _diagnosticsProvider;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSObject<OS_os_transaction> *_osTransaction;	// 80 = 0x50
    DTXConnection *_IDEConnection;	// 88 = 0x58
    DTXProxyChannel *_proxyChannel;	// 96 = 0x60
    CDUnknownBlockType _disconnectionHandler;	// 104 = 0x68
    XCUIRecorderService_iOS *_currentRecorder;	// 112 = 0x70
    id <XCTMessagingChannel_DaemonRecorderToIDE> _recorderIDEProxy;	// 120 = 0x78
    NSArray *_crashObservers;	// 128 = 0x80
    NSString *_clientIdentifier;	// 136 = 0x88
    XCTDAuthorizedProcessTracker *_authorizedProcessTracker;	// 144 = 0x90
}

+ (id)IDECapabilitiesForLegacyProtocolVersion:(unsigned long long)arg1;	// IMP=0x00200000000357e3
+ (id)exportedCapabilities;	// IMP=0x0010000000035701
+ (id)sessionWithSocket:(int)arg1 effectiveUserIdentifier:(unsigned int)arg2 disconnectionHandler:(CDUnknownBlockType)arg3 delegate:(id)arg4 diagnosticsProvider:(id)arg5;	// IMP=0x0010000000034857
- (void).cxx_destruct;	// IMP=0x00200000000388f3
@property(readonly) XCTDAuthorizedProcessTracker *authorizedProcessTracker; // @synthesize authorizedProcessTracker=_authorizedProcessTracker;
@property(copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain) NSArray *crashObservers; // @synthesize crashObservers=_crashObservers;
@property(retain) id <XCTMessagingChannel_DaemonRecorderToIDE> recorderIDEProxy; // @synthesize recorderIDEProxy=_recorderIDEProxy;
@property(retain) XCUIRecorderService_iOS *currentRecorder; // @synthesize currentRecorder=_currentRecorder;
@property(readonly) unsigned int effectiveUserIdentifier; // @synthesize effectiveUserIdentifier=_effectiveUserIdentifier;
@property(copy) CDUnknownBlockType disconnectionHandler; // @synthesize disconnectionHandler=_disconnectionHandler;
@property(retain) DTXProxyChannel *proxyChannel; // @synthesize proxyChannel=_proxyChannel;
@property(retain) DTXConnection *IDEConnection; // @synthesize IDEConnection=_IDEConnection;
@property(retain) NSObject<OS_os_transaction> *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) id <XCTDDiagnosticsProviding> diagnosticsProvider; // @synthesize diagnosticsProvider=_diagnosticsProvider;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly) NSDate *creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property __weak id <XCIDESessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) id <XCTMessagingChannel_DaemonToIDE> IDEProxy; // @synthesize IDEProxy=_IDEProxy;
@property(retain) XCTCapabilities *IDECapabilities; // @synthesize IDECapabilities=_IDECapabilities;
@property int connectedSocket; // @synthesize connectedSocket=_connectedSocket;
@property(retain) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (id)_IDE_requestSpindumpWithSpecification:(id)arg1;	// IMP=0x0010000000038556
- (id)_IDE_requestSpindump;	// IMP=0x001000000003850a
- (id)_IDE_requestLogArchiveWithStartDate:(id)arg1;	// IMP=0x0010000000038385
- (id)_IDE_collectNewCrashReportsInDirectories:(id)arg1 matchingProcessNames:(id)arg2;	// IMP=0x0010000000037ca3
- (id)_IDE_stopRecording;	// IMP=0x001000000003799c
- (id)_IDE_startRecordingProcessPID:(id)arg1 applicationSnapshotAttributes:(id)arg2 applicationSnapshotParameters:(id)arg3 elementSnapshotAttributes:(id)arg4 elementSnapshotParameters:(id)arg5 simpleTargetGestureNames:(id)arg6;	// IMP=0x00100000000376ff
- (_Bool)hasAuthorizedProcessID:(int)arg1;	// IMP=0x00100000000375fa
- (id)_IDE_authorizeTestSessionWithProcessID:(id)arg1;	// IMP=0x00100000000373c0
- (id)_IDE_initiateControlSessionWithCapabilities:(id)arg1;	// IMP=0x00100000000371af
- (id)_IDE_initiateControlSessionWithProtocolVersion:(id)arg1;	// IMP=0x0010000000036f3d
- (id)_IDE_initiateControlSessionForTestProcessID:(id)arg1 protocolVersion:(id)arg2;	// IMP=0x0010000000036f35
- (id)_IDE_initiateControlSessionForTestProcessID:(id)arg1;	// IMP=0x0010000000036f2d
- (id)_IDE_initiateSessionWithIdentifier:(id)arg1 forClient:(id)arg2 atPath:(id)arg3 protocolVersion:(id)arg4;	// IMP=0x001000000003668c
- (id)_IDE_initiateSessionWithIdentifier:(id)arg1 capabilities:(id)arg2;	// IMP=0x00100000000360bb
- (void)closeConnectionAndHandOffTransportWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000035d89
- (void)handoffConnectedSocketWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000035c3d
- (void)closeIDEConnection:(CDUnknownBlockType)arg1;	// IMP=0x0010000000035952
- (void)invokeDisconnectionHandler;	// IMP=0x0010000000035848
- (void)handleTransportDisconnect;	// IMP=0x00100000000357fc
- (id)description;	// IMP=0x0010000000035521
- (void)invalidate;	// IMP=0x00100000000353aa
- (void)_dispatchSyncIfValid_No_Assert:(CDUnknownBlockType)arg1;	// IMP=0x00100000000351e7
- (void)_dispatchSyncIfValidOrAssert:(CDUnknownBlockType)arg1;	// IMP=0x0010000000035037
- (void)dealloc;	// IMP=0x0010000000034f85
- (id)initWithDiagnosticsProvider:(id)arg1;	// IMP=0x0010000000034e75

@end
