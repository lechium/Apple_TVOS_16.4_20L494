//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, SFAutoUnlockNotificationModel;
@protocol OS_dispatch_source;

@interface SDAutoUnlockNotificationsManager : NSObject
{
    id _doubleClickListener;	// 8 = 0x8
    id _cancelListener;	// 16 = 0x10
    SFAutoUnlockNotificationModel *_notificationModel;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    NSDictionary *_promptInfo;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_notificationTimer;	// 48 = 0x30
    CDUnknownBlockType _radarNotificationCompletion;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x004000000002d8b8
- (void).cxx_destruct;	// IMP=0x002000000002e221
@property(copy) CDUnknownBlockType radarNotificationCompletion; // @synthesize radarNotificationCompletion=_radarNotificationCompletion;
@property(retain) NSObject<OS_dispatch_source> *notificationTimer; // @synthesize notificationTimer=_notificationTimer;
@property(retain) NSDictionary *promptInfo; // @synthesize promptInfo=_promptInfo;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SFAutoUnlockNotificationModel *notificationModel; // @synthesize notificationModel=_notificationModel;
- (void)invalidateNotificationTimer;	// IMP=0x001000000002e0a4
- (void)restartNotificationTimer:(unsigned long long)arg1;	// IMP=0x001000000002dea6
- (void)dismissNotification;	// IMP=0x001000000002dea0
- (void)showFileRadarNotificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002de9a
- (void)showSetupRetryNotificationWithDevice:(id)arg1;	// IMP=0x001000000002de94
- (void)showPhoneAutoRelockNotification;	// IMP=0x001000000002de8e
- (void)showMacUnlockedNotificationWithDuration:(id)arg1;	// IMP=0x001000000002de88
- (void)showSuggestionNotificationWithDevice:(id)arg1;	// IMP=0x001000000002de82
- (void)showPhoneAutoUnlockNotificationWithBodyText:(id)arg1 isUpsell:(_Bool)arg2;	// IMP=0x001000000002de7c
- (void)clearPhoneAutoUnlockUpsellNotification:(_Bool)arg1;	// IMP=0x001000000002de76
- (void)showUnlockedByDeviceNotificationWithDeviceID:(id)arg1;	// IMP=0x001000000002dd75
- (void)showAuthenticatedSiriForDeviceID:(id)arg1;	// IMP=0x001000000002dc74
- (void)removeAutoUnlockNotification;	// IMP=0x001000000002dc6e
- (void)removeAuthorizationRequestNotification;	// IMP=0x001000000002dc68
- (void)showAuthorizationRequestNotificationWithDeviceID:(id)arg1 appName:(id)arg2 appIcon:(id)arg3 navBarTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000002dc62
- (void)notifyObservers:(SEL)arg1;	// IMP=0x001000000002da8a
- (void)removeObserver:(id)arg1;	// IMP=0x001000000002da16
- (void)addObserver:(id)arg1;	// IMP=0x001000000002d9a2
- (void)dealloc;	// IMP=0x001000000002d973
- (id)init;	// IMP=0x001000000002d90d

@end

