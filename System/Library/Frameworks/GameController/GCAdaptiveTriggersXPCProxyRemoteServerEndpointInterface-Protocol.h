//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/_GCIPCRemoteEndpointInterface-Protocol.h>

@class GCDeviceAdaptiveTriggersPayload;

@protocol GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface <_GCIPCRemoteEndpointInterface>
- (void)fetchStatusesWithReply:(void (^)(NSArray *))arg1;
- (void)newAdaptiveTriggerPayload:(GCDeviceAdaptiveTriggersPayload *)arg1 index:(int)arg2;
@end

