//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVNPShareAudioMainViewController;

@interface TVNPShareAudioHostViewController : UIViewController
{
    TVNPShareAudioMainViewController *_shareAudioViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0020000000007500
+ (id)_exportedInterface;	// IMP=0x00100000000073c0
- (void).cxx_destruct;	// IMP=0x0020000000007660
@property(retain, nonatomic) TVNPShareAudioMainViewController *shareAudioViewController; // @synthesize shareAudioViewController=_shareAudioViewController;
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x0010000000007570
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007270
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007200
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x00100000000070e0
- (void)viewDidLoad;	// IMP=0x00100000000070a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

