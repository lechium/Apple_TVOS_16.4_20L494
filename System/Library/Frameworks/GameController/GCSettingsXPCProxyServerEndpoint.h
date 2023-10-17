//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCSProfile, NSString;
@protocol GCSettingsXPCProxyRemoteClientEndpointInterface, GCSettingsXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription, _GCIPCEndpointConnection;

__attribute__((visibility("hidden")))
@interface GCSettingsXPCProxyServerEndpoint : NSObject
{
    id <GCSettingsXPCProxyRemoteClientEndpointInterface> _clientEndpoint;	// 8 = 0x8
    id <_GCIPCEndpointConnection> _connection;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    unsigned long long _pendingUpdates;	// 40 = 0x28
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 48 = 0x30
    GCSProfile *_settingsProfile;	// 56 = 0x38
    id <GCSettingsXPCProxyServerEndpointDelegate> _delegate;	// 64 = 0x40
    id _userInfo;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000006cea0
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <GCSettingsXPCProxyServerEndpointDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GCSProfile *settingsProfile; // @synthesize settingsProfile=_settingsProfile;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000006cdd4
- (void)invalidateConnection;	// IMP=0x000000000006cd21
- (void)fetchProfileWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000006cc78
- (_Bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006c8c1
- (void)invalidateClient;	// IMP=0x000000000006c811
@property(readonly, nonatomic) id <_GCControllerComponentDescription> receiverDescription;
- (id)initWithInitialValueForProfile:(id)arg1;	// IMP=0x000000000006c755
- (id)initWithIdentifier:(id)arg1 initialValueForProfile:(id)arg2;	// IMP=0x000000000006c6af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

