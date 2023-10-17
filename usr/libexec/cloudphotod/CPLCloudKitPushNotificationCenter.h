//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, CKNotification, CPLCloudKitCoordinator, NSArray, NSDate, NSString;
@protocol OS_dispatch_queue;

@interface CPLCloudKitPushNotificationCenter : NSObject
{
    APSConnection *_pushConnection;	// 8 = 0x8
    _Bool _ignorePushNotifications;	// 16 = 0x10
    NSString *_pushEnvironment;	// 24 = 0x18
    NSArray *_pushTopics;	// 32 = 0x20
    NSDate *_lastPushNotificationDate;	// 40 = 0x28
    NSDate *_lastStartOfPushNotificationBurst;	// 48 = 0x30
    unsigned long long _countOfPushNotificationBurst;	// 56 = 0x38
    NSString *_lastPushTopic;	// 64 = 0x40
    NSString *_pushRegistrationStatus;	// 72 = 0x48
    NSString *_pushRegistrationError;	// 80 = 0x50
    CKNotification *_lastPushNotification;	// 88 = 0x58
    _Bool _stoppedWaitingForPush;	// 96 = 0x60
    _Bool _clientIsForeground;	// 97 = 0x61
    CPLCloudKitCoordinator *_delegate;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000046f4
@property(nonatomic) _Bool clientIsForeground; // @synthesize clientIsForeground=_clientIsForeground;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak CPLCloudKitCoordinator *delegate; // @synthesize delegate=_delegate;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000040bf
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003336
- (void)_setPushRegistrationStatus:(id)arg1 error:(id)arg2;	// IMP=0x00100000000032bd
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x001000000000318e
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000002c13
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000002b2d
- (void)unregisterFromPushNotifications;	// IMP=0x0010000000002a96
- (void)stopWaitingForPushNotifications;	// IMP=0x00100000000029b0
- (void)startWaitingForPushNotificationsForContainer:(id)arg1;	// IMP=0x0010000000002308
- (id)init;	// IMP=0x00100000000020ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

