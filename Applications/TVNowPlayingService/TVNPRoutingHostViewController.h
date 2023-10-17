//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSObject, NSString, TVNPGroupableRoutingController;
@protocol OS_dispatch_group;

@interface TVNPRoutingHostViewController : UIViewController
{
    _Bool _presentationEnded;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_initialFetchGroup;	// 16 = 0x10
    TVNPGroupableRoutingController *_routingController;	// 24 = 0x18
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0020000000006e70
+ (id)_exportedInterface;	// IMP=0x0010000000006d30
- (void).cxx_destruct;	// IMP=0x0020000000007050
@property(nonatomic) _Bool presentationEnded; // @synthesize presentationEnded=_presentationEnded;
@property(readonly, nonatomic) TVNPGroupableRoutingController *routingController; // @synthesize routingController=_routingController;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *initialFetchGroup; // @synthesize initialFetchGroup=_initialFetchGroup;
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x0010000000006ee0
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006b20
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006ab0
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x00100000000066a0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000062c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

