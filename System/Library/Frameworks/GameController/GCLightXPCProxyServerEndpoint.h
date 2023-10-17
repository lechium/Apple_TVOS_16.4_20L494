//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDeviceLight, NSString;
@protocol GCLightXPCProxyRemoteClientEndpointInterface, GCLightXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription, _GCIPCEndpointConnection;

__attribute__((visibility("hidden")))
@interface GCLightXPCProxyServerEndpoint : NSObject
{
    id <GCLightXPCProxyRemoteClientEndpointInterface> _clientEndpoint;	// 8 = 0x8
    id <_GCIPCEndpointConnection> _connection;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    unsigned long long _pendingUpdates;	// 40 = 0x28
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 48 = 0x30
    GCDeviceLight *_light;	// 56 = 0x38
    id <GCLightXPCProxyServerEndpointDelegate> _delegate;	// 64 = 0x40
    id _userInfo;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000059d66
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <GCLightXPCProxyServerEndpointDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GCDeviceLight *light; // @synthesize light=_light;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059c9a
- (void)invalidateConnection;	// IMP=0x0000000000059be7
- (void)fetchLightWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059b3e
- (void)newLight:(id)arg1;	// IMP=0x0000000000059a51
- (_Bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000059641
- (void)invalidateClient;	// IMP=0x0000000000059580
@property(readonly, nonatomic) id <_GCControllerComponentDescription> receiverDescription;
- (id)initWithInitialValue:(id)arg1;	// IMP=0x00000000000594c4
- (id)initWithIdentifier:(id)arg1 initialValue:(id)arg2;	// IMP=0x000000000005941e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
