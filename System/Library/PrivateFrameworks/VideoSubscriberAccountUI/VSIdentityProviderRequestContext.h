//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VSIdentityProviderRequest;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderRequestContext : NSObject
{
    _Bool _attemptedVerificationStateReset;	// 8 = 0x8
    VSIdentityProviderRequest *_request;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000bdf2
@property(nonatomic) _Bool attemptedVerificationStateReset; // @synthesize attemptedVerificationStateReset=_attemptedVerificationStateReset;
@property(retain, nonatomic) VSIdentityProviderRequest *request; // @synthesize request=_request;

@end

