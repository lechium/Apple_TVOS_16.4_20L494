//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKAccountAutomaticPaymentsController, PKAccountAutomaticPaymentsSetupCompleteViewController, PKAccountPayment;

@protocol PKAccountAutomaticPaymentsControllerDelegate <NSObject>
- (void)accountAutomaticPaymentsController:(PKAccountAutomaticPaymentsController *)arg1 didSchedulePayment:(PKAccountPayment *)arg2;

@optional
- (void)accountAutomaticPaymentsControllerDidSelectSetupCompletionDone:(PKAccountAutomaticPaymentsController *)arg1 viewController:(PKAccountAutomaticPaymentsSetupCompleteViewController *)arg2;
@end

