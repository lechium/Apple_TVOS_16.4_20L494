//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKPushMessage, MISSING_TYPE;

@interface AKPushMessageNotificationPresenter : NSObject
{
    AKPushMessage *_message;	// 8 = 0x8
    struct __CFUserNotification *_pendingNotification;	// 16 = 0x10
}

+ (void)populateNotificationOptionsWithCommonKeys:(id)arg1 makeNoise:(_Bool)arg2;	// IMP=0x0040000000071cac
+ (struct __CFUserNotification *)createUserNotificationWithTitle:(id)arg1 body:(id)arg2 lockScreenTitle:(id)arg3 lockScreenBody:(id)arg4 defaultButtonTitle:(id)arg5 alternateButtonTitle:(id)arg6 makeNoise:(_Bool)arg7;	// IMP=0x0010000000071940
+ (struct __CFUserNotification *)createUserNotificationWithTitle:(id)arg1 body:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 makeNoise:(_Bool)arg5;	// IMP=0x0010000000071910
+ (id)createUserNotificationOptionsWithTitle:(id)arg1 body:(id)arg2 lockScreenTitle:(id)arg3 lockScreenBody:(id)arg4 defaultButtonTitle:(id)arg5 alternateButtonTitle:(id)arg6 makeNoise:(_Bool)arg7;	// IMP=0x001000000007174d
+ (id)createUserNotificationOptionsWithTitle:(id)arg1 body:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 makeNoise:(_Bool)arg5;	// IMP=0x001000000007171d
+ (id)_presenterQueue;	// IMP=0x001000000006faf0
- (void).cxx_destruct;	// IMP=0x002000000007282c
- (void)_promptForAuthenticationPasswordForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007260e
- (_Bool)_isPasswordPromptNecessaryForCommand:(unsigned long long)arg1;	// IMP=0x00100000000725b7
- (void)_startChangePasswordFlowForAccount:(id)arg1;	// IMP=0x001000000007235e
- (void)_promptForChangePasswordForAccount:(id)arg1;	// IMP=0x0010000000071f9b
- (unsigned long long)_notificationResultFromButtonPressed:(unsigned long long)arg1;	// IMP=0x0010000000071f7d
- (void)_receiveResponseFromNotification:(struct __CFUserNotification *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000071dca
- (void)tearDown;	// IMP=0x0010000000071aac
- (id)_loginNotificationOptionsWithContext:(id)arg1 isSilent:(_Bool)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4;	// IMP=0x0010000000071393
- (void)_locationNameWithLatitude:(id)arg1 longitude:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000070fbc
- (struct __CFUserNotification *)_loginAlertForAccount:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 message:(id)arg4 resolvedBody:(id)arg5;	// IMP=0x0010000000070f60
- (id)_loginAlertOptionsForAccount:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 message:(id)arg4 resolvedBody:(id)arg5;	// IMP=0x0010000000070bfe
- (void)_waitForNotificationResponse:(struct __CFUserNotification *)arg1 withIdentifier:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007094d
- (void)_showCode:(id)arg1 body:(id)arg2 title:(id)arg3 footer:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000070794
- (void)presentLoginNotificationWithCode:(id)arg1 piggy:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000070444
- (void)_handleResult:(unsigned long long)arg1 forAccount:(id)arg2;	// IMP=0x00100000000703cf
- (void)presentMessageWithAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006fb71
- (MISSING_TYPE *)initWithMessage: /* Error: Ran out of types for this method. */;	// IMP=0x001000000006fa85

@end

