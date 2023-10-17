//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/AKAppleIDAuthenticationController.h>

@interface AKAppleIDAuthenticationController (TrustedContacts)
- (id)_authContextForAccount:(id)arg1 forceInteraction:(_Bool)arg2 verifyCredentialReason:(long long)arg3 presentingViewController:(id)arg4;	// IMP=0x006000000003faa5
- (id)_authContextForAccount:(id)arg1 forceInteraction:(_Bool)arg2 presentingViewController:(id)arg3;	// IMP=0x006000000003f986
- (void)aaui_beneficiaryViewAccessKeyForAccount:(id)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x006000000003f8fb
- (void)aaui_beneficiaryAuthForAccount:(id)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x006000000003f870
- (void)aaui_custodianAuthForAccount:(id)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x006000000003f7e5
- (void)aaui_authenticateAccount:(id)arg1 forceInteraction:(_Bool)arg2 presentingViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x006000000003f75f
@end
