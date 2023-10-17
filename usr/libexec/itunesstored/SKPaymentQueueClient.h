//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SKPaymentQueueClient : NSObject
{
    _Bool _allowsBootstrapCellularData;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSString *_bundleVersion;	// 24 = 0x18
    long long _environmentType;	// 32 = 0x20
    _Bool _hidesConfirmationDialogs;	// 40 = 0x28
    _Bool _ignoresInAppPurchaseRestriction;	// 41 = 0x29
    NSString *_receiptDirectoryPath;	// 48 = 0x30
    _Bool _requiresAuthenticationForPayment;	// 56 = 0x38
    NSNumber *_storeExternalVersion;	// 64 = 0x40
    NSNumber *_storeItemIdentifier;	// 72 = 0x48
    NSString *_vendorIdentifier;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000009d433
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(copy, nonatomic) NSNumber *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(copy, nonatomic) NSNumber *storeExternalVersion; // @synthesize storeExternalVersion=_storeExternalVersion;
@property(nonatomic) _Bool requiresAuthenticationForPayment; // @synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment;
@property(copy, nonatomic) NSString *receiptDirectoryPath; // @synthesize receiptDirectoryPath=_receiptDirectoryPath;
@property(nonatomic) _Bool ignoresInAppPurchaseRestriction; // @synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction;
@property(nonatomic) _Bool hidesConfirmationDialogs; // @synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs;
@property(nonatomic) long long environmentType; // @synthesize environmentType=_environmentType;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) _Bool allowsBootstrapCellularData; // @synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009d238
- (id)copyXPCEncoding;	// IMP=0x001000000009d143
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x001000000009cf6c

@end

