//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, _TtC22HomeCaptiveViewService16SetupCoordinator;

@interface HCVSViewController : UIViewController
{
    _TtC22HomeCaptiveViewService16SetupCoordinator *_setupCoordinator;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0020000000001e40
+ (id)_exportedInterface;	// IMP=0x0010000000001cf0
- (void).cxx_destruct;	// IMP=0x0020000000002050
@property(retain, nonatomic) _TtC22HomeCaptiveViewService16SetupCoordinator *setupCoordinator; // @synthesize setupCoordinator=_setupCoordinator;
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001e60
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0010000000001bb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
