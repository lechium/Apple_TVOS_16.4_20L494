//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputDeviceDiscoverySession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVRouteDetectorInternal : NSObject
{
    _Bool routeDetectionEnabled;	// 8 = 0x8
    _Bool multipleRoutesDetected;	// 9 = 0x9
    _Bool detectsCustomRoutes;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *ivarAccessQueue;	// 16 = 0x10
    AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;	// 24 = 0x18
    id outputDevicesChangeNotificationToken;	// 32 = 0x20
    id didEnterBackgroundNotificationToken;	// 40 = 0x28
    id didEnterForegroundNotificationToken;	// 48 = 0x30
    _Bool customRoutesPresent;	// 56 = 0x38
    _Bool routeDetectionSuspended;	// 57 = 0x39
}

@end

