//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersistentConnection/NSObject-Protocol.h>

@class CUTPowerMonitor;

@protocol CUTPowerMonitorDelegate <NSObject>

@optional
- (void)cutPowerMonitorSystemHasPoweredOn:(CUTPowerMonitor *)arg1;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(CUTPowerMonitor *)arg1;
@end

