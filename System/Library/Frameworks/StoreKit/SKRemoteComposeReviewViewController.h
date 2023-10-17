//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SKComposeReviewViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteComposeReviewViewController : _UIRemoteViewController
{
    SKComposeReviewViewController *_composeReviewViewController;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x0010000000032b82
+ (id)exportedInterface;	// IMP=0x0010000000032b62
- (void).cxx_destruct;	// IMP=0x00000000000330a1
@property(nonatomic) __weak SKComposeReviewViewController *composeReviewViewController; // @synthesize composeReviewViewController=_composeReviewViewController;
- (void)promptForStarRating;	// IMP=0x0000000000032ed2
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000032e42
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000032db2
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;	// IMP=0x0000000000032bff
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000032ba2
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000032b22
- (void)dealloc;	// IMP=0x0000000000032a80
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000329c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

