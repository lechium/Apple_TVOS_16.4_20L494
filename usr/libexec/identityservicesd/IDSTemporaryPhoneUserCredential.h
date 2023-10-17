//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAuthenticationCertificate, NSData, NSString;

@interface IDSTemporaryPhoneUserCredential : NSObject
{
    IDSAuthenticationCertificate *_phoneAuthenticationCertificate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000006c2360
@property(readonly, nonatomic) IDSAuthenticationCertificate *phoneAuthenticationCertificate; // @synthesize phoneAuthenticationCertificate=_phoneAuthenticationCertificate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x00100000006c2120
- (long long)realm;	// IMP=0x00100000006c2100
- (id)initWithPhoneAuthenticationCertificate:(id)arg1;	// IMP=0x00100000006c1f40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
