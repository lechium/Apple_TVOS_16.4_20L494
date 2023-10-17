//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemUI/TVSUITextAlertController.h>

@class NSString, PBCFUserNotification;
@protocol PBUserNotificationViewControllerDelegate;

@interface PBUserNotificationViewControllerAlert : TVSUITextAlertController
{
    PBCFUserNotification *_notification;	// 8 = 0x8
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 16 = 0x10
}

+ (unsigned long long)_textAlertButtonTypeFromAlertActionStyle:(long long)arg1;	// IMP=0x00200000001e23b0
- (void).cxx_destruct;	// IMP=0x00200000001e240c
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PBCFUserNotification *notification; // @synthesize notification=_notification;
- (void)_didSelectButtonAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001e235e
- (void)updateWithNotification:(id)arg1;	// IMP=0x00100000001e16d9
- (void)_handleHomeButton:(id)arg1;	// IMP=0x00100000001e1376
- (void)_handleMenuButton;	// IMP=0x00100000001e12a0
- (void)viewDidLoad;	// IMP=0x00100000001e1175
- (id)init;	// IMP=0x00100000001e1127

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

