//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, SSAuthenticationContext;

@interface PurchaseHistoryOperation : ISOperation
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    NSArray *_inputItems;	// 104 = 0x68
    NSArray *_outputItems;	// 112 = 0x70
}

- (void)_setOutputItemsWithMapping:(id)arg1;	// IMP=0x002000000010cbe7
- (id)_newURLOperation;	// IMP=0x001000000010c8b2
- (void)run;	// IMP=0x001000000010c645
@property(readonly) NSArray *purchaseHistoryItems;
@property(readonly) NSArray *purchasedItems;
- (id)authenticationContext;	// IMP=0x001000000010c5b4
- (void)dealloc;	// IMP=0x001000000010c54e
- (id)initWithPurchaseHistoryItems:(id)arg1 authenticationContext:(id)arg2;	// IMP=0x001000000010c4c6
- (id)init;	// IMP=0x001000000010c4b0

@end

