//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSTemporaryPhoneAlertManager : NSObject
{
}

+ (id)serviceString;	// IMP=0x0040000000170ed0
+ (void)clearNonExpirationFollowUps;	// IMP=0x0010000000170ec0
+ (void)retractLockscreenAlerts;	// IMP=0x0010000000170eb0
+ (void)attemptPresentationOfExpirationAlertForUser:(id)arg1;	// IMP=0x0010000000170e70
+ (void)attemptPresentationOfNearExpirationAlertForUser:(id)arg1;	// IMP=0x0010000000170e30
+ (void)presentSuccessAlertForUser:(id)arg1;	// IMP=0x0010000000170df0

@end

