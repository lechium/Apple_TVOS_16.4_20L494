//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/ASAuthorizationCredential-Protocol.h>

@class NSData;

@protocol ASPublicKeyCredential <ASAuthorizationCredential>
@property(readonly, copy, nonatomic) NSData *credentialID;
@property(readonly, copy, nonatomic) NSData *rawClientDataJSON;
@end
