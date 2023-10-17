//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UNNotification;

@interface AFSiriUserNotificationRequest : NSObject
{
    UNNotification *_notification;	// 8 = 0x8
    NSString *_sourceAppId;	// 16 = 0x10
    long long _platform;	// 24 = 0x18
}

+ (_Bool)supportedForApplicationWithBundleId:(id)arg1;	// IMP=0x00200000001b9285
+ (_Bool)supportedOnPlatform;	// IMP=0x00100000001b923a
+ (_Bool)canBeHandled;	// IMP=0x00100000001b91ef
- (void).cxx_destruct;	// IMP=0x00200000001b9e24
- (void)withdrawalRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b9abe
- (void)deactivateRequestForReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b964b
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b929e
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2 platform:(long long)arg3;	// IMP=0x00100000001b914a
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2;	// IMP=0x00100000001b9132

@end

