//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AASignInFlowController, ACAccount, CDPContext, NSSet, NSString;

@protocol AASignInFlowControllerDelegate <NSObject>

@optional
@property(nonatomic, getter=isFastSignInEnabled) _Bool fastSignInEnabled;
@property(nonatomic) unsigned long long findMyActivationAction;
@property(nonatomic) _Bool shouldStashLoginResponse;
@property(copy, nonatomic) NSSet *requiredTerms;
@property(nonatomic) _Bool skipDataclassEnablement;
@property(nonatomic) _Bool backgroundDataclassEnablement;
@property(nonatomic) _Bool skipCDPEnablement;
@property(retain, nonatomic) CDPContext *cdpContext;
- (void)signInFlowController:(AASignInFlowController *)arg1 saveAccount:(ACAccount *)arg2 withAllDataclassesEnabledIfPossibleWithCompletion:(void (^)(_Bool, ACAccount *, NSError *))arg3;
- (void)signInFlowController:(AASignInFlowController *)arg1 enableFindMyWithAction:(unsigned long long)arg2 completion:(void (^)(_Bool))arg3;
- (void)signInFlowController:(AASignInFlowController *)arg1 presentGenericTermsUIForAccount:(ACAccount *)arg2 completion:(void (^)(_Bool, ACAccount *, NSError *))arg3;
- (void)signInFlowController:(AASignInFlowController *)arg1 showAlertWithTitle:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(_Bool))arg4;
@end

