//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UINavigationController;

@interface TVProfileMappingRemoteViewController : UIViewController
{
    UINavigationController *_navigationController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x00200000000022d0
+ (id)_exportedInterface;	// IMP=0x0010000000002150
- (void).cxx_destruct;	// IMP=0x0020000000002420
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000020d0
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0010000000001e20
- (void)profileMappingViewController:(id)arg1 didFinishWithMap:(id)arg2;	// IMP=0x0010000000001d70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

