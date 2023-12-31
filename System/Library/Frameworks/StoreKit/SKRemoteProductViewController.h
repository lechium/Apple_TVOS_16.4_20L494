//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SKStoreProductViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteProductViewController : _UIRemoteViewController
{
    SKStoreProductViewController *_productViewController;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x001000000002cf55
+ (id)exportedInterface;	// IMP=0x001000000002cf35
- (void).cxx_destruct;	// IMP=0x000000000002d56a
@property(nonatomic) __weak SKStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
- (void)setStatusBarStyle:(id)arg1 animated:(id)arg2;	// IMP=0x000000000002d48c
- (void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2;	// IMP=0x000000000002d3d9
- (void)promptForStarRating;	// IMP=0x000000000002d237
- (void)presentPageWithRequest:(id)arg1 animated:(id)arg2;	// IMP=0x000000000002d177
- (void)loadDidFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000002d0e7
- (void)didReceiveTitle:(id)arg1;	// IMP=0x000000000002d08a
- (void)didFinishWithResult:(id)arg1;	// IMP=0x000000000002d011
- (void)didFinishDismissal;	// IMP=0x000000000002cfdd
- (void)didFinish;	// IMP=0x000000000002cfa9
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000002cf75
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000002cef5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

