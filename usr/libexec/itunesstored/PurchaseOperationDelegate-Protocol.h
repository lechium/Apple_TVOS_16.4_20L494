//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ISOperationDelegate-Protocol.h"

@class NSString, PurchaseOperation;

@protocol PurchaseOperationDelegate <ISOperationDelegate>

@optional
- (_Bool)purchaseOperation:(PurchaseOperation *)arg1 shouldContinueWithNewStorefront:(NSString *)arg2;
@end

