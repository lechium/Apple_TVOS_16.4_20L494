//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKPCSAuthPushHandler, APSConnection, NSArray, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AKAppleIDPushHelperService : NSObject
{
    AKAccountManager *_accountManager;	// 8 = 0x8
    APSConnection *_apsConnection;	// 16 = 0x10
    NSString *_activeAPSEnvironment;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_apsTokenSemaphore;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_pushServiceQueue;	// 40 = 0x28
    NSString *_loginCodeNotificationID;	// 48 = 0x30
    NSString *_appleCareNotificationID;	// 56 = 0x38
    NSMutableDictionary *_notificationsByPushID;	// 64 = 0x40
    NSArray *_pushDelegates;	// 72 = 0x48
    NSSet *_pushTopics;	// 80 = 0x50
    AKPCSAuthPushHandler *_pcsAuthPushHandler;	// 88 = 0x58
    NSString *_activeCode;	// 96 = 0x60
}

+ (id)sharedService;	// IMP=0x002000000009711d
- (void).cxx_destruct;	// IMP=0x002000000009b54e
@property(copy, nonatomic) NSString *activeCode; // @synthesize activeCode=_activeCode;
- (void)setEnableCriticalReliability:(_Bool)arg1;	// IMP=0x001000000009b52f
- (id)_pushCommandsPostingCFUserNotification;	// IMP=0x001000000009b4e8
- (_Bool)_isPrimaryAccount:(id)arg1;	// IMP=0x001000000009b42d
- (_Bool)_canProceedWithArmingForMessage:(id)arg1 account:(id)arg2;	// IMP=0x001000000009b247
- (void)_unsafe_showNotificationForMessage:(id)arg1 account:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009abef
- (void)_startPasswordResetFlowForAccount:(id)arg1;	// IMP=0x001000000009a9a1
- (void)_unsafe_tearDownNotificationWithID:(id)arg1;	// IMP=0x001000000009a81e
- (void)_unsafe_teardownCurrentLoginNotification;	// IMP=0x001000000009a778
- (void)_unsafe_showLoginNotificationWithCode:(id)arg1 incomingMessage:(id)arg2 piggy:(_Bool)arg3;	// IMP=0x001000000009a5fa
- (void)tearDownLoginNotifications;	// IMP=0x001000000009a599
- (void)showPigCode:(id)arg1 withIncomingMessage:(id)arg2;	// IMP=0x001000000009a45f
- (void)_generateLoginCodeForAccount:(id)arg1 withIncomingMessage:(id)arg2;	// IMP=0x001000000009a093
- (void)_performCommandForMessage:(id)arg1 forAccount:(id)arg2;	// IMP=0x0010000000099ecd
- (_Bool)_messageSupportsAlerts:(id)arg1;	// IMP=0x0010000000099e4a
- (void)_armDeviceWithMessage:(id)arg1 account:(id)arg2 notificationResult:(unsigned long long)arg3;	// IMP=0x0010000000099ca5
- (void)_unsafe_presentMessage:(id)arg1 forAccount:(id)arg2;	// IMP=0x0010000000099960
- (_Bool)_shouldProcessPushMessage:(id)arg1 withAccount:(id)arg2;	// IMP=0x00100000000995c9
- (id)_akPCSAuthPushHandler;	// IMP=0x0010000000099526
- (void)_unsafe_processPushMessage:(id)arg1;	// IMP=0x0010000000098fd5
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000098d3f
- (id)_publicAPSToken;	// IMP=0x00100000000987fe
- (id)publicAPSTokenString;	// IMP=0x00100000000987ae
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000098556
- (void)connectionDidReconnect:(id)arg1;	// IMP=0x00100000000984fa
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x0010000000098468
- (void)dealloc;	// IMP=0x001000000009839d
- (void)_ensureDesiredAPSEnvironmentIsInUse;	// IMP=0x0010000000097fa8
- (void)_processMessageWithDelegates:(id)arg1;	// IMP=0x0010000000097d0a
- (_Bool)_queryDelegatesForSuppressAction:(id)arg1;	// IMP=0x0010000000097ac6
- (void)_notifyDelegatesOfMessageActivation:(id)arg1 result:(unsigned long long)arg2 payload:(id)arg3;	// IMP=0x00100000000978aa
- (void)_notifyDelegatesOfMessageActivation:(id)arg1 result:(unsigned long long)arg2;	// IMP=0x00100000000976b1
- (void)setDelegates:(id)arg1;	// IMP=0x0010000000097632
- (void)startWithDelegates:(id)arg1;	// IMP=0x001000000009727f
- (id)init;	// IMP=0x0010000000097172

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
