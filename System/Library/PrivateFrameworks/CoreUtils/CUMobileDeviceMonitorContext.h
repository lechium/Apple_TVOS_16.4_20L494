//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUMobileDevice, CUMobileDeviceDiscovery;

__attribute__((visibility("hidden")))
@interface CUMobileDeviceMonitorContext : NSObject
{
    CUMobileDevice *_device;	// 8 = 0x8
    CUMobileDeviceDiscovery *_discovery;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000071fd9
@property(retain, nonatomic) CUMobileDeviceDiscovery *discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) CUMobileDevice *device; // @synthesize device=_device;

@end

