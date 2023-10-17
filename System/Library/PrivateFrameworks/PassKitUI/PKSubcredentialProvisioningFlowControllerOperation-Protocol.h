//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKSubcredentialProvisioningFlowControllerContext;
@protocol PKSubcredentialProvisioningFlowController;

@protocol PKSubcredentialProvisioningFlowControllerOperation <NSObject>
@property(readonly, nonatomic) id <PKSubcredentialProvisioningFlowController> flowController;
- (id)initWithFlowController:(id <PKSubcredentialProvisioningFlowController>)arg1 context:(PKSubcredentialProvisioningFlowControllerContext *)arg2;

@optional
- (void)preflightWithCompletion:(void (^)(_Bool))arg1;
@end

