//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SRNotificationUtility : NSObject
{
}

+ (void)postStorageLowNotification;	// IMP=0x0040000000075c4e
+ (id)_downloadAssetsNotificationRequest;	// IMP=0x0010000000075ae1
+ (void)_postNotificationRequest:(id)arg1 notificationCenter:(id)arg2 destinations:(unsigned long long)arg3;	// IMP=0x0010000000075910
+ (void)postSiriUnavailableNotification:(unsigned long long)arg1;	// IMP=0x0010000000075890
+ (id)_deviceSpecificStringForDefaultString:(id)arg1;	// IMP=0x00100000000757dc
+ (id)_siriUnvailableNotificationRequest;	// IMP=0x0010000000075597
+ (id)_userNotificationCenter;	// IMP=0x0010000000075567

@end

