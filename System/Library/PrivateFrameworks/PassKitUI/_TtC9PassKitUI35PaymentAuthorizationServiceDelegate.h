//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9PassKitUI35PaymentAuthorizationServiceDelegate : NSObject
{
    MISSING_TYPE *stateMachine;	// 8 = 0x8
    MISSING_TYPE *context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000052e40
- (id)init;	// IMP=0x0000000000052de0
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;	// IMP=0x0000000000052da0
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;	// IMP=0x0000000000052d40
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;	// IMP=0x0000000000052d00
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;	// IMP=0x0000000000052c50
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;	// IMP=0x0000000000052b60
- (void)authorizationDidAuthorizeDisbursementWithResult:(id)arg1;	// IMP=0x0000000000052b10
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;	// IMP=0x0000000000052af0
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;	// IMP=0x0000000000052ad0
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1;	// IMP=0x0000000000052ab0
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1;	// IMP=0x0000000000052a50
- (void)handleDismissWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000528f0
- (void)handleHostApplicationDidCancel;	// IMP=0x0000000000052730
- (void)handleHostApplicationDidBecomeActive;	// IMP=0x00000000000525d0
- (void)handleHostApplicationWillResignActive:(_Bool)arg1;	// IMP=0x00000000000525b0
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;	// IMP=0x0000000000052580
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg1;	// IMP=0x0000000000052530

@end

