//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDevicePolicyController : NSObject
{
    NSMutableDictionary *_devices;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000072a730
- (void).cxx_destruct;	// IMP=0x002000000072b960
- (_Bool)shouldBlackOutDeviceWithCbuuid:(id)arg1;	// IMP=0x001000000072af80
- (void)endFairplayAuthenticationForDeviceWithCbuuid:(id)arg1;	// IMP=0x001000000072ae50
- (void)startFairplayAuthenticationForDeviceWithCbuuid:(id)arg1;	// IMP=0x001000000072a8b0
- (id)init;	// IMP=0x001000000072a7f0

@end

