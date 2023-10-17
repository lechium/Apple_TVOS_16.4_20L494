//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersistentConnection/NSObject-Protocol.h>

@class NSObject;
@protocol PCInterfaceUsabilityMonitorProtocol;

@protocol PCInterfaceUsabilityMonitorDelegate <NSObject>

@optional
- (void)interfaceRadioHotnessChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1;
- (void)interfaceReachabilityChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1;
- (void)interfaceLinkQualityChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1 previousLinkQuality:(int)arg2;
@end

