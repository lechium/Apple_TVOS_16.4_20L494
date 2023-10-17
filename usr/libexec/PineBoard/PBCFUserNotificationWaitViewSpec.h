//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBCFUserNotificationWaitViewSpec : NSObject
{
    NSString *_type;	// 8 = 0x8
    NSString *_dismissalDarwinNotification;	// 16 = 0x10
    unsigned long long _userNotificationResponse;	// 24 = 0x18
    NSString *_sharePlayDeviceName;	// 32 = 0x20
    long long _sharePlayDeviceModel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001d0568
@property(readonly, nonatomic) long long sharePlayDeviceModel; // @synthesize sharePlayDeviceModel=_sharePlayDeviceModel;
@property(readonly, nonatomic) NSString *sharePlayDeviceName; // @synthesize sharePlayDeviceName=_sharePlayDeviceName;
@property(readonly, nonatomic) unsigned long long userNotificationResponse; // @synthesize userNotificationResponse=_userNotificationResponse;
@property(readonly, nonatomic) NSString *dismissalDarwinNotification; // @synthesize dismissalDarwinNotification=_dismissalDarwinNotification;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000001d0333

@end

