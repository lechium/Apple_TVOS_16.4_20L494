//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString;
@protocol SKStoreRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKStoreRemoteViewController : _UIRemoteViewController
{
    id <SKStoreRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x00100000000241fe
+ (id)exportedInterface;	// IMP=0x00100000000241e5
- (void).cxx_destruct;	// IMP=0x0000000000024512
@property(nonatomic) __weak id <SKStoreRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002437f
- (void)presentRequestedViewControllerWithIdentifier:(id)arg1;	// IMP=0x000000000002430a
- (void)setNeedsTabSelection;	// IMP=0x00000000000242be
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000024217

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
