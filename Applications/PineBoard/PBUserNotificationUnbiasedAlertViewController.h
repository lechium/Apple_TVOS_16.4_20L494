//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, PBCFUserNotification, PBUserNotificationUnbiasedAlertView;
@protocol PBUserNotificationViewControllerDelegate;

@interface PBUserNotificationUnbiasedAlertViewController : UIViewController
{
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 8 = 0x8
    PBCFUserNotification *_notification;	// 16 = 0x10
    PBUserNotificationUnbiasedAlertView *_alertView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003b378
@property(readonly, nonatomic) PBUserNotificationUnbiasedAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) PBCFUserNotification *notification; // @synthesize notification=_notification;
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unbiasedAlertView:(id)arg1 didSelectOptionAtIndex:(unsigned long long)arg2;	// IMP=0x001000000003b2d5
- (void)_handleMenuButton;	// IMP=0x001000000003b288
- (id)preferredFocusEnvironments;	// IMP=0x001000000003b1ef
- (void)viewDidLoad;	// IMP=0x001000000003b13a
- (void)loadView;	// IMP=0x001000000003b0ed
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000003ab93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
