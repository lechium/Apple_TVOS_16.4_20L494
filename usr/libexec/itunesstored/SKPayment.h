//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, SKPaymentDiscount;

@interface SKPayment : NSObject
{
    id _internal;	// 8 = 0x8
}

+ (id)paymentWithProductIdentifier:(id)arg1;	// IMP=0x002000000010231d
+ (id)paymentFromPurchaseIntentWithProduct:(id)arg1;	// IMP=0x0010000000102222
+ (id)paymentWithProduct:(id)arg1;	// IMP=0x0010000000102138
- (void).cxx_destruct;	// IMP=0x002000000010256d
// Error: Property attributes should begin with the type ('T') attribute, property name: requestParameters
// Property attributes: (null)

@property(readonly, copy, nonatomic) NSString *partnerTransactionIdentifier;
@property(readonly, copy, nonatomic) NSString *partnerIdentifier;
@property(readonly, nonatomic) _Bool isStoreOriginated;
@property(readonly, copy, nonatomic) SKPaymentDiscount *paymentDiscount;
@property(readonly, nonatomic) _Bool simulatesAskToBuyInSandbox;
@property(readonly, copy, nonatomic) NSData *requestData;
@property(readonly, nonatomic) long long quantity;
@property(readonly, copy, nonatomic) NSString *productIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000102419
- (unsigned long long)hash;	// IMP=0x00100000001023ad
@property(readonly, copy, nonatomic) NSString *applicationUsername;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001020d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000102070
- (id)init;	// IMP=0x001000000010201a

@end
