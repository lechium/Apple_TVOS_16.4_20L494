//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSUNUserNotificationStrategy : NSObject
{
}

+ (id)_centerForBundleId:(id)arg1;	// IMP=0x0010000000333620
+ (id)_removeNotification:(id)arg1 centerBundleId:(id)arg2;	// IMP=0x00100000003335bf
+ (id)_removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(_Bool)arg4;	// IMP=0x001000000033334f
+ (id)_postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;	// IMP=0x0010000000332b2a
+ (_Bool)_badgeBundleId:(id)arg1 increment:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000332930
+ (id)_activeNotificationsWithCenterBundleId:(id)arg1;	// IMP=0x00100000003325d1

@end

