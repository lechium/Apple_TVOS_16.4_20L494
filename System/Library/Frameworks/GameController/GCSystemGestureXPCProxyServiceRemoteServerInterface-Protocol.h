//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GCSystemGestureXPCProxyRemoteClientEndpointInterface;

@protocol GCSystemGestureXPCProxyServiceRemoteServerInterface
- (void)systemGestureXPCProxyServiceClientEndpointConnect:(id <GCSystemGestureXPCProxyRemoteClientEndpointInterface>)arg1 reply:(void (^)(id <GCSystemGestureXPCProxyRemoteServerEndpointInterface>, NSError *))arg2;
@end

