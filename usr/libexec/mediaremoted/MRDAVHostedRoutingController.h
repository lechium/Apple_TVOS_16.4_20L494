//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MRDAVHostedRoutingController
{
}

- (void)_logEndpointsChanged:(id)arg1 oldEndpoints:(id)arg2;	// IMP=0x004000000004149d
- (void)_onQueue_reloadWithOutputDevices:(id)arg1;	// IMP=0x001000000004145c
- (void)_onQueue_reloadEndpoints;	// IMP=0x0010000000040310
- (id)_onQueue_makeExternalDeviceTransportForEndpoint:(id)arg1 designatedGroupLeader:(id)arg2;	// IMP=0x0010000000040113
- (id)makeEndpointWithOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000003fcac

@end

