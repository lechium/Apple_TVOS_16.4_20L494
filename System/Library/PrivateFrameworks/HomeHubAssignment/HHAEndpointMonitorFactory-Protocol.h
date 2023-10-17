//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HHAEndpointMonitor, NSObject;
@protocol HHAEndpointFactory, OS_dispatch_queue;

@protocol HHAEndpointMonitorFactory
- (HHAEndpointMonitor *)createEndpointMonitorWithQueue:(NSObject<OS_dispatch_queue> *)arg1 endpointFactory:(id <HHAEndpointFactory>)arg2;
@end
