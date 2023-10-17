//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKContinuityPaymentServiceDelegate-Protocol.h>

@class NSArray, PKContinuityPaymentCoordinator, PKPayment;

@protocol PKContinuityPaymentCoordinatorDelegate <PKContinuityPaymentServiceDelegate>
- (void)continuityPaymentCoordinatorDidReceiveCancellation:(PKContinuityPaymentCoordinator *)arg1;
- (void)continuityPaymentCoordinator:(PKContinuityPaymentCoordinator *)arg1 didReceivePayment:(PKPayment *)arg2;
- (void)continuityPaymentCoordinator:(PKContinuityPaymentCoordinator *)arg1 didReceiveUpdatedPaymentDevices:(NSArray *)arg2;
- (void)continuityPaymentCoordinator:(PKContinuityPaymentCoordinator *)arg1 didTimeoutTotalWithPaymentDevices:(NSArray *)arg2;
- (void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(PKContinuityPaymentCoordinator *)arg1;
@end

