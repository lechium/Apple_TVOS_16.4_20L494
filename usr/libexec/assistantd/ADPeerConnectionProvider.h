//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriCore/SiriCoreNWConnection.h>

@class ADPeerStreamConnection, NSString;
@protocol SiriCoreConnectionProviderDelegate;

@interface ADPeerConnectionProvider : SiriCoreNWConnection
{
    id <SiriCoreConnectionProviderDelegate> _delegate;	// 8 = 0x8
    ADPeerStreamConnection *_peerConnection;	// 16 = 0x10
    _Bool _isListener;	// 24 = 0x18
}

+ (void)getMetricsContext:(CDUnknownBlockType)arg1;	// IMP=0x00200000000f6da6
- (void).cxx_destruct;	// IMP=0x00200000000f7819
- (void)peerStreamConnection:(id)arg1 failedWithError:(id)arg2;	// IMP=0x00100000000f77b6
- (void)updateConnectionMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f7473
- (id)analysisInfo;	// IMP=0x00100000000f746b
- (id)connectionType;	// IMP=0x00100000000f743d
- (void)close;	// IMP=0x00100000000f73f1
- (void)_getNWConnectionWithInitialData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f6f9e
- (void)_setupStaleConnectionTimer;	// IMP=0x00100000000f6f98
- (void)setRetransmitConnectionDropTime:(double)arg1;	// IMP=0x00100000000f6f92
- (void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(unsigned long long)arg3;	// IMP=0x00100000000f6f8c
- (_Bool)shouldFallbackFromError:(id)arg1;	// IMP=0x00100000000f6efe
- (_Bool)isMultipath;	// IMP=0x00100000000f6ef6
- (_Bool)isPeerNotNearbyError:(id)arg1;	// IMP=0x00100000000f6ee1
- (_Bool)isPeerConnectionError:(id)arg1;	// IMP=0x00100000000f6ecc
- (_Bool)supportsInitialPayload;	// IMP=0x00100000000f6ec4
- (_Bool)shouldFallbackQuickly;	// IMP=0x00100000000f6ebc
- (id)headerDataWithForceReconnect:(_Bool)arg1;	// IMP=0x00100000000f6dd9
- (void)setPrefersWWAN:(_Bool)arg1;	// IMP=0x00100000000f6dd3
- (void)setProviderConnectionPolicy:(id)arg1;	// IMP=0x00100000000f6dcd
- (void)setPolicyRoute:(id)arg1;	// IMP=0x00100000000f6dc7
- (void)setDelegate:(id)arg1;	// IMP=0x00100000000f6db3
- (id)_peerConnection;	// IMP=0x00100000000f6d3c
- (void)setPeerStreamConnection:(id)arg1;	// IMP=0x00100000000f6d28
- (id);	// IMP=0x00100000000f6d05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
