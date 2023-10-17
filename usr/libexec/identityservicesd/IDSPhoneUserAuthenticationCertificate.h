//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAuthenticationCertificate;
@protocol IDSUser;

@interface IDSPhoneUserAuthenticationCertificate : NSObject
{
    id <IDSUser> _phoneUser;	// 8 = 0x8
    IDSAuthenticationCertificate *_authenticationCertificate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000715b40
@property(readonly, nonatomic) IDSAuthenticationCertificate *authenticationCertificate; // @synthesize authenticationCertificate=_authenticationCertificate;
@property(readonly, nonatomic) id <IDSUser> phoneUser; // @synthesize phoneUser=_phoneUser;
- (id)description;	// IMP=0x0010000000715a20
- (id)initWithPhoneUser:(id)arg1 authenticationCertificate:(id)arg2;	// IMP=0x0010000000715930

@end

