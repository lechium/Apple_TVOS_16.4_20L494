//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SKAccountPageViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteAccountPageViewController : _UIRemoteViewController
{
    SKAccountPageViewController *_accountPageViewController;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x0010000000018106
+ (id)exportedInterface;	// IMP=0x0010000000017f56
- (void).cxx_destruct;	// IMP=0x0000000000018718
@property(nonatomic) __weak SKAccountPageViewController *accountPageViewController; // @synthesize accountPageViewController=_accountPageViewController;
- (id)disconnect;	// IMP=0x000000000001866e
- (void)dismissBridgedViewController;	// IMP=0x000000000001863a
- (void)presentBridgedViewController;	// IMP=0x0000000000018606
- (void)popBridgedViewControllersToIndex:(unsigned long long)arg1;	// IMP=0x00000000000185cd
- (void)pushBridgedViewControllerAnimated:(_Bool)arg1 options:(id)arg2;	// IMP=0x000000000001856a
- (void)setBridgedNavigationItemWithOptions:(id)arg1;	// IMP=0x000000000001850d
- (void)overrideRedeemCameraWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000184b0
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;	// IMP=0x000000000001844d
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000183f0
- (void)financeInterruptionResolved:(_Bool)arg1;	// IMP=0x00000000000183b7
- (void)dismissViewControllerWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000018327
- (void)didFinishLoading;	// IMP=0x00000000000182f3
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000018263
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000018204

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

