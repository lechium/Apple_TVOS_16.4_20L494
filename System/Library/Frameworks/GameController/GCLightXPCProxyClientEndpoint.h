//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCController, GCDeviceLight, NSString;
@protocol GCLightXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCLightXPCProxyClientEndpoint : NSObject
{
    GCController *_controller;	// 8 = 0x8
    id <GCLightXPCProxyRemoteServerEndpointInterface> _serverEndpoint;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 40 = 0x28
    GCDeviceLight *_light;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000593cc
@property(readonly, nonatomic) GCDeviceLight *light; // @synthesize light=_light;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059342
- (void)invalidateConnection;	// IMP=0x000000000005929e
- (void)refreshLight;	// IMP=0x0000000000059171
- (void)newLight:(id)arg1;	// IMP=0x0000000000059053
- (void)_remoteEndpointHasSetLight:(id)arg1;	// IMP=0x0000000000058ef7
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000058ea6
- (void)setController:(id)arg1;	// IMP=0x0000000000058e95
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000058c6d
- (void)stopObservingChangesForLight:(id)arg1;	// IMP=0x0000000000058c4b
- (void)observeChangesForLight:(id)arg1;	// IMP=0x0000000000058c23
- (id)init;	// IMP=0x0000000000058bf8
- (id)initWithIdentifier:(id)arg1 initialLight:(id)arg2;	// IMP=0x0000000000058aa3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

