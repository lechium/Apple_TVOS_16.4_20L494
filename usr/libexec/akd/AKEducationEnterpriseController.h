//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKAppleIDAuthenticationContext, AKClient;

@interface AKEducationEnterpriseController : NSObject
{
    AKAppleIDAuthenticationContext *_context;	// 8 = 0x8
    AKAccountManager *_accountManager;	// 16 = 0x10
    AKClient *_client;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000aa67c
- (void)_handleIdentityProviderResponsePayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000aa34e
- (void)_showIdentityProviderUIFromResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a9f72
- (void)beginFederatedAuthWithInitialResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a9a45
- (void)_performTokenUpgradeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a9875
- (void)attemptTokenUpgradeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a946d
- (id)initWithContext:(id)arg1 client:(id)arg2;	// IMP=0x00100000000a93aa

@end

