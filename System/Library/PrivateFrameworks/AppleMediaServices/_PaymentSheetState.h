//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSBiometricsSignatureResult, NSError, NSString;

__attribute__((visibility("hidden")))
@interface _PaymentSheetState : NSObject
{
    _Bool _didAuthorizePayment;	// 8 = 0x8
    _Bool _didBiometricsLockout;	// 9 = 0x9
    _Bool _didPresent;	// 10 = 0xa
    NSError *_error;	// 16 = 0x10
    unsigned long long _cancellationType;	// 24 = 0x18
    NSString *_passwordEquivalentToken;	// 32 = 0x20
    NSString *_paymentToken;	// 40 = 0x28
    AMSBiometricsSignatureResult *_signatureResult;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002cc41e
@property(retain, nonatomic) AMSBiometricsSignatureResult *signatureResult; // @synthesize signatureResult=_signatureResult;
@property(retain, nonatomic) NSString *paymentToken; // @synthesize paymentToken=_paymentToken;
@property(retain, nonatomic) NSString *passwordEquivalentToken; // @synthesize passwordEquivalentToken=_passwordEquivalentToken;
@property(nonatomic) _Bool didPresent; // @synthesize didPresent=_didPresent;
@property(nonatomic) unsigned long long cancellationType; // @synthesize cancellationType=_cancellationType;
@property(nonatomic) _Bool didBiometricsLockout; // @synthesize didBiometricsLockout=_didBiometricsLockout;
@property(nonatomic) _Bool didAuthorizePayment; // @synthesize didAuthorizePayment=_didAuthorizePayment;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)init;	// IMP=0x00000000002cc32c

@end

