//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPSupport_PowerStateSingleton : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQ;	// 8 = 0x8
}

+ (id)sharedFPSupportPowerStateSingleton;	// IMP=0x00600000001dfa5c
- (void)dealloc;	// IMP=0x00000000001dfbea
- (id)init;	// IMP=0x00000000001dfb5c
- (void)postNotification;	// IMP=0x00000000001dfae3
- (void)_didChangePowerState:(id)arg1;	// IMP=0x00000000001dfad1

@end

