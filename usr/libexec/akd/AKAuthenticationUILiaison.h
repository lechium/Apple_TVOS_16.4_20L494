//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKAuthenticationSurrogateManager;
@protocol OS_dispatch_queue;

@interface AKAuthenticationUILiaison : NSObject
{
    AKAuthenticationSurrogateManager *_surrogateManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientUIWorkQueue;	// 16 = 0x10
    AKAccountManager *_accountManager;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000074c72
- (void).cxx_destruct;	// IMP=0x00200000000790bb
- (void)promptForAppleIDSettingsRedirectWithContext:(id)arg1 client:(id)arg2 needFullUI:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000078c31
- (id)uiWorkQueue;	// IMP=0x0010000000078c23
- (_Bool)_isFullUICapabilityRequiredFor2FA;	// IMP=0x0010000000078c1b
- (id)_stringByAppendingBlameIfNecessary:(id)arg1 withContext:(id)arg2 client:(id)arg3;	// IMP=0x00100000000789ce
- (id)_optionsForCreatingUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 serviceType:(long long)arg5;	// IMP=0x00100000000788ed
- (id)_notificationDictionaryForClient:(id)arg1 context:(id)arg2 needFullUI:(_Bool)arg3;	// IMP=0x0010000000077f34
- (_Bool)_isBackgroundClient:(id)arg1 eligibleForForegroundAuthenticationWithContext:(id)arg2;	// IMP=0x0010000000077c53
- (void)_performBlockWithClient:(id)arg1 context:(id)arg2 requireFullUICapability:(_Bool)arg3 allowRedirectToSettings:(_Bool)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x001000000007762c
- (void)presentFidoAuthForContext:(id)arg1 fidoContext:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000077408
- (void)presentBiometricOrPasscodeValidationForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007720f
- (void)dismissNativeRecoveryUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000076f03
- (void)presentNativeRecoveryUIForContext:(id)arg1 recoveryContext:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000076b78
- (void)dismissServerProvidedUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000768cb
- (void)presentServerProvidedUIForContext:(id)arg1 client:(id)arg2 withConfiguration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000765ab
- (void)presentSecondFactorAlertForContext:(id)arg1 client:(id)arg2 withError:(id)arg3 title:(id)arg4 message:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000762c2
- (void)dismissSecondFactorUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000076099
- (void)presentSecondFactorUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000075e6d
- (void)presentLoginAlertForContext:(id)arg1 client:(id)arg2 withError:(id)arg3 title:(id)arg4 message:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000075982
- (void)dismissBasicLoginUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000756d9
- (void)presentBasicLoginUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000751d0
- (void)dismissKeepUsingUIForContext:(id)arg1 client:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000074fda
- (void)presentKeepUsingUIForContext:(id)arg1 client:(id)arg2 appleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000074db6
@property(readonly, nonatomic) AKAuthenticationSurrogateManager *surrogateManager;
- (id)init;	// IMP=0x0010000000074cc7

@end

