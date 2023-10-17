//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, XPCRequestToken;

@interface SubscriptionEntitlementsRequest : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    _Bool _hasAttemptedAuth;	// 24 = 0x18
    XPCRequestToken *_token;	// 32 = 0x20
    _Bool _allowPromptForAuth;	// 40 = 0x28
    unsigned long long _segment;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000d830f
- (id)init;	// IMP=0x00100000000d7708

@end

