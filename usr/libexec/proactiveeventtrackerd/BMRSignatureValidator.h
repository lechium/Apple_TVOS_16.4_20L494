//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BMRSignatureValidator : NSObject
{
}

+ (_Bool)_checkExpiryForDSL:(id)arg1 error:(id *)arg2;	// IMP=0x00400000000153b4
+ (struct __SecKey *)_getPublicKeyFromCertificateChain:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000015070
+ (_Bool)validateSignedDSLPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000014de6

@end
