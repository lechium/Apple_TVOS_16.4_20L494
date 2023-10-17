//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString;
@protocol AMSUIEngagementTaskHostInterface, AMSUIEngagementTaskRemoteInterface;

__attribute__((visibility("hidden")))
@interface AMSUIEngagementRemoteViewController : _UIRemoteViewController
{
    id <AMSUIEngagementTaskHostInterface> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x001000000002086c
+ (id)serviceViewControllerInterface;	// IMP=0x001000000002084c
- (void).cxx_destruct;	// IMP=0x0000000000020ac1
@property(nonatomic) __weak id <AMSUIEngagementTaskHostInterface> delegate; // @synthesize delegate=_delegate;
- (void)preferredContentSizeDidChange:(struct CGSize)arg1;	// IMP=0x00000000000209b1
- (void)engagementTaskDidFinishWithResult:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002088c
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000020655
@property(readonly, nonatomic) id <AMSUIEngagementTaskRemoteInterface> remoteProxy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

